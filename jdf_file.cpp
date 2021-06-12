#include <windows.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char Path[255]="C:\\Users\\Administrator\\Desktop";
	char FileName[255];
	char Data[512]="";
	int i=0;
	for(i=1;;i++)
	{
		wsprintf(Path,"C:\\Users\\Administrator\\Desktop");
		wsprintf(FileName,"\\%d.jdf",i);
		strcat(Path,FileName);
		HANDLE hFile;
		hFile=CreateFile(Path,GENERIC_WRITE,0,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
		
		if(hFile==INVALID_HANDLE_VALUE)
		{
			continue;
		}
		DWORD dwWrite;
		WriteFile(hFile,&Data,strlen(Data),&dwWrite,NULL);
		
		CloseHandle(hFile);
		memset(Path,0x00,255);
		memset(FileName,0x00,255);
	}
	return 0;
 } 
