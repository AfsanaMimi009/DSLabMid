#include<iostream>
using namespace std;
int main ()
{
   int a,is_prime=1,fact=1;
   cin>>a;
   for (int i=2;i<a;i++) {
   if(a%i==0) {
    is_prime=0;
    break;
   }
}

   if(is_prime==1) {

   for(int i=1;i<=a;i++){
   fact*=1;
   }
   cout<<fact;

   }
   else {
      cout<<"Error!Not a prime number";

   }
   return 0;

}
