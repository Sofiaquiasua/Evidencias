#include<iostream>
using namespace std;
main()
{
		char letra;
		int n, n1, n2, resultado;
		do
		{
			cout<< "ingrese una de las siguientes operaciones";
		    cout<< "ingrese 1 para la suma \n";
		    cout<< "ingrese 2 para la resta \n";
		    cout<< "ingrese 3 para la multi \n";
		    cout<< "ingrese 4 para la divi \n";
		    cin>> n;
		    switch (n)
	{
		  case 1: cout<< "estoy en uno";
				cout<< "ingrese el primer numero para la operacion \n";
				cin>> n1;
				cout<< "ingrese el segundo numero para la operacion \n";
				cin>> n2;
				resultado = n1+n2;
				cout<< "el resultado de la suma es:"<< resultado<< endl;
	     break;
	
		 case 2: cout<< "estoy en dos";
					cout<< "ingrese el primer numero para la operacion \n";
					cin>> n1;
					cout<< "ingrese el segundo numero para la operacion \n";
					cin>> n2;
					resultado = n1-n2;
					cout<< "el resultado de la suma es:"<< resultado<< endl;
         break;
    
		 case 3: cout<< " estoy en tres";
						cout<< "ingrese el primer numero para la operacion \n";
						cin>> n1;
						cout<< "ingrese el segundo numero para la operacion \n";
						cin>> n2;
						resultado = n1*n2;
						cout<< "el resultado de la suma es:"<< resultado<< endl;
	      break;
	
		  case 4: cout<< "estoy en cuatro";
						cout<< "ingrese el primer numero para la operacion \n";
						cin>> n1;
						cout<< "ingrese el segundo numero para la operacion \n";
						cin>> n2;
						resultado = n1*n2;
						cout<< "el resultado de la suma es:"<< resultado<< endl;
	     break;
	
	                 	 cout<< "deseas intentar de nuevo? \n";
	                     cin>> letra;
	                     break;
	                     default: cout<< "error intente de nuevo \n";
	                     cout<< "quieres intentar de nuevo";
	                     cin>> letra;
	                    
	                     
	                     break;
	}	
      }
      while(letra=='s');
}
