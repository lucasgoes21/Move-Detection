#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//InferiorEsquerdo: Check if there is any movement in the bottom left
//                  of the image, if there is, print the image number
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
//InferiorDireito: Check if there is any movement in the bottom right
//                  of the image, if there is, print the image number
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
//The SuperiorEsquerdo function checks if there is any movement in the top left
//                  of the image, if there is, print the image number
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
//The SuperiorDireito function checks if there is any movement in the top right
//                  of the image, if there is, print the image number
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
//The Inteira function checks if there is any movement in the entire image, if
//                  there is, print the image number
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

