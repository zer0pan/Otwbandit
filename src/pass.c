#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  char pass[] = "Gur cnffjbeq vf 7k16JArUVv5LxVuJfsSVdbbtaHGlw9D4";
  char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char Alpha[] = "abcdefghijklmnopqrstuvwxyz";
  int alp = strlen(alpha);
  int len = strlen(pass);
  printf("%d \n", len);
  for (int i = 0; i < len; i++) {
    char a = pass[i];
    if (a == ' ' || (a >= '0' && a <= '9')) {
      printf("%c", a);

    } else {
      int k;
      int perm;
      for (int j = 0; j < alp; j++) {
        if (a == alpha[j] || a == Alpha[j]) {
          k = j;
          break;
        }
      }
      //
      perm = (k + 13) % 26;
      if (isupper(a)) {
        printf("%c", alpha[perm]);
      } else {
        printf("%c", Alpha[perm]);
      }
    }
  }
  return 0;
}
// To enter level 12
// The password is 7x16WNeHIi5YkIhWsfFIqoognUTyj9Q4
// for level 13 
// FO5dwFsc0cbaIiH0h8J2eUks2vdTDwAn
// for 14
// MU4VWeTyJk8ROof1qqmcBPaLh7lDCPvS
