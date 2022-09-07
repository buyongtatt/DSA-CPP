#include <iostream>
using namespace std;

int main()
{
    char route[1000];
    cin.getline(route, 1000);

    int x = 0;
    int y = 0;

    for (int i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;

        case 'S':
            y--;
            break;

        case 'E':
            x++;
            break;

        case 'W':
            x--;
            break;
        }
    }

    cout << "Final x and y is " << x << " " << y << endl;

    if (x > 0)
    {
        while (x > 0)
        {
            cout << 'E';
            x--;
        }
    }
    else if (x < 0)
    {
        while (x < 0)
        {
            cout << 'W';
            x++;
        }
    }
    if (y > 0)
    {
        while (y > 0)
        {
            cout << 'N';
            y--;
        }
    }
    else if (y < 0)
    {
        while (y < 0)
        {
            cout << 'S';
            y++;
        }
    }

    return 0;
}