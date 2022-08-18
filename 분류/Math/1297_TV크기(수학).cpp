#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    double c, w, h;
    
    cin >> c >> w >> h;
    
    int width, height;
    
	width = sqrt(pow(c, 2) * pow(w, 2) / (pow(w, 2) + pow(h, 2)));
    height = sqrt(pow(c, 2) * pow(h, 2) / (pow(w, 2) + pow(h, 2)));
    
    cout << width << " " << height;
}

