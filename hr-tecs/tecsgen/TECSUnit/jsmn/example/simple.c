#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../jsmn.h"

/*
 * A small example of jsmn parsing when JSON structure is known and number of
 * tokens is predictable.
 */
#define N 256

// static const char *JSON_STRING =
// "{ \"cell\":\"Target1\", \"entry\":\"eTarget2\", \"function\":\"add\",\n"
// "  \"arg\":[5,3], \"exp_val\":2 }";
	// "{\"user\": \"johndoe\", \"admin\": false, \"uid\": 1000,\n  "
	// "\"groups\": [\"users\", \"wheel\", \"audio\", \"video\"]}";

static int jsoneq(const char *json, jsmntok_t *tok, const char *s) {
	if (tok->type == JSMN_STRING && (int) strlen(s) == tok->end - tok->start &&
			strncmp(json + tok->start, s, tok->end - tok->start) == 0) {
		return 0;
	}
	return -1;
}

int main() {
	int i;
	int r;
	char str[N];
	char str_temp[20];
	jsmn_parser p;
	jsmntok_t t[128]; /* We expect no more than 128 tokens */

	FILE *fp;
	if( ( fp = fopen("target.json", "r") ) == NULL ){
		printf("Failed to open\n");
	}

	int len = 0;
	while( fgets( str_temp , N ,fp ) != NULL ) {
		// len = sizeof(str)/sizeof(str[0]);
		strcat(str, str_temp);
		printf("%s\n",str_temp);
	}
	printf("%s\n",str);
	fclose( fp );

	jsmn_init(&p);
	r = jsmn_parse(&p, str, strlen(str), t, sizeof(t)/sizeof(t[0]));
	if (r < 0) {
		printf("Failed to parse JSON: %d\n", r);
		return 1;
	}

	/* Assume the top-level element is an object */
	if (r < 1 || t[0].type != JSMN_OBJECT) {
		printf("Object expected\n");
		return 1;
	}

	/* Loop over all keys of the root object */
	for (i = 1; i < r; i++) {
		if (jsoneq(str, &t[i], "cell") == 0) {
			/* We may use strndup() to fetch string value */
			printf("- Cell: %.*s\n", t[i+1].end-t[i+1].start,
					str + t[i+1].start);
			i++;
		} else if (jsoneq(str, &t[i], "entry") == 0) {
			/* We may additionally check if the value is either "true" or "false" */
			printf("- Entry: %.*s\n", t[i+1].end-t[i+1].start,
					str + t[i+1].start);
			i++;
		} else if (jsoneq(str, &t[i], "function") == 0) {
			/* We may want to do strtol() here to get numeric value */
			printf("- Function: %.*s\n", t[i+1].end-t[i+1].start,
					str + t[i+1].start);
			i++;
		} else if (jsoneq(str, &t[i], "arg") == 0) {
			int j;
			printf("- Arg:\n");
			if (t[i+1].type != JSMN_ARRAY) {
				continue; /* We expect groups to be an array of strings */
			}
			for (j = 0; j < t[i+1].size; j++) {
				jsmntok_t *g = &t[i+j+2];
				printf("  * %.*s\n", g->end - g->start, str + g->start);
			}
			i += t[i+1].size + 1;
		} else if (jsoneq(str, &t[i], "exp_val") == 0) {
			/* We may want to do strtol() here to get numeric value */
			printf("- Exp_val: %.*s\n", t[i+1].end-t[i+1].start,
					str + t[i+1].start);
			i++;
		} else {
			printf("Unexpected key: %.*s\n", t[i].end-t[i].start,
					str + t[i].start);
		}
	}
	return EXIT_SUCCESS;
}
