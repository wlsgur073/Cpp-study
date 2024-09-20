#include <iostream>

using namespace std;

int PB(int* arr, int n)
{
    if (n == 0)
    {
        arr[0] = 0;
        return 0;
    }
    else if (n == 1)
    {
        arr[1] = 1;
        return 1;
    }
    else if (n > 0)
    {
        arr[n] = arr[n - 2] + arr[n - 1];
        return arr[n];
    }
}

int main(void)
{
    int n, i;
    int arr[100];

    cout << "정수를 입력하시오 : ";
    cin >> n;

    for (i = 0; i <= n; i++)
        cout << PB(arr, i) << " ";
}