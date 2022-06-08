#ifndef __GLOBAL__
#define __GLOBAL__

#include "main.h"
#include "lib/piston.h"
#include "lib/chassis.h"
#include "lib/auton_obj.h"

namespace glb
{
    // ports ===============================
    #define P_IMU 10
    #define P_BL 11
    #define P_FL 1
    #define P_BR 12
    #define P_FR 2
    // objects =============================
    pros::Controller con(pros::E_CONTROLLER_MASTER);
    pros::Imu imu(P_IMU);
    
    Chassis chas({P_BL, P_FL}, {P_BR, P_FR}, pros::E_MOTOR_GEARSET_06, false);
    Auton *auton;
}

#endif