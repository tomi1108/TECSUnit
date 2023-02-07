#include <stdio.h>
#include <string.h>
#include "tMotor_tecsgen.h"

#ifndef E_OK
#define E_OK 0
#define E_ID (-18)
#endif

ER eMotor_setPower(CELLIDX idx, int power)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}

	if( power >= -100 && power <= 100 ){
		printf("power = %d\n", power );
	} else {
		return -1;
	}

	return E_OK;	
}