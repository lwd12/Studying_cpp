#pragma once


#ifndef __BMPtoASCII_H__
#define __BMPtoASCII_H__

#include "Structure.h"

void LoadBitmap(FILE** ppBitmap, char* strFileName, PBITMAPFILEHEADER pBitmapFileHeader, PBITMAPINFOHEADER pBitmapInfoHeader);

void InitBitmap(FILE* pBitmap, PBITMAPFILEHEADER pBitmapFileHeader, PBITMAPINFOHEADER pBitmapInfoHeader, BYTE** ppPixer, int iPadding);

void ConvertBitmap(char* strFileNamem, PBITMAPINFOHEADER pBitmapInfoHeader, BYTE* pPixel, int iPadding);

#endif