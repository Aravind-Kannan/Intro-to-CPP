#include <simplecpp>

main_program
{
    turtleSim();
    repeat(5)
    {
        forward(10);
        penUp();
        forward(10);
        penDown();
        wait(0.5);
    }
    wait(5);
}