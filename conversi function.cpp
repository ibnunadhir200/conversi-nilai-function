#include <iostream>
using namespace std ;

int nilai (int angka) ;
main ()
{
	int angka ;
	cout << "Masukkan nilai (0-100) : " ;
	int huruf  =  nilai (angka) ;
	cout << "Nilai hurufnya adalah : " ;
	
}

int nilai(int angka) {

 if(angka>80)
  return 'A';
 else if(angka>60)
  return 'B';
 else if(angka>40)
  return 'C';
 else if(angka>20)
  return 'D';
 else if (angka<20)
  return 'E';
}


