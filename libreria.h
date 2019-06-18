#ifndef _libreria_H_
#define _libreria_H_

#include<graphics.h>

//Prototipos de  funcion.
 int cubo();
 int cubo_t();
 int cubo_o();
 int helado();
 int foco();
 int sol();

//Funciones definidas
 int cubo(int x, int y, int a){
    setcolor(LIGHTCYAN);
    bar3d(x-a, y-a, x+a, y+a, a, 1);
    setcolor(BLACK);
    fillellipse(x-(a/2), y-(a/2), (a/10), (a/10));
    fillellipse(x+(a/2), y-(a/2), (a/10), (a/10));
    arc(x, y, 0, 180, a/5);
                              }

  int cubo_t(int x, int y, int a){
    setcolor(LIGHTCYAN);
    bar3d(x-a, y-a, x+a, y+a, a, 1);
    setcolor(BLACK);
    fillellipse(x-(a/2), y-(a/2), (a/10), (a/10));
    fillellipse(x+(a/2), y-(a/2), (a/10), (a/10));
    arc(x, y,180, 0, a/10);
                              }

 int cubo_o(int x, int y, int a){
    setcolor(LIGHTCYAN);
    bar3d(x-a, y-a, x+a, y+a, a, 1);
    setcolor(BLACK);
    fillellipse(x-(a/2), y-(a/2), (a/10), (a/10));
    fillellipse(x+(a/2), y-(a/2), (a/10), (a/10));
    fillellipse(x, y, (a/5), (a/5));
                              }

 int helado(int x,int y, int a){
    setcolor(RED);
    fillellipse(x, y-a, a/4, a/4);
    setcolor(LIGHTMAGENTA);
    fillellipse(x, y, a, a);
    setcolor(LIGHTGRAY);
    bar(x-a,y,x+a, y+a);
                                }
int foco(int x,int y, int a){
    setcolor(YELLOW);
    fillellipse(x,y,a,a);
    bar(x-(a/2),y, x+(a/2),y+(3*a/2));

    line(x,y-(2*a),x,y-(3*a/2));
    line(x-(2*a),y,x-(3*a/2),y);
    line(x+(3*a/2),y,x+(2*a),y);
    line(x-(3*a/2),y-(3*a/2),x-a,y-a);
    line(x+a,y-a,x+(3*a/2),y-(3*a/2));

    setcolor(DARKGRAY);
    bar(x-(a/2),y+(3*a/2),x+(a/2),y+(2*a));
                             }

 int sol(int x,int y,int a){
    setcolor(YELLOW);
    fillellipse(x,y, a, a);
    line(x,y-(2*a),x,y+(2*a));
    line(x-(2*a),y,x+(2*a),y);
    line(x-(2*a),y-(2*a),x+(2*a),y+(2*a));
    line(x-(2*a),y+(2*a),x+(2*a),y-(2*a));
                           }

#endif
