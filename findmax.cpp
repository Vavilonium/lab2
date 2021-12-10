using namespace std;
#include <iostream>
#include <vector>
void fill(vector<int> &v) 
{
    for (int i=0; i<v.size(); i++) 
    {
        v[i] = rand() % 101; 
    }
}

void print(const vector<int> &v) 
{
    for (int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}

void findmax(vector<int> &v)
{
    int max = 0;
    for (int i=0; i <v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
        }
    }
    cout<<"Наибольшее число: "<<max<<endl;
}

int main()
{
    int n;
    cout<<"Введите размер вектора: ";
    cin>>n;
    vector<int> a(n);
    fill(a);
    print(a);
    findmax(a);
    return 0;
}