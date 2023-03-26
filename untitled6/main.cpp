#include <iostream>

using namespace std;

int main() {
int op = 0;
    cout<<"opciones a elegir"<<endl;
    cout<<"Opcion1: MAYOR O MENOR DE EDAD: "<<endl;
    cout<<"Opcion2: NUMERO MAYOR O MENOR:"<<endl;
    cout<<"Opcion3: NUMERO PAR O IMPAR"<<endl;
    cout<<"Opcion4: FACTORIAL DE UN NUMERO"<<endl;
    cout<<"Opcion5: NUMERO IMPAR EN RANGO 10 AL 30"<<endl;
    cout<<"Opcion6: DIA DE LA SEMANA"<<endl;
cout <<"ingrese la opcion"<<endl;
cin>> op;
    switch (op) {
        case 1: cout << "Usted ha seleccionado la opcion 1"<<endl;
            int edad;
            cout<<"ingrese su edad: ";cin>>edad;
            if(edad>=18){
                cout<<"usted es mayor de edad";
            }
            else if(edad<18){
                cout<<"usted es menor de edad ";
                return 0;
            }
        case 2: cout << "Usted ha seleccionado la opcion 2"<<endl;

        int num1,num2;
                cout<<"ingrese numero 1:";
                cin>>num1;
                cout<<"ingrese numero 2:";
                cin>>num2;
                if(num1==num2)
                    cout<<"Son iguales";
                else
                {
                    if(num1 > num2)
                        cout<<" el mayor es:"<<num1;
                    else
                        cout<<" el mayor es:"<<num2;
                }
                return 0;
        case 3: cout << "Usted ha seleccionado la opcion 3"<<endl;
            int n;
            cout << "ingrese el numero: ";
            cin >> n;
            if ( n % 2 == 0)
                cout << n << " es par.";
            else
                cout << n << " es impar.";
            return 0;
        case 4: cout << "Usted ha seleccionado la opcion 4"<<endl;
        int fac, i;
            cout << "Introduce un número: ";
            cin >> n;
            fac=1;
            for(i=1;i<=n;i++)
                fac = fac * i;
            cout << endl << "Factorial de " << n << "  es:  " << fac  << endl;



            return 0;
        case 5: cout << "Usted ha seleccionado la opcion 5"<<endl;
            int imp;
        cout<<"Ingrese un numero: "<<endl;
            cin>>imp;
            if (imp >10 && imp < 30)
            {
                while(i<=imp){
                    if (i % 2!= 0){
                        cout<<i<<",";

                    }
                    i++;
                }

            }
            else {
                    cout<<"El Numero a Operar no es Valido";
            }
            return 0;
        case 6: cout << "Usted ha seleccionado la opcion 6"<<endl;
            int dia;
            cout<<"INGRESE NUMERO PARA DIA DE LA SEMANA";
            cin>>dia;
            switch(dia){
                case 1:
                    cout<<"Dia lunes";
                case 2:
                    cout<<"Dia Martes";
                case 3:
                    cout<<"Dia Miercoles";
                case 4:
                    cout<<"Dia Jueves";
                case 5:
                    cout<<"Dia Viernes";
                case 6:
                    cout<<"Dia Sabado";
                case 7:
                    cout<<"Dia Domingo";
            }
        default: cout << "Usted ha ingresado una opcion incorrecta";
            }
    return 0;
    }




