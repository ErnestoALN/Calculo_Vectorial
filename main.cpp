#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

//operación para la suma 2D
void suma_3D(char x1, char y1, char x2, char y2, char x3, char y3){
  int x_1, x_2, y_1, y_2,x_3,y_3;
  
  cout << "Ingrese El vector 1 (x1 y y1)" << endl;
  cin >> x1;
  cin >> y1;
  cout << "Ingrese El vector 2 (x2 y y2)" << endl;
  cin >> x2;
  cin >> y2;
    cout << "Ingrese El vector 3 (x3 y y3)" << endl;
  cin >> x3;
  cin >> y3;
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  x_3 = x3 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
  y_3 = y3 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;
  cout << "R => (" << x_1+x_2+x_3 << "," << y_1+y_2+y_3 << ")" << endl; 
}

//operación para la suma 3D
void suma_2D(char x1, char y1, char x2, char y2){
  int x_1, x_2, y_1, y_2;
  
  cout << "Ingrese El vector 1 (x1 y y1)" << endl;
  cin >> x1 ;
  cin >> y1;
    cout << "Ingrese El vector 2 (x2 y y2)" << endl;
  cin >> x2;
  cin >> y2;
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 << ")"<< endl;
  cout << "R => (" << x_1+x_2 << "," << y_1+y_2 << ")" << endl; 
}

//operación para la resta 2D
void resta_2D(char x1, char y1, char x2, char y2){
  float x_1, x_2, y_1, y_2;
  
  cout << "Ingrese El vector 1 (x1 y y1)" << endl;
  cin >> x1;
  cin >> y1;
    cout << "Ingrese El vector 2 (x2 y y2)" << endl;
  cin >> x2;
  cin >> y2;
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;

cout << "resta: " << "("<< x1 << "," << y1 << ")-("<< x2 << "," << y2 << ")"<< endl;
  cout << "R => (" << x_1-x_2 << "," << y_1-y_2 << ")" << endl; 
}

//operación para la resta 3D
void resta_3D(char x1, char y1, char x2, char y2, char x3, char y3){
  int x_1, x_2, y_1, y_2,x_3,y_3;
  
  cout << "Ingrese El vector 1 (x1 y y1)" << endl;
  cin >> x1;
  cin >> y1;
  cout << "Ingrese El vector 2 (x2 y y2)" << endl;
  cin >> x2;
  cin >> y2;
    cout << "Ingrese El vector 3 (x3 y y3)" << endl;
  cin >> x3;
  cin >> y3;
  x_1 = x1 - 48;
  x_2 = x2 - 48;
  x_3 = x3 - 48;
  y_1 = y1 - 48;
  y_2 = y2 - 48;
  y_3 = y3 - 48;
//impresión que indica que es un vector
  cout << "suma: " << "("<< x1 << "," << y1 << ")+("<< x2 << "," << y2 <<  ")+("<< x3 << "," << y3 << ")"<< endl;
  cout << "R => (" << x_1+x_2+x_3 << "," << y_1+y_2+y_3 << ")" << endl; 
}

//operación para la multilplicación por escalar
void escalar_2D(char escalar, char x, char y){
  float _x, _y, _escalar;
  cout << "ingrese su vector: (x1,y1)" << endl;
  cin >> x; 
  cin >> y;
  cout << "ingrese su escalar para multiplicar" << endl;
  cin >> escalar;
  _x = x - 48;
  _y = y - 48;
  _escalar = escalar - 48;
  cout << "Multi: " << "("<< escalar << ")*("<< x << "," << y << ")"<< endl;
  cout << "R => (" << _x*_escalar  << "," << _y*_escalar << ")" << endl;
}
//escalar 3D
void escalar_3D(char escalar, char x, char y, char z){
  float _x, _y,_z, _escalar;
  cout << "ingrese su vector: (x1,y1,z1)" << endl;
  cin >> x; 
  cin >> y;
  cin >> z;
  cout << "ingrese su escalar para multiplicar" << endl;
  cin >> escalar;
  _x = x - 48;
  _y = y - 48;
  _z = z -48;
  _escalar = escalar - 48;
  cout << "Multi: " << "("<< escalar << ")*("<< x << "," << y <<  "," << z <<")"<< endl;
  cout << "R => (" << _x*_escalar  << "," << _y*_escalar  << ","  << _z*_escalar << ")" << endl;
}

//modulo o norma de vectores 2d
void modulo(char x, char y){
    float _x, _y, _escalar;
  cout << "ingrese su vector: (x1,y1)" << endl;
  cin >> x; 
  cin >> y;
  _x = x - 48;
  _y = y - 48;

cout << "|A|: " << "√" << x <<"² + " << y << "²"<< endl;
  cout << "|A|: " << sqrt(pow(_x, 2) + pow(_y, 2)) << endl;
}

//modulo 3d
void modulo_3D(char x, char y, char z){
    float _x, _y,_z, _escalar;
  cout << "ingrese su vector: (x1,y1,z1)" << endl;
  cin >> x; 
  cin >> y;
  cin >> z;
  _x = x - 48;
  _y = y - 48;
  _z = z - 48;
cout << "|A|: " << "√" << x <<"² + " << y << "² + " << z << "²"<< endl;
  cout << "|A|: " << sqrt(pow(_x, 2) + pow(_y, 2) + pow(_z, 2)) << endl;
}

//operación para los tokens
void print_tokens(char *tokens, int size){
  for(int i = 0; i < size; i++){
    cout <<"["<<i<<"]"<< tokens[i] << endl;  
  }
}

int main() {
  // se abre el menú para poder tener la operación
  int oper = 0;
  cout << "Que operación desea realizar ?" << endl;
  cout << "suma de vectores 2D           -1" << endl;
  cout << "resta de vectores 2D          -2" << endl;
  cout << "multiplicación de vectores 2D -3" << endl;
  cout << "Modulo o norma de vectores 2D -4" << endl;
  cout << "suma de vectores 3D           -5" << endl;
  cout << "Modulo o norma de vectores 3D -6" << endl;
  cin >> oper;
   
 switch(oper) {
      case 1: {
    cout << "Suma de vectores 2D" << endl; 
  string vw = "(0,0)+(0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
  
   if(tamano == 11 && tokens[5] == '+'){ // Suma 2D
    // Suma
    suma_2D(tokens[1], tokens[3], tokens[7], tokens[9]);
   }else{
     cout << "La operación ha fallado" << endl;
   }
   cout << "Tamaño: " << tamano << endl;
   }
   break;
      case 2:{
  cout << "Resta de vectores 2D" << endl; 
  string vw = "(0,0)+(0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
  
   if(tamano == 11 && tokens[5] == '+'){ 
    // resta
    resta_2D(tokens[1], tokens[3], tokens[7], tokens[9]);
   }else{
     cout << "La operación ha fallado" << endl;
   }
   cout << "Tamaño: " << tamano << endl;
   }
     break;
      case 3:{
    cout << "multiplicación de vectores 2D" << endl;
      string vw = "(0,0)+(0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
    escalar_2D(tokens[0], tokens[2], tokens[4]);
      }
         break;
      case 4:{
        cout << "Modulo o Norma de vectores 2D" << endl;
         string vw = "(0,0)+(0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
         cout << "Norma" << endl;
    modulo(tokens[2], tokens[5]);
    }
         break;
      case 5:{
     cout << "Suma de vectores 3D" << endl; 
  string vw = "(0,0)+(0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
  
   if(tamano == 11 && tokens[5] == '+'){
    suma_3D(tokens[1], tokens[3], tokens[7], tokens[9], tokens[12], tokens[15]);
   }else{
     cout << "La operación ha fallado" << endl;
   }
   cout << "Tamaño: " << tamano << endl;
   }
         break;
      case 6:{
          cout << "Modulo o Norma de vectores 2D" << endl;
         string vw = "(0,0,0)+(0,0,0)";
  int tamano = vw.length();
  char tokens[tamano + 1];
  strcpy(tokens, vw.c_str());
         cout << "Norma" << endl;
    modulo_3D(tokens[2], tokens[5], tokens [8]);
      }
         break;  
      default :
         cout << "Operación invalida" << endl;
   }
   cout << "La operación que escribiste fue: " << oper << endl;

}
