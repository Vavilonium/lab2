#include <vector>
#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    vector<int> a;
    a.push_back(1);
    int x1 = sizeof(int) * a.capacity();
    a.push_back(1);
    int x2 = sizeof(int) * a.capacity();
    cout << "Вектор для нового элемента тиипа int выделяет " << x2 - x1 << " байт" << '\n';
    vector<int> b;
    for (int i = 0; i < 100; i++)
    {
        b.push_back(1);
        cout << b.capacity() << '\n';
    }
}

