#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include <string>

class clsUnlockUserScreen : protected clsBaseScreen
{
	char _getConfirmation(const std::string& message);
public: 
	void ShowUnlockUserScreen(clsUserService& _userService);
};