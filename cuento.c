#include<graphics.h>
#include"libreria.h"

int main()
{
 int graphicdriver=DETECT,graphicmode;
 initgraph(&graphicdriver,&graphicmode,"c:\\bc5\\bgi");
  int x = getmaxx()/2, y = getmaxy()/2;
  int a=20;
   //Título
   outtextxy(x-45,y-10, "El cubo de hielo");
   outtextxy(x-65,y+10, "que amaba el helado.");
   delay(5000);
   cleardevice();
   //Cuadro1
   outtextxy(x, y-10, "Habia una vez un cubo de hielo");
   outtextxy(x, y+10,"que amaba el helado.");
   cubo(x-110,y+20,50);
   helado(x-170,y+10,15);
   delay(5000);
   cleardevice();
   //Cuadro2
   outtextxy(x, y-10,"\"Ojala durara para siempre.\"");
   outtextxy(x, y+10, "Penso el cubo de hielo.");
   cubo_t(x-110, y+20, 50);
   helado(x-170,y+10,15);
   delay(5000);
   cleardevice();
   //Cuadro3
   outtextxy(x, y-10,"Entonces el cubo de hielo");
   outtextxy(x, y+10, "tuvo una GRAN idea.");
   cubo_o(x-110, y+100, 50);
   helado(x-170,y+110,15);
   foco(x-90, y-50, 25);
   delay(5000);
   cleardevice();
   //Cuadro4
   outtextxy(x, y-10,"Su plan era sencillo,");
   outtextxy(x, y+10, "solo necesitaba tiempo y Sol.");
   sol(x-110,y,50);
   delay(5000);
   cleardevice();
   //Cuadro5
   for(int c=1;c<=25;c++){
    sol(x-110,y-110,25,2);
    cubo(x+75,y+20,50-c);
    setcolor(LIGHTCYAN);
    fillellipse(x+80,y+60, 25+(2*c), c);
    delay(500);
    cleardevice();
           }
  //Cuadro 5.1
   sol(x-110,y-110,25,25);
   cubo(x+75,y+20,25);
   delay(5000);
   cleardevice();

  //Cuadro6
   outtextxy(x+10, y-50,"\"Genial mas helado!.\"");
   outtextxy(x+10, y-30, "Exclamo el cubo de hielo.");
   outtextxy(x+10, y-10, "Con una gran sonrisa.");
   cubo(x+50,y+50,25);
   helado(x-100, y, 100);
   delay(5000);
   cleardevice();
  //Cuadro 7
  outtextxy(x+100,y-50, "Fin.");
  delay(5000);
  cleardevice();

 closegraph();
 getch();
 return 0;


}
