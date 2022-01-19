#include <simplecpp>

main_program
{
    turtleSim();
    repeat(4)
    {
        forward(100);
        right(90);
        wait(0.5);
    }
    penUp();
    int sideOfInnerSquare = sqrt(50 * 50 + 50 * 50);
    forward(50);
    right(45);
    penDown();
    repeat(4)
    {
        forward(sideOfInnerSquare);
        right(90);
        wait(0.5);
    }

    wait(5);
}