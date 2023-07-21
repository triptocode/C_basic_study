#include <stdio.h>
int main() {

	// C언어의 Data Type 정리 	
	printf("happy");
	printf("coding\n");
	//    변수에 value 할당후 출력 //
	int myNum = 5;             // Integer (whole number)
	float myFloatNum = 5.99;   // Floating point number
	char myLetter = 'D';       // Character

	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	//happycoding
	//5
	//5.990000
	//D

//     value 바로  출력 //
	printf("%c\n", 'A'); // 1byte, // 주의: " " 안됨/ Stores a single character/letter/number, or ASCII values
	printf("%s\n", "ABCDE"); // 주의:  printf("%s\n", 'ABCDE');로 입력하면 위에 A까지 출력되고 이 줄부터 멈춤
	printf("%d\n", 123);
	printf("1.23-> 4바이트 float타입: %f\n", 1.23); // 4bytes , 소수점이하 6자리  
	printf("1.23-> 8바이트 double타:입 %lf\n", 1.23); // 8bytes , 소수점이하 6자리  
	printf("%.2lf\n", 9.1); // 2lf : 소수점이하 2자리 
	printf("%.4lf\n", 9.1); // 4lf : 소수점이하 4자리 

	//A
	//ABCDE
	//123
	//1.23-> 4바이트 float타입: 1.230000
	//1.23-> 8바이트 double(=lf)타:입 1.230000
	//9.10
	//9.1000


	//   주의!:  type 변환 유무에 따라 결과가 달라질수 있다.  //
	float sum1 = 5 / 2;
	printf("%f\n", sum1); // 2.000000

	// Manual conversion: int to float
	float sum2 = (float)5 / 2;
	printf("%f\n", sum2); // 2.500000

	//	1) const 초기화로만 사용가능! (선언및 할당) 
	// When you declare a constant variable, it must be assigned with a value:

		//const int minutesPerHour1 = 60; // ok!
		//printf("%d", minutesPerHour1);

	// 2) error (초기화 안해서)
	//    const int minutesPerHour2;
	//    minutesPerHour2 = 60;  // [Error] assignment of read-only variable 'minutesPerHour2'
	//    
	//   	printf("%d", minutesPerHour2);


	// 2중 for loop 구구단   	
	for (int i = 1; i < 10; i++) {
		printf("구구단 %d 단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}


	//return 0;  // 이걸 남겨두면 하단 코드는 돌지 않고 위의 예제까지만 출력하고 종료!


    // 거스름돈 // 
    int input, change;    //input은 투입액, charge는 잔돈을 저장하는 정수형 변수선언
    int w500, w100, w50, w10;  //500원, 100원, 50원, 10원의 개수를 저장할 정수형 변수선언

    printf("돈을 입력하세요 : "); //입력 안내 메시지 출력
    scanf_s("%d", &input);   //투입액 입력

    change = input - 200;   //잔돈 계산, 커피 한잔이 200원일 때

    w500 = change / 500;   //잔돈을 500으로 나눈 몫은 500원 동전의 개수
    change = change % 500;   //남은 잔돈은 나머지 연산자로 계산
    //change에는 500원 미만의 잔돈만 남는다.
    w100 = change / 100;   //100원, 50원짜리 동전의 개수도 마찬가지로 계산
    change = change % 100;

    w50 = change / 50;
    change = change % 50;

    w10 = change / 10;    //마지막 10원 동전의 개수 계산

    printf("500원짜리 동전 %d\n", w500); //각 동전의 개수를 출력
    printf("100원짜리 동전 %d\n", w100);
    printf("50원짜리 동전 %d\n", w50);
    printf("10원짜리 동전 %d\n", w10);

    return 0;
}



// << git 명령어 (vscode에서 c언어파일을 깃과 연동하기) >>

// git init 
// git add --all 
// git config --global user.email aaa@gmail.com
// git config --global user.name bbb
// git commit -m "first commit" 
// git pull
//  git push --set-upstream origin master
