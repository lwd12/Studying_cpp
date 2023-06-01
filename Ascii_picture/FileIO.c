#include<stdlib.h>
#include<string.h>
#include"FileIO.h"

char* GetPureFileName(char* strFileName)
{
	char* pToken[10];
	int iIndex = 0;

	pToken[iIndex++] = strtok(strFileName, "\\");
	while (pToken[iIndex - 1] != NULL)
	{
		pToken[iIndex++] = strtok(NULL, "\\");
	}
	return pToken[iIndex - 2];
}


void OpenFile(FILE**ppFile, char *strFileName, char *pMode)
{
	*ppFile = Fopen(strFileName, pMode);
	if (*ppFile == NULL)
	{
		perror("파일 스트림 생성 실패!");
		exit(EXIT_FAILURE);
	}
}

void CloseFile(FILE* pFile)
{
	if (fclose(pFile) == EOF)
	{
		perror("파일 스트림 생성 실패");
		exit(EXIT_FAILURE);
	}
}