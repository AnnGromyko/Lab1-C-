#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fun(float x);

// Вариант 9 Громыко А.А. ИПМЭ11

int main(){
float x, y;
   cin >> x;

   fun(x);

}
void fun(float x)
{
//gggggggggggggggg


   if (x>=-7 && x<=-3){
    cout << "y = " << x+7;
       }
    else if ( x<-2){
        cout << "y = 4" ;
   }
     else if ( x<=2){
        cout << "y = " << x*x;
   }
    else if ( x<=4 ){
        cout << "y =" << -2*x+8;
   }
    else if (x>-9 && x<-7 || x>4 && x<7){
        cout << "y = 0" ;
   }
   

   
}
