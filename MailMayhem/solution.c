#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

void decrypt(char* str, char key)
{
    for(int i = 0; i< strlen(str);i++)
    {
        if(str[i] == '+' || str[i] == '.' || str[i] == '-' || str[i] == '_' || str[i] == '<' || str[i] == '>' || str[i] == '@')
        {
            continue;
        }
        str[i] = str[i] - (key - 'a' + 1);
    }
}

void local_name(char* localName)
{
    int i = 0, j = 0;
    while (localName[i] != '\0' && localName[i] != '+') {
        if (localName[i] != '.') {
            localName[j++] = localName[i];
        }
        i++;
    }
    localName[j] = '\0';
}

int isDomain(char* domain)
{
    int n = strlen(domain);
    if (n < 5) return 0;
    if (strcmp(domain + n - 4, ".com") == 0 || 
        strcmp(domain + n - 4, ".org") == 0 ||
        strcmp(domain + n - 4, ".net") == 0 ||
        strcmp(domain + n - 4, ".edu") == 0) {
        for (int i = 0; i < n - 4; i++) {
            if (!isalnum(domain[i]) && domain[i] != '.') {
                return 0;
            }
        }
        return 1;
    }
    return 0;
}

int isValidLocal(char* local)
{
    int n = strlen(local);
    //if (n == 0) return 0; 
    if (local[0] == '_' || local[0] == '-' || local[0] == '<' || local[0] == '>') return 0;
     for (int i = 0; i < n; i++) {
        if (!isalnum(local[i]) && local[i] != '_' && local[i] != '-' && local[i] != '<' && local[i] != '>') {
            return 0;
        }
    }
    return 1;
}

char* deciphered(char* str, char key)
{
    decrypt(str,key);
    static   char result[MAX];
      char local[MAX], domain[MAX];
    int atPos = -1, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '@') {
            atPos = i;
            break;
        }
    }
    if (atPos == -1) return "Invalid";
    strncpy(local, str, atPos);
    local[atPos] = '\0';
    strcpy(domain, str + atPos + 1); 
    local_name(local);
    if(!isValidLocal(local)) return "Invalid";
    if(!isDomain(domain)) return "Invalid";
    sprintf(result, "%s@%s", local, domain);
    return result;    
}

int main()
{
      char str[MAX];
    char key;
    //printf("Enter the mail: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    //printf("Enter the key: ");
    scanf("%c",&key);
    printf("%s",deciphered(str,key));
    return EXIT_SUCCESS;
}
