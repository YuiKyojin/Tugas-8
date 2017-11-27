#include <iostream>

using namespace std;

// Prototype
bool cekangka(int angka);

int main()
{
  int angka = 0;

  cout << "Masukkan Angka = ";
  cin >> angka;

  if (cekangka(angka)) {
    cout << "Angka ini Perfect" << endl;
  }
  else {
    cout << "Angka ini bukan Perfect" << endl;
  }
}

bool cekangka(int angka)
{
  int count = 0;
  bool status = true;

   for (int i = 1; i < angka; i++) {
    if (angka % i == 0) {
      count += i;
    }
  }
  return (count != angka) ? false : status;
}

