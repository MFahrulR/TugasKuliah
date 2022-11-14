#include <iostream>
using namespace std;
int main()
{
 double Nilai;
 cout <<"Masukkan Nilai: ";
 cin >>Nilai;
 
 if (Nilai >=90)
 cout <<"Hasil: A"
  <<endl;
 else
 if (Nilai >=80)
 cout <<"Hasil: B"
  <<endl;
 else 
 if (Nilai >=60)
 cout <<"Hasil: C"
  <<endl;
 else   
 if (Nilai >=50)
 cout <<"Hasil: D"
  <<endl; 
 else
 if (Nilai <50)
 cout <<"Hasil: Tidak Lulus" 
  <<endl;
  
 return 0;  
}
