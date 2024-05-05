
//int(untuk bilangan bulat)	ex: int a=7;
//float untuk bilangan decimal atau yang menggunakan koma, ex: float b= 3,4;
//string unutk variabel yang menggunakan huruf  ex: string c= "zaky";

//conditional itu dimana kondisi yang menggunakan if dan else karena itu semua tergantung kondisi saja

//didalam sebuah struct itu ialah misal di dalam void display yang saya dibikin itu didalamnya ada struct dari mahasiswa, 
// nah struct dari mahasiswa ini yang menjadi variabel di dalam void display itu nanti


//sedangkan prosedur dan fungsi ialah seperti 
//void fungsi(){
// cout << " hello world " ;
//}
//kalau prosedur yaitu seperti 
// int main(){
//	fungsi();
// }

//looping itu yang menggunakan for(int i = 0; i <= 5; i++){}
// atau untuk mengetahui seberapa banyak jumlah data yang akan dimasukkan atau ditambahkan


#include <iostream>
using namespace std;

float c = 17.8;

struct mahasiswa
{
	string nama;
	int mtk;
	int ing;
	string status;
	float rerata;		
};

void input() {
	mahasiswa mhs[20]; //20 kandidat yang terdaftar
	
	for (int i = 0; i < 20; i++) 
	{
		cout << "Mahasiswa Ke - " << (i + 1) << endl;
		cout << "Masukkan Nama Mahasiswa = ";			//nama kandidat
		cin >> mhs[i].nama;
		cout << "Masukkan Nilai Matematika = ";			// nilai matematika
		cin >> mhs[i].mtk;
		cout << "Masukkan Nilai Bahasa Inggris = ";		// nilai bahasa inggris
		cin >> mhs[i].ing;
		mhs[i].rerata = (mhs[i].mtk + mhs[i].ing) / 2;		// untuk menghitung rerata
	
	}

	cout << "Nama Mahasiswa\t Status\n";
	for (int i = 0; i < 20; i++)
	{
		if (mhs[i].rerata >= 70 || mhs[i].mtk > 80) 
		{
			mhs[i].status = "\t\tDiterima\n";		//A. kalau nilai rerata lebih besaar atau samadengan 70 akan diterima atau nilai matematikanya adalah 80
			cout << mhs[i].nama << mhs[i].status;
		}
		else 
		{
			mhs[i].status = "\t\tDitolak\n";		//B. Mahasiswa baru akan ditolak klau tidak memenuhi salah satu syarat diatas
			cout << mhs[i].nama << mhs[i].status;
		}

	}


}

int main()
{
	 
	char ch;
	do {
		input();								// fungsi
		cout << "\n Continue search (y/n): ";
		cin >> ch;

	}while ((ch == 'y') || (ch == 'Y'));		//C. kondisi untuk mengulang program

}