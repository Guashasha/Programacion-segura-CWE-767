#include <stdio.h>

int main(int argc, char *argv[]) {
  char correctPassword[] = "patito";
  char password[10];

  gets(password);

  if (strncmp(password, correctPassword, 10) == 0)
    printf("\nContraseña correcta. Bienvenido!\n");
  else
    printf("\nAcceso denegado.\n");

  return 0;
}
