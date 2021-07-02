#include<stdio.h>
#include<string.h>
void MemcpyFunc(void *dest, void *src, size_t n){
   char *dataS = (char *)src;
   char *dataD = (char *)dest;
   char *temp = new char[n];
   for (int i=0; i<n; i++)
      temp[i] = dataS[i];
   for (int i=0; i<n; i++)
      dataD[i] = temp[i];
}
int main() {
   char dataS[] = "Hello!";
   char dataD[100];
   MemcpyFunc(dataS, dataD, strlen(dataS)+1);
   printf("Moved string is %s", dataD);
   return 0;
}
