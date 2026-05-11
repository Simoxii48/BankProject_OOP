#pragma once
#include "clsBaseScreen.h"
#include "clsClient.h"
#include "clsClientService.h"
#include "clsUserService.h"
#include <vector>

class clsShowClientsScreen : protected clsBaseScreen
{
	void _printHeader(const std::vector<clsClient>& vClients) const;

public:
	void ShowClients(const clsClientService& _service,const clsUserService& _userService);
};