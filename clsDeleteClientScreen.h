#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsClient.h"
#include <string>
#include "clsUserService.h"

class clsDeleteClientScreen : protected clsBaseScreen
{
	char _getConfirmation();

public:
	void showDeleteClientScreen(clsClientService& _service, const clsUserService& _userService);
};