// 1. 주석
/*
   여러줄 주석
   프로그램 : main.c
   작성자 : mju, 26-03-16
   하는일 : 화면에 Hello World!를 출력한다 
*/

// 2. 전처리기
#include <stdio.h>   // 표준 입출력 포함( include)
#include <stdlib.h>   // system 함수를불러옴
// 3. main 함수
int main(void)
{
	system("chcp 65001"); // 한글로 나오게
	
	printf("Hello World!\n");// 화면에 Hello World 출력
	printf("이승주\n");
	printf("첫 번째 줄\n두 번째 줄\n");
	printf("\"이승주\"\t24\t서울");
	return 0;
}
/*
  파일이름:
  작 성 자:
*/
