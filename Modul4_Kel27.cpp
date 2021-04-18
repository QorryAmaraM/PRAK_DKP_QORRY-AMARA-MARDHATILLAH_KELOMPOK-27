#include <iostream>
using namespace std;
void X(){
	string judul = "##### Luas Persegi #####";
	int sisi,LP;
	cout<<judul<<endl;
	cout<<"masukan nilai sisi =";cin>>sisi;
		LP=sisi*sisi;
		cout<<"\nLuas persegi ="<<LP;
	}
	string Y(){
	string judul2 ="##### Luas persegi panjang #####";
	int panjang,lebar,LPP;
	cout<<"masukan nilai lebar =";cin>>lebar;
	cout<<"masukan nilai panjang =";cin>>panjang;
		LPP=panjang*lebar;
		cout<<"\nLuas persegi panjang ="<<LPP;
	
}
	class MyClass {
	public:
	void non_return_method(string kelompok) {
	cout << "Selamat Datang Di Program Kelompok " << kelompok;
	}
};
int main(){
		char pilih, ulang;
	do{
		MyClass myObj;
		myObj.non_return_method("27"); 
		cout<<".\n";
		cout<<"Mencari Luas persegi dan persegi panjang\n\n";
		cout<<"1.Luas persegi\n";
		cout<<"2.Luas persegi panjang\n";
		cout<<"pilih(1,2) =";cin>>pilih;
		switch(pilih){
			case '1' :
				X();
				break;
			case '2' :
				Y();
				break;
			default :
				cout<< "Maaf angka yang anda pilih tidak tersedia dalam program ini\n;";
			}
		cout<<"\n\nIngin Mengulang Perhitungan ?(y/n)=";cin>>ulang;
	} 
	while(ulang=='y'||ulang=='Y');
}
