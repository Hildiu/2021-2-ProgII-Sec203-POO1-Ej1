//
// Created by MARIA HILDA BERMEJO RIOS on 11/2/21.
//

#ifndef PROG_II_SEC_203_2_DENOVIEMBRE_CRECTANGULO_H
#define PROG_II_SEC_203_2_DENOVIEMBRE_CRECTANGULO_H

#include <iostream>
using namespace std;

using tnumero = double;

class CRectangulo
{
  private:
     tnumero largo;
     tnumero ancho;
  public:
    CRectangulo() { }   //--- constructor por defecto, solo creal el objeto
    CRectangulo( tnumero _largo, tnumero _ancho): largo(_largo), ancho(_ancho) {};  //-- constructor
    virtual ~CRectangulo() { cout << "\nDestruyendo el objeto!!!! "; };
    //------ otros metodos
    tnumero area();
    tnumero perimetro();
    //--- metodos de acceso
    void setLargo(tnumero _largo) {  largo = _largo;}
    tnumero getLargo(){ return largo;}
    void setAncho(tnumero _ancho) { ancho = _ancho; }
    tnumero getAncho() { return ancho;}
};


#endif //PROG_II_SEC_203_2_DENOVIEMBRE_CRECTANGULO_H
