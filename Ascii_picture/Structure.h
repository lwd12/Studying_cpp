#pragma once

#ifndef __STRUCTURE_H__
#define __STRUCTURE_H__

typedef unsigned char    BYTE;
typedef unsigned short int WORD;
typedef signed long int   LONG;
typedef unsigned long int DWORD;

#pragma pack(push,1)

typedef struct _Bitmapfileheder
{
	WORD bftype;
	DWORD bfSize;
	WORD bfReserved1;
	WORD bfReserved2;
	DWORD bfoffBits;
}BITMAPFILEHEADER,*PBITMAPFILEHEADER;

typedef struct _BitmapInfoheader
{
	DWORD biSize;
	LONG biWidth;
	LONG biHeight;
	WORD biPlanes;
	WORD biBitcount;
	DWORD biCompression;
	DWORD biSizeImage;
	LONG biXPelsperMeter;
	LONG biYPelsperMeter;
	DWORD biClrused;
	DWORD biClrImportant;
}BITMAPINFOHEADER,*PBITMAPINFOHEADER;

typedef struct _RGBTriple
{

	BYTE rgbBlue;
	BYTE rgbGreen;
	BYTE rgbRed;
}RGBTRIPLE,*PRGBTRIPLE;

#pragma pack(pop)

#endif