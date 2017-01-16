// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "I2C.h"

I2C* RobotMap::pixyi2c = NULL;

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::moverRightMotor0 = NULL;
SpeedController* RobotMap::moverRightMotor1 = NULL;
SpeedController* RobotMap::moverLeftMotor2 = NULL;
SpeedController* RobotMap::moverLeftMotor3 = NULL;
DigitalInput* RobotMap::moverSpeedSwitch = NULL;
Solenoid* RobotMap::airCannonLeftCannon = NULL;
Solenoid* RobotMap::airCannonMiddleCannon = NULL;
Solenoid* RobotMap::airCannonRightCannon = NULL;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	moverRightMotor0 = new Jaguar(0);
	lw->AddActuator("Mover", "RightMotor0", (Jaguar*) moverRightMotor0);
	
	moverRightMotor1 = new Jaguar(1);
	lw->AddActuator("Mover", "RightMotor1", (Jaguar*) moverRightMotor1);
	
	moverLeftMotor2 = new Jaguar(2);
	lw->AddActuator("Mover", "LeftMotor2", (Jaguar*) moverLeftMotor2);
	
	moverLeftMotor3 = new Jaguar(3);
	lw->AddActuator("Mover", "LeftMotor3", (Jaguar*) moverLeftMotor3);
	
	moverSpeedSwitch = new DigitalInput(8);
	lw->AddSensor("Mover", "SpeedSwitch", moverSpeedSwitch);
	
	airCannonLeftCannon = new Solenoid(0, 2);
	lw->AddActuator("AirCannon", "LeftCannon", airCannonLeftCannon);
	
	airCannonMiddleCannon = new Solenoid(0, 1);
	lw->AddActuator("AirCannon", "MiddleCannon", airCannonMiddleCannon);
	
	airCannonRightCannon = new Solenoid(0, 0);
	lw->AddActuator("AirCannon", "RightCannon", airCannonRightCannon);
	


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    pixyi2c = new I2C(I2C::kOnboard,0x54);

}
