#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
 {
char it,ot;
    printf("�п�J�n�ഫ���r��:");
    scanf("%c",&it);
    if((it>='A')&&(it<='Z'))
	{        
        ot=it+32;
        printf("%c",ot);
		}
    else if((it>='a')&&(it<='z'))
	{
        ot=it-32;
        printf("%c",ot);
		}
	system("PAUSE");
	return 0;
}
