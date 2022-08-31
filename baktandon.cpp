#include <iostream>

using namespace std;
int main (int argc, char const *args[]){

int p,l,tb,r,tt;
float phi, Volume, vt, vb;
phi = float (22)/7;

cout<<"Menghitung Volume Bak Mandi"<<endl;
cout<<"Panjang : ";
cin>>p;
cout<<"Lebar : ";
cin>>l;
cout<<"Tinggi : ";
cin>>tb;
vb = p * l * tb;
cout<<"Volume Bak tersebut adalah  "<<vb<<endl;

cout<<"\nMenghitung Volume Tandon"<<endl;
cout<<"Jari-jari: ";
cin>>r;
cout<<"Tinggi : ";
cin>>tt;
vt = phi * r * r * tt;
cout<<"Volume Bak tersebut adalah "<<vt<<endl;

Volume = vb + vt;
cout<<"\nVolume Total adalah "<<Volume<<endl;
}
