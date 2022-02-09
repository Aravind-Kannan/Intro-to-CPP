#include <simplecpp>

main_program
{
    turtleSim();
    repeat(5)
    {
        left(90);
        forward(10);
        right(90);
        forward(10);
    }
    wait(5);
}