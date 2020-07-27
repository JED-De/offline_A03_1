#include <iostream>
using namespace std;

int main()
{
	int eingabe;
	int kleinste_zahl;
	int groesste_zahl;
	cout << "Bitte geben Sie die 1. Zahl ein: ? ";
	cin >> eingabe;
	kleinste_zahl = eingabe;
	groesste_zahl = eingabe;
	cout << "Bitte geben Sie die 2. Zahl ein: ? ";
	cin >> eingabe;
	if (kleinste_zahl > eingabe)
	{
		kleinste_zahl = eingabe;
	}

	else if (groesste_zahl < eingabe)
	{
		groesste_zahl = eingabe;
	}
	cout << "Bitte geben Sie die 3. Zahl ein: ? ";
	cin >> eingabe;
	if (kleinste_zahl > eingabe)
	{
		kleinste_zahl = eingabe;
	}

	else if (groesste_zahl < eingabe)
	{
		groesste_zahl = eingabe;
	}

	cout << "Die kleinste eingegebene Zahl lautet: " << kleinste_zahl << endl;
	cout << "Die groesste eingegebene Zahl lautet: " << groesste_zahl << endl;
	system("PAUSE");
	return 0;
}
