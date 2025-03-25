#include <iostream>
using namespace std;

int main() {
  int valorAuto, cuotaIni, cuotaMen;
  cout << "Ingrese el valor del auto: " <<endl;
  cin >> valorAuto;
  cuotaIni = valorAuto * 0.35;
  cout << "Su pago Inicial es de: " << cuotaIni <<endl;
  cuotaMen = (valorAuto - cuotaIni)/18;
  cout << "El valor de la cuota mensual va a ser de: " << cuotaMen <<endl;
  return 0;
}
