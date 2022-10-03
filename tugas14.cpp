#include <iostream>

using namespace std;

int main(){
	struct rumah{
		string tipe;
		int kamar;
	};
	
	rumah r1;
	r1.tipe = "A9";
	r1.kamar = 2;
	string *tipe = &r1.tipe;
	int *kamar = &r1.kamar;
	
	cout<<"Tipe Rumah : "<<r1.tipe<<endl;
	cout<<"Jumlah Kamar : "<<r1.kamar<<endl;
	cout<<"\n";
	cout<<"---Alamat Memori---"<<endl;
	cout<<"Tipe Rumah : "<<tipe<<endl;
	cout<<"Jumlah Kamar : "<<kamar;
}
