//https://codeforces.com/problemset/problem/4/A
#include<iostream>
using namespace std;

int main()
{
    int weight;
    cin >> weight;//input the weight of watermelon
    if(weight%2 == 0 && weight != 2)
        cout<< "YES\n";
    else
        cout<< "NO\n";
    return 0;
}
