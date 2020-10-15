#define _USE_MATH_DEFINES
#include <iostream>
#include <windows.h>
#include <Lmcons.h>
#include <cmath>



using namespace std;
int main()
{

	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	cout << "===========================\n";
	if (GetUserName((TCHAR*)name, &size))
		wcout << L"Hello, " << name << L"!\n";
	else
		cout << "Hello, Ubbekanter Person!\n";
	cout << "===========================\n";
	cout << "\n";

	char var;
	char re;
	double varA;
	double varB;
	double varR;

	cout << "Bitte wealen Sie eine Operation\n";
	cout << "[A]: Umfang eines Rechtecks\n";
	cout << "[B]: Fleacheninhalt eines Rechtecks\n";
	cout << "[C]: Umfang eines Kreises\n";
	cout << "[D]: Fleacheneinheit eines Kreises\n";

	cin >> var;

	while (var != 'A' && var != 'a' && var != 'B' && var != 'b' && var != 'C' && var != 'c' && var != 'D' && var != 'd' || cin.fail())
	{
		cout << "U dump bich ?\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> var;
	}

	if (var == 'A' || var == 'a')
	{
		cout << "Geben Sie A ein\n";
		cin >> varA;
		cout << "Geben Sie B ein\n";
		cin >> varB;

		cout << "umfang ist " << (varA * 2) + (varB * 2) << "\n";
	}
	else if (var == 'B' || var == 'b')
	{
		cout << "Geben Sie A ein\n";
		cin >> varA;
		cout << "Geben Sie B ein\n";
		cin >> varB;

		cout << "Fleacheninhalt ist " << (varA * varB ) << "\n";
	}
	else if (var == 'C' || var == 'c')
	{
		cout << "Geben Sie den radius ein\n";
		cin >> varR;

		cout << "Umfang ist " << (2 * M_PI * varR ) << "\n";
	}
	else if (var == 'D' || var == 'd')
	{
		cout << "Geben Sie den radius ein\n";
		cin >> varR;

		cout << "Fleacheninhalt ist " << M_PI * pow(varR, 2) << "\n";
	}

	cout << "\n";
	cout << "do you want to calculate again?\n";
	cout << "y for Yes\n";
	cout << "n for No\n";

	cin.clear();
	cin >> re;

	while (re != 'y' && re != 'Y' && re != 'n' && re != 'N' || cin.fail())
	{
		cout << "bitch wtf get out of here i dont have time for this shit do you want to calculate again or not ?\n";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> re;
		break;
	}

	if (re == 'y' || re == 'Y')
	{
		system("CLS");
		return main();

	}
	else if (re == 'n' || re == 'N')
	{
		cout << "ok then have a nice day\n";
	}
	system("Pause");
	return 0;
}