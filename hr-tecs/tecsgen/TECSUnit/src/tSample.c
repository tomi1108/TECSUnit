#include <stdio.h>
#include <string.h>
#include "tSample_tecsgen.h"

#ifndef E_OK
#define E_OK 0
#define E_ID (-18)
#endif

ER
eEnt_sayHello(CELLIDX idx, int32_t times)
{
	ER ercd = E_OK;
	CELLCB *p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}


	printf( "Sample: " );
	while( times-- > 0 )
		printf( "hello " );
	printf( "\n" );

	return(ercd);
}

ER
eEnt_howAreYouGood(CELLIDX idx, char_t* buf, int32_t len)
{
	ER ercd = E_OK;
	CELLCB *p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	}

	strncpy( buf, "Sample: I'm fine!", len );

	return(ercd);
} 