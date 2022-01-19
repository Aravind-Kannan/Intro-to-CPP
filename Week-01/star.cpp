#include <simplecpp>

main_program
{
    turtleSim();

    int nPointed;
    cout << "Enter Odd Number for points of star: ";
    cin >> nPointed;

    repeat(nPointed)
    {
        forward(100);
        left((360.0 - 360.0 / nPointed) / 2);
    }

    wait(3);
}