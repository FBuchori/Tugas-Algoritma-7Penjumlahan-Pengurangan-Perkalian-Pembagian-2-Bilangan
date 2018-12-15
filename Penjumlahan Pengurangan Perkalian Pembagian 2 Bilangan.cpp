#include<iostream>
using namespace std;

int penjumlahan(){
	int a,b;
	cout<<"\n Penjumlahan";
	cout<<"\n Masukkan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukkan Nilai Bilangan b = ";
	cin>>b;
	cout<<"\n Hasil Penjumlahan = "<<a+b;
}

int pengurangan(){
	int a,b;
	cout<<"\n Pengurangan";
	cout<<"\n Masukkan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukkan Nilai Bilangan b = ";
	cin>>b;
	cout<<"\n Hasil Pengurangan = "<<a-b;
}

int perkalian(){
	int a,b;
	cout<<"\n Perkalian";
	cout<<"\n Masukkan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukkan Nilai Bilangan b = ";
	cin>>b;
	cout<<"\n Hasil Perkalian = "<<a*b;
}

int pembagian(){
	int a,b;
	cout<<"\n Pembagian";
	cout<<"\n Masukkan Nilai Bilangan a = ";
	cin>>a;
	cout<<"\n Masukkan Nilai Bilangan b = ";
	cin>>b;
	cout<<"\n Hasil Pembagian = "<<a/b;
}

int main(){
	cout<<endl;
	penjumlahan();
	pengurangan();
	perkalian();
	pembagian();
	cout<<endl;
	system("pause");
	
}
