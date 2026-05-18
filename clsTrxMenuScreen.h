#pragma once
#include "clsBaseScreen.h"
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"

class clsTrxMenuScreen : protected clsBaseScreen
{
	enum class enMenuOptions
	{
		Deposit = 1,
		Withdrawal = 2,
		Transfer = 3,
		TotalBalances = 4,
		TransactionsLog = 5,
		Back = 6
	};

	enMenuOptions _readChoice();
	void _printMenu();

	void _DepositScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);
	
	void _WithdrawalScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);
	
	void _TransferScreen(clsClientService& _clientService, clsTrxService& _trxService, const clsUserService& _userService);

	void _totalBalances(clsClientService& _service, const clsUserService& _userService);

	void _transactionsLog(clsTrxService& _trxService, const clsUserService& _userService);
	
	void _generalSwithcher(clsClientService& _service, clsTrxService& _trxService, enMenuOptions choice, const clsUserService& _userService);
	
	void _redirectChoice(clsClientService& _service,clsTrxService& _trxService, const clsUserService& _userService);

public:
	void ShowTrxMenu(clsClientService& _service, clsTrxService& _trxService, const clsUserService& _userService);
};