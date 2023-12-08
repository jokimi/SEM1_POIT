#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void generate_matrix(int* matrix, int isize, int jsize)
{
    for (int i = 0; i < isize; i++)
        for (int j = 0; j < jsize; j++)
        {
            int num = rand() % 10;
            if (rand() % 50)
                num = -num;
            matrix[j + i * jsize] = num;
        }
}
void print_matrix(int* matrix, int isize, int jsize)
{
    for (int i = 0; i < isize; i++)
    {
        for (int j = 0; j < jsize; j++)
        {
            cout << matrix[j + i * jsize] << " ";
        }
        cout << endl;
    }
}
int search_matrix(int* matrix, int isize, int jsize)
{
    for (int i = 0; i < isize; i++)
        for (int j = 0; j < jsize; j++)
        {
            if (matrix[j + i * jsize] > 0)
                return i + 1;
        }
    return -1;
}
int main()
{
    srand(time(NULL));
    int my_matrix[10][10]{};

    generate_matrix(*my_matrix, 10, 10);
    cout << "Matrix: " << endl;
    print_matrix(*my_matrix, 10, 10);
    cout << endl;
    int s = search_matrix(*my_matrix, 10, 10);
    if (s == -1)
        cout << "No possible numbers" << endl;
    else
        cout << "Result: " << s << endl;

    search_matrix(*my_matrix, 10, 10);

    return 0;
}