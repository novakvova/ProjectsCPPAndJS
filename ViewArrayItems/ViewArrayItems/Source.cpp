#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout << "Привіт! Тут наші масиви :)\n";
	int n = 0; // щоб там було значення - можна без нього
	cout << "Вкажіть кількість елементів масиву: \n";
	cin >> n;
	srand(time(0)); //Ініціалізація рандом C++
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 20;
	}
	cout << "Наш масив значень:\n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";
	return 0;
}