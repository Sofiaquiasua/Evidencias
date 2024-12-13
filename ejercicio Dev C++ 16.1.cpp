#include<iostream>
using namespace std;
main()

{
		char letra;
		int n, n1, n2, resultado;
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
				cout<< "el resultado de la suma es:"<< resultado;
	     break;
	
		 case 2: cout<< "estoy en dos";
					cout<< "ingrese el primer numero para la operacion \n";
					cin>> n1;
					cout<< "ingrese el segundo numero para la operacion \n";
					cin>> n2;
					resultado = n1-n2;
					cout<< "el resultado de la resta es:"<< resultado;
         break;
    
		 case 5: cout<< " estoy en cinco";
						cout<< "ingrese el primer numero para la operacion \n";
						cin>> n1;
						cout<< "ingrese el segundo numero para la operacion \n";
						cin>> n2;
						resultado = n1*n2;
						cout<< "el resultado de la multi es:"<< resultado;
	      break;
	
		  case 4: cout<< "estoy en cuatro";
						cout<< "ingrese el primer numero para la operacion \n";
						cin>> n1;
						cout<< "ingrese el segundo numero para la operacion \n";
						cin>> n2;
						resultado = n1*n2;
						cout<< "el resultado de la divi es:"<< resultado;
	     break;
	
	                     default: cout<< "error intente de nuevo";
	                     cout<< "quieres intentar de nuevo";
	                     cin>> n;
	                     cout<< letra;
	                     while(letra=='s');
	                     
	                     break;		
	}
}
