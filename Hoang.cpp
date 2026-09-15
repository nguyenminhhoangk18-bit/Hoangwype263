#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Hay nhap so luong phan tu :";
    cin >> n;
    int* a = new int [n];
    for (int i=0;i<n;i++){
        cout << "a["<<i<<"]=";
        cin >> a[i];
    }
    cout <<"Mang cap phat dong vua nhap :";
    for (int i=0;i<n;i++){
        cout<< a[i] <<" ";
    }
    delete[] a;
    return 0;
}
