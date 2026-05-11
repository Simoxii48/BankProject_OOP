#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsUserService.h"

class clsFindClientScreen : protected clsBaseScreen
{
public:
	void ShowFindClientScreen(clsClientService& _service,const clsUserService& _userService);
};