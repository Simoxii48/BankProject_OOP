# Bank Management System

A console-based bank management application built in C++ using object-oriented design principles. This project demonstrates layered architecture, dependency injection through interfaces, secure password hashing, bitwise permission management, and audit logging.

---

## Features

### Client Management
- Add, update, and delete bank accounts
- Search clients by account number
- Deposit, withdraw, and transfer funds between accounts
- Account statuses: Active, Closed, Suspended

### User Management
- Create and manage bank staff accounts
- Granular permission system using bitwise flags (per menu section)
- Grant or revoke individual permissions per user
- Auto-lock accounts after 3 consecutive failed login attempts

### Transactions
- Deposit and withdrawal with balance validation
- Fund transfers between two accounts
- Full transaction history with timestamps

### Security
- Passwords hashed with **Argon2id** (no plain-text or MD5 storage)
- Login lockout enforced at the service layer, not the UI layer
- Role-based access control checked before every protected screen

### Audit Logging
- Every significant action (login, add client, delete user, transfer, etc.) is logged with the acting user and a timestamp
- Logs are persisted to file and viewable through the admin interface

### Currency Exchange
- View live currency exchange rates
- Amounts convertible between currencies

---

## Architecture

The project is structured around a clear separation of concerns:

```
Screens (UI)
    └── Services (business logic)
            └── Repositories (file I/O)
                    └── Entities (domain objects)
```

Key design decisions:

- **Repository interfaces** (`IUserRepository`, `IClientRepository`, `IActionLogRepository`, `ICurrencyRepository`) — data access is fully abstracted; screens and services never touch the file system directly
- **Service interfaces** (`ITrxService`) — services depend on abstractions, not concrete implementations
- **Dependency injection** — services receive their dependencies through constructors; no hidden global coupling between layers
- **Abstract base class** (`clsPerson`) — `clsClient` and `clsUser` share a common polymorphic base with a pure virtual `fullName()` method
- **Permission system** — three independent bitfield integers per user (main menu, transactions menu, manage users menu); checked with bitwise AND

---

## Prerequisites

- **Windows** (the project uses Windows-specific APIs: `system("cls")`, `system("pause")`, MSVC headers)
- **Visual Studio 2019 or later** (any edition including Community)
- **Argon2 library** — required for password hashing

### Setting up Argon2

1. Clone the reference implementation: https://github.com/P-H-C/phc-winner-argon2
2. Build `argon2.lib` using the provided Visual Studio solution or the Makefile under MSYS2/MinGW
3. In your Visual Studio project:
   - Add the Argon2 `include/` folder to **C/C++ → Additional Include Directories**
   - Add the built `.lib` to **Linker → Additional Dependencies**
   - Add the `.lib` output folder to **Linker → Additional Library Directories**

---

## Building and Running

1. Clone this repository
2. Open the `.sln` file in Visual Studio
3. Configure the Argon2 include and library paths as described above
4. Set the build configuration to **Debug** or **Release**
5. Press **Ctrl+F5** to build and run

The application stores all data in plain text files in the same directory as the executable:
- `clients.txt` — client accounts
- `users.txt` — staff accounts
- `transactions.txt` — transaction history
- `currencies.txt` — currency exchange rates
- `actionLog.txt` — audit log

These files are created automatically on first run if they do not exist.

---

## Default Admin Account

On a fresh run with an empty `users.txt`, use the built-in admin account to log in:

| Field    | Value   |
|----------|---------|
| Username | `Admin` |
| Password | `1234`  |

> **Change the admin password immediately after first login.**

---

## Permission System

Each user has three permission integers, one per menu section. Individual permissions are stored as bits within each integer:

| Permission | Bit |
|---|---|
| Full access | All bits set |
| Add client | Bit 0 |
| Update client | Bit 1 |
| Delete client | Bit 2 |
| Find client | Bit 3 |
| View all clients | Bit 4 |
| ... | ... |

The Admin account always has full access regardless of stored permissions.

---

## Known Limitations

- **Windows only** — uses `system("cls")`, `system("pause")`, and MSVC-specific headers; will not compile on Linux or macOS without modification
- **File-based storage** — no database; concurrent access is not safe
- **Single session** — designed for one user at a time on one machine
- **`double` for balances** — floating-point arithmetic is used for money values; a production system would use a fixed-point or decimal type to avoid rounding errors
- **No automated tests** — all behaviour is verified manually through the console

---

## Project Structure

```
├── Entities/
│   ├── clsPerson         — abstract base class (fullName pure virtual)
│   ├── clsClient         — bank account entity
│   └── clsUser           — staff account entity with permission fields
├── Repositories/
│   ├── IUserRepository
│   ├── IClientRepository
│   ├── IActionLogRepository
│   ├── ICurrencyRepository
│   └── concrete clsXxxRepo implementations (file I/O)
├── Services/
│   ├── ITrxService
│   ├── clsUserService    — auth, lockout, permission checks
│   ├── clsClientService  — account operations
│   ├── clsTrxService     — deposit, withdraw, transfer
│   └── clsCurrencyService
├── Screens/
│   ├── clsBaseScreen     — shared display utilities
│   ├── clsLoginScreen
│   ├── clsMainMenuScreen
│   ├── clsTrxMenuScreen
│   ├── clsManageUsersMenuScreen
│   └── individual operation screens (add, update, delete, find, …)
├── Utilities/
│   ├── clsDate           — date/time utilities
│   ├── clsString         — string helpers
│   └── clsInputValidate  — validated console input
├── clsSession            — holds the currently logged-in user
├── clsActionLog          — audit log entry value type
└── Project Bank OOP.cpp  — entry point and DI wiring
```

---

## License

MIT License — feel free to use, modify, and distribute.
