#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsClient.h"
#include <string>
#include "clsUserService.h"

class clsUpdateClientScreen : protected clsBaseScreen
{
	char _getConfirmation();

	clsClient _getUpdatedClient(const clsClient& _client);

public:
	void showUpdateClientScreen(clsClientService& _service, const clsUserService& _userService);
};