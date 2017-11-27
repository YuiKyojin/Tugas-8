#include <iostream>

using namespace std;

int evenCount(int *numbersList);
int *getEven(int *numbersList);

int panjang = 0;

int main()
{
  int *even, count = 0;

  cout << "Masukkan Panjang Array = ";
  cin >> panjang;

    int number[panjang];

   for (int i = 0; i < panjang; i++) {
    cout << "Angka ke - " << i+1 << " = ";
    cin >> number[i];
  }

  count = evenCount(number);
  even = getEven(number);

  for (int i = 0; i < count; i++) {
    cout << endl << even[i] << " ";
  }

  if (count == 0) {
    cout << "Even Not Found";
  }
}

int evenCount(int *numbersList)
{
  int numLength = 0;
  for (int i = 0; i < length; i++) {
    if (numbersList[i] % 2 == 0) {
      numLength++;
    }
  }

  return numLength;
}

int *getEven(int *numbersList)
{
  int index = 0, *list = new int[evenCount(numbersList)];
  for (int i = 0; i < length; i++) {
    if (numbersList[i] % 2 == 0) {
      list[index] = numbersList[i];
      index++;
    }
  }
  return list;
}

