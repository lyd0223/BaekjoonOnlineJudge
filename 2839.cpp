#include <iostream>

using namespace std;

int main() 
{
    int n3,n5;
    int x;
    int temp;
    cin >> x;
    temp = 0;
    
    n5 = x / 5;
    n3 = 0;
    if (x < 3)
        cout << -1 << endl;

    else {
        if (x % 5 == 0)
            cout << x / 5;
        else
        {
            while (n5 >= 0)
            { // n5 = 5 
                temp = x - (5 * n5); // t = 1 x= 26
                if (temp % 3 == 0)
                {
                    n3 = temp / 3;
                    break;
                }
                n5--;
            }
            cout << n5 + n3 << endl;
        }
    }
    

}