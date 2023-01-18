#include<stdio.h>
void WriteData(){
	FILE *file;
	file=fopen("intro.txt","a+");
	fprintf(file,"Pasindu Lakshan\n");
	fprintf(file,"Wariyapola\n");
	fprintf(file,"Maliyadewa Model College\n");
	fclose(file);
}
void readData(){
	FILE *file;
	file=fopen("intro.txt","r");
	char file_line[50];
	while(fgets(file_line,50,file)!=NULL){
		printf("%s",file_line);
	}
}
int main(){
	WriteData();
	readData();
	return 0;
}