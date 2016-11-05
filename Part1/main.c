#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	// Tests Strlen & Strdup
	char *str[4];
	int i;

	// Tests strcpy
	char strcpy_dest[] = "Helliooo";
	char strcpy_src[] = "Fuck";
	char strcpy_destbis[] = "Helliooo";
	char strcpy_srcbis[] = "Fuck";
	char strcpy_dest1[] = "Comment ca va";
	char strcpy_src1[] = "Yalla";
	char strcpy_destbis1[] = "Comment ca va";
	char strcpy_srcbis1[] = "Yalla";

	// Tests strncpy
	char *result;
	char *resultbis;
	char *result1;
	char *result1bis;
	char strncpy_dest[] = "Helliooo";
	char strncpy_src[] = "Fuck";
	char strncpy_destbis[] = "Helliooo";
	char strncpy_srcbis[] = "Fuck";
	char strncpy_dest1[] = "Comment ca va";
	char strncpy_src1[] = "Yalla";
	char strncpy_destbis1[] = "Comment ca va";
	char strncpy_srcbis1[] = "Yalla";

	// Tests strcat
	char *strcat_result;
	char *strcat_resultbis;
	char *strcat_result1;
	char *strcat_result1bis;
	char strcat_s1[50] = "Helliooo";
	char strcat_s2[50] = "Fuck";
	char strcat_s1bis[50] = "Helliooo";
	char strcat_s2bis[50] = "Fuck";

	// TEST STRLEN
	str[0] = "hello comment ca va";
	str[1] = "";
	str[2] = "yo # sdflskjf";
	str[3] = NULL;

	// TEST STRLEN
	i = 0;
	printf("\n############## TEST STRLEN ##############\n\n");
	while (str[i])
		{
			printf("TEST %i : Expected : %lu -- Result : %d - ", i,  strlen(str[i]), ft_strlen(str[i]));
			if (strlen(str[i]) == ft_strlen(str[i]))
				printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
			else
				printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);
			i++;
		}
		printf("\n");
		// FIN DU TEST

	// TEST STRDUP
	i = 0;
	printf("\n############## TEST STRDUP ##############\n\n");
	while (str[i])
		{
			printf("TEST %i : Expected : %s -- Result : %s - ", i,  strdup(str[i]), ft_strdup(str[i]));
			if (strcmp(strdup(str[i]), ft_strdup(str[i])) == 0)
				printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
			else
				printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);
			i++;
		}
		printf("\n");
		// FIN DU TEST

	// TEST STRCPY
	printf("\n############## TEST STRCPY ##############\n\n");
		printf("TEST 0 :  - ");
		if (strcmp(strcpy(strcpy_dest, strcpy_src), ft_strcpy(strcpy_destbis, strcpy_srcbis)) == 0)
			printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
		else
			printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);

			printf("TEST 1 :  - ");
			if (strcmp(strcpy(strcpy_dest1, strcpy_src1), ft_strcpy(strcpy_destbis1, strcpy_srcbis1)) == 0)
				printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
			else
				printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);
		// FIN DU TEST

		// TEST STRNCPY
			printf("\n############## TEST STRNCPY ##############\n\n");
			result = strncpy(strncpy_dest, strncpy_src, 4);
			resultbis = ft_strncpy(strncpy_destbis, strncpy_srcbis, 4);
			printf("TEST 0 : Expected : %s -- Result : %s - ", result, resultbis);
			if (strcmp(result, resultbis) == 0)
				printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
			else
				printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);

			result1 = strncpy(strncpy_dest1, strncpy_src1, 10);
			result1bis = ft_strncpy(strncpy_destbis1, strncpy_srcbis1, 10);
			printf("TEST 0 : Expected : %s -- Result : %s - ", result1, result1bis);
			if (strcmp(result1, result1bis) == 0)
				printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
			else
				printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);
			// FIN DU TEST


			// TEST strcat
				printf("\n############## TEST STRCAT ##############\n\n");
				strcat_result = strcat(strcat_s1, strcat_s2);
				strcat_resultbis = ft_strcat(strcat_s1bis, strcat_s2bis);
				printf("TEST 0 : Expected : %s -- Result : %s - ", result, resultbis);
				if (strcmp(result, resultbis) == 0)
					printf(ANSI_COLOR_GREEN "OK\n" ANSI_COLOR_RESET);
				else
					printf(ANSI_COLOR_RED "ERROR\n" ANSI_COLOR_RESET);
				// FIN DU TEST

printf("\n");
return (0);
}
