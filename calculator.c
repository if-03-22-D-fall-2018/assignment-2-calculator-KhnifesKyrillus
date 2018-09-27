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
        case default:
          printf("Input is not valid!!!\n");
            break;
    }

    return 0;
}
int FirstOpertor()
{
  int firstOprator;

  printf("Please enter the first operand: ", );
  scanf("%d\n", &firstOprator );
  return firstOprator;
}
int SecondOpertor()
{
  int secondOprator;

  printf("Please enter the first operand: ", );
  scanf("%d\n", &secondOprator );
  return secondOprator;
}
int Subtraction(int firstOperator,int secondOperator)
{

}
