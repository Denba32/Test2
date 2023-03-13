#include <stdio.h>
#include <stdlib.h>

// 0부터 100까지의 소수를 구하는 메서드
int Demical() 
{
	// 나누어 떨어짐을 카운팅 하는 필드
	int count = 0;

	// 소수의 합을 저장하는 필드
	int result = 0;

	// 0과 1은 소수가 아니므로 제외하고 반복문으로 100까지 
	for (int i = 2; i < 101; i++) {
		// count 초기화
		count = 0;

		// 0으로 수를 나눌 수 없기에 1부터 시작하여 해당 수 까지 나눔
		// 소수는 1과 자기 자신만으로 나누어 떨어짐
		for (int j = 1; j <= i; j++)
		{
			// 나누어 떨어지면 count를 1 올림
			if (i % j == 0) {
				count++;
			}

			// 나누어 떨어지는 횟수가 2 이상일 경우 반복에서 벗어남
			if (count > 2)
			{
				break;
			}
		}
		
		// 2번만 나누어 떨어질 경우 result에 해당 수를 누적
		if (count == 2) {
			result += i;
		}
	}
	// 해당 결과 result를 반환
	return result;
}

// 메인 스레드
int main() {
	printf("%d", Demical());
}