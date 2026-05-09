#pragma once
#include "clsUserService.h"
#include "clsUser.h"
#include <string>

enum class enMenuType
{
	MainMenu,
	TrxMenu,
	ManageUsersMenu
};

class clsReadPermissions
{
	static char _getConfirmation(const std::string& message);
	
	static void _readMainMenuPermissions(clsUser& _user, clsUserService& _userService);
	
	static void _readTransactionMenuPermissions(clsUser& _user, clsUserService& _userService);

	static void _readManageUsersMenuPermissions(clsUser& _user, clsUserService& _userService);

	static void _permissionModel(const std::string& confirmMessage,const std::string& outputMessage, clsUser& _user,int permission, clsUserService& _userService, enMenuType menuType);

public:
	static void readPermissions(clsUser& _user, clsUserService& _userService);
};