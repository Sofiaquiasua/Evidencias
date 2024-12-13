#include<iostream>
#include<ctime> time 
#include<cstdlib> srand
using namespace std;
main()
{
	int n1;
	srand(time(NULL)); // iniciar la semilla basada en el reloj
	cout<< "\t\t\t\t\t 10 numeros generados aleatoriamente"<< endl;
	for(int i=1; i<=10; i ++)
	{
		cout<< "\t\t\t\t\t\t"<< rand()% i<<endl;
	}
	cout<< "\n\n";
	for(int i=1; i<=10; i++)
	{
		cout<< "\t\t\t\t\t el numero"<<i<<"generado fue:"<<1+rand()%5<< endl;
	}
}
	
