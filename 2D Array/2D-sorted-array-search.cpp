#include <iostream>
using namespace std;

void print(int arr[][4], int n, int m, int num)
{
    int row = 0;
    int column = m - 1;

    while (true)
    {
        if (row >= n or column < 0)
        {
            cout << "The number " << num << " is not in the 2D array" << endl;
            break;
        }
        else if (arr[column][row] == num)
        {
            cout << "The number " << num << " is at index [" << row << "][" << column << "]" << endl;
            break;
        }
        else if (arr[column][row] > num)
        {
            column--;
        }
        else if (arr[column][row] < num)
        {
            row++;
        }
    }
}

int main()
{
    // 2D Row & Column Wise Sorted Array
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};

    int n = 4, m = 4;
    int num;
    cin >> num;
    print(arr, n, m, num);

    return 0;
}