#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
   int a;
   int b;
   
   printf("���ڸ� �Է��Ͻÿ�:");
   scanf("%d", &a);
   
   printf("�и� �Է��Ͻÿ� :");
   scanf("%d", &b);
   
   printf("������ ���� ����� %f �Դϴ�", (float)a/b);
   return 0;
}
