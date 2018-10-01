#include <stdio.h>

int main(int argc, const char *argv[])
{
    iprintf("Choose one of the following operations:\n");
    printf("\tAdd (1)\n");
    printf("\tSubtract (2)\n");
    printf("\tMultiply (3)\n");
    printf("\tDivide (4)\n");
    printf("\tStop program (-1)\n");
    int input;
    scanf("%d\n", &input);
    if (input<5 && input>=-1)
    {
      printf("Input was invalid!!!\n", );
      return 0;
    }
    int firstOprator;
    printf("Please enter the first operand: \n", );
    scanf("%d\n", &firstOprator);
    int secondOperator;
    printf("Please enter the second operand: \n", );
    scanf("%d\n", &secondOprator);
    switch (input)
    {
        case -1:
          return 0;
            break;
        case 1:

            break;
        case 2:
          Subtraction();
            break;
        case 3:

            break;
        case 4:

            break;
    }

    return 0;
}
