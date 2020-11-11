// C program For Caeser Cipher 
#include <stdio.h>
char *cipher(int n,char str[]){
  int i=0,j=0;
  char ch;
  for(i;str[i];i++)
  {
      if(str[i]=='-'||str[i]==' '){
          continue;
      }
    if(str[i]>='A'&&str[i]<='Z')
  {
        ch=str[i];
      ch+=n;
      if(ch>='Z'&&ch<'a'){
          ch=ch-'Z'+'A'-1;
          str[i]=ch;
      }
  }
   if(str[i]>='a'&&str[i]<='z'){
        ch=str[i];
        ch+=n;
       if(ch>='z'){
           ch=ch-'z'+'a'-1;
           str[i]=ch;
       }
   }
  if(str[i]>='0'&&str[i]<='9')
  {
      ch=str[i];
      ch+=n;
      if(ch>'9'){
      ch=ch-48;
      printf("%c",ch);
      str[i]=ch;
      return str;
      }
      return str;
  }
  } 
  return str;
}
int main (){
    
    int key;
    char a[100],*p;
    printf("Enter the string: ");
    fgets(a,100,stdin);
    printf("\nEnter the key: ");
    scanf("%d",&key);
    if(key<0){
        printf("INVALID INPUT");
    }
    // p=char(Cipher(key,a));
    puts(cipher(key,a));
    return 0;
}


