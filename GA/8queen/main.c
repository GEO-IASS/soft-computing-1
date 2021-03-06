#include "GA.h"

int main(int argc, char **argv)
{
    int i;

    srand((unsigned)time(NULL));

    initialize();
/*    print_particles(0);*/

    for(i=1; i<ITERA_CNT+1; i++){
        selection();
        crossover();
        mutation();

        // termination
        if (solution) {
          print_area(solution);
          printf("\n(%3d itera)\n", i);
          break;
        }

        if (i == ITERA_CNT)
          printf("\n(%3d itera) not found\n", i);

    }
    printf("\n");
    return 0;
}
