#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    int num =0;
    for (int i = 0; i < 5; i++)
    {
        int temp;
        cin >> temp;
        
        num += (temp * temp);
    }
    
    string str = to_string(num);
    
    cout << (str[str.size() - 1]);
         
}