#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsUserService.h"

class clsTotalBalancesScreen : protected clsBaseScreen
{
public:
	void ShowTotalBalancesScreen(clsClientService& _service, const clsUserService& _userService);
};