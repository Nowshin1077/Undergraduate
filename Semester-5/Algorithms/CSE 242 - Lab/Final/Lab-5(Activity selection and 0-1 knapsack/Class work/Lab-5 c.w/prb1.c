#include <stdio.h>

void ActivitySelection(int start[], int finish[], int n)
{
  printf("Selected activities:\n");
  int j = 0;
  printf("%d ", j);
  int i;

  for (i = 1; i < n; i++)
  {
    if (start[i] >= finish[j])
    {
      printf("%d ", i);
      j = i;
    }
  }
}

int main()
{
  int start[] = {1, 3, 0, 5, 3, 5, 6, 8, 8, 2, 12};
  int finish[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  int n = sizeof(start) / sizeof(start[0]);
  ActivitySelection(start, finish, n);
  return 0;
}


