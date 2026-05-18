#pragma once
#include "clsUserService.h"
#include "clsBaseScreen.h"
#include <string>

class clsGrantUserPermissionScreen : protected clsBaseScreen
{
	char _getConfirmation(const std::string& message) const;

public :
	void showGrantUserPermissionScreen(clsUserService& _userService);
};