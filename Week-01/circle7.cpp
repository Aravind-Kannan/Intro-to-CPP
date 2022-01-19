#include <simplecpp>

main_program
{
    turtleSim();

    int nSides = 360;
    int nCircles = 6;
    int breakAngle = nSides / nCircles;
    int sideCounter = 1;

    repeat(nSides)
    {
        forward(1);
        right(360.0 / nSides);

        sideCounter++;
        if (sideCounter % breakAngle == 0)
        {
            repeat(nSides)
            {
                forward(1);
                left(360.0 / nSides);
            }
        }
    }

    wait(5);
}