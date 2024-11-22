// 2d_pointer.c
#include <stdio.h>

int main(void) {
	short data = 3,
		* p = &data, // data 변수의 주소 값을 1차원 포인터 p에 저장함
		** pp = &p; // 1차원 포인터 p변수의 주소 값을 2차원 포인터 pp에 저장함

	printf("[Before   ] data: %d\n", data); // 3을 출력
	*p = 40; // 1차원 포인터 p를 사용하여, data 변수 값을 40으로 수정함
	printf("[Use *p   ] data: %d\n", data); // 40을 출력
	**pp = 500; // 2차원 포인터 pp를 사용하여, data 변수 값을 500으로 수정함
	printf("[Use **pp ] data: %d\n", data); // 500을 출력

	return 0;
}