#include <iostream>

int main()
{
  int id1, id2, n1, n2;
  float price1, price2;

  printf("Write product 1 id:");
  scanf("%d", &id1);
  printf("How many products?");
  scanf("%d", &n1);
  printf("How much for each?");
  scanf("%f", &price1);
  printf("Write product 2 id:");
  scanf("%d", &id2);
  printf("How many products?");
  scanf("%d", &n2);
  printf("How much for each?");
  scanf("%f", &price2);

  printf("VALOR A PAGAR: R$ %.2f\n", n1 * price1 + n2 * price2);

  return 0;
}