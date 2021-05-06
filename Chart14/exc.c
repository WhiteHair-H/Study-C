//#include <stdio.h>
//#include <string.h>
//
////회문을 찾아내기
////길이구하기 - 길이 / 2
////madam - m , m 비교 했을시 같은 경우 - 회문입니다
////다를경우 - 회문이 아닙니다
//
//int main()
//{
//	int i;
//	char ch[30];
//	int length;
//
//	do
//	{
//		printf("------------------------------------\n");
//		printf("회문을 찾는 프로그램입니다. ex)madam \n");
//		printf("단어를 입력해주세요. : ");
//		scanf("%s", &ch);
//		//printf("%s", ch);
//
//		length = strlen(ch);
//
//		for (i = 0; i < length / 2; i++)
//		{
//			if (ch[i] != ch[length - 1 - i])
//			{
//				printf("회문이 아닙니다.\n");
//				break;
//			}
//			printf("회문입니다.\n");
//			printf("------------------------------------\n");
//		}
//
//	} while (ch[i] != ch[length - 1 - i]);
//
//	return 0;
//}
//
//
