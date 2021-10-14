#include <iostream>
using namespace std;
int main () 
{
   
    float Rumus=0.785,cc,pembagi=1000,D,L;
    
    
    
    
    cout<<"MASUKAN UKURAN PISTON ANDA : ";
    cin>>D;
    cout<<"MASUKAN LANGKAH/STROKE ANDA : ";
    cin>>L;
    
    cc=Rumus*(D*D)*L/pembagi;
    cout<<"MOTOR ANDA MEMILIKI KAPASITAS : "<<cc<<" CC";
    return 0;
}