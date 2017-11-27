#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
	int a[3][3];
	int b[3][3];
	int kali[3][3];
	int i, j, k;
	int temp;
	
	//Matriks pertama
	cout << "Matrix 1st :" << endl;
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cin >> a[i][j];
		}
		
	}
	
	//Matriks kedua
	cout << "Matrix 2nd :" << endl;
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cin >> b[i][j];
		}
	}
	
	//perkalian Matriks
	for (i=0 ; i<3 ; i++){
		for (j=0 ; j<3 ; j++){
			temp = 0;
			for (k=0 ; k<3 ; k++ )
			{
				temp += a[i][k] * b[k][j];
			}
			kali[i][j] = temp;	
		}
	}
	cout << "Output" << endl;
	for (i=0 ; i<3 ; i++)
	{
		for (j=0 ; j<3 ; j++)
		{
			cout << kali[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
