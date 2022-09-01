
#include "Command.h"
#include <iostream>
class JumpCommand : public Command
{
	void jump() {
		std::cout << "jump";
	}
	virtual void execute() { jump(); }
};
