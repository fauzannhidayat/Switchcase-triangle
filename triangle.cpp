#include <iostream>
using namespace std;

int main(){
  int n;
  int f;

cout << " masukkan panjang segitiga : ";
  cin >> n;

cout << "pilih pola : " << endl;
cin >> f;

  

switch(f){
  case 1:
    cout << " pola 1 " << endl;

  for(int i = 0; i <= n; i++ ){
    for(int j = 0; j<= i; j++){
      cout << "*";
    }
    cout << endl;
  }
  break;

  case 2:
  cout << " pola 2 " << endl;

  for(int i = 0; i <= n; i++ ){
    for(int j = n; j>= i; j--){
      cout << "*";
    }
    cout << endl;
  }    
  break;

  case 3:
    cout << "pola 3" << endl;

  for (int i = 1; i <= n; i++){
    for(int j=1; j < i; j++){
      cout << " ";
    }
    for(int k = n; k >=i; k--){
      cout << "*";
    }
    cout << endl;
  }
  break;

  case 4:
    cout << "pola 4 " << endl;

  for(int i = 1; i <= n; i++){
    for(int j = n; j>= i; j--){
      cout << " ";
    }
    for(int k = 1; k<=i; k++){
      cout << "*";
    }
    cout << endl;
  }
  break;

  default:
  cout << " tidak ada pola ";
  break;
}
  
  cin.get();
  return 0;
  
}
