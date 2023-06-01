#include<stdio.h>
#include<stdlib.h>
#include"Constant.h"
#include"Macro.h"
#include"Structure.h"
#include"BMPtoASCII.h"
#include"FileIO.h"


int main(int argc, char* argv[])
{

	FILE* pBitmap;
	BITMAPFILEHEADER BitmapFileHeader;
	BITMAPINFOHEADER BitmapINFOHeader;
	BYTE* pPixel = NULL;
	char* strFileName;
	int iPadding = 0;

	strFileName = GetPureFileName(argv[1]);



}