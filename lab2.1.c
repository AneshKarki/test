// to convert kilogram into gram and display
#include <stdio.h>
#include <conio.h>
int main()
{
  int kg, grm;
  printf("Enter the value of kg\n");
  scanf("%d", &kg);
  grm = kg * 1000;
  printf("therefore %d kg is equal to %d gram ", kg, grm);
  getch();
  return (0);
}
