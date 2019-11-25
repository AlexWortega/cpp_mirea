#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define SIZEX 41
#define SIZEY 21

int main ()
{
    setlocale(LC_ALL,"Russian");
    char tmp[SIZEX][SIZEY], scr[SIZEX][SIZEY];
    int x, y, z=0;
    for (y=0;y<=SIZEY-1;y++) for (x=0;x<=SIZEX-1;x++) tmp [x][y] = ' ';
    for (y=0;y<=SIZEY-1;y++) for (x=0;x<=SIZEX-1;x++) scr [x][y] = ' ';

    // Рисуем живые клетки в поле
    scr[26][4] = '*';
    scr[26][5] = '*';
    scr[26][6] = '*';
    scr[27][5] = '*';
    scr[28][5] = '*';
    scr[28][6] = '*';
    scr[28][7] = '*';

    //----------------
    int d, i;
    printf("Количество поколений: ");
    scanf("%i", &d);
    for (i=1;i<=d;i++)
    {
        system("cls");
        for (y=1;y<=SIZEY-2;y++) for (x=1;x<=SIZEX-2;x++) tmp[x][y] = scr[x][y];
        for (y=1;y<=SIZEY-2;y++)
        {
            for (x=1;x<=SIZEX-2;x++)
            {
                if (tmp[x][y] == ' ')
                {
                    if (tmp[x-1][y-1] == '*') z++;
                    if (tmp[x][y-1] == '*') z++;
                    if (tmp[x+1][y-1] == '*') z++;
                    if (tmp[x+1][y] == '*') z++;
                    if (tmp[x+1][y+1] == '*') z++;
                    if (tmp[x][y+1] == '*') z++;
                    if (tmp[x-1][y+1] == '*') z++;
                    if (tmp[x-1][y] == '*') z++;
                    if (z == 3) scr[x][y] = '*';
                    z = 0;
                } else
                {
                    if (tmp[x-1][y-1] == '*') z++;
                    if (tmp[x][y-1] == '*') z++;
                    if (tmp[x+1][y-1] == '*') z++;
                    if (tmp[x+1][y] == '*') z++;
                    if (tmp[x+1][y+1] == '*') z++;
                    if (tmp[x][y+1] == '*') z++;
                    if (tmp[x-1][y+1] == '*') z++;
                    if (tmp[x-1][y] == '*') z++;
                    if ((z == 2) || (z == 3))
                    {
                        scr [x][y] = '*';
                        z = 0;
                    } else
                    {
                        scr [x][y] = ' ';
                        z = 0;
                    }
                }
            }
        }
        for (y=1;y<=SIZEY-2;y++)
        {
            for (x=1;x<=SIZEX-2;x++)
            {
                printf ("%c", scr[x][y]);
            }
            printf("\n");
        }
        getchar();
    }
    system("pause");
    return 0;
}
