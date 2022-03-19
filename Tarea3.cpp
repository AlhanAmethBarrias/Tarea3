#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main (){
	char Signo, Opciones;  
    float Valor1, Valor2, Resultado;
	float MontoActual, Ingresos, Egresos;  
    string Usuario, Contraseya;
    
    MontoActual = 5000;
	Ingresos = 0;
	Egresos = 0;
	
	cout << " Usuario: ";
	cin >> Usuario;
	cout << " Contraseña: ";
	cin >> Contraseya;
	
	if (Usuario == "Alhan" && Contraseya == "11012001"){
		do{
			cout << " Nuestras opciones son: " << endl << endl;
			cout << " 1. Sumar "  << endl;
			cout << " 2. Restar " << endl;
			cout << " 3. Multiplicar " << endl;
			cout << " 4. Dividir " << endl;
			cout << " 5. Ingresos " << endl;
			cout << " 6. Egresos " << endl;
			cout << " 7. Salir " << endl << endl;
			cout << " Ingrese el número de la opción correspondiente que desea utilizar: ";
			cin >> Opciones;
			
			
			switch (Opciones){
				case '1': 
					cout << " Ingrese el primer número: ";
					cin >> Valor1;
					cout << " Ingrese el segundo número: ";
					cin >> Valor2;
					
					Resultado = Valor1 + Valor2;
					
					cout << " El resultado de " << Valor1 << " + " << Valor2 << " = " << Resultado << endl; 
				break;
				case '2':
					cout << " Ingrese el primer número: ";
					cin >> Valor1;
					cout << " Ingrese el segundo número: ";
					cin >> Valor2;
					
					Resultado = Valor1 - Valor2;
					
					cout << " El resultado de " << Valor1 << " - " << Valor2 << " = " << Resultado << endl;
				break;
				case '3':
					cout << " Ingrese el primer número: ";
					cin >> Valor1;
					cout << " Ingrese el segundo número: ";
					cin >> Valor2;
					
					Resultado = Valor1 * Valor2;
					
					cout << " El resultado de " << Valor1 << " * " << Valor2 << " = " << Resultado << endl;
				break;
				case '4':
					cout << " Ingrese el primer número: ";
					cin >> Valor1;
					cout << " Ingrese el segundo número: ";
					cin >> Valor2;
					
					if (Valor2 != 0){
						Resultado = Valor1 / Valor2;
					
						cout << " El resultado de " << Valor1 << " / " << Valor2 << " = " << Resultado << endl;
					}
					else {
						cout << " El resultado de " << Valor1 << " / " << Valor2 << " = Indeterminado" << endl;
					}
				break;
				case '5':
					cout << " Usted tiene un monto de: $" << MontoActual << endl << endl;
			
					cout << " Ingrese la cantidad a cobrar: $";
					cin >> Ingresos; 
				
					MontoActual = MontoActual + Ingresos;	
				break;
				case '6':
					cout << " Usted tiene un monto de: $" << MontoActual << endl << endl;
			
					cout << " Ingrese la cantidad a pagar: $";
					cin >> Egresos;
					
					if (Egresos > MontoActual){
						cout << " Lo sentimos, usted tiene un saldo insuficiente" << endl;
					}
					else {
						MontoActual = MontoActual - Egresos;
					}	
				break;
				case '7':
					//Saliendo del ciclo.
				break;
				default: 
					cout << " El valor ingresado no es válido, intente de nuevo." << endl;
				break;	
			}
		}while(Opciones == '1' || Opciones == '2' || Opciones == '3' || Opciones == '4' || Opciones == '5' || Opciones == '6');	
	}
	else {
		cout << " Las claves ingresadas no son válidas" << endl;
	}
	cout << endl << endl;
	cout << " ¡Gracias por utilizar nuestro sistema! "; 
	return 0;
}
