#include <stdio.h>
#include <unistd.h>
#include <ctype.h>


int main(){
	char c;
	int totalLines = 0;
	while(read(0, &c, 1 )){
		if(c == '\n'){
			totalLines++;
		}	
	}
	
	if(c != '\n' && totalLines > 0){
		totalLines++;
	}
	
	printf("Total lines:  %d\n", totalLines);
	return 0;
}