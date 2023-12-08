#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char str[255];
    int counter = 1, max_c = 0, len;
    cout << "Введите строку: ";
    cin.getline(str, 255);
    len = strlen(str);
    char sample{};
    for (int i = 0; i < len; i++)
    {
        while (str[i] == str[i + 1])
        {
            counter++;
            i++;
        }
        max_c > counter ? 0 : max_c = counter;
        counter = 1;
        sample = str[i];
    }
    cout << "Самая длинная группа из " << sample << " - " << max_c << " символов" << endl;
    return 0;
}