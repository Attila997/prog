%{
	#include <string.h>
	int szavak_szama = 0;
%}
%%



[a-zA-Z0-9]+	++szavak_szama;
%%
int
main()
{
yylex();
printf("%d szo\n", szavak_szama);
return 0;
}
 
