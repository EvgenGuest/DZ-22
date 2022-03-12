#include<iostream>
using namespace std;

void func(int* pn, int m);

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10;
	
	//Задача 1.
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* pa0 = &arr[0];
	cout << "Задача 1.\nИзначальный массив:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(pa0 + i) << ", ";
	cout << "\b\b]" << endl;
	for (int i = 0; i < 10; i++) {
		swap(*(pa0 + i), *(pa0 + i + 1));
		i++;
	}
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(pa0 + i) << ", ";
	cout << "\b\b]\n\n";

	//Задача 2.
	cout << "Задача 2.\n";
	int* pn = &n;	
	func(&n, 3);
	cout << n << endl;

	return 0;
}
void func(int* pn, int m) {
	int c = 1;
	for (int i = 0; i < m; i++)
		c *= *pn;
	*pn = c;
}