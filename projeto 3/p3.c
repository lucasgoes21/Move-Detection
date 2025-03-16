#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void InferiorEsquerdo(char *pasta){
	int a,b;
	char pasta2[50];
	strcpy(pasta2,pasta);
	

	int i =2;
	
	FILE *f1;
	FILE *f2;
	int cont[1000];
	for(int l = 0; l <1000; l++){
		cont[l] = 0;
	}
		
	while(1){
		char num[20];
		if(i < 10){

			sprintf(num, "/00%d.rgb",i);
		}
		else if(i < 100){
			sprintf(num, "/0%d.rgb",i);
		}
		else{
			sprintf(num, "/%d.rgb",i);
		}

		f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
		strcpy(pasta2,pasta);
		if(!f1){
			printf("erro ao tentar ler imagem");
			return;
		}
		
		f2 = fopen(strcat(pasta2,num),"rb");
		strcpy(pasta2,pasta);
		
		if(!f2){
			printf("foi detectado movimentos relevantes nas imagens: \n");
			for(int i=0; i < 1000; i++){
				if(cont[i] != 0){
					printf("%d, ", cont[i]);
				}
			}
			break;
		}
		
		int aux = 0;
		for(int h = 0; h < 240;h++){
			for(int l = 0; l < 320; l++){
				for(int c = 0; c < 3;c++){
					fread(&a, (sizeof(int)/4),1,f1);
					fread(&b,(sizeof(int)/4),1,f2);
					
					if(l < 160 && h > 100){
						if(abs(a -b) > 150){
							cont[i] = i;
						}
					}
				}
			}
		}
		fclose(f2);
		fclose(f1);
		i++;
	}
	
	
}
void InferiorDireito(char *pasta){
	int a,b;
	char pasta2[50];
	strcpy(pasta2,pasta);
	

	int i =2;
	
	FILE *f1;
	FILE *f2;
	int cont[1000];
	for(int l = 0; l <1000; l++){
		cont[l] = 0;
	}
		
	while(1){
		char num[20];
		if(i < 10){

			sprintf(num, "/00%d.rgb",i);
		}
		else if(i < 100){
			sprintf(num, "/0%d.rgb",i);
		}
		else{
			sprintf(num, "/%d.rgb",i);
		}

		f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
		strcpy(pasta2,pasta);
		if(!f1){
			printf("erro ao tentar ler imagem");
			return;
		}
		
		f2 = fopen(strcat(pasta2,num),"rb");
		strcpy(pasta2,pasta);
		
		if(!f2){
			printf("foi detectado movimentos relevantes nas imagens: \n");
			for(int i=0; i < 1000; i++){
				if(cont[i] != 0){
					printf("%d, ", cont[i]);
				}
			}
			break;
		}
		
		int aux = 0;
		for(int h = 0; h < 240;h++){
			for(int l = 0; l < 320; l++){
				for(int c = 0; c < 3;c++){
					fread(&a, (sizeof(int)/4),1,f1);
					fread(&b,(sizeof(int)/4),1,f2);
					
					if(l >= 160 && h >= 120){
						if(abs(a -b) > 150){
							cont[i] = i;
						}
					}
				}
			}
		}
		fclose(f2);
		fclose(f1);
		i++;
		
	}
	
	
}
void SuperiorEsquerdo(char *pasta){
	int a,b;
	char pasta2[50];
	strcpy(pasta2,pasta);
	

	int i =2;
	
	FILE *f1;
	FILE *f2;
	int cont[1000];
	for(int l = 0; l <1000; l++){
		cont[l] = 0;
	}
		
	while(1){
		char num[20];
		if(i < 10){

			sprintf(num, "/00%d.rgb",i);
		}
		else if(i < 100){
			sprintf(num, "/0%d.rgb",i);
		}
		else{
			sprintf(num, "/%d.rgb",i);
		}

		f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
		strcpy(pasta2,pasta);
		if(!f1){
			printf("erro ao tentar ler imagem");
			return;
		}
		
		f2 = fopen(strcat(pasta2,num),"rb");
		strcpy(pasta2,pasta);
		
		if(!f2){
			printf("foi detectado movimentos relevantes nas imagens: \n");
			for(int i=0; i < 1000; i++){
				if(cont[i] != 0){
					printf("%d, ", cont[i]);
				}
			}
			break;
		}
		
		int aux = 0;
		for(int h = 0; h < 240;h++){
			for(int l = 0; l < 320; l++){
				for(int c = 0; c < 3;c++){
					fread(&a, (sizeof(int)/4),1,f1);
					fread(&b,(sizeof(int)/4),1,f2);
					
					if(l < 160 && h <= 120){
						if(abs(a -b) > 150){
							cont[i] = i;
						}
					}
				}
			}
		}
		fclose(f2);
		fclose(f1);
		i++;
		
	}
	
	
}
void SuperiorDireito(char *pasta){
	int a,b;
	char pasta2[50];
	strcpy(pasta2,pasta);
	

	int i =2;
	
	FILE *f1;
	FILE *f2;
	int cont[1000];
	for(int l = 0; l <1000; l++){
		cont[l] = 0;
	}
		
	while(1){
		char num[20];
		if(i < 10){

			sprintf(num, "/00%d.rgb",i);
		}
		else if(i < 100){
			sprintf(num, "/0%d.rgb",i);
		}
		else{
			sprintf(num, "/%d.rgb",i);
		}

		f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
		strcpy(pasta2,pasta);
		if(!f1){
			printf("erro ao tentar ler imagem");
			return;
		}
		
		f2 = fopen(strcat(pasta2,num),"rb");
		strcpy(pasta2,pasta);
		
		if(!f2){
			printf("foi detectado movimentos relevantes nas imagens: \n");
			for(int i=0; i < 1000; i++){
				if(cont[i] != 0){
					printf("%d, ", cont[i]);
				}
			}
			break;
		}
		
		
		int aux = 0;
		for(int h = 0; h < 240;h++){
			for(int l = 0; l < 320; l++){
				for(int c = 0; c < 3;c++){
					fread(&a, (sizeof(int)/4),1,f1);
					fread(&b,(sizeof(int)/4),1,f2);
					
					if(l >= 160 && h <= 120){
						if(abs(a -b) > 150){
							cont[i] = i;
						}
					}
				}
			}
		}
		fclose(f2);
		fclose(f1);
		i++;

	}
	
	
}
void Inteira(char *pasta){
	int a,b;
	char pasta2[50];
	strcpy(pasta2,pasta);
	

	int i =2;
	
	FILE *f1;
	FILE *f2;
	int cont[1000];
	for(int l = 0; l <1000; l++){
		cont[l] = 0;
	}
		
	while(1){
		char num[20];
		if(i < 10){

			sprintf(num, "/00%d.rgb",i);
		}
		else if(i < 100){
			sprintf(num, "/0%d.rgb",i);
		}
		else{
			sprintf(num, "/%d.rgb",i);
		}

		f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
		strcpy(pasta2,pasta);
		if(!f1){
			printf("erro ao tentar ler imagem");
			return;
		}
		
		f2 = fopen(strcat(pasta2,num),"rb");
		strcpy(pasta2,pasta);
		
		if(!f2){
			printf("foi detectado movimentos relevantes nas imagens: \n");
			for(int i=0; i < 1000; i++){
				if(cont[i] != 0){
					printf("%d, ", cont[i]);
				}
			}
			break;
		}
	
		
		
		
		int aux = 0;
		for(int h = 0; h < 240;h++){
			for(int l = 0; l < 320; l++){
				for(int c = 0; c < 3;c++){
					fread(&a, (sizeof(int)/4),1,f1);
					fread(&b,(sizeof(int)/4),1,f2);
					if(abs(a -b) > 235){
						cont[i] = i;
					}
				}
			}
		}
		fclose(f2);
		fclose(f1);
		i++;

	}
	
	
}


int main(){
	int a;
	char pasta[50], pasta2[50];
	ini2:
	printf("Nome da pasta do video (ex: video1):");
	
	scanf("%s", pasta);
	strcpy(pasta2,pasta);
	FILE *f1 = fopen(strcat(pasta2,"/001.rgb"),"rb");
	
	if(!f1){
		printf("\n!!erro ao encontrar a pasta!!\n\n");
		fclose(f1);
		goto ini2;
	}
	fclose(f1);
	
	
	ini:
	printf("Escolha a regiao a ser escaneada:\n1 - Parte Inferior Esquerda; \n2 - Parte Inferior Direita;\n3 - Parte Superior Esquerda;\n4 - Parte Superior Direita;\n5 - Tela Inteira\n");
	scanf("%d", &a);
	
	printf("\n\n!!Isso pode demorar um pouco, aguarde um momento...!!\n\n");
	
	switch(a){
		case 1:
			InferiorEsquerdo(pasta);
			break;
		case 2:
			InferiorDireito(pasta);
			break;
		case 3:
			SuperiorEsquerdo(pasta);
			break;
		case 4:
			SuperiorDireito(pasta);
			break;
		case 5:
			Inteira(pasta);
			break;
		default:
			printf("Opçao invalida");
			goto ini;
	}
	
}
