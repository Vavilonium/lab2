using namespace std;
#include <iostream>
#include <vector>
void findquantity(int n)
{
    int vvod;
    vector<int> a(n);
    for (int i=0; i < n; i++)
    {
        cin>>vvod;
        a[vvod] += 1;
        
    }
    for (int i=0; i < n; i++)
    {
        if (a[i])
            cout<<i<<": "<<a[i]<<'\n';
    }
}

int main()
{
    int n;
    cout<<"Введите размер вектора: ";
    cin>>n;
    findquantity(n);
    return 0;
}