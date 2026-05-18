#include "clsClientRepo.h"
#include "clsTrxRepo.h"
#include "clsUserRepo.h"
#include "clsActionLogRepo.h"
#include "clsClientService.h"
#include "clsTrxService.h"
#include "clsUserService.h"
#include "clsStartApp.h"
#include "clsCurrencyRepo.h"
#include "clsCurrencyService.h"

using namespace std;

// Repos
clsClientRepo clientRepo("clients.txt");
clsTrxRepo trxRepo("transactions.txt");
clsUserRepo userRepo("users.txt");
clsActionLogRepo actionLogRepo("actionsLog.txt");
clsCurrencyRepo currencyRepo("currencies.txt");

// Services
clsTrxService trxService(clientRepo, trxRepo);
clsClientService clientService(clientRepo, trxService);
clsUserService userService(userRepo, actionLogRepo);
clsCurrencyService currencyService(currencyRepo);


int main()
{
	clsStartApp startApp;
	startApp.startApp(clientService,trxService,userService,currencyService);

	return 0;
}
