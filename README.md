🏦 ATM Simulation System (C++ Mini Project)
📌 Project Overview

This project is a console-based ATM Simulation System developed using C++.
It simulates basic ATM functionalities such as balance enquiry, cash deposit, cash withdrawal, viewing account details, and changing the PIN.
The program includes input validation, security features, and a user-friendly menu-driven interface.

This project is suitable for:

B.Tech / Engineering mini projects

Beginners learning C++

Understanding loops, functions, and input validation

🚀 Features

🔐 PIN Authentication with 3 attempts

💰 Balance Enquiry

➕ Deposit Money (with invalid input handling)

➖ Withdraw Money (insufficient balance check)

👤 Account Details Display

🔄 Change ATM PIN

❌ Prevents crashes on invalid numeric input

🔁 Allows continuous transactions using y/n validation

🧑‍💻 Technologies Used

Language: C++

Compiler: Any standard C++ compiler (GCC, MSVC)

IDE: Visual Studio / VS Code / Code::Blocks

📂 Project Structure
ATM-Simulation/
│
├── atm.cpp        // Main C++ source code
└── README.md      // Project documentation

▶️ How to Run the Project

Clone the repository:

git clone https://github.com/your-username/ATM-Simulation.git


Open the project in Visual Studio or any C++ IDE.

Compile and run the program.

🔑 Default Login Details
Field	Value
PIN	1234
Initial Balance	₹10000
Bank Name	Global Bank
🧠 Concepts Used

Loops (while)

Conditional Statements (if, switch)

Functions

Input Validation (cin.fail())

String Handling

Modular Programming

🛡️ Input Validation

The program safely handles:

Non-numeric input for amount

Invalid menu choices

Incorrect PIN attempts

Invalid y/n responses

This prevents infinite loops and runtime crashes.

📸 Sample Menu Output
========== ATM MENU ==========
1. Available Balance
2. Deposit Money
3. Withdraw Money
4. Account Details
5. Change PIN

🔮 Future Enhancements

Transaction history

Multiple user accounts

File handling for data persistence

ATM receipt generation

GUI-based version

🙌 Acknowledgement

This project is created for learning and academic purposes.
Feel free to fork, modify, and enhance it.
