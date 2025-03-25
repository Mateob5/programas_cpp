#include <iostream>
using namespace std;

int main() {
  int valorAuto, cuotaIni, cuotaMen, valorRest;
  cout << "Ingrese el valor del auto: " <<endl;
  cin >> valorAuto;
  cuotaIni = valorAuto * 0.35;
  cout << "El valor para el pago Inicial es: " << cuotaIni <<endl;
  valorRest = valorAuto - cuotaIni;
  cuotaMen = (valorRest + (valorRest*0.12))/36;
  cout << "Valor de la cuota mensual a 36 meses con intereses: " << cuotaMen <<endl;
  return 0; 
}