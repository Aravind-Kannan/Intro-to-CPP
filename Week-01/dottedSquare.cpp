#include <simplecpp>

main_program
{
    turtleSim();
    repeat(4)
    {
        repeat(3)
        {
            forward(10);
            penUp();
            forward(10);
            penDown();
            wait(0.5);
        }
        right(90);
        wait(0.5);
    }
}