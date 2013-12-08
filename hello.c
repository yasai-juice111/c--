#include <stdio.h>

main()
{
  printf("Hello World\n");
  int sumNumber = variable();
  printf("%d\n",sumNumber);
  int row;
  int column;
  for (row=1; row<=9; row++)
  {
	  for (column=1; column<=9; column++)
	  {
	  	printf("%d ",row*column);
	  }
  	printf("\n");
  }
}

variable()
{
	int number1 = 1;
	int number2 = 2;
	int number3 = 3;
	int sum = number1 + number2 + number3;

	return sum;
}