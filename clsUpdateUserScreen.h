#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include "clsUser.h"
#include <string>

class clsUpdateUserScreen : protected clsBaseScreen
{
	void _printMenu();

	clsUser _getUpdatedUser(const clsUser& _user);
	char _getConfirmation(const std::string& message);

public:
	void ShowUpdateUserScreen(clsUserService& _userService);
};