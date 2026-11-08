#include <iostream>
using namespace std;
#include <math.h>
int main() 
{
    int L,R, count;
    cin >> L >> R;
    count = 0;
    for ( int r = L; r <= R; r++)
    {
        int sum;
        sum = 1; 
        for (int i = 2; i <= sqrt(r); i++)
            if (r % i == 0)
                if (i * i == r)
                    sum += i;
                else
                    sum += i + r/i;
        if (sum > r)
            count += 1;
    }

    cout << count;


    return 0;
}