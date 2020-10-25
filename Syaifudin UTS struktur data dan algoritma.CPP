#include<iostream>
#include<conio.h>

void main()
{
	int Nilai[20];
	int i,N,angka,bilangan;
   char jawab;
   awal :

		cout<<"\n*************HAllo Berikut Adalah Program Untuk Mengurutkan Serta Mencari Data*************"<<endl;
      cout<<endl;
		cout<<"Nama\t\t: Muhammad Syaifudin "<<endl;
		cout<<"NIM\t\t: 173112706440126 "<<endl;
		cout<<"Kelas\t\t: KO2 "<<endl;
		cout<<"Mata Kuliah\t: Praktikum Struktur Data dan Algoritma"<<endl;
		cout<<"Hal\t\t: UTS Semester II "<<endl;
		cout<<endl;
      cout<<"================================\n"<<endl;
      cout<<"\tMenu Pilihan : \n"<<endl;
      cout<<"================================\n"<<endl;
      	cout<<"\t1. Masukan data"<<endl;
      	cout<<"\t2. Mengurutkan Data"<<endl;
      	cout<<"\t3. Mencari"<<endl;
         cout<<"\t4. Selesai\n"<<endl;
      cout<<"================================\n"<<endl;
      cout<<endl;
		cout<<"Masukan Data = ";cin>>N;

   for(i=0;i<N;i++)
   	{
			cout<<"\nMengurutkan Data ke - = "<<i<<" = ";cin>>Nilai[i];
      }
			cout<<"\nJenis Deretan Bilangan = ";
	for(i=0;i<N;i++)
			cout<<Nilai[i]<<" ";
			cout<<endl;
			cout<<"\nMencari Data = ";
			cin>>bilangan;
			cout<<endl;
	i=0;
	do
   {
		if(Nilai[i]==bilangan)angka=Nilai[i];i++;
   }

   while(i<N);
		if(angka==bilangan)
      {
      	cout<<"\t\tData "<<bilangan<<" Ditemukan "<<endl;
      }
		else
      {
			cout<<" Warning......!!!"<< "Maaf Data "<<bilangan<<" Tidak Ditemukan ";
      }
 		getch ();
      clrscr ();
		{
   	cout<<"\nApakah Anda Ingin Kembali Ke Menu Program [Y/T]";
      cin>>jawab;
      clrscr ();
      if (jawab == 'y' || jawab == 'Y')
      	{
      	goto awal;
      	}
      else
      cout<<"\n\n\t\t>>>>>>>>> PROGRAM SELESAI <<<<<<<<";
      getch ();
      clrscr ();
      }
}
