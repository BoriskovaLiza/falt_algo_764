#include <iostream>

int main ()
{
	int a;
	int Arr[10001];
	

	std::cin >> a;
	for (int k=0; k < a; ++k)
		std::cin >> Arr[k];
	for (int k = 0; k < a/2; ++k)
		{
			Arr[a-1-k] += Arr[k];
			Arr[k] -= Arr[a-1-k];
			Arr[a-1-k] +=Arr[k];
			Arr[k] *= -1;
		}
	for (int k=0; k < a; ++k)
		std::cout << Arr[k] << " ";
		
	return 0;
}
