#pragma once
#include "clsPerson.h"
#include <string>

enum class enMainMenuPermissions
{
	pShowClientList = 1 << 0,
	pAddClient = 1 << 1,
	pUpdateClient = 1 << 2,
	pDeleteClient = 1 << 3,
	pFindClient = 1 << 4,
	pTransactionOps = 1 << 5,
	pManageUsers = 1 << 6,
	pFullAccess = ~0
};

enum class enTrxMenuPermissions
{
	pDeposit = 1 << 0,
	pWithdraw = 1 << 1,
	pTransfer = 1 << 2,
	pTotalBalance = 1 << 3,
	pTrxHistory = 1 << 4,
	pFullAccess = ~0
};

enum class enManageUsersMenuPermissions
{
	pListUsers = 1 << 0,
	pAddUser = 1 << 1,
	pUpdateUser = 1 << 2,
	pDeleteUser = 1 << 3,
	pFindUser = 1 << 4,
	pRevokePermissions = 1 << 5,
	pGrantPermissions = 1 << 6,
	pLockUser = 1 << 7,
	pUnlockUser = 1 << 8,
	pViewLogs = 1 << 9,
	pFullAccess = ~0
};
class clsUser : public clsPerson
{
private:
	// Privates
	std::string _userName = "";
	std::string _password = "";
	bool _isLocked = false;
	int _attemptsLeft = 0;

	int _MainMenuPermissions = 0;
	int _TrxMenuPermissions = 0;
	int _ManageUsersMenuPermissions = 0;

public:
	// Publics
	clsUser(const std::string& firstName,const std::string& lastName,const std::string& emailAddress,const std::string& phoneNumber,const std::string& userName, const std::string& password, int mainMenuPermissions, int transactionMenuPermissions, int manageUsersMenuPermissions,bool isLocked,int attempts);

	// Getters
	const std::string& userName() const;
	const std::string& password() const;
	int mainMenuPermissions() const;
	int trxMenuPermissions() const;
	int manageUsersMenuPermissions() const;
	std::string fullName() const override;
	bool isLocked() const;
	int attemptsLeft() const;

	// Setters
	void setUserName(const std::string& value);
	void setPassword(const std::string& value);
	void setLocked(bool value);

	void setMainMenuPermissions(int value);
	void setTrxMenuPermissions(int value);
	void setManageUsersMenuPermissions(int value);
	void setAttemptsLeft(int value);

	// Methods
	bool hasMainMenuPermission(int permission) const;
	
	bool hasTrxMenuPermission(int permission) const;
	
	bool hasManageUsersMenuPermission(int permission) const;

	void grantMainMenuPermission(int permission);
	
	void grantTrxMenuPermission(int permission);
	 
	void grantManageUsersMenuPermission(int permission);

	void revokeMainMenuPermission(int permission);
	
	void revokeTrxMenuPermission(int permission);
	
	void revokeManageUsersMenuPermission(int permission);

	// Destructor
	~clsUser() override = default;
};