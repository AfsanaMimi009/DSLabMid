#include<bits/stdc++.h>
using namespace std;

int main ()
{
int a [3] [3] = { { 12,13,14},
                    {15,16,17},
                    {18,19,20}};

int b [3] [3] ={ {1,2,3},
                  {4,5,6},
                  {7,8,9}} ;
int c [3] [3]= {{101,104,107},
                { 102,105,108},
                {103,106,109}};

 for (int i = 0; i<3; i++)  {
     for (int j =0;j<3;j++) {
     cout <<a [i][j] + b [i] [j ] + c [i][j] << " " ;
     }  cout <<endl ;
 }
 return 0;
 }
