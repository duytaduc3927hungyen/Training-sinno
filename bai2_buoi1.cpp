#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int L,R;
    cin >> L >> R;
    for (int j=L; j <= R; j++)
    {
        bool check = true;
        if (j==1)
            check = false;
        for (int i=2; i <= sqrt(j); i++)
            if (j%i == 0)
                check = false;
        if (check==true)
            cout << j << endl;
    }
}
