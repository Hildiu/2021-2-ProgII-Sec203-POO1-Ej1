/*----------------------------------------------
 * Dato de Entrada: largo, ancho (double)
 * Dato de Salida: area, perimetro (double)
 ----------------------------------------------*/

#include "CRectangulo.h"

int main()
{
   CRectangulo   R1;  //--- invoncando al constructor por defecto
   tnumero l, a;

   cout << "Largo : "; cin >> l;
   cout << "Ancho : "; cin >>a;
   R1.setLargo(l);
   R1.setAncho(a);
   cout << "El perimetro es : " << R1.perimetro() << "\n";
   cout << "El area es      : " << R1.area() << "\n";
   cout << "\n\n";
   CRectangulo R2(45,25);
   cout << "El perimetro es : " << R2.perimetro() << "\n";
   cout << "El area es      : " << R2.area() << "\n";

   cout << "\nIngrese datos para el tercer objeto\n";
   cout << "Largo : "; cin >> l;
   cout << "Ancho : "; cin >>a;

   CRectangulo R3(l,a);
  cout << "El perimetro es : " << R3.perimetro() << "\n";
  cout << "El area es      : " << R3.area() << "\n";
  cout << "Ahora modificamos los valores de largo y ancho de R3" << "\n";
  //--- modifico el valor del l  de tal manera que sea 50 unidades mas
  R3.setLargo(R3.getLargo() + 50);
  R3.setAncho(R3.getAncho() - 5);
  cout << "El perimetro es : " << R3.perimetro() << "\n";
  cout << "El area es      : " << R3.area() << "\n";
  return 0;
}
