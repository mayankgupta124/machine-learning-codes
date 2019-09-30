#include<simplecpp>

main_program
{
    turtleSim();
    repeat(24)
    {
        repeat(600)
        {
            forward(0.05);
            right(0.5);
        }
        forward(20);
        repeat(600)
        {
            forward(0.05);
            left(0.5);
        }

        forward(20);
        right(360.0/24);

    }
    wait(5);
}
