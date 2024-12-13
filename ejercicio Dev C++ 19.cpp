#include<iostream>
#include<ctime> time 
#include<cstdlib> srand
using namespace std;
main()
{
	int n1, n2, n3, resultado;
	srand (time(NULL));
	n1=rand()%5;
	cout<<"el aleatorio es:"<<n1<<endl;
	do
	{
		cout<<"adivinaste\n";
		cin>>resultado;
			if (resultado==n1)
			{
				cout<<"adivinaste\n";
				cout<<"desea intentar de nuevo?\n";
				cout<<"ingrese 2 para intentar de nuevo\n";
				cin>>n3;
			}
			else
			{
				cout<<"intenta de nuevo\n";
				cout<<"ingrese 2\n";
				cin>>n3;
			}
	}
	while(n3==2);
	cout<<endl;
}
