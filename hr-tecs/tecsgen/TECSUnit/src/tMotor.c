#include <stdio.h>
#include <string.h>
#include "tMotor_tecsgen.h"

#ifndef E_OK
#define E_OK 0
#define E_ID (-18)
#endif

static motor_type_t mts[TNUM_MOTOR_PORT];

ER eMotor_setPower(CELLIDX idx, int port, int power)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}

	motor_type_t mt = mts[port];

	if( power >= -100 && power <= 100 ){
		printf("power = %d\n", power );
	} else {
		return -1;
	}

	char buf[3];

	if (mt == UNREGULATED_MOTOR) {
	    // Set unregulated power
	    buf[0] = opOUTPUT_POWER;
	} else {
		// Set regulated speed
	    buf[0] = opOUTPUT_SPEED;
	}
    buf[1] = 1 << port;
    buf[2] = power;
	//motor_command(buf, sizeof(buf));

    /**
     * Start the motor
     */
    //motor_command(buf, sizeof(buf));
    buf[0] = opOUTPUT_START;
    buf[1] = 1 << port;
    //motor_command(buf, sizeof(buf));

	return E_OK;	
}