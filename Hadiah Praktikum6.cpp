#include <iostream.h>
#include <conio.h>
#include <string.h>

int main () {
char Kode[5];
char *Negara;
char *Processor;
cout <<"Hadiah Praktikum (Eka51017014)\n";
cout<<"A. Amerika \n J. Jepang \n K. Korea \n C. China \n G. German \n T. Taiwan ";
cout<<"\n Masukkan Kode Negara Buatan Komputer : "; cin>>Kode;
switch(Kode[0])
{
case 'A' :
   Negara="Amerika";
   break;
case 'K' :
   Negara="Korea";
   break;
case 'C' :
   Negara="China";
   break;
case 'G' :
   Negara="German";
   break;
case 'T' :
   Negara="Taiwan";
   break;
Default :
Negara="Kode Tidak Dikenal";
break; }

   if (Kode[1]=='3')
   {Processor ="Intel 386 Mhz";}
   else if(Kode[1]=='4')
   {Processor ="Intel 486 Mhz";}
   else if (Kode[1]=='5')
   {Processor ="Intel Pentium";}
   else
   {Processor ="Kode Tidak Dikenal ";}

  cout<<"\nBuatan Negara :"<<Negara<<endl;
  cout<<"\nProcessor :"<<Processor<<endl;
  cout<<"\nPenyimpanan Harddisk : "<<Kode[2]<<Kode[3]<<Kode[4]<<" Gigabyte"<<endl;
  getch(); }

