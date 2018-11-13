#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
   int matriz[3][3]={{0,0,0},{0,0,0},{0,0,0}};
   int longitudI=sizeof(matriz)/sizeof(*matriz);
   for(int f=0;f<longitudI;f++)
   {
       int longitudJ=sizeof(matriz[f])/sizeof(*matriz[f]);
       for(int c=0;c<longitudJ;c++)
       {
           cout<<matriz[f][c]<<endl;
       }
   }
   return 0;
}
