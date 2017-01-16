#ifndef AUTOGEARPLACEMENT_H
#define AUTOGEARPLACEMENT_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

class AutoGearPlacement : public Command {
public:
	AutoGearPlacement();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();

private:
	int t;
};


#endif  // AutoGearPlacement_H
