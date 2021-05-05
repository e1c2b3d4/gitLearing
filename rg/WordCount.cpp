#include <stdio.h>
#include <string.h>

int main()
{
	//输入字符串
	char str;

	int flag = 0;
	int chanum = 0,wornum = 0;
	while (str=getchar()) {
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
	
	//加上最后的换行符
	printf("字符数:%d\n",chanum);
	printf("单词数:%d\n",wornum);
	
    return 0;
}
