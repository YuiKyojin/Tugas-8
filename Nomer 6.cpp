#include <iostream>
using namespace std;

float avg(int inputnumber[10] , bool status);

int main ()
{
	int inputnumber[10];
	int i;
	
	//input angka dalam array
	cout << "input any number = " << endl;
	for (i=0 ; i<10 ; i++)
	{
		cin >> inputnumber[i];
	}
	
	cout << "Rata-rata Angka positif = " << avg(inputnumber, true) << endl;
	cout << "Rata-rata angka positif = " << avg(inputnumber, false) << endl;
}
//fungsi menghitung rata2 
float avg(int inputnumber[10] , bool status){

	float positif = 0, negatif = 0, npositif = 0, nnegatif = 0, hasil1 = 0, hasil2 = 0;
	
	for (int i=0 ; i<10 ; i++)
	{
		if (inputnumber[i]>0){
		positif += inputnumber[i];
		npositif++;
		hasil1 = positif / npositif;
		status == true;
		}
		else
		{
		negatif += inputnumber[i];
		nnegatif++;
		hasil2 = negatif / nnegatif;
	 	status == false;
		}
	}
	return (status) ? hasil1 : hasil2;
}
