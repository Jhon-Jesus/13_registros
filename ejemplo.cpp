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
    int n, maximo=0;
    float maxven;

    cout<<"Introduzca el numero total de empleados a registrar: ";
    cin>>n;

    for(int i=0;i<n;i++){
    cout<<"\nIntroduzca el numero de identificacion del empleado: ";
    cin>>EMPLEADOS[i].num;
    cin.ignore();
    cout<<"Introduzca el nombre del empleado: ";
    getline(cin,EMPLEADOS[i].nom);

    for(int j=0;j<12;j++){
        cout<<"Introduzca la venta obtenida de el: ";
        cin>>EMPLEADOS[i].ven[j];
        cout<<"Introduzca el salario del empleado: ";
        cin>>EMPLEADOS[i].sal;
    }

    }

      for (int i=0; i<n; i++) {
        float totven = 0;
        for (int j=0; j<12; j++) {
            totven += EMPLEADOS[i].ven[j];
        }
        if (totven>maxven) {
            maxven=totven;
            maximo=i;
        }

        if (totven>100) {
            EMPLEADOS[i].sal*=1.10;
        }
        cout<<"--------------------------------------------------\n";
        cout<<"Empleado "<<EMPLEADOS[i].num<<": "<<EMPLEADOS[i].nom<<endl;
        cout<<"Ventas mensuales: ";
        for (int j=0; j<12; j++) {
            cout<<EMPLEADOS[i].ven[j]<<" ";
        }
        cout<<"\nTotal ventas: "<<totven<<endl;

    }

    cout<<"\nEmpleado con mas ventas:"<<endl;
    cout<<"Numero: "<<EMPLEADOS[maximo].num<<endl;
    cout<<"Nombre: "<<EMPLEADOS[maximo].nom<<endl;



    return 0;
}
