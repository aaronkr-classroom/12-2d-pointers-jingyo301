// name_malloc.c
#include <stdio.h>
#include <malloc.h>

int main(void) {
	char* p_name;
	p_name = (char*)malloc(20); // 20바이트 메모리를 동적 할당
	if (p_name != NULL) { // 메모리 할당에 성공
		printf("Enter your name>> ");
		gets(p_name); // 이름을 입력 받음

		printf("Hi~~ %s\n", p_name); // 입력 받은 이름을 출력
		free(p_name);
		// 포인터 변수 p_name에 동적 할당된 메모리를 해제
	}
	else { // 메모리 할당에 실패
		printf("Memory allocation error!!");
	}

	return 0;
}