#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Constant.h"
#include"Structure.h"
#include"FileIO.h"

void LoadBitmap(FILE** ppBitmap, char* strFileName, PBITMAPFILEHEADER pBitmapFileHeader, PBITMAPINFOHEADER pBitmapInfoHeader)
{
	OpenFile(ppBitmap, strFileName, "rb");

	if (fread(pBitmapFileHeader, sizeof(BITMAPFILEHEADER), 1, *ppBitmap) < 1)
	{
		perror("��Ʈ�� ���� ��� �б� ����");
		CloseFile(*ppBitmap);
		exit(EXIT_FAILURE);
	}

	if
}