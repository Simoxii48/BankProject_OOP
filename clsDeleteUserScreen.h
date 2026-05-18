#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include <string>

class clsDeleteUserScreen : protected clsBaseScreen
{
	char _getConfirmation(const std::string& message);

public:
	void ShowDeleteUserScreen(clsUserService& _userService);
};