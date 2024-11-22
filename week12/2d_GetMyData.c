// 2d_GetMyData.c
#include <stdio.h>
#include <malloc.h>

// 포인터 변수 q는 p 변수의 주소 값을 저장함
void GetMyData(int **q) { 
	// 할당된 메모리의 주소 값을 포인터 q가 가리키는 
	// main 함수의 p에 저장함
	*q = (int*)malloc(8);
}


int main(void) {
	int* p; // p는 초기화되자 않아서 쓰레기 값을 저장함
	GetMyData(&p); // 포인터 변수 p의 주소 값을 전달함
	*p = 5; // 할당된 메모리의 첫 4바이트에 값 5를 넣음

	printf("p (주소) : %p\n", p);
	printf("*p (값)  : %d\n", *p);
	free(p); // 할당된 동적 메모리를 해제함

	return 0;
}