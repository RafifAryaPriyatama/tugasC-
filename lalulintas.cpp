#include <iostream>
#include <string>

using namespace std;

int main (int argc, char const *args[]){
	string lampu;
	
	cout<<"Pilih Warna Lampu(HIJAU/MERAH) cepetan PILIH SU"<<endl;
	cin>>lampu;
	
	if (lampu=="HIJAU"||lampu=="Hijau"||lampu=="hijau"){
		cout<<"\nCEPETAN JALAN ANJING"<<endl;
	} else {
		cout<<"\nBERHENTI COKK"<<endl;
	}
}
