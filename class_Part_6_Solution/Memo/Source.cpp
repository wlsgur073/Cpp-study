#include <iostream>

using namespace std;

int main()
{
    const int row = 3;
    const int col = 5;

    const int s2da[row][col] =
    {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
    };

    int* matrix = new int[row * col];
    //��� ���Ұ� �� ����.

    // ������ �迭�� �������� ��ó��
    // ���η��� ������� �Ѵ�.

    for (int r = 0; r < row; ++r)
    {
        for (int c = 0; c < col; ++c)
        {
            matrix[c + col * r] = s2da[r][c];
            cout << matrix[c + col * r] << " ";
        }
        cout << endl;
    }

        delete[] matrix;

        return 0;
}