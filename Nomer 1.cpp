#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int max(int ang[10], bool status);

int main()
{
    int angka[10];
    int i;
    
    cout << "Masukkan 10 angka = " << endl;
    for (i=0 ; i < 10 ; i++)
    {
    	cin >> angka[i];
    }
    
    cout << "Angka terbesar = " << max(angka , false) << endl;
    cout << "Agnka terkecil = " << max(angka , true) << endl;
}

int max (int ang[10] , bool status)
{
	int besar = ang[0] , kecil = ang[0];
	int i;
	
	for (i = 0 ; i < 10 ; i++)
	{
		if (ang[i] > besar)
		{
		besar = ang[i];
		status == false;
		}
		else if (ang[i] < kecil)
		{
			kecil = ang[i];
			status == true;
		}
	}
	return (status) ? kecil : besar;
}
