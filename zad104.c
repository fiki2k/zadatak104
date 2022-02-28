// Naci sumu matrice.

#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], suma[2][2];
  int i,j;

  // Unesi elemente za matricu a
  printf("Unesi elemente za prvu matricu\n");
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j)
    {
      printf("unesi element a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Unesi elemente za matricu b
  printf("Unesi elemente za drugu matricu\n");
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j)
    {
      printf("Unesi element b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // Zbrajanje matrica.
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j)
    {
      suma[i][j] = a[i][j] + b[i][j];
    }

  // Ispis sume.
  printf("\nSuma matrica:");

  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j)
    {
      printf("%.1f\t", suma[i][j]);

      if (j == 1)
        printf("\n");
    }
  return 0;
}
