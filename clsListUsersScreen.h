#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"

class clsListUsersScreen : protected clsBaseScreen
{
public:
	void ShowListUsersScreen(clsUserService& _userService) const;
};