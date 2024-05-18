#include <stdio.h>
#include<string.h>
int main() {
    char str[1000];
    scanf("%[^\n]s",str);
    char *token = strtok(str, " ");
    while (token != NULL) {
        if(strcmp(token,"if") == 0 || strcmp(token,"else") == 0 || strcmp(token,"printf") == 0){
            printf("%s -> Keyword",token);
        }
        else{
            char c = token[0];
            if(isdigit(c)){
                printf("%s -> Constant",token);
            }
            else if(c == '='){
                printf("%s -> Assignment operator",token);
            }
            else if(c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == '>' || c == '<' || c == '==' || c == '>=' || c == '<=' || c == '{' || c == '}'){
                printf("%s -> Operator",token);
            }
            else if((c>='a' && c<='z') || (c>='A' && c<='Z')){
                printf("%s -> Identifier",token);
            } else{
                printf("%s -> Special character",token);
            }
        } printf("\n");
        token = strtok(NULL, " ");
    }
    return 0;
}