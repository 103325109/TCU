#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
	FILE *A = fopen("gi_taxid_nucl.dmp","r");

	int con=0;
	while(!feof(A))
	{
		char temp[10000];
		if(feof(A))
			break;
		fgets(temp,10000,A);
		printf("%s",temp);
		con++;
		if(con>780000000)
			con=con;
	}
	fclose(A);


	system("pause");
}

//¤À³Îsim¸ê®Æ
//void main()
//{
//	FILE *A = fopen("sim_Answer_OK.txt","r");
//	FILE *simHC = fopen("simHC_ans.txt","w+");
//	FILE *simMC = fopen("simMC_ans.txt","w+");
//	FILE *simLC = fopen("simLC_ans.txt","w+");
//
//	while(!feof(A))
//	{
//		char temp[10000];
//
//		if(feof(A))
//			break;
//		fgets(temp,10000,A);
//		if(strncmp(temp,"simHC",5) == 0)
//			fprintf(simHC,"%s",temp);
//		else if(strncmp(temp,"simMC",5) == 0)
//			fprintf(simMC,"%s",temp);
//		else if(strncmp(temp,"simLC",5) == 0)
//			fprintf(simLC,"%s",temp);
//	}
//	fclose(A);
//	fclose(simHC);
//	fclose(simMC);
//	fclose(simLC);
//
//	system("pause");
//}