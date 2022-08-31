#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *args[]) {
	string a;
	int b, c, bayar;

  	 cout << "Pilih go ride / go car" << endl;
   	 cin >> a;
   if (a=="Go Ride"||a=="go ride"||a=="GO RIDE") {
      cout << "Jarak yang ingin ditempuh" << endl;
      cin >> b;
      
      if (b<=5) {
         bayar =(5*2000)+5000;
         cout << "Total yang harus di bayar Rp "<<bayar << endl;     
		  
		} else {
			
        if (b<=10) {
            bayar =(10*2500)+7500;
            cout << "Total yang harus di bayar Rp "<<bayar << endl;         
		} else {
        if (b<=15) {
            bayar =(15*3000)+10000;
            cout << "Total yang harus di bayar  Rp "<<bayar << endl;            
		} else {
            cout << "MAAF ANDA TERLALU MENYIKSA  BENSIN SAYA" << endl;            }
        }
      }
	}  else {
        cout << "Jarak yang ingin ditempuh " << endl;
        cin >> c;
      
      	if (c<=5) {
         bayar =(5*3000)+15000;
         cout << "Total yang harus di bayar Rp "<<bayar << endl;      
	} else {
        if (c<=10) {
         bayar =(10*4500)+17500;
         cout << "Total yang harus di bayar Rp  "<<bayar << endl;         
	} else {
        if (c<=15) {
         bayar =(15*5000)+20000;
         cout << "Total yang harus di bayar Rp  "<<bayar << endl;            
	} else {
            cout << "MAAF ANDA TERLALU MENYIKSA PERTALITE SAYA" << endl;            }
         }
      }
   }

   return 0;
}
