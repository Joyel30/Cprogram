
#include <stdio.h>

int main ()
{
  int arr[100];
  int n, i, j, l;
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    scanf ("%d", &arr[i]);
  for (i = 0; i < n; i++)
    {
      l = arr[i + 1];
      for (j = i + 1; j < n - 1; j++)
	{
	  if (l < arr[j])
	    l = arr[j];
	  arr[i] = l;

	}
    }
  arr[n - 1] = -1;



  for (i = 0; i < n; i++)
    printf ("%d", arr[i]);



  return 0;
}
