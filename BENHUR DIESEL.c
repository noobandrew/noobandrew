
#include <stdio.h>

int main()
{
    int litrodiesel;
    int capacidadecaminhao;
    litrodiesel = 666;
    capacidadecaminhao = 333;
    
    int valoreal = (litrodiesel * capacidadecaminhao) / 100;
    int valocent = (litrodiesel * capacidadecaminhao) % 100;
    


    printf("o valor é %d reais e %d centavos\n", valoreal, valocent);
    
    
    return 0;
}
