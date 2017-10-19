#include<iostream>
using namespace std;

float checarnumero(float n) {
  int nuevo;
  nuevo=n;
  if(n<0){
    cout<<"El valor que quieres evaluar es negativo, así que no puede tener una raiz cuadrada real"<<endl;
    cout<<"Dame un valor que sea positivo"<<endl;
    cin>>nuevo;
    if(nuevo<0){
      cout<<"El valor que quieres evaluar es negativo, así que no puede tener una raiz cuadrada real"<<endl;
      cout<<"Dame un valor que sea positivo"<<endl;
      nuevo=checarnumero(nuevo);
    }
}
return nuevo;
}

float raiz (int x){
  float b, y;
  b=x;
  if(b==x/b){
  y=b;
  }else{ for(int i=0; i<10 ; i++) {
      b=((x/b)+b)/2;
      y=b;
    };
return y;
}
}
int main() {
  float numero, raizcalculada;
  cout<<"Vamos a calcular la raíz cuadrada de un numero utilizando el método babilonico"<<endl;
  cout<<"Dame un número"<<endl;
  cin>>numero;

  numero=checarnumero(numero);
  raizcalculada=raiz(numero);

  cout<<"La raíz cuadrada de "<< numero << " es: "<< raizcalculada<< endl;

  return 0;
}
