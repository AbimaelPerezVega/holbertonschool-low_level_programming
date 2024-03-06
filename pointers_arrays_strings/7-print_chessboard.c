#include "main.h"
/**
 * print_chessboard - making the chessboard
 *@a: i wanna play chess
 *
 *Return: void
 *
*/
void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
_putchar(a[i][j]);
_putchar(' ');
}
_putchar('\n');
}
}
