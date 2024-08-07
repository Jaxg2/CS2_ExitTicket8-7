//Jaxon
#include <iostream>
using namespace std;

bool isPrime(int n)
{
	for (int i = 1; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

}

int findSmallFactor(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
		if (num % i == 0)
			return i;
	return num;
}

int factor(int num)
{
	int smallFactor = findSmallFactor(num);

	if (num == 1)
		cout << 1 << " ";
	else
		if (num == smallFactor)
			cout << smallFactor << " ";
		else
			cout << smallFactor << " ";
		 factor(num / smallFactor);

		 return num;
}


int main()
{
	int num;
	cout << "Please enter an integer: " << endl;
	cin >> num;

	bool isPrime(int n);
	int findSmallFactor(int num);
	int factor(int num);



}