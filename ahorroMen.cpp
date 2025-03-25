#include <iostream>
using namespace std;

int main() {
  double ingresoMen, gastoMen, ahorroMen, ahorroAn, ahorroAdi, Y, incrementoA, porcentageGa;
  for (int i=1; i<=3; i++) {
    double nuevoIn;
    cout << "Ingrese valor de ingreso " << i << " de 03: " <<endl;
    cin >> nuevoIn;
    ingresoMen += nuevoIn;
  }
  cout << "Su ingreso mensual fue de " << ingresoMen <<endl;
  for (int i=1; i<=4; i++) {
    double nuevoGa;
    cout << "Ingrese valor de gasto " << i << " de 04: " <<endl;
    cin >> nuevoGa;
    gastoMen += nuevoGa;
  }
  cout << "Su gasto mensual fue de " << gastoMen <<endl;
  ahorroMen = ingresoMen - gastoMen;
  cout << "Su ahorro mensual fue de " << ahorroMen <<endl;
  ahorroAn = ahorroMen * 12;
  cout << "Su ahorro anual fue de " << ahorroAn <<endl;
  cout << "Ingrese el valor que desea alcanzar en ahorro en 12 meses: " <<endl;
  cin >> Y;
  ahorroAdi = (Y/12);
  cout << "Usted lo lograra ahorrando: " << ahorroAdi << " Mensualmente " <<endl;
  incrementoA = ahorroAn * 1.10;
  cout << "Si quiere crecer sus ahorro un 10 porciento mas el proximo debe ahorra " << incrementoA <<endl;
  porcentageGa = ((gastoMen*12)/(ingresoMen*12))*100 ;
  cout << "Sus gastos representan el siguiente porcentaje con respecto a sus ingresos: " << porcentageGa <<endl;
  return 0;
}