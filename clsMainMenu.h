#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"
#include "clsCurrencyService.h"

enum class enMainMenu
{
	ShowClients = 1,
	AddClient = 2,
	UpdateClient = 3,
	DeleteClient = 4,
	FindClient = 5,
	Transactions = 6,
	ManageUsers = 7,
	CurrencyExchange = 8,
	Logout = 9
};

class clsMainMenu : public clsBaseScreen
{
	enMainMenu _readChoice();

	void _PrintMenu();
	
	void _showClients(const clsClientService& _service,const clsUserService& _userService);
	
	void _addClient(clsClientService& _service, const clsUserService& _userService);
	
	void _updateClient(clsClientService& _service, const clsUserService& _userService);
	
	void _deleteClient(clsClientService& _service, const clsUserService& _userService);
	
	void _findClient(clsClientService& _service, const clsUserService& _userService);
	
	void _transactions(clsClientService& _service, clsTrxService& _trxService, const clsUserService& _userService);
	
	void _manageUsers(clsUserService& _userService);
	
	void _currencyExchange(clsCurrencyService& _currencyService);

	void _logout(clsUserService& _userService);

	void _redirectChoice(enMainMenu choice, clsClientService& _service, clsTrxService& _trxService, clsUserService& _userService, clsCurrencyService& _currencyService);

	void _generalSwithcher(clsClientService& _service, clsTrxService& _trxService, clsUserService& _userService, clsCurrencyService& _currencyService);

public:
	void ShowMenu(clsClientService& _service, clsTrxService& _trxService, clsUserService& _userService, clsCurrencyService& _currencyService);
};