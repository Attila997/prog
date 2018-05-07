
%{
	#include <iostream>
	int line = 0;
%}
%%	
\n		++line;
%%
int main() {
  yylex();
  std::cout << "Sorok száma : " << line << std::endl;
  return 0;
}
