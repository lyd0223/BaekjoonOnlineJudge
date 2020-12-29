#include <iostream>

using namespace std;

int main()
{
	int hour, minute;
	int minute_temp;
	cin >> hour >> minute;

	if (minute >= 45)
	{
		
		cout << hour << " " << minute - 45;
	}
	else
	{
		
		minute_temp = 45 - minute;
		if (hour == 0)
		{
			cout << 23 << " " << 60 - minute_temp;
		}
		else
			cout << hour - 1 << " " << 60 - minute_temp;
	}

}