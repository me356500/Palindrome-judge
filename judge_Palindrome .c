#include <stdio.h>
#include <ctype.h>
#include <string.h>
typedef struct{
    char in[20];
}str;
void compare(char a[],char f[],char b[]){
    if(strlen(f) > strlen(b))
        strcpy(a,f);
    else if(strlen(f) < strlen(b))
        strcpy(a,b);
    else if(strcmp(f,b) > 0)
        strcpy(a,b);
    else
        strcpy(a,f);
    return;
}
void adjust(char a[], int len ){
    char forward[20],backward[20];
    int times = 0;
    for(int i = 0,k = len-1;i<len;i++,k--)
        if(a[i] == a[k])
            times++;
    if(times == len)
        return;
    strcpy(backward,a),strcpy(forward,a);
    while(times != strlen(backward)){
        times = 0,backward[strlen(backward)-1] = '\0';
        for(int i = 0,k = strlen(backward)-1;i < strlen(backward);i++,k--)
            if(backward[i] == backward[k])
                times++;
    }
    while(times != strlen(forward)) {
        times = 0,forward[strlen(forward)-1] = '\0';
        for(int i = strlen(forward) - 1,k = len - 1;i>-1;i--,k--)
            forward[i] = a[k];
        for(int i = 0,k = strlen(forward)-1;i<strlen(forward);i++,k--)
            if(forward[i] == forward[k])
                times++;
    }
    compare(a,forward,backward);
}
int main(void){
    str s[100];
    int totol_num;
    scanf("%i",&totol_num);
    for(int i = 0;i < totol_num;i++) {
        scanf("%s",s[i].in);
        for(int j = 0;j < strlen(s[i].in);j++)
            s[i].in[j] = toupper(s[i].in[j]);
        adjust(s[i].in,strlen(s[i].in));
    }
    for(int i = 0;i <totol_num;i++) {
        printf("%s\n",s[i].in);
    }

}