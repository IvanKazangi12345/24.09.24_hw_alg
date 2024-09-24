#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	int size;
	cout << "Size for arr: ";
	cin >> size;
	int *ptr = new int[size];
	int c;
	bool swapp;
	cout << "1 - min max, 2 - max min. Choose: ";
	cin >> c;
	for (int i = 0; i < size; i++)
	{
		ptr[i] = 1 + rand() % 40;
	}
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
	cout << endl;
	if (c == 1)
	{
		for (int i = 0; i < size - 1; i++) {
			swapp = false;
			for (int j = 0; j < size - i - 1; j++) {
				if (ptr[j] > ptr[j + 1]) {
					int a = ptr[j];
					ptr[j] = ptr[j + 1];
					ptr[j + 1] = a;
					swapp = true;
				}
			}
			if (swapp == false) {
				break;
			}
		}
	}
	else if (c == 2)
	{
		for (int i = 0; i < size - 1; i++) {
			swapp = false;
			for (int j = 0; j < size - i - 1; j++) {
				if (ptr[j] < ptr[j + 1]) {
					int a = ptr[j];
					ptr[j] = ptr[j + 1];
					ptr[j + 1] = a;
					swapp = true;
				}
			}
			if (swapp == false) {
				break;
			}
		}
	}
	cout << "Sorted array: ";
	for (int i = 0; i < size; i++) {
		cout << ptr[i] << " ";
	}
	cout << endl;
	delete[] ptr;
}

/*#include <iostream>

 Необхідно оцінити складність алгоритмів

Алгоритм 1
void algorithm1() {
	const int size = 1'000;
	int arr[size]{};
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
 O(1)

Алгоритм 2
int algorithm2(int n) {
	for (int i = 0; i < n + 10'000; i++) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}
 O(n)

Алгоритм 3
int algorithm3(int n) {
	for (int j = 0; j < n * n; j++) {
		std::cout << j << ' ';
	}
	std::cout << std::endl;
	for (int i = 0; i < n; i++) {
		std::cout << i << ' ';
	}
	std::cout << std::endl;
}
 O(n^2)

Алгоритм 4
int algorithm4(int arr[], int n) {
	return arr[n];
}
 O(1)

Алгоритм 5*
int algorithm4(int n) {
	int power = 1;
	while (power * 2 <= n) {
		power *= 2;
	}
	return n;
}
 O(log n)*/