#pragma once
#include<iostream>
#include"clsDate.h"

using namespace std;

class clsInputValidate
{
private :

	double Number;

public:
	static bool IsNumberBetween(int Number, int From, int To)
	{
		return ((Number >= From) && (Number <= To));
	}

	static bool IsNumberBetween(double Number, double From, double To)
	{
		return ((Number >= From) && (Number <= To));
	}

	static bool IsDateBetween(clsDate SystemDate, clsDate DateFrom, clsDate DateTo)
	{
		if (clsDate::CompareDates(SystemDate, DateFrom) == clsDate::After ||
			clsDate::CompareDates(SystemDate, DateFrom) == clsDate::Equal)
		{
			return clsDate::IsDate1BeforeDate2(SystemDate, DateTo) || 
				clsDate::IsDate1EqualDate2(SystemDate , DateTo);
		}
		else
			return clsDate::IsDate1AfterDate2(SystemDate, DateTo)||
			clsDate::IsDate1EqualDate2(SystemDate, DateTo);
		;
	}
	
	static int ReadIntNumber(string StringValidationMessage)
	{
		int Number;
		
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << StringValidationMessage << endl;
			cin >> Number;	
		}
		return Number;
	}

	static int ReadIntNubmerBetween( int From, int To , string StringValidationMessage)
	{
		int Number = ReadIntNumber(StringValidationMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << StringValidationMessage << endl;
			cin >> Number;

		}
		return Number;
	}

	static int ReadDblNumber(string Messge)
	{
		double Number;
		cin >> Number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << Messge << endl;
			cin >> Number;
		}
		return Number;
	}

	static double ReadDblNubmerBetween( double From, double To, string StringValidationMessage)
	{
		double Number = ReadDblNumber(StringValidationMessage);
		while (!IsNumberBetween(Number, From, To))
		{
			cout << StringValidationMessage << endl;
			cin >> Number;
		}
		return Number;
	}

	static bool IsValideDate(clsDate cDate)
	{
		return clsDate::IsValidDate(cDate);
	}
};
