#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"
#include "clsUser.h"
#include <string>

class clsRevokeUserPermissionScreen : protected clsBaseScreen
{
	char _getConfirmation(const std::string& message) const;
	
	int _revokeUserMainMenuPermissions(clsUser& _user,int& trxMenuPermissions, int& manageUsersMenuPermissions);
	
	int _revokeUserTransactionPermissions(clsUser& _user);
	
	int _revokeUserManageUsersPermissions(clsUser& _user);

public:
	void showRevokeUserPermissionScreen(clsUserService& _userService);
};