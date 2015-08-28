#include<stdio.h>
#include<string.h>
#define MAX 25

int mat[MAX][MAX];
int queue[MAX];
//int msg[MAX];
//char nome[MAX];

typedef struct{
	char A1[MAX];
	char A2[MAX];
	char A3[MAX];
} mensagem;
typedef	struct{
	char nom[MAX];
}na;

int topo = 0;
int cont = 0;
int t1,t2;
int node;


int node,t1,t2;
mensagem msg[110];
na nome[MAX];


void initMatrix(int n){
	int i,j;
	int ler;
	int raiz;
	int flag=0;
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX;j++)
			mat[i][j] = 0;
	}
	i = 1;		
   while(i <= n){
	   raiz = i;
	   while(1){
			scanf("%d", &ler);
			if( ler > 0){
				mat[raiz][ler] = 1;
				
			}
			else break;
		}
		i++;
	}
	
	for(i = 0; i <= n; i++){
		for(j = 0; j <= n;j++)
			printf("%d", mat[i][j]);
		printf("\n");
	}
}

int message(){
	
	
	
	
		scanf("%d %d %d", &node,&t1,&t2);
		if(node > 0){
			scanf("%s %s %s", msg[cont].A1,msg[cont].A2,msg[cont].A3);
			cont++;
			return 1;
		
		}
	
	
	printf("%d %d %d", node,t1,t2);
	puts(msg[0].A1);
	puts(msg[0].A2);
	puts(msg[0].A3);
	return 0;
}
void getName(int n){
	int i = 0;
	while(i < n){
		fflush(stdin);
		fgets(nome[i].nom,20,stdin);
		//puts(nome[i].nom);
		i++;
	}
	
	
}	
int main(){
	//http://www.c-program-example.com/2011/10/c-program-to-implement-breadth-first.html
	int n;
	int count = 0;
	//int node,t1,t2;
	
	int i =0;
	/*while(1){
		
		scanf("%d", &n);
		if( n == 0 && count == 0) break;
		else if( n == 0 && count > 0)count--;
		else{
			
			
			
		}
	}*/message();
	return 0;
	
	
	
}
