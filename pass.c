#include <stdio.h>
#include <string.h>
int main() {
char pass[] = "Gur cnffjbeq vf 7k16JArUVv5LxVuJfsSVdbbtaHGlw9D4";
int len = strlen(pass);
printf("%d \n",len);
for (int i=0;i<len;i++) {
char a = pass[i]; 
if (a == ' ') {
printf("%c",a);

}
else {
printf("%c",a+13);
}
} 

return 0;

}
