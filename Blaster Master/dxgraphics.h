#ifndef _DXGRAPHICS_H
#define _DXGRAPHICS_H

#include <d3dx9.h>
#include <windows.h>
#include <d3d9.h>

//function prototypes
int Init_Direct3D(HWND, int, int, int);
LPDIRECT3DSURFACE9 LoadSurface(char*, D3DCOLOR);

//variable declarations
extern LPDIRECT3D9 d3d;
extern LPDIRECT3DDEVICE9 d3ddev;

extern LPDIRECT3DSURFACE9 backbuffer;
extern LPDIRECT3DSURFACE9 surface;

LPDIRECT3DTEXTURE9 LoadTexture(char*, D3DCOLOR);

#endif


