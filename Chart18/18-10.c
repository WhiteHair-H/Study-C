//#include <stdio.h>
//
//int main()
//{
//	FILE* fp;
//	int age;
//	char name[20];
//
//	fp = fopen("a.txt", "r");
//
//	fscanf(fp, "%d", &age);
//	while (fgetc(fp) != '\n');
//	fscanf(fp, "%s", &name);
//
//	//fgets(name, sizeof(name), fp);
//
//	printf("���� : %d , �̸� : %s", age, name);
//	fclose(fp);
//
//	return 0;
//}