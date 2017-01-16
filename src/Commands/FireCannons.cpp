// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "FireCannons.h"

FireCannons::FireCannons() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::airCannon);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

// Called just before this Command runs the first time
void FireCannons::Initialize() {
	Robot::airCannon->leftCannon->Set(false);
	Robot::airCannon->middleCannon->Set(false);
	Robot::airCannon->rightCannon->Set(false);
}

// Called repeatedly when this Command is scheduled to run
void FireCannons::Execute() {
	if(Robot::oi->getGamePad()->GetRawButton(1)){  // was 3
			Robot::airCannon->leftCannon->Set(true);
		} else if (Robot::oi->getGamePad()->GetRawButton(4)){ // was 4
			Robot::airCannon->middleCannon->Set(true);
		} else if (Robot::oi->getGamePad()->GetRawButton(3)){ // was 2
			Robot::airCannon->rightCannon->Set(true);
		} else if (Robot::oi->getGamePad()->GetRawButton(2)){ // was 1
			Robot::airCannon->leftCannon->Set(false);
			Robot::airCannon->middleCannon->Set(false);
			Robot::airCannon->rightCannon->Set(false);
		}
}

// Make this return true when this Command no longer needs to run execute()
bool FireCannons::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FireCannons::End() {
	Robot::airCannon->leftCannon->Set(false);
	Robot::airCannon->middleCannon->Set(false);
	Robot::airCannon->rightCannon->Set(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FireCannons::Interrupted() {
	End();
}