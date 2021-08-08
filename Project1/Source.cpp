#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите размер массива"<< endl;
	cin >> n;
	cout << endl;
	int K = 0;
	int* list_of_ints = new int[n];
	cout << "¬ведите элементы массива" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "list_of_ints = ";
		cin >> list_of_ints[i];
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			for (int l = 0; l < n - 2; l++)
			{
				if (K < list_of_ints[i] * list_of_ints[j + 1] * list_of_ints[l + 2])
				{
					K = list_of_ints[i] * list_of_ints[j + 1] * list_of_ints[l + 2];
				}
			}
		}
	}
	cout << "максимальное произведение равно " << K;
}