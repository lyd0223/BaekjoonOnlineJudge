#include <iostream>

using namespace std;

int main() {
	float c;
	float count = 0;
	float n, sum = 0;
	
	cin >> c;
	
	float* aver = new float[c];
	float* answer = new float[c];
	for (int i = 0; i < c; i++)
	{
		cin >> n;
		float* arr = new float[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
			sum += arr[j];
		}
		aver[i] = sum / n;
		sum = 0;
		
		for (int j = 0; j < n; j++)
		{
			
			if (aver[i] < arr[j])
			{
				count++;
			}
			
			
		}
		answer[i] = count / n * 100;
		count = 0;
	}
	
	for (int i = 0; i < c; i++)
	{
		cout << (std::round(answer[i] * 1000)) / 1000.0 << endl;
	}
}