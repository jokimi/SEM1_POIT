#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//--1--
	setlocale(LC_CTYPE, "Russian");
	int n;
	cout << "Введите n = ";
	cin >> n;
	int B[100][100]{};
	int i, j;
	cout << "Введите элементы массива:" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			cin >> B[i][j];
	float Y[100]{};
	int max = B[0][0];
	for (int i = 0; i < n; i++)
	{
		if (max < B[i][i])
			max = B[i][i];
		Y[i] = B[i][i];
	}
	for (int i = 0; i < n; i++)
		Y[i] = Y[i] / max;
	cout << "Максимальный элемент: " << max << endl;
	cout << "Массив Y: ";
	for (int i = 0; i < n; i++)
	{
		cout << "Y[" << i + 1 << "] = " << Y[i] << " ";
	}
    cout << endl << endl;

    //--2--
	const int MAX = 100;
	int a[MAX][MAX]{}, q = 0, m, r, c;
	srand((unsigned)time(NULL));
	cout << "Введите n и m: "; cin >> q; cin >> m;
	puts("Матрица:");
	for (r = 0; r < q; ++r) {
		for (c = 0; c < m; ++c) printf("%""4d", a[r][c] = rand() % 101 - 50);
		putchar('\n');
	}
	for (r = 0; r < q; ++r) {
		for (c = 0; c < m; ++c) if (a[r][c] <= 0) break;
		if (c == m) break;
	}
	if (r < q) {
		printf("Изменяем ряд %d...\n", r);
		if (r != 0) for (c = 0; c < m; ++c) a[r - 1][c] = -a[r - 1][c];
	}
	puts("Новая матрица:");
	for (r = 0; r < q; ++r) {
		for (c = 0; c < m; ++c) printf("%""4d", a[r][c]);
		putchar('\n');
	}
    return 0;
}