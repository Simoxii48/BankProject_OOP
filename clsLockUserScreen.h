#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include <string>

class clsLockUserScreen : protected clsBaseScreen
{
	char _getConfirmation(const std::string& message);
public:
	void ShowLockUserScreen(clsUserService& _userService);
};