#include<iostream>
using namespace std;
main() 
{ 
    int n1, n2, n3, suma, resta, multi, divi;
	cout<< "ingrese el primer numero para la operacion \n";
	cin>> n1;
	cout<< "ingrese el sigiente numero para la operacion \n";
	cin>> n2;
	cout<< "ingrese su edad en numeros \n";
	cin>> n3;
	if(n3>=18)
{
	if(n3>50)
	{
		cout<<"anciano \n";
	}
	else
	{
		cout<<"usted es mayor \n";
	}
	else
	{
		if(n3>9)
		{
			cout<<"usted es adolecente \n";	
		}
		else
		{
			if(n3>3)
			{
				cout<<"usted es un ni�o \n";
			}
			else
			{
				cout<<"usted es un bebe o no ha nacido \n";
			}
		}
	}
 }

