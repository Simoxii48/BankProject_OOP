#pragma once
#include "clsBaseScreen.h"
#include "clsUserService.h"

class clsManageUsersScreen : protected clsBaseScreen
{
	enum class enManageScreenChoice
	{
		ListUsers = 1,
		AddNewUser = 2,
		UpdateUser = 3,
		DeleteUser = 4,
		FindUser = 5,
		RevokePermissions = 6,
		GrantPermissions = 7,
		LockUser = 8,
		UnlockUser = 9,
		ViewActionLogs = 10,
		Back = 11
	};

	void _performUserChoice(enManageScreenChoice _choice, clsUserService& _userService);
	void _generalSwitcher(clsUserService& _userService);
	enManageScreenChoice _readUserChoice();

	void _listUsers(clsUserService& _userService);
	void _addNewUser(clsUserService& _userService);
	void _updateUser(clsUserService& _userService);
	void _deleteUser(clsUserService& _userService);
	void _findUser(clsUserService& _userService);
	void _grantPermissions(clsUserService& _userService);
	void _revokePermissions(clsUserService& _userService);
	void _lockUser(clsUserService& _userService);
	void _unlockUser(clsUserService& _userService);
	void _viewActionLogs(clsUserService& _userService);

public:
	void ShowManageUsersScreen(clsUserService& _userService);
};