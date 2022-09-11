#include <iostream>

int main(int ac, char **av)
{
    int i;
    int n;

    i = 1;
    n = 0;
    if (ac < 2)
        cout << * LOUD AND UNBEARABLE FEEDBACK NOISE * << endl;
    else
    {
        while (av[i++])
        {
            while (av[i][n++])
                cout << (char ) toupper(av[i][n]);
        }
        cout << endl;
    }
}