#include<iostream>
using namespace std;

//User menu
void showMenu() {
	cout << "*******MENU*******" << endl;
	cout << "1. Cheak Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Exit" << endl;
	cout << "******************" << endl;
}

int main() {
	// cheak balance, deposit, withdraw, show menu
	int option;
	double balance = 0;

	do {
		showMenu();
		cout << "Option:";									 
		cin >> option;

		system("cls");

		switch (option) {
		case 1: cout << "Balance is: $" << balance << endl;   
			break;
		case 2: cout << "Deposit amount: $";					  
			double depositAmount;
			cin >> depositAmount;
			balance = balance + depositAmount;				  
			break;
		case 3: cout << "Withdraw amount: $";					  
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance)                    
				balance = balance - withdrawAmount;
			else
				cout << "Not enough money!" << endl;
			break;
		}
	} while (option != 4);

	return 0;
}

