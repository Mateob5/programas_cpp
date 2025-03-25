#include <iostream>
using namespace std;

int main() {
  // Calculos para el queso
  int ingresoPorQ, precioQ;
  cout << "Cantidad de quesos: "<<endl;
  cin >> ingresoPorQ;
  cout << "Precio unidad queso: " <<endl;
  cin >> precioQ;
  ingresoPorQ *= precioQ;
  cout << "Total ingreso por quesos: " << ingresoPorQ <<endl;

  // Calculos para la Leche Saborizada
  int ingresoPorLS, precioLS;
  cout << "Cantidad de Leche saborizada : "<<endl;
  cin >> ingresoPorLS;
  cout << "Precio unidad Leche saborizada : " <<endl;
  cin >> precioLS;
  ingresoPorLS *= precioLS;
  cout << "Total ingreso por quesos: " << ingresoPorLS <<endl;

  // Calculos para el yogurt
  int ingresoPorY, precioY;
  cout << "Cantidad de Yogurt: "<<endl;
  cin >> ingresoPorY;
  cout << "Precio unidad Yogurt: " <<endl;
  cin >> precioY;
  ingresoPorY *= precioY;
  cout << "Total ingreso por quesos: " << ingresoPorY <<endl;

  // Calculos para la mantequilla
  int ingresoPorM, precioM;
  cout << "Cantidad de Mantequilla: "<<endl;
  cin >> ingresoPorM;
  cout << "Precio unidad Mantequilla: " <<endl;
  cin >> precioM;
  ingresoPorM *= precioM;
  cout << "Total ingreso por quesos: " << ingresoPorM <<endl;
  
  int ingresoTotal;
  ingresoTotal = ingresoPorLS + ingresoPorM + ingresoPorQ + ingresoPorY;
  cout << "Ingresos totales : " << ingresoTotal <<endl;


  return 0;
}