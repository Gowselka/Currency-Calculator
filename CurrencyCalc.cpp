//Sinclair Community College
//Relational Operators 
//Kevin Gowsell
//March 3rd, 2019

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	//Variables
	char currencyChoice;
	double USDAmount;
	const double EURO_X_CHANGE = 1.14;
	const double JAP_X_CHANGE = 0.0089;
	const double BRIT_X_CHANGE = 1.32;
	const double CAN_X_CHANGE = 0.75;
	const double SWI_X_CHANGE = 1.00;
	const double AUS_X_CHANGE = 0.71;
	const double SAR_X_CHANGE = 0.070;
	double convertedUSD;


	//Title 
	cout << "Welcome to the Exchange Rate Calculator" << endl;
	cout << "" << endl;

	//Menu
	cout << "Please enter the amount of USD you'd like to covert: ";
	cin >> USDAmount;
	if (USDAmount < 0)
	{
		cout << "Please enter an appropriate amount: ";
		cin >> USDAmount;
	}

	cout << endl;
	cout << "Please enter currency you wish to convert you USD to: " << endl;
	cout << "A. The Euro" << endl;
	cout << "B. The Japanese Yen" << endl;
	cout << "C. The British Pound" << endl;
	cout << "D. The Canadian Dollar" << endl;
	cout << "E. The Swiss Franc" << endl;
	cout << "F. The Australian / New Zealand Dollar" << endl;
	cout << "G. The South African Rand" << endl;
	cout << endl;
	cout << "Currency Choice: ";
	cin >> currencyChoice;
	cout << endl;

	switch (currencyChoice)
	{
	case 'A':
	case 'a': convertedUSD = USDAmount / EURO_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD "  << endl;
		cout << "That is worth: " << convertedUSD << " EURO " << endl;
		break;
	case 'B':
	case 'b':  convertedUSD = USDAmount / JAP_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " YEN " << endl;
		break;
	case 'C':
	case 'c':  convertedUSD = USDAmount / BRIT_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " POUNDS " << endl;
		break;
	case 'D':
	case 'd':  convertedUSD = USDAmount / CAN_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " CAD " << endl;
		break;
	case 'E':
	case 'e':  convertedUSD = USDAmount / SWI_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " CHF " << endl;
		break;
	case 'F':
	case 'f':  convertedUSD = USDAmount / AUS_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " AUD " << endl;
		break;
	case 'G':
	case 'g':  convertedUSD = USDAmount / EURO_X_CHANGE;
		cout << "You entered: " << USDAmount << " USD " << endl;
		cout << "That is worth: " << convertedUSD << " ZAR " << endl;
		break;
	default: cout << "That was not a valid choice.\n";
	}
	cout << "Thank you for using the Exchange Rate Calculator" << endl;

	//system exit
	system("pause");
	return 0;


}