/*
 * Edited from last year
 */

#include "drivetrain.h"
#include "main.h"

#include "debug.h"
//extern int dbgmsk;

void processDriveTrain() {

  if(joystickGetDigital(1, 5, JOY_UP)) { 
	  motorSet(WHEEL, 127);
  }
  else if(joystickGetDigital(1, 6, JOY_UP)) {
	  motorSet(WHEEL, -127);
  }
  else {
	  motorSet = 0;
  }


/*  P(D_MAX, "RMotor: %d, LMotor: %d\n", motorROutput, motorLOutput);

  motorSet(MOTOR_L_WHEEL_PORT, motorLOutput);
  motorSet(MOTOR_R_WHEEL_PORT, motorROutput);
}
*/
