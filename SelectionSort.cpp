#include <stdio.h>

int main(void) {
	int i, j; //배열에 있는 원소들 반복적 탐색 위해 사용 
	int min; // 최솟값 (가장 작은 걸 반복적 선택) 
	int index; // 가장 작은 원소가 존재하는 위치
	int temp; //특정한 두 숫자를 바꾸기 위해 사용 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for (i = 0; i < 10; i++) {
		min  = 9999; //모든 원소들 보다 큰 값을 무작위로 넣음 
		for (j = i; j < 10; j++) {
			if (min > array[j]) { //array[j]는 현재 탐색하고 있는 값 
				min = array[j];
				index = j;
			}
		}
		temp = array[i]; //temp라는 변수에 가장 앞에 있는 값을 넣는다.
		array[i] = array[index]; //가장 앞에 있는 값의 값으로 최솟값을 넣는다. 
		array[index] = temp; 
		// 위의 세줄이 swap하는 것. 가장 앞에 있는 값과 최솟값을 바꿔주겠다. 
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
