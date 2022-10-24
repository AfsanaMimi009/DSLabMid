#include <iostream>
using namespace std;
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int b[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int A[13];
    for(int i = 0; i < 5; i++)
        {        A[i] = a[i];    }
    for(int i = 0; i < 8; i++)
        {        A[i+5] = b[i];    }
    cout << "Merged Array : " << endl;
     for(int i=0; i < 13; i++)
        {        cout << A[i] << " ";    }
    cout << endl;
    cout << "Reversed Array : " << endl;
    for(int i = 12; i>=0; i--)
        {        cout << A[i] << " ";    }
    return 0;
    }
