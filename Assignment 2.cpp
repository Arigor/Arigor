//
//Assignment.cpp
//Define an integer with an odd or even display message
//
# include <iostream>
int main()
{
	int j, k;
	std:: cout <<"Enter an integer\j";
	std:: cin >> j;
	std:: cout <<"Enter an integer\k";
	std:: cin >> k;
	if (j%k==0)
	std:: cout << j <<" is a Multiple of" << k;
	else
	std:: cout << j << " is Not a multiple of" << k;
	return 0;
}

