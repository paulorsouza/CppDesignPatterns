#include "InputHandler.h"
#include <string>

void InputHandler::handleInput(std::string input) {
	if (input == "x") buttonX_->execute();
	if (input == "a") buttonA_->execute();
	if (input == "b") buttonB_->execute();
	if (input == "y") buttonY_->execute();
}