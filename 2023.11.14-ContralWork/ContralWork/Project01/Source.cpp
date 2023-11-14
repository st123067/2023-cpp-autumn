#include<iostream>
#include<algorithm>
#include<ctime>

int* InitRandomArray(int len, int mn = 0, int mx = 9);
void MixArray(int* a, int n);
void BubbleSort(int* a, int len);
void SelectionSort(int* a, int len);
bool IsSorted(int* a, int len);
void MonkeySort(int* a, int len);
void InsertionSort(int* a, int len);
void CountSort(int* a, int len);
void GnomeSort(int* a, int len);
void Swap(int& a, int& b);
void PrintArray(int* a, int len);
int MaxArrayElement(int* a, int len);

int main(int arc, char* argv[])
{
	srand(time(0));
	int n = 10;
	int* a = InitRandomArray(n);
	PrintArray(a, n);
	CountSort(a, n);
	PrintArray(a, n);
	return EXIT_SUCCESS;
}

int* InitRandomArray(int len, int mn, int mx)
{
	int* res = new int[len] { 0 };
	for (int i = 0; i < len; ++i)
	{
		res[i] = rand() % (mx - mn + 1) + mn;
	}
	return res;
}

void PrintArray(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}

void MixArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		Swap(a[i], a[rand() % n]);
	}
}

void BubbleSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				Swap(a[j], a[j + 1]);
			}
		}
	}
}

void CountSort(int* a, int len)
{
	int b = MaxArrayElement(a, len);
	int* c = new int[b] { 0 };
	for (int i = 0; i < len; ++i)
	{
		++c[a[i]];
	}
	int d = 0;
	for (int j = 0; j < b; ++j)
	{
		for (int i = 0; i < c[j]; ++i)
		{
			a[d] = j;
			++d;
		}
	}
}

void SelectionSort(int* a, int len)
{
	for (int i = 0; i < len; ++i)
	{
		int minInd = i;
		for (int j = i + 1; j < len; ++j)
		{
			minInd = (a[minInd] <= a[j] ? minInd : j);
		}
		Swap(a[i], a[minInd]);
	}
}

bool IsSorted(int* a, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

void monkeySort(int* a, int len)
{
	while (!IsSorted(a, len))
	{
		MixArray(a, len);
	}
}

void Swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
}

void Gnomesort(int* a, int len)
{
	int c = 1;
	int d = c + 1;
	while (c < len)
	{
		if (a[c - 1] < a[c])
		{
			c = d;
			d++;
		}
		else
		{
			Swap(a[c], a[c - 1]);
			c--;
			if (c == 0)
			{
				c = d;
				d++;
			}
		}
	}
}

void InsertionSort(int* a, int len)
{
	for (int i = 1; i < len; ++i)
	{
		int b = i;
		while (b > 0 && a[b] < a[b - 1])
		{
			Swap(a[b], a[b - 1]);
			--b;
		}
	}
}

int MaxArrayElement(int* a, int len)
{
	if (a != nullptr)
	{
		int maxi = a[0];
		int index = 0;
		for (int i = 0; i < len; ++i)
		{
			if (a[i] > maxi)
			{
				maxi = a[i];
				index = i;
			}
		}
		return a[index];
	}
}
