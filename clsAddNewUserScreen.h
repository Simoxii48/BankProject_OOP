#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include "clsUser.h"
#include <string>

class clsAddNewUserScreen : protected clsBaseScreen
{
	clsUser _readUserData(clsUserService& _userService);
	
	char _getConfirmation(const std::string& message) const;

public:
	void ShowAddNewUserScreen(clsUserService& _userService);
};