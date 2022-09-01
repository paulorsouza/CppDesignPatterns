#pragma once
#include "Command.h"
#include <iostream>
class FireCommand : public Command
{
	void fireGun() {
		std::cout << "jump";
	}
	virtual void execute() { fireGun(); }
};

