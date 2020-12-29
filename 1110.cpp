#include <iostream>

using namespace std;

int main()
{
    int ori,n,temp;
    int arr[2];
    int count = 0;
    cin >> ori;
    temp = 100;
    n = ori;

    while (temp != ori)
    {
        if (n < 10)
        {
            arr[0] = 0; 
            arr[1] = n;
        }
        else
        {
            arr[0] = n / 10;
            arr[1] = n % 10;
        }
        temp = arr[0] + arr[1];

        arr[1] = temp % 10;
        arr[0] = n % 10;
        n = arr[0] * 10 + arr[1];
        temp = n;
        count++;
        
    }
    cout << count << endl;
}