
#include <iostream>
using namespace std;

int a[20];	// deklarasi array a dengan ukuran 20
int n;		// deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {		//prosedur untuk input
	while (true) {	//looping
		cout << "masukkan banyaknya elemen pada array : ";	//output ke layar
		cin >> n;											//input dari pengguna
		if (n <= 20)										//jika n kurang dari stau samadengan 20
			break;											//keluar dari loop
		else {												//jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";	//output ke layar
		}
	}
	cout << endl;		//output baris kosong
	cout << "==========" << endl; //output ke layr
	cout << "Masukkan Elemen Array" << endl; //output ke layar
	cout << "==========" << endl; //output ke layar

	for (int i = 0; i < n; i++) {				//looping dengan i dimulai dari 0 hingga n-1
		cout << "data ke-" << (i + 1) << ": ";	//output ke layar
		cin >> a[i];							//input dari pengguna
	}
