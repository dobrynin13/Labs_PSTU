#include <iostream>
#include <Windows.h>
using namespace std;
class Money
{
public:
    Money(void);
public:
    virtual ~Money(void);
    Money(long, int);
    Money(const Money&);
    long Get_rub() { return rub; }
    int Get_kop() { return kop; }
    void Set_rub(long);
    void Set_kop(int);
    friend Money operator+(Money, Money);
    Money& operator=(const Money&);
    friend bool operator>(const Money& m1, const Money& m2);
    friend bool operator<(const Money& m1, const Money& m2);
    friend bool operator==(const Money& m1, const Money& m2);
    friend istream& operator>>(istream& in, Money& c);
    friend ostream& operator<<(ostream& out, const Money& c);
protected:
    long rub;
    int kop;
};
Money::Money(void)
{
    rub = 0;
    kop = 0;
}
Money::~Money(void)
{
}
Money::Money(long M, int C)
{
    rub = M;
    kop = C;
}
Money::Money(const Money& money)
{
    rub = money.rub;
    kop = money.kop;
}
void Money::Set_kop(int C)
{
    kop = C;
}
void Money::Set_rub(long M)
{
    rub = M;

}
Money operator+(Money A, Money B) {
    Money C(A.rub, A.kop);
    C.rub += B.rub;
    C.kop += B.kop;
    if (C.kop >= 100) {
        C.rub = C.rub + C.kop / 100;
        C.kop = C.kop % 100;
    }
    return C;
}
Money& Money::operator=(const Money& c)
{
    if (&c == this)return *this;
    rub = c.rub;
    kop = c.kop;
    return *this;
}
istream& operator>>(istream& in, Money& c)
{
    cout << "\nРублей : "; in >> c.rub;
    cout << "\nКопеек : "; in >> c.kop;
    return in;
}
ostream& operator<<(ostream& out, const Money& c)
{
    out << c.rub << ',' << c.kop;
    out << "\n";
    return out;
}
bool operator>(const Money& m1, const Money& m2)
{
    return ((m1.rub * 100) + m1.kop > (m2.rub * 100) + m2.kop);
}

bool operator==(const Money& m1, const Money& m2)
{
    return ((m1.rub * 100) + m1.kop == (m2.rub * 100) + m2.kop);
}

bool operator<(const Money& m1, const Money& m2)
{
    return ((m1.rub * 100) + m1.kop < (m2.rub * 100) + m2.kop);
}
int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Money a;
    cin >> a;
    cout << "\nВсего денег : " << a;
    Money b;
    cin >> b;
    cout << "\nВсего денег : " << b;
    if (a > b) cout << "\nПервая денежная сумма больше\n ";
    if (a < b) cout << "\nВторая денежная сумма больше\n ";
    if (a == b) cout << "\nДенежные суммы равны\n ";
    Money c;
    c = a + b;
    cout << "\nСумма : " << c;
}