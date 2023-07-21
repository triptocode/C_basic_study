#include <stdio.h>
int main() {

	// C����� Data Type ���� 	
	printf("happy");
	printf("coding\n");
	//    ������ value �Ҵ��� ��� //
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

//     value �ٷ�  ��� //
	printf("%c\n", 'A'); // 1byte, // ����: " " �ȵ�/ Stores a single character/letter/number, or ASCII values
	printf("%s\n", "ABCDE"); // ����:  printf("%s\n", 'ABCDE');�� �Է��ϸ� ���� A���� ��µǰ� �� �ٺ��� ����
	printf("%d\n", 123);
	printf("1.23-> 4����Ʈ floatŸ��: %f\n", 1.23); // 4bytes , �Ҽ������� 6�ڸ�  
	printf("1.23-> 8����Ʈ doubleŸ:�� %lf\n", 1.23); // 8bytes , �Ҽ������� 6�ڸ�  
	printf("%.2lf\n", 9.1); // 2lf : �Ҽ������� 2�ڸ� 
	printf("%.4lf\n", 9.1); // 4lf : �Ҽ������� 4�ڸ� 

	//A
	//ABCDE
	//123
	//1.23-> 4����Ʈ floatŸ��: 1.230000
	//1.23-> 8����Ʈ double(=lf)Ÿ:�� 1.230000
	//9.10
	//9.1000


	//   ����!:  type ��ȯ ������ ���� ����� �޶����� �ִ�.  //
	float sum1 = 5 / 2;
	printf("%f\n", sum1); // 2.000000

	// Manual conversion: int to float
	float sum2 = (float)5 / 2;
	printf("%f\n", sum2); // 2.500000

	//	1) const �ʱ�ȭ�θ� ��밡��! (����� �Ҵ�) 
	// When you declare a constant variable, it must be assigned with a value:

		//const int minutesPerHour1 = 60; // ok!
		//printf("%d", minutesPerHour1);

	// 2) error (�ʱ�ȭ ���ؼ�)
	//    const int minutesPerHour2;
	//    minutesPerHour2 = 60;  // [Error] assignment of read-only variable 'minutesPerHour2'
	//    
	//   	printf("%d", minutesPerHour2);


	// 2�� for loop ������   	
	for (int i = 1; i < 10; i++) {
		printf("������ %d ��\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}


	//return 0;  // �̰� ���ܵθ� �ϴ� �ڵ�� ���� �ʰ� ���� ���������� ����ϰ� ����!


    // �Ž����� // 
    int input, change;    //input�� ���Ծ�, charge�� �ܵ��� �����ϴ� ������ ��������
    int w500, w100, w50, w10;  //500��, 100��, 50��, 10���� ������ ������ ������ ��������

    printf("���� �Է��ϼ��� : "); //�Է� �ȳ� �޽��� ���
    scanf_s("%d", &input);   //���Ծ� �Է�

    change = input - 200;   //�ܵ� ���, Ŀ�� ������ 200���� ��

    w500 = change / 500;   //�ܵ��� 500���� ���� ���� 500�� ������ ����
    change = change % 500;   //���� �ܵ��� ������ �����ڷ� ���
    //change���� 500�� �̸��� �ܵ��� ���´�.
    w100 = change / 100;   //100��, 50��¥�� ������ ������ ���������� ���
    change = change % 100;

    w50 = change / 50;
    change = change % 50;

    w10 = change / 10;    //������ 10�� ������ ���� ���

    printf("500��¥�� ���� %d\n", w500); //�� ������ ������ ���
    printf("100��¥�� ���� %d\n", w100);
    printf("50��¥�� ���� %d\n", w50);
    printf("10��¥�� ���� %d\n", w10);

    return 0;
}



// << git ��ɾ� (vscode���� c��������� ��� �����ϱ�) >>

// git init 
// git add --all 
// git config --global user.email aaa@gmail.com
// git config --global user.name bbb
// git commit -m "first commit" 
// git pull
//  git push --set-upstream origin master
