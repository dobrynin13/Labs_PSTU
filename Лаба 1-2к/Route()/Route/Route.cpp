#include <iostream>
#include <string>

using namespace std;

class Route
{
	string otpr;
	string naz;
	float time;


public:

	Route();
	Route(string, string, float);
	Route(const Route&);
	~Route();
	string get_otpr();
	void set_otpr(string);
	string get_naz();
	void set_naz(string);
	float get_time();
	void set_time(float);
	void show();
};
Route::Route()
{
	setlocale(LC_ALL, "rus");
	otpr = "";
	naz = "";
	time = 0;
	cout << "Конструктор без параметров для объекта" << this << endl;
}

Route::Route(string Ot, string N, float T)
{
	setlocale(LC_ALL, "rus");
	otpr = Ot;
	naz = N;
	time = T;
	cout << "Конструктор c параметрами для объекта" << this << endl;
}

Route::Route(const Route& t)
{
	setlocale(LC_ALL, "rus");
	otpr = t.otpr;
	naz = t.naz;
	time = t.time;
	cout << "Конструктор копирования для объекта" << this << endl;
}

Route::~Route()
{
	setlocale(LC_ALL, "rus");
	cout << "Деструктор для объекта" << this << endl;
}

//селекторы
string Route::get_otpr()
{
	return otpr;
}

string Route::get_naz()
{
	return naz;
}

float Route::get_time()
{
	return time;
}

//Модификаторы

void Route::set_otpr(string Ot)
{
	otpr = Ot;
}

void Route::set_naz(string N)
{
	naz = N;
}

void Route::set_time(float T)
{
	time = T;
}

void Route::show()
{
	setlocale(LC_ALL, "rus");
	cout << "Пункт отправления ->" << otpr << endl;
	cout << "Пункт назначения ->" << naz << endl;
	cout << "Время в пути ->" << time << endl;
}
Route make_route()
{
	setlocale(LC_ALL, "rus");
	string ot;
	string n;
	float t;

	cout << "Введите пункт отправления\n";
	getline(cin, ot);
	cout << "Введите пункт назначения\n";
	getline(cin, n);
	cout << "Введите время в пути\n";
	cin >> t;
	Route time(ot, n, t);
	return time;
}

void print_route(Route t)
{
	t.show();
}

void main()
{
	setlocale(LC_ALL, "rus");
	Route c1;
	c1.show();
	Route c2("Perm", "Solikamsk", 3.13);
	c2.show();
	Route c3 = c2;
	c3.set_otpr("Moscow");
	c3.set_naz("Kazan");
	c3.set_time(6.59);

	print_route(c3);

	c1 = make_route();
	c1.show();
}
