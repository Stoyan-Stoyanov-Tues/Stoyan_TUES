#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{	
	int broqch_1 = 0;
	int broqch_2 = 0;
	char tekusht_simvol_ot_fail_1;
	char danni_ot_masiv_1[2000];
	char *file_name[10000];
	int broqch = 0;
	int broqch_na_redove = 0;
	printf("%c", *argv[1]);
	while(broqch <= argc)
	{
		file_name[broqch] = argv[broqch];
		broqch++;
	}
	broqch = 0;
	while(broqch <= argc)
	{
		FILE *fp;
		fp = fopen(argv[broqch], "r");
		while(( tekusht_simvol_ot_fail_1 = getc(fp)) != EOF & broqch_na_redove <= 10)
		{
			printf("%c", tekusht_simvol_ot_fail_1);
			if(tekusht_simvol_ot_fail_1 == 10)
			{
				broqch_na_redove++;
			}
		}
		fclose(fp);
		broqch++;
		broqch_na_redove = 0;
	}
}	
