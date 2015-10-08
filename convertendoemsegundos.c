#include <stdio.h>

typedef struct {
    int h;
    int m;
    int s;
}Horario;

/* seu código será inserido aqui */
int converte_segundos( Horario horario ){
    return horario.h*3600+horario.m*60+horario.s;

}

int main(void)
{
    Horario h1;
    int res;
    scanf("%i %i %i", &h1.h, &h1.m, &h1.s);
    res = converte_segundos(h1);
    printf("%i", res);
    return 0;
}
