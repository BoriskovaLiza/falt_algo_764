#include <iostream>

int main ()
{
	int a,k;
	
	std::cin >> a;
	
	k = ((a/5) + (a/25) + (a/125) + (a/625));
	std::cout << k;
	return 0;
}
