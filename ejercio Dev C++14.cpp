#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	string nombres;
	int numero =7, edad;
	do
	{
		cout<< "ingrese su nombre \n";
		cin>>nombres;
		cout<< "ingrese su edad \n";
		cin>>edad;
		cout<<" mi nombre es:"<<nombres<<" mi edad es:"<<edad<< endl;
		numero = numero +1;
	}
	while (numero<=8);
}
