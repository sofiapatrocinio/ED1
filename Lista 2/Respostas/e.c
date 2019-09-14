#include <stdio.h>
#include <stdlib.h>
int supper(int a)
{
  if (a > 96)
  {
    a = a - 32;
  }
  return a;
}
int size(char *ptr)
{
  int count = 0, set = 0;

  while (*(ptr + set) != '\0')
  {
    count++;
    set++;
  }
  return count;
}

int main()
{
  char input[1000], result = 'O';
  int n, i, j, number;

  scanf("%i", &number);

  for (int k = 0; k < number; k++)
  {
    scanf("%s", input);

    int count = size(input);

    for (i = 0; i < count - 1; i++)
    {

      int x = supper(input[i]);
      int y = supper(input[i + 1]);
      if (x > y)
      {
        result = 'N';
        break;
      }
      else if (x == y)
      {
        result = 'N';
        break;
      }
      else if (x < y)
      {
        result = 'O';
      }
    }

    printf("%s: %c\n", input, result);
  }

  return 0;
}