#include <simplecpp>

main_program
{
    int m;
    cin >> m;

    repeat(m)
    {
        cout << "*" << endl;
    }
    repeat(m + 1)
    {
        cout << "*";
    }
}