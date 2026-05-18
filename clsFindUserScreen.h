#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"

class clsFindUserScreen : protected clsBaseScreen
{
public:
	void showFindUserScreen(clsUserService& _userService);
};