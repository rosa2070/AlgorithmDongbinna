#include <stdio.h>

int main(void) {
	int i, j; //�迭�� �ִ� ���ҵ� �ݺ��� Ž�� ���� ��� 
	int min; // �ּڰ� (���� ���� �� �ݺ��� ����) 
	int index; // ���� ���� ���Ұ� �����ϴ� ��ġ
	int temp; //Ư���� �� ���ڸ� �ٲٱ� ���� ��� 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for (i = 0; i < 10; i++) {
		min  = 9999; //��� ���ҵ� ���� ū ���� �������� ���� 
		for (j = i; j < 10; j++) {
			if (min > array[j]) { //array[j]�� ���� Ž���ϰ� �ִ� �� 
				min = array[j];
				index = j;
			}
		}
		temp = array[i]; //temp��� ������ ���� �տ� �ִ� ���� �ִ´�.
		array[i] = array[index]; //���� �տ� �ִ� ���� ������ �ּڰ��� �ִ´�. 
		array[index] = temp; 
		// ���� ������ swap�ϴ� ��. ���� �տ� �ִ� ���� �ּڰ��� �ٲ��ְڴ�. 
	}
	for(i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
