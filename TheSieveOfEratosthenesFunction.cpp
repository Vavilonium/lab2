#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

bool Simple(int N)
{
    bool rez = true;
    for (int k = 2; k <= N / 2; k++)
        if (N % k == 0) rez = false;
    return rez;
}

void eratosthene(int n, vector<bool>&v)
{
    ofstream fout("output.txt");
    bool leave2 = false;
    bool leave = false;
    int i = 0, number = 1, count = 0, j = 1;
    while (leave != true)
    {
        if (Simple(number) && number != 1)
        {
            v[number] = true;
            i++;
        }
        v.push_back(false);
        number++;
        if (i == n) leave = true;
    }
    while (leave2 != true)
    {
        if (v[j] == true)
        {
            fout << j << '\n';
            count++;
        }
        j++;
        if (count == n) leave2 = true;
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "Введите кол-во простых чисел: ";
    cin >> n;
    vector<bool>prime(n, false);
    eratosthene(n, prime);
}

