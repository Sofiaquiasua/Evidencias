#include<iostream>
#include<iomanip>n
using namespace std;
main()
{
	float flotante = 1.354678987654;
	double doble = 1.3545678987654;
	cout<< "el tamaño para el flotante es :" << sizeof (float)<< endl;
	cout<< "el tamaño para el doble es :" << sizeof (double)<< endl;
	cout<< flotante << endl;
	cout<< doble << endl;
	flotante = 5.12345678987;
	doble = 5.12345678987;
		cout<< setprecision(5);
	cout<< flotante << endl;
	cout<< doble << endl;
		cout<< setprecision(12);
	cout<< flotante << endl;
	cout<< doble << endl;
		cout<< setprecision(8);
	cout<< flotante << endl;
		cout<< setprecision(13);
	cout<< doble << endl;
}
