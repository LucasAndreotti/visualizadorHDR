#ifndef MYOPENGL_H
#define MYOPENGL_H

#ifdef WIN32
#include <windows.h>    // includes only in MSWindows not in UNIX
#include "gl/glut.h"
#endif

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdio.h>
#include <stdlib.h>

#define HISTSIZE 256

// Funções da interface gráfica e OpenGL
void init(int argc, char** argv);
void display();
void drawHist(float hist[]);
void keyboard( unsigned char key, int x, int y );
void mouse(int button, int state, int x, int y);
void arrow_keys(int key, int x, int y);
void reshape(int w, int h);
void buildTex();

typedef struct
{
    float r;
    float g;
    float b;
}RGBfloat;

typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
}RGBunsigned;

typedef struct
{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char e;
}RGBE;

typedef struct{
    unsigned char id[3];
    unsigned char imgWidth[4];
    unsigned char imgHeight[4];
} IHDR;

#endif // MYOPENGL_H