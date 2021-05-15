#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//输入字符串
	FILE *p = fopen("C:\\git\\Git\\repository\\test\\rg\\Debug\\input.txt","r");

	int flag = 0;
	char str;
	int chanum = 0,wornum = 0;
	while (str=fgetc(p) != EOF) {
		if(str) {
			chanum++;
			flag = 1;
		}
		if((str == ' ' || str ==',') && flag) {
			wornum++;
		}
		//判断换行符前是否有单词
		if(str == '\n') {
			if(flag) {
				wornum++;
			}
			break;
		}
	}
	fclose(p);
	
	//加上最后的换行符
	printf("字符数:%d\n",chanum+1);
	printf("单词数:%d\n",wornum);
	
    return 0;
}
