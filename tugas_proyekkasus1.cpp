#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
   int jm;
   char nama[50][100];
   float uts[50];
   float uas[50];
   float mandiri[50];
   float proyek[50];
   float kehadiran[50];
   float na[50];
   
   cout<<"\n\tMASUKKAN JUMLAH MAHASISWA : ";
   cin>>jm;
	for(int i=1; i<=jm; i++)
   {

      cout<<"\n"<<endl;
      cout<<"\tMAHASISWA KE-"<<i<<endl;
      cout<<"\t-------------------------------\n"<<endl;
      cout<<"\tNAMA MAHASISWA    	: ";
      cin>>nama[i];
      cout<<"\tNILAI UTS     		: ";
      cin>>uts[i];
      cout<<"\tNILAI UAS       		: ";
      cin>>uas[i];
      cout<<"\tNILAI TUGAS MANDIRI  : ";
      cin>>mandiri[i];
      cout<<"\tNILAI TUGAS PROYEK	: ";
      cin>>proyek[i];
      cout<<"\tNILAI KEHADIRAN      : ";
      cin>>kehadiran[i];
      na[i]=(uts[i]*20/100)+(uas[i]*25/100)+(mandiri[i]*20/100)+(proyek[i]*20/100)+(kehadiran[i]*15/100);
   }
    string g;
    for(int i=1; i<=jm; i++){
    if(na[i]<45)
    {
        g="E";
    }
    else if(na[i]<=50)
    {
        g="D";
    }
    else if(na[i]<=60)
    {
        g="C";
    }
    else if(na[i]<=65)
    {
        g="C+";
    }
    else if(na[i]<=70)
    {
        g="B-";
    }
    else if(na[i]<=75)
    {
        g="B";
    }
    else if(na[i]<=80)
    {
        g="B+";
    }
    else if(na[i]<=85)
    {
        g="A-";
    }
	else if(na[i]>85)
    {
        g="A";
    }

}
     for (int i=1;i<=jm;i++)
        {
        	cout<<endl<<endl;
        	cout<<"\t-------------------------------\n"<<endl;
            cout<<"\tMahasiswa ke       : "<<i<<endl;
            cout<<"\tNama Mahasiswa     : "<<nama[i]<<endl;
            cout<<"\tNilai UTS          : "<<uts [i]<<endl;
            cout<<"\tNilai UAS          : "<<uas [i]<<endl;
            cout<<"\tNilai mandiri      : "<<mandiri [i]<<endl;
            cout<<"\tNilai tugas Proyek : "<<proyek [i]<<endl;
            cout<<"\tKehadiran          : "<<kehadiran [i]<<endl;
			cout<<"\tNilai akhir        : "<<g; 
}
return 0;
}
