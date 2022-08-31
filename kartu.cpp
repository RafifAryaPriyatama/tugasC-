#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *args[]){
	
	string kartu;
	string bonus;

   cout <<"Masukkan Kartu Anda Gold/Premium"<<endl;
   cin >> kartu;
   if (kartu=="Gold"||kartu=="gold"||kartu=="GOLD") {
      cout <<"\nPilih Bonus/Poin"<< endl;
      cin >> bonus;
      if (bonus=="Bonus") {
         cout << "\nKartu anda GOLD Selamat Bonus Anda Telah Diambil" << endl;      
		 } else {
         cout << "\nKartu anda GOLD Selamat Poin Anda Telah Masuk" << endl;      
		 }
   } else {
      cout <<"\nPilih Bonus/poin"<< endl;
      cin >> bonus;
      if (bonus=="Bonus") {
         cout << "\nKartu anda PREMIUM Selamat Bonus Anda Telah Diambil" << endl;    
		} else {
         cout << "\nKartu anda PREMIUM Selamat Poin Anda Telah Masuk" << endl;     
		}
   }
   return 0;
}
