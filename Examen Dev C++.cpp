#include<iostream>
using namespace std;
main()
{
    int opcion,numEstudiantes=0;// contador de estudiantes registrados
    int contadorArribaPromedio=0;// contador de calificaciones por encima del promedio
    float calificacion,suma=0;
    do
    {
	    cout<<"\n\t\t\t menu"<< endl;
	    cout<<"\t\t\t 1.ingresar calificaciones"<< endl;
	    cout<<"\t\t\t 2.calcular promedio"<< endl;
	    cout<<"\t\t\t 3. mostrar cuantas calificaciones estan por encima por promedio"<< endl;
	    cout<< "\t\t\t 4. salir"<< endl;
	    cout<< "\t\t\t seleccione una opcion";
	    cin>> opcion;
	    switch (opcion)
        {
            case 1: 
            cout<<"¿cuantos estudiantes desea ingresar?";
            cin>>numEstudiantes;
            while (numEstudiantes<=0//validar numero positivo)
            {
            	cout<< "por favor, ingrese un numero valido de estudiantes:";
            	cin>> numEstudiantes;
			}
            suma=0;//ingresar calificaciones de cada estudiante//reiniciar la suma para recalcular
            for(int i=0; i<numEstudiantes; i++)//float calificacion;
            cout<<"ingrese la calificacion del estudiante"<< i + 1<<":";
            cin>>calificacion;
            while(calificacion<0||calificacion>100)//validar rango de calificacion;
            {
                cout<<"la calificacion debe estar entre 0 y 100. ingrese nuevamente";
                cin>>calificacion;
                {
                    suma=suma + calificacion;//acumular la suma de las calificaciones//suma+=calificacion;
                    {
                        break;
                    }
                    case 2:
                    if(numEstudiantes==0)
                    {
                        cout<<"\n\t\t\t no hay calificaciones ingresadas aun."<< endl;
                    }
                    else
                    {
                        float promedio=suma/numEstudiantes;
                        cout<<"el promedio de las calificaciones es:"<< promedio<< endl;
                        {
                            break;
                        }
                        case 3:
                        if(numEstudiantes==0)
                        {
                            cout<<"no hay calificaciones ingresadas aun."<< endl;
                            {
                                else
                                {
                                    float promedio=suma/numEstudiantes;
                                    contadorArribaPromedio=0;//reiniciar el contador
                                    for(int i=0; i<numEstudiantes; i++)
                                    {
                                        if(calificacion>promedio)//contar cuantas calificaciones estan por encima del promedio contadorArribaPromedio++;
                                    }
                                    cout<<"hay"<<contadorArribaPromedio<<"calificaciones por encima del promedio."<< endl;
                                    {
                                        break;
                                    }
                                    case 4:
                                    cout<<"\t\t\t\t\t saliendo del programa"<< endl;
                                    break;
                                    default:
                                    cout<<"opcion invalida. intente de nuevo."<< endl;
                                    {
                                        while(opcion!=4);
                                    }

                                }
                            }
                        }
                    }
                    
                }
            }
        }

    }
}
