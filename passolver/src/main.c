#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	char password[9]={'E',65,66,65,33,33,33,33};
	char deneme[9]={0,0,0,0,0,0,0,0};
	char a,b,c,d,e,f,g,h;
	char control=0;
	for (a = 33;  a< 127; a++) {
		for (b = 33; b < 127; b++) {
			for(c = 33; c < 127; c++) {
				for(d = 33; d < 127; d++) {
					for(e = 33; e < 127; e++) {
						for(f = 33; f < 127; f++) {
							for(g = 33; g < 127; g++) {
								for(h = 33; h < 127; h++) {
									deneme[0]=h;deneme[1]=g;deneme[2]=f;deneme[3]=e;deneme[4]=d;deneme[5]=c;deneme[6]=b;deneme[7]=a;
									if (strcmp(password,deneme)==0) {
										printf("sifre kirildi");
										control=1;
										break;
									}
									if(control==1)
										break;
								}
								if(control==1)
									break;
							}
							if(control==1)
								break;
						}
						if(control==1)
							break;
					}
					if(control==1)
						break;
				}
				if(control==1)
					break;
			}
			if(control==1)
				break;
		}
		if(control==1)
			break;
	}
	printf("%s",deneme);
	getchar();
	return 0;
}
