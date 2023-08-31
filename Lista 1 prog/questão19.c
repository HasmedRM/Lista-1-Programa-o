#include <stdio.h>

int main() {

  unsigned escolha;

  printf("Escolha entre 1 - retangulo, 2- elipse, e 3- seta 4 - losangulo ");
  scanf("%d",&escolha);

  switch(escolha) {
    case 1:
    puts("********");
    puts("*      *");
    puts("*      *");
    puts("*      *");
    puts("*      *");
    puts("********");
    break;

    case 2:
    puts("   *** ");
    puts(" *    *");
    puts("*      *");
    puts("*      *");
    puts("*      *");
    puts(" *    *");
    puts("  ***");
    break;

    case 3:
    puts("    *    ");
    puts("   ***");
    puts("  *****");
    puts("    *    ");
    puts("    *    ");
    puts("    *    ");
    puts("    *    ");
    puts("    *    ");
    puts("    *    ");
    break;

    case 4:
    puts("     *  ");
    puts("    * *");
    puts("   *   *");
    puts("  *     *");
    puts(" *       *");
    puts("  *     *   ");
    puts("   *   *   ");
    puts("    * *");
    puts("     *  ");
    break;
    
    default:
    printf("numero invalido");
  }
  
  return 0;
}