#include <iostream>
#include "main.h"
#define MAX 100
using namespace std;
int n;
int arr[MAX];
int main()
{
    std::cout << "Nhap so luong phan tu: ";
    cin >> n;
    nhapmang(arr, n);
    xuatmang(arr, n);
    sapxep(arr, n);
    return 0;
}
void nhapmang(int arr[MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Nhap phan tu thu " << i << " : ";
        cin >> arr[i];
    }
}
void xuatmang(int arr[MAX], int n)
{
    std::cout << "Mang vua nhap la: " << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << arr[i] << "\t";
    }
}
void sapxep(int arr[MAX], int n)
{
    int tg;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;
            }
        }
    }
    std::cout << "\nMang sau khi sap xep la: " << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}