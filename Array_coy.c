#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Setting_decision();

int main () {
	Setting_decision();
	return 0;
}

void Setting_decision(){
	char **Array_voice;
	char Tst_voice[] = "adventage";
	int Tst_voice_long = strlen(Tst_voice),i;

    Array_voice = (char **)malloc(sizeof(char *)* Tst_voice_long);

	
	for(i=0;i<Tst_voice_long;i++){
		Array_voice[i] = (char *)malloc(sizeof(char));
	}

	for(i = 0; i<Tst_voice_long; i++){
		Array_voice[i][0] = Tst_voice[i];
	}

	for(i = 0; i<Tst_voice_long; i++){
		printf("\nArray_voice[%d][0]: %c",i,Array_voice[i][0]);
	}
	printf("\n合并输出：\n");
	for(i = 0; i<Tst_voice_long; i++){
	    printf("%c",Array_voice[i][0]);
	}
	
	
	
	
}