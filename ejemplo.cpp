#include <iostream>
#include <string>
using namespace std;
struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};

int main(){
    EMP EMPLEADOS[100];
    int n;
    cout<<"Introduzca el numero total de empleados a registrar: ";
    cin>>n;

    for(int i=0;i<n;i++){
    cout<<"\nIntroduzca el numero de identificacion del empleado: ";
    cin>>EMPLEADOS[i].num;
    cin.ignore();
    cout<<"Introduzca el nombre del empleado: ";
    getline(cin,EMPLEADOS[i].nom);


    cout<<"Introduzca el salario del empleado: ";
    cin>>EMPLEADOS[i].sal;
    for(int j=0;j<12;j++){

        cout<<"Introduzca la venta obtenida de el: ";
        cin>>EMPLEADOS[i].ven[j];
    }

    }

    return 0;
}
