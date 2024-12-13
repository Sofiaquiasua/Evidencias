#include<iostream>
#include<iomanip>
using namespace std;
main()
{
	float n1, n2, respuestaflotante;
	double numero1, numero2, respuestadoble;
	cout<< "ejercicio para realizar division \n";
	cout<< "ingrese el primer numero para la division flotante";
	cin>> n1;
	cout<< "ingrese el segundo numero para la division flotante";
	cin>> n2;
	respuestaflotante = n1/n2;
	cout<< "el resultado de la division flotante es:" << respuestaflotante << endl << endl;
	cout<< "ingrese el primer numero para la division double";
	cin>> numero1;
	cout<< "ingrese el segundo numero para la division double";
	cin>> numero2;
	respuestadoble = numero1/numero2;
	cout<< "el resultado de la division double es:" << respuestadoble << endl;
}
