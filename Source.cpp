#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int n = 16;
	int arr[n];
	int kol = 0;
	for (int i = 0; i < n; i++)  {
	
		arr[i] = rand() % 20;
		if (arr[i] % 5 == 1) {
			kol++;
		}
	}

	cout << kol << endl;
	return 0;
}