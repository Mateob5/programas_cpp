#include <iostream>
using namespace std;

int main() {
  // Calculos para el queso
  int ingresoPorQ, precioQ;
  cout << "\n\n" << "Cantidad de quesos: "<<endl;
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
  cout << "Total ingreso por Leche Saborizada: " << ingresoPorLS <<endl;

  // Calculos para el yogurt
  int ingresoPorY, precioY;
  cout << "Cantidad de Yogurt: "<<endl;
  cin >> ingresoPorY;
  cout << "Precio unidad Yogurt: " <<endl;
  cin >> precioY;
  ingresoPorY *= precioY;
  cout << "Total ingreso por Yogurt: " << ingresoPorY <<endl;

  // Calculos para la mantequilla
  int ingresoPorM, precioM;
  cout << "Cantidad de Mantequilla: "<<endl;
  cin >> ingresoPorM;
  cout << "Precio unidad Mantequilla: " <<endl;
  cin >> precioM;
  ingresoPorM *= precioM;
  cout << "Total ingreso por Mantequilla: " << ingresoPorM <<endl;
  
  int ingresoTotal;
  ingresoTotal = ingresoPorLS + ingresoPorM + ingresoPorQ + ingresoPorY;
  cout << "Ingresos totales : " << ingresoTotal <<endl;

  //Utilidad Quesos
  int utilidadQ;
  utilidadQ = ingresoPorQ * 0.05;
  cout << "La utilidad para el queso fue de: " << utilidadQ <<endl;

  //Utilidad Leche Saborizada
  int utilidadLS;
  utilidadLS = ingresoPorLS * 0.12;
  cout << "La utilidad para el Leche Saborizada fue de: " << utilidadLS <<endl;

  //Utilidad Mantequilla
  int utilidadM;
  utilidadM = ingresoPorM * 0.06;
  cout << "La utilidad para el Mantequilla fue de: " << utilidadM <<endl;

  //Utilidad Yogurt

  int utilidadY;
  utilidadY = ingresoPorY * 0.15;
  cout << "La utilidad para el Yogurt fue de: " << utilidadY <<endl;
  
  //Utilidad general de la compañia
  int utilidadG, cantidadMes;
  utilidadG = utilidadQ + utilidadLS + utilidadM + utilidadY;
  cout << "Ingrese la cantidad de meses en los cuales se recibio dicha utilidad " <<endl;
  cin >> cantidadMes;
  cout << "La utilidad generada en " << cantidadMes << " Meses fue de " << utilidadG * cantidadMes <<endl;

  return 0;
}