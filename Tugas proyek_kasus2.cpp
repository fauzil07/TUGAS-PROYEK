#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
   string nama[10];
   long int nik;
   int jum, gol[10],jkerja[10],jlembur[10];
   int gapok[10],glembur[10],totgaji[10];
	cout<<"========== Program Menghitung Gaji Karyawan Setiap Minggu pada CV. ABC ==========";
	cout<<endl<<endl<<endl;
   cout<<"Masukan Jumlah Karyawan  : ";
   cin>>jum;
   cout<<endl;
	
   for (int i=1;i<=jum;i++){
        cout<<"KARYAWAN KE-"<<i<<endl;
    cout<<"Masukkan NIK(Nomor Induk Pegawai)   : ";
    cin>>nik;
	cout<<"Masukan Nama                        : ";
	cin>>nama[i];
	cout<<"Masukan Golongan                    : ";
	cin>>gol[i];
	cout<<"Masukan Jumlah Jam Kerja            : ";
	cin>>jkerja[i];
	if (jkerja[i]>40){
	    jlembur[i]=jkerja[i]-40;	
	}else{
	     jlembur[i]=0;
	}
	
	switch (gol[i]){
		case 1 : 
			gapok[i]=3000*jkerja[i];
			glembur[i]=jlembur[i]*1.5*3000;
			totgaji[i]=gapok[i]+glembur[i];
			break;
		case 2 :
			gapok[i]=3500*jkerja[i];
			glembur[i]=jlembur[i]*1.5*3500;
			totgaji[i]=gapok[i]+glembur[i];
			break;
		case 3 :
			gapok[i]=4000*jkerja[i];
			glembur[i]=jlembur[i]*1.5*4000;
			totgaji[i]=gapok[i]+glembur[i];
			break;
		case 4 :
			gapok[i]=5000*jkerja[i];
			glembur[i]=jlembur[i]*1.5*5000;
			totgaji[i]=gapok[i]+glembur[i];
			break;
		default :
			gapok[i]=0;	
			glembur[i]=0;
			totgaji[i]=0;
	}
	
	cout<<endl;
	}
	
	cout<<"GAJI KARYAWAN PER MINGGU"<<endl;
		cout<<endl;
	for (int i=1;i<=jum;i++){
		
		cout<<"     KARYAWAN KE-"<<i<<endl;
		cout<<"Nama                 : "<<nama[i]<<endl;
		cout<<"Gaji Pokok           : "<<gapok[i]<<endl;		
		cout<<"Gaji Lembur          : "<<glembur[i]<<endl;
		cout<<"Gaji Diterima        : "<<totgaji[i]<<endl;
		cout<<endl<<endl;	
	}	

return 0;
}
