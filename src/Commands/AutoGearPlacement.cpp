#include "AutoGearPlacement.h"

AutoGearPlacement::AutoGearPlacement() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Robot::mover);
}

// Called just before this Command runs the first time
void AutoGearPlacement::Initialize() {
	t = 0;
}

// Called repeatedly when this Command is scheduled to run
void AutoGearPlacement::Execute() {
	//Robot::mover->CenterRobot(t);
	//t++;
	Robot::mover->DriveForward(0.22);
}

// Make this return true when this Command no longer needs to run execute()
bool AutoGearPlacement::IsFinished() {
	if ((Robot::mover->FindDistance())<12.5) {
		return true ;
	} else {
		return false;
	}
}

// Called once after isFinished returns true
void AutoGearPlacement::End() {
	Robot::mover->StopMotors();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoGearPlacement::Interrupted() {

}
