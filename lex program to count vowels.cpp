%{
	int vow_count=0;
	int const_count =0;
%}

%%
[aeiouAEIOU] {vow_count++;}
%%
int yywrap(){}
int main()
{
	printf("Enter the string of vowels:");
	yylex();
	printf("Number of vowels are: %d\n", vow_count);
	return 0;
}

