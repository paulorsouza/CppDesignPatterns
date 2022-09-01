#pragma once
#include "Command.h"
#include <string>
class InputHandler
{
public:
	void handleInput(std::string input);
private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonB_;
};

