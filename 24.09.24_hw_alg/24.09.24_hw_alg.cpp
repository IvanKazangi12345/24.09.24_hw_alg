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