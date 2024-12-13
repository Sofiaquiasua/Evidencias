#include<iostream>
#include<ctime> time 
#include<cstdlib> srand
using namespace std;
main()
{
	int n1;
	srand(time(NULL)); // iniciar la semilla basada en el reloj
	n1=1+rand()%5;
	cout<< "el numero generado fue:"<<n1;
	
}
