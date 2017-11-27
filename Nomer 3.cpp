#include <iostream>

using namespace std;

int *getFibbo();
float getAverage(int *fibbo);

int length = 0;

int main()
{
  int *fibbo;

  cout << "Masukkan Panjang Fibbonaci = ";
  cin >> length;

  fibbo = getFibbo();

  for (int i = 0; i < length; i++) {
    cout << fibbo[i] << " ";
  }
  cout << endl << "Rata - Rata = " << getAverage(fibbo);
}

float getAverage(int *fibbo)
{
  float count = 0;

  for (int i = 0; i < length; i++) {
    count += fibbo[i];
  }

  return count / length;
}

int *getFibbo()
{
  int *fibbo = new int[length];

  for (int i = 0; i < length; i++) {
    fibbo[i] = (i < 2) ? 1 : fibbo[i - 2] + fibbo[i - 1];
  }

  return fibbo;
}
