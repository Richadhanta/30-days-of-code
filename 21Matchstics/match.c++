#include <iostream>
using namespace std;


void TwentyoneMatchstick(int arr[], int N)
{

	
	for (int i = 0; i < N; i += 1) {
		cout << 5 - arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[] = { 3, 4, 2, 2 };

	int N = sizeof(arr) / sizeof(arr[0]);

	TwentyoneMatchstick(arr, N);

	return 0;
}
