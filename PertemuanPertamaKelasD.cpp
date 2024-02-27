#include <iostream>
using namespace std;

int main()
{
	//begin
	//numeric nAlas, nTinngi, nLuas
	//display 'masukkan alasnya= '
	//accept nAlas
	//display 'masukkan tingginya= '
	//accept nTinggi
	//compute nLuas = 1/2 * nAlas * nTinggi
	//display 'luasnya adalah= ' + nLuas
	//end

	int nAlas, nTinggi;
	double nLuas;
	cout << "Masukkan Alasnya = ";
	cin >> nAlas;
	cout << "Masukkan Tingginya= ";
	cin >> nTinggi;
	nLuas = 0.5 * nAlas * nTinggi;
	cout << "Luasnya Adalah= " << nLuas << endl;

	int nPanjang, nLebar, nLuas;

	system("pause");
}
