#pragma once
#include "clsUserService.h"
#include <string>

enum class enMenuScreenType { MainMenuScreen, TransactionMenuScreen, ManageUsersMenuScreen };

class clsAccessScreens
{
public:

	static bool accessScreen(const clsUserService& _userService, int permission, const std::string& screenName, const std::string& screenTitle, enMenuScreenType menuType = enMenuScreenType::MainMenuScreen);
};