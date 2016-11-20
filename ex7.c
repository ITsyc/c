#include <stdio.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;
    printf("you have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe  has  %ld bugs.\n", universe_of_defects);

    double expected_bugs = bug_rate * bugs;
    printf("you have expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("that is only a %e portion of the")
}