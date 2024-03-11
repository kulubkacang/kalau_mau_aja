#include <iostream>

using namespace std;

int main() {
  int a, b, tambah, kurang, kali, bagi;
  cout <<"============"<< endl;
  cout <<"=KALKULATOR="<< endl;
  cout <<"============"<< endl;
  cout <<"Masukan : "; cin >> a;
  cout <<"Masukan : "; cin >> b;
  tambah = a + b;
  kurang = a - b;
  kali   = a * b;
  bagi   = a / b;
  cout <<"============"<< endl;
  cout <<"Hasil + : " << tambah << endl;
  cout <<"Hasil - : " << kurang << endl;
  cout <<"Hasil * : " << kali << endl;
  cout <<"Hasil / : " << bagi << endl;
  cout <<"============"<< endl;
  return 0;
}