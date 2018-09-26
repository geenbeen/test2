#include "drivetrain.h"
#include "main.h"

#include "debug.h"
//extern int dbgmsk;

void processDriveTrain() {
  //joystick 1, button group 5, button JOY_UP.
  if(joystickGetDigital(1, 5, JOY_UP)) { 
	  motorSet(WHEEL, 127);
  }
  //joystick 1, button group 6, button JOY_UP.
  else if(joystickGetDigital(1, 6, JOY_UP)) {
	  motorSet(WHEEL, -127);
  }
  //otherwise, null.
  else {
	  motorSet(WHEEL, 0);
  }


/*  P(D_MAX, "RMotor: %d, LMotor: %d\n", motorROutput, motorLOutput);

  motorSet(MOTOR_L_WHEEL_PORT, motorLOutput);
  motorSet(MOTOR_R_WHEEL_PORT, motorROutput);
}
*/
