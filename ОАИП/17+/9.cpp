#include <iostream>
#include <ctime>
using namespace std;
double mult(int&, int);
int main()
{
    setlocale(LC_CTYPE, "Russian");
    srand((unsigned)time(NULL));
    int arr[15] = { 0 };
    cout << mult(*arr, 15) << endl;
    return 0;
}
double mult(int& arr, int len)
{
    double mult = 1;
    int* ptr = &arr;
    cout << "Массив:" << endl;
    for (int i = 0; i < len; i++)
    {
        ptr[i] = rand() % 200 + 1;
        if (ptr[i] < 50)
            mult *= ptr[i];
        cout << ptr[i] << " ";
    }
    cout << "\nПроизведение элементов, которые меньше 50 = ";
    return mult;
}