#include<iostream>
#include"clsInputValidate.h"


using namespace std;

int main()
{
	cout << clsInputValidate::IsNumberBetween(5, 1, 10) << endl;

	cout << clsInputValidate::IsNumberBetween(5.9, 1.5, 10.1) << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(),
		clsDate(20, 10, 2026), clsDate(18, 10, 2026)) << endl;

	cout << clsInputValidate::IsDateBetween(clsDate(),
		clsDate(18, 10, 2026), clsDate(20, 10, 2026)) << endl;

	cout << "\nPlease Enter an integer Number:\n";
	int Num1 = clsInputValidate::ReadIntNumber("\nInvalid , Enter another a valid one: \n");
	cout << Num1 << endl;

	cout << "\nPlease Enter an integer Number between 1 and 10:\n";
	int Num2 = clsInputValidate::ReadIntNubmerBetween(1 , 10 ,"\nInvalid , Enter another a valid one: \n");
	cout << Num2 << endl;

	cout << "\nPlease Enter a double Number:\n";
	double Num3 = clsInputValidate::ReadDblNumber("\nInvalid , Enter another a valid one: \n");
	cout << Num3 << endl;

	cout << "\nPlease Enter a double Number between 1 and 10:\n";
	double Num4 = clsInputValidate::ReadDblNubmerBetween(1, 10, "\nInvalid , Enter another a valid one: \n");
	cout << Num4 << endl;

	cout << clsInputValidate::IsValideDate(clsDate(35, 12, 2022)) << endl;
	return 0;
}