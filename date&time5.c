
#include <stdio.h> 
#include <string.h> 
char* maximumTime(char s[]) 
{ 
    if (s[0] == '_') { 
        if ((s[1] == '_') || (s[1] >= '0' && s[1] < '4')) { 
            s[0] = '2'; 
        } 
        else { 
            s[0] = '1'; 
        } 
    } 
    if (s[1] == '_') { 
        if (s[0] == '2') { 
            s[1] = '3'; 
        } 
        else {  
            s[1] = '9'; 
        } 
    }  
  
    if (s[3] == '_') { 
  
        s[3] = '5'; 
    } 
  
    if (s[4] == '_') { 
  
        s[4] = '9'; 
    } 
  
    return s;
} 
int main() 
{ 
    char S[] = "0_:4_"; 
    printf("%s", maximumTime(S)); 
    return 0; 
} 