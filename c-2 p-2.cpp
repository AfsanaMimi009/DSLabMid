#include<bits/stdc++.h>
using namespace std;
/*
For example,
scenario 1 ;
Array = { 1,4,6,3,6,9}
Array 2 = { 5,3,7,1,2,6}

Output:1,6,3,6

scenario 2 ;
Array = { 1,4,6,3,6,9}
Array = { 5,8,7,12,21,63}
Output : No Common Elemet
*/
int main() {
 int a1 [6]={1,4,6,3,6,9};
 int a2[6]={ 5,3,7,1,2,6};
 //int a2[6]={5,8,7,12,21,63};

   int b [6];
   int k=0;

    for (int i=0;i<6;i++) {
     for ( int j=0;j<6;j++){
            if (a1[i] == a2[j]){
                b[k]=a1[i];
                k++;
            }

        }
    }
    if (k>0) {

        for ( int i=0;i<k;i++) {
            cout <<b[i]<< " " ;
        }
    }
else {
    cout<<"No Common Element" ;
}

return 0 ;
}
