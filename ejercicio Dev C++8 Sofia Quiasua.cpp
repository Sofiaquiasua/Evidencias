#include<iostream>
using namespace std;
main() 
{
int n1, n2, n3, suma, resta, multi, divi;
cout<< "ingrese el primer numero para la operacion \n";
cin>> n1;
cout<< "ingrese el sigiente numero para la operacion \n";
cin>> n2;
cout<< "ingrese el numero para la operacion \n";
cin>> n3;
if((n3>0)&&(n3<6))
{
	suma = n1+n2;
	cout<<"el resultado de la suma es:"<<suma;
}
else
{
    if ((n3>5) && (n3<11)) 
	{
		resta = n1-n2;
		cout<<"el resultado de la resta es:"<<resta;
	}
	else
	{
		if((n3>10) && (n3<16))
		{
			multi = n1*n2;
			cout<<"el resultado de la multiplicacion es:" << multi;
		}
		else
		{
			if((n3>15) && (n3<21))
			{
				divi = n1/n2;
				cout<<"el resultado en la division es:"<< divi;
			}
		}
	}
}
 } 

