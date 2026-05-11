#pragma once
#include "clsBaseScreen.h"
#include "clsClient.h"
#include "clsClientService.h"
#include "clsUserService.h"

class clsAddClientScreen : protected clsBaseScreen
{
private:
	clsClient _readClientData(const clsClientService& _service);
public:
	void showAddClientScreen(clsClientService& _service, const clsUserService& _userService);
};