%{
	#include <iostream>
	int betuk_szama = 0;
%}

%%
[a-zA-Z]	betuk_szama++;
.			;
%%

int main(){

	yylex();

	std::cout << "A betuk szama: " << betuk_szama << std::endl;

	return 0;
}
