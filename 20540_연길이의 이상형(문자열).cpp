#define _CRT_SECURE_NO_WARNINGS

#include <string>

using namespace std;


int main()
{
	char myMBTI[5];
	scanf("%s", myMBTI);
	
	string herMBTI ="";
	
	if (myMBTI[0] == 'E')
		herMBTI += "I";
	else
		herMBTI += "E";

	if (myMBTI[1] == 'S')
		herMBTI += "N";
	else
		herMBTI += "S";

	if (myMBTI[2] == 'T')
		herMBTI += "F";
	else
		herMBTI += "T";

	if (myMBTI[3] == 'J')
		herMBTI += "P";
	else
		herMBTI += "J";

	printf("%s", herMBTI.c_str());
}