#include <iostream>
using namespace std;
struct fraction
{
	int n;
	int m;
	int first;
	int second;
	void Init(int, int);
	void Read();
	void Show();
	int Cost(int m);
};
void fraction::Init(int F, int S)
{
	first = F;
	second = S;
}

void fraction::Read()
{
	setlocale(LC_ALL, "rus");
	cout << "Цена товара\n";
	cin >> first;
	cout << "Количество единиц данного товара\n";
	cin >> second;
}
void fraction::Show()
{
	cout << "Цена товара == " << first << endl;
	cout << "Количество единиц данного товара == " << second << endl;
}
int fraction::Cost(int m)
{
	return (first * second);
}
fraction make_fraction(int F, int S)
{
	fraction t;
	t.Init(F, S);
	return t;
}

void main(int n,int m)
{
	
	setlocale(LC_ALL, "rus");
	fraction A;
	fraction B;
	fraction* X = new fraction;

	cout << "Объект А\n";
	A.Init(13013, 18);
	A.Show();

	cout << "\nОбъект B\n";
	B.Read();
	B.Show();

	cout << "\nОбъект X\n";
	X->Init(1478, 13);
	X->Show();

	cout << "\nA.Cost(" << A.first << "\, " << A.second << ") = " << A.Cost(m) << "\n";
	cout << "B.Cost(" << B.first << "\, " << B.second << ") = " << B.Cost(m) << "\n";
	cout << "X.Cost(" << X->first << "\, " << X->second << ") = " << X->Cost(m) << "\n";

	cout << "\nМассив объектов";
	cout << "\nВведите размер массива: ";
	cin >> n;

	fraction* mass = new fraction[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Объект №" << i + 1 << ":\n";
		mass[i].Read();
	}
	cout << "\n\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Объект №" << i + 1 << ":\n";
		mass[i].Show();
	}
	for (int i = 0; i < n; i++)
	{
		cout << "mass[" << i << "].Cost(" << mass[i].first << ", " << mass[i].second << ") = " << mass[i].Cost(m) << "\n";
	}
}

