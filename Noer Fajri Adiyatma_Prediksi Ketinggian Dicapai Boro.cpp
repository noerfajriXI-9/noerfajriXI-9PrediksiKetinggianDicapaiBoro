#include <bits/stdc++.h>
using namespace std;
//tinggimax=v^2*sin*^2s/20
int main(){
	float s, v, t;
	int status=0;
	cout << "Masukkan Sudut : ";
	cin >> s;
	cout << "Masukkan Kecepatan : ";
	cin >> v;
	cout << "Masukkan Waktu : ";
	cin >> t;
	float sinA = sin(s * 22 /7 / 100);
	float hasil = (( pow(v,2) ) *  ( pow(sinA,2) ) ) / 20;
	if(t<=hasil){
		status++;
		cout<<"Status : " << status <<endl<< "Ketinggian : " << hasil;
	}
	else{
		cout<<"Status : " << status <<endl<< "Ketinggian : " << hasil;
	}
}
