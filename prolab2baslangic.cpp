#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{

	char kapias[];
	int incable;
	int ns; //kapýlarýn nanosaniyesi
	
	char cikiskapi[1]; //kapidan cikan kablo ismi
	int cikiskapi1; //kapidan cikan deger
	
	char girisler[5];
	int girisler1[3];
	
	
	char kapitipi1[5]; 
	
	node *next;
};


 /* struct cikisnode{
	
	//kapýya giren giriþ kablo sayýsý
	
	int ns; //kapýlarýn nanosaniyesi
	
	char cikiskapi; //kapidan cikan kablo ismi
	int cikiskapi1; //kapidan cikan deger
	
	char girisler[5];
	int girisler1[5];
	
	char kapitipi; 	
		
};
*/
void log(){
	FILE * logdosyasi = fopen("log_komut1.txt","ab+");
	if(logdosyasi != NULL)
	{
	
	time_t simdiki_zaman ;
	simdiki_zaman = time (NULL) ;
	fputs(ctime (&simdiki_zaman),logdosyasi);

	}


}




int main(int argc, char** argv) {
	
	
	printf(">K\n");

	FILE *dosya;
	dosya = fopen("devre.txt","r");
	
	FILE *dosya2;
	dosya2=fopen("deger.txt","r");
	
	FILE *dosya3;
	dosya3=fopen("komut1.txt","r");
	
	FILE *dosya4;
	dosya4=fopen("komut1.txt","r");
	
	node * root;
	root=(node*)malloc(sizeof(node));
	
	node * iter;
	iter = root;
	
	node * iter3;
	iter3 = root;
	
	node * iter2;
	iter2 = root;
	
	node * iter4;
	iter4 = root;
	
	node * iter5;
	iter5 = root;
	
	node * iter6;
	iter6 = root;
	
	node * iter7;
	iter7=root;
	
	node * iter8;
	iter8 = root;
	
	node * iter15;
	iter15=root;
	
	
	FILE * logdosyasi1 = fopen("log_komut1.txt","a");
	fputs("	komut	cikti	zaman	",logdosyasi1);
	
	char anacikis[1];
	char anacikis2[1];
	char cikisbul[]=".cikis";
	char ara[1][100];
	char ara2[1][100];
	int kontrol = 0;
	char text3[150],text4[150];
	char degisen[1];
	char degisen2[1];
	int kh=0;
	int komut;
	int kb=0;
	
	
	

	
	
		if(dosya3!=NULL)
{
	while(!feof(dosya4))
	{
		text4[kh]=fgetc(dosya4);
		kh++;		
	}
	
}


//Cikis kapisini bulma iþlemi***
for(komut;komut<kh;komut++)
{

if(text4[komut] == 'y' || text4[komut] == 'Y' )
{    
printf(">Y <devre.txt>");

		
	log();
	fputs("	Y devre.txt	",logdosyasi1);
    fputs("	devre.txt yuklendi	",logdosyasi1);
	fclose(logdosyasi1);
   
    
	 
	
	
	if(dosya !=NULL)
	{
	int i=0;
	int a=0;
	int j=0;		
		
		while(!feof(dosya))
		{    
				fscanf(dosya,"%s",ara[0]);
				
		if(ara[0][j]=='.' && ara[0][j+1]=='c' && ara[0][j+2]=='i'&& ara[0][j+3]=='k'&& ara[0][j+4]=='i'&& ara[0][j+5]=='s')
		{
		
			
	 	break;
		}	
		
		
		}

		fscanf(dosya,"%s",ara[0]);
		anacikis[0]=ara[0][0];
		
				
		
	
	}
printf("\n");
char text[120];

int j=0;
	if(dosya !=NULL)
	{

		while(!feof(dosya))
		{    
		
	text[j]=fgetc(dosya);
	
	j++;
			
		}

int g=0;
for(int a=0; a<=j; a++)
{
		if(text[a]=='.'&&text[a+1]=='k'&&text[a+2]=='a'&&text[a+3]=='p'&&text[a+4]=='i')
	{
		int k=0;
		for(int u=a+6; u<=a+10; u++)
		{
			if(text[u]!=' '&& text[u]!='\t' && !isdigit(text[u]))
			{
				
				iter->kapitipi1[k]=text[u];
						
			 k++;
				
			}
			
		}
			for(int u=a+9; u<=a+12; u++)
		{
			if(text[u]!=' ' && isdigit(text[u]) && text[u]!='\t')
			{
			
			iter->incable= text[u]-'0';
			
			}
				
		}
			for(int u=a+12; u<=a+13; u++)
		{
		if(text[u]!=' ' && text[u]!='\t')
		{
			iter->cikiskapi[0] = text[u];
			
		}	
				
		}
	
				for(int u=a+14; u<=a+20; u++)
		{
			
		if(text[u]!=' ' && text[u]!='\t' && !isdigit(text[u]))
		{
			iter->girisler[g] = text[u];
			g++;
		
			
		}	
				
		}
	
					for(int u=a+15; u<=a+20; u++)
		{
			
		if(text[u]!=' ' && text[u]!='\t' && isdigit(text[u]))
		{
			iter->ns = text[u]-'0';
			
			
		}	
				
		}
	
	
	
		iter->next=(node*)malloc(sizeof(node));
		iter=iter->next;
		iter->next = NULL;
		k=0;
		g=0;
		
		
	}
	
	}

	
	}
	int p=0;
	iter2=root;
	



while(iter2->next!=NULL)
{
	for(int e=0; e<3; e++)
	{
		
	}
	
		
		for(int e=0; e<=2; e++)
	{
		
	
	}

	iter2=iter2->next;
	
}
}}
//Deðerleri alma iþlemi****
//ÝF I

for(komut=0;komut<kh;komut++){
if(text4[komut] == 'I' || text4[komut] == 'i'){
	printf(">I");
	log();
	fputs("	I deger.txt	degerler atandi	",logdosyasi1);
	fclose(logdosyasi1);

printf("\n");
char text2[60];
int z=0;
	if(dosya2!=NULL)
{

		while(!feof(dosya2))
		{    
		
	text2[z]=fgetc(dosya2);

z++;
		}

while(iter3!= NULL)
{

for(int r=0; r<=z; r++)
{
	if(text2[r]==iter3->girisler[0] && isdigit(text2[r+2]))
	{
		iter3->girisler1[0]= text2[r+2]-'0';
		
	}
		if(text2[r]==iter3->girisler[1] && isdigit(text2[r+2]))
	{
		iter3->girisler1[1]= text2[r+2]-'0';
	
	}
		if(text2[r]==iter3->girisler[2] && isdigit(text2[r+2]))
	{
		iter3->girisler1[2]= text2[r+2]-'0';
		
	}
		if(text2[r]==iter3->cikiskapi[0] && isdigit(text2[r+2]))
	{
		iter3->cikiskapi1= text2[r+2]-'0';
	
	}


}

iter3=iter3->next;


}

iter4 = root;


}
// cýkýsa gitme islemi






//*****
//Simülasyon iþlemi****
//*****
//ÝF H



}}




kh=0;
int nsler[20]; //nanosaniyelerin tutulduðu dizi
int dns=0;
int kapisayaci=0;
iter6=root;
int tut;
int kucuk;
int bsayaci=0;

	if(dosya3!=NULL)
{
	while(!feof(dosya3))
	{
		text3[kh]=fgetc(dosya3);
		kh++;		
	}
	
}


printf("\n");	
int komut2=0;
for(kb=komut2; kb<=kh; kb++)
{
	
	
	
	if(text3[kb]=='C' || text3[kb]=='c')
	{	
	
	printf(">C");
	break;
		
	
	}
	
	
	
	
	
	
	
	
	if(text3[kb]=='H' || text3[kb]=='h')
	{	
	tut=kb;
	printf(">%c\t",text3[kb]);
	int t=kb+1;
		while(!isalpha(text3[t]))
		{
			
			t++;
				
		}
		degisen[0]=text3[t];
		printf("%c",degisen[0]);
		printf("\n");
		
	
	}
	
	
		if(text3[kb]=='L' || text3[kb]=='l')
	{	
	tut=kb;
	printf(">%c\t",text3[kb]);
	int t=kb+1;
		while(!isalpha(text3[t]))
		{
			
			t++;
				
		}
		degisen[0]=text3[t];
		printf("%c",degisen[0]);
		printf("\n");
		
	
	}
	
	
	
	if(text3[kb]=='S' || text3[kb]=='s')
	{
		log();		
		printf(">S");
	fputs("	>S	",logdosyasi1);
	fclose(logdosyasi1);
	
	for (int i = 0; i<=4; i++)
	{
		
		
	  for(int j=0; j<2; j++)
	  {
	  	
	  	if(degisen[0]==iter5->girisler[j])
		{
			dns=i;
			
			nsler[dns]=iter5->ns;
			
			fopen("log_komut1.txt","ab+");
			printf("\n0. ns %c ->",iter5->girisler[j]);
			fprintf(logdosyasi1,"0. ns %c ->",iter5->girisler[j]);
			
			if(text3[tut]=='H')
			{
				iter5->girisler1[j]=1;
			}
				if(text3[tut]=='L')
			{
				iter5->girisler1[j]=0;
			}
			printf(" %d",iter5->girisler1[j]);
			fprintf(logdosyasi1,"%d 	",iter5->girisler1[j]);
			fclose(logdosyasi1);
			bsayaci++;
		
			
			break; 
		}
		
	  }
		    
			iter5=iter5->next;
			
				
			if(iter5->next == NULL)
			{
				
				break;
			}

		
	}

 	printf("\n");
	
	node * iter9;
	iter9 = root;
	int temp;
		while(iter9->next->next!=NULL)
	{
		iter9=iter9->next;
		
	
	}
	
	
	temp = iter9->ns;
	
	
//SIRALAMALI ÝÞLEM***********************************************************************************
if(bsayaci==2)
{
	

	for(int r=0; r<dns; r++)
	{
		
		for(int m=0; m<dns; m++)
		{
			
//***************************************************************************
//kucuk olan sondakiyse******************************************************
//***************************************************************************
		if(nsler[m]<nsler[m+1])
		{
		
				//	kucuk=m+1;	


  
//NOR, AND, OR  XOR, NOT, NAN 	
	if(m==0)
	{

	
	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='R')
	{
		
		iter8->cikiskapi1 = (!(iter8->girisler1[0] || iter8->girisler1[1]));
		
				fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);

	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						fopen("log_komut1.txt","ab+");
	
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
						fopen("log_komut1.txt","ab+");
						
						
						
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
					
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					
											fopen("log_komut1.txt","ab+");
					
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
											fopen("log_komut1.txt","ab+");
				
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
						fopen("log_komut1.txt","ab+");
				
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}
		
	//NOR, AND, OR  XOR, NOT, NAN 
	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='A' && iter8->kapitipi1[1]=='N'  && iter8->kapitipi1[2]=='D')
	{
		
		iter8->cikiskapi1 = (iter8->girisler1[0] && iter8->girisler1[1]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
				
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
						fopen("log_komut1.txt","ab+");
						
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
				
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
												fopen("log_komut1.txt","ab+");
												
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
												fopen("log_komut1.txt","ab+");
										
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
				
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}		
		

	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='O' && iter8->kapitipi1[1]=='R')
	{
		
		iter8->cikiskapi1 = (iter8->girisler1[0] || iter8->girisler1[1]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		

		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					
												fopen("log_komut1.txt","ab+");
									
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
									
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
							
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
			
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
											fopen("log_komut1.txt","ab+");
								
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
							
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}		
//NOR, AND, OR  XOR, NOT, NAN 
	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='X' && iter8->kapitipi1[1]=='O'&& iter8->kapitipi1[1]=='R')
	{
		
		
		iter8->cikiskapi1 = (iter8->girisler1[0] ^ iter8->girisler1[1]);
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
										fopen("log_komut1.txt","ab+");
								
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
											
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
								
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
								
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
											fopen("log_komut1.txt","ab+");
								
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
								
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}		
	
	
	
	//NOR, AND, OR  XOR, NOT, NAN 
	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'&& iter8->kapitipi1[1]=='T')
	{
		
		iter8->cikiskapi1 = !(iter8->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
											
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
									
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
										
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
										
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
												fopen("log_komut1.txt","ab+");
										
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
										fopen("log_komut1.txt","ab+");
								
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}		

	
	//NOR, AND, OR  XOR, NOT, NAN 
	//KAPI BAÞI
	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='A'&& iter8->kapitipi1[1]=='N')
	{
		
		iter8->cikiskapi1 = !(iter8->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->ns))
				{
				
	//NOR, AND, OR  XOR, NOT, NAN 
	
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
								
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
							
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
							
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
								
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
									fopen("log_komut1.txt","ab+");
						
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
										fopen("log_komut1.txt","ab+");
									
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
				
					

						
				}
	
			}
			
		}
		

	}		

//***********************************************************************ÜSTTE TÜM KAPI TÝPLERÝ YAPILCAK*********************************************************		
//***********************************************************************ALTTA TÜM KAPI TÝPLERÝ YAPILCAK*********************************************************	
		
		//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='A'  && iter8->next->kapitipi1[2]=='N')
	{
		
	
		iter8->next->cikiskapi1 = !((iter8->next->girisler1[0] && iter8->next->girisler1[1]));
	fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
							//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
										fopen("log_komut1.txt","ab+");
										
								
						
										
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
	
				
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
					
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
								
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
													
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
												fopen("log_komut1.txt","ab+");
													
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
													fopen("log_komut1.txt","ab+");
												
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	
			//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
			
			
		iter8->next->cikiskapi1 = !((iter8->next->girisler1[0] || iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
							//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
													
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
											
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
													
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
												
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
											fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	
	
	
	
		
			//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='A' && iter8->next->kapitipi1[1]=='N'  && iter8->next->kapitipi1[2]=='D')
	{
		
			
			
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
							//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
										fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	
	
	
			
			//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='O' && iter8->next->kapitipi1[1]=='R')
	{
		
			
			
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] || iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
							//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
														fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	
	
				//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='X' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
			
			
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] ^ iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
							//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
										fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
											fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	

				//NOR, AND, OR  XOR, NOT, NAN ************************
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='T')
	{
		
		
			
		iter8->next->cikiskapi1 = !(iter8->next->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
		//----------------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]));
						
													fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
						if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
											fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
												fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= (!(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]));
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//---------------------------------------------------------------------------------------------------------
			}
			
		}
			
	}
	

	
	
	
	
			
//***********************************************************************ÜSTTE TÜM KAPI TÝPLERÝ YAPILCAK*********************************************************

	//KAPI SONU
	}

	
	
		if(m==1)
	{

	//NOR, AND, OR  XOR, NOT, NAN ************************
	//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] || iter8->next->girisler1[1]));
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					
					
					
					
					

						
				}
	
			}
			
		}
		

	}
	
	//KAPI SONU
	
	//NOR, AND, OR  XOR, NOT, NAN ************************
		//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='A'  && iter8->next->kapitipi1[2]=='N')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	
				//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					

						
				}
	
			}
			
		}
		

	}
	
	//KAPI SONU
	
		//NOR, AND, OR  XOR, NOT, NAN ************************
		//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='A' && iter8->next->kapitipi1[1]=='N'  && iter8->next->kapitipi1[2]=='D')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	
				//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					

						
				}
	
			}
			
		}
		

	}
	
	//KAPI SONU
	
	
			//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='O' && iter8->next->kapitipi1[1]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] || iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	
				//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					
						
				}
	
			}
			
		}
		

	}
	
	//KAPI SONU
	
	
		//NOR, AND, OR  XOR, NOT, NAN ************************
			//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='X' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] ^ iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					
					

						
				}
	
			}
			
		}
		

	}
			//NOR, AND, OR  XOR, NOT, NAN ************************
			//KAPI BAÞI
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='T')
	{
		
		iter8->next->cikiskapi1 = !(iter8->next->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->next->ns-iter8->ns))
				{
				
	
				//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------			
						//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
		//---------------------------------------------------------------------------------------------------------------------------------------
	
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//------------------------------------------------------------------------------------------------------------------------------------------		
					
						
				}
	
			}
			
		}
		

	}
	//KAPI SONU
//-------------------------------------------------------------*****************ÜSTTEKÝLER TÜM KAPILAR******************************------------------------------------------------------


//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='A'  && iter8->next->next->kapitipi1[2]=='N')
		{
		

		iter8->next->next->cikiskapi1 = !((iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
		
		
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
						
						
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						
						
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	
	//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='A' && iter8->next->next->kapitipi1[1]=='N'  && iter8->next->next->kapitipi1[2]=='D')
		{
		

		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
		{
		

		iter8->next->next->cikiskapi1 = !((iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));
	fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='X' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
		{
		

		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] ^ iter8->next->next->girisler1[1]));
fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		

		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='O' && iter8->next->next->kapitipi1[1]=='R')
		{
		

		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));

		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	//KAPI BAÞI***************************
		if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='T')
		{
		

		iter8->next->next->cikiskapi1 = !(iter8->next->next->girisler1[0]);
fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
				//------------------------------------------------------------------------------
				
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
			


	//KAPI SONU***************************************************************************************
	//KAPI BAÞI***************************
	
			


	//KAPI SONU***************************************************************************************
	
	
	}



	break;
	}
		
//***************************************************************************
//kucuk olan baþtakiyse******************************************************
//***************************************************************************


	if(nsler[m]>nsler[m+1])
		{
			
					kucuk=m+1;	
	if(m==0)
	{


	//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] || iter8->next->girisler1[1]));
		
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
			
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
	
		//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='O' && iter8->next->kapitipi1[1]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] || iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
	
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
		
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
	
		//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='X' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] ^ iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
		
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
		//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='T')
	{
		
		iter8->next->cikiskapi1 = !(iter8->next->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
	
		//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='A' && iter8->next->kapitipi1[1]=='N'  && iter8->next->kapitipi1[2]=='D')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
		//KAPI BAÞI*******************************************************************************AAAAAAAAA**********************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='A'  && iter8->next->kapitipi1[2]=='N')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->ns-iter8->next->ns))
				{
				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
		//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------				
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
	//---------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
	//---------------------------------------------------------------------------------------------------	
						
				}
	
			}
			
		}
		

	}
		//KAPI SONU*******************************************************************************AAAAAAAAA**********************
	
	
	
	
	
	
	//------------------------------------------*****************************************-000000000000000000000000000000000000000------------------------------------------------------------
	
	
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='A'  && iter8->kapitipi1[2]=='N')
		{
		
	
		iter8->cikiskapi1 = !((iter8->girisler1[0] && iter8->girisler1[1]));
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						
						
							
						
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						

						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
	
					
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='A' && iter8->kapitipi1[1]=='N'  && iter8->kapitipi1[2]=='D')
		{
		
		
		iter8->cikiskapi1 = ((iter8->girisler1[0] && iter8->girisler1[1]));
	
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
	
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='R')
		{
		
	
		iter8->cikiskapi1 = !((iter8->girisler1[0] || iter8->girisler1[1]));
	
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='O' && iter8->kapitipi1[1]=='R')
		{
		
	
		iter8->cikiskapi1 = ((iter8->girisler1[0] || iter8->girisler1[1]));
fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
				
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
		
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='X' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='R')
		{
		
		iter8->cikiskapi1 = ((iter8->girisler1[0] ^ iter8->girisler1[1]));
	fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
	
		if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='T')
		{
		

		iter8->cikiskapi1 = !(iter8->girisler1[0]);
		
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1]&& iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1]|| iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				//--------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
			
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						break;
					}
					
				//--------------------------------------------------------------------------------
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU		

	}




	if(m==1)
	{


	//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
	{
		
		iter8->next->next->cikiskapi1 = (!(iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));
		
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						
						
						
					
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
		//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='O' && iter8->next->next->kapitipi1[1]=='R')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
		//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='X' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] ^ iter8->next->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
		//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='A' && iter8->next->next->kapitipi1[1]=='N'  && iter8->next->next->kapitipi1[2]=='D')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
		//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='A'  && iter8->next->next->kapitipi1[2]=='N')
	{
		
		iter8->next->next->cikiskapi1 = (!(iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
		//KAPI BAÞIuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu
	//*******************************************************************************************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='T')
	{
		
		iter8->next->next->cikiskapi1 = !(iter8->next->next->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);

		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
				if((iter9->ns) <= (iter8->next->ns-iter8->next->next->ns))
				{
				
	//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
		//--------------------------------------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
					}
					
	//--------------------------------------------------------------------------------------------------
	
	
						
				}
	
			}
			
		}
		

	}
	//-----------------------------------------------------************************************************---------------------------------------------------------------
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//------------------------------------------00****ASDASDSADDASFSAFASÞLASFKÞASFLKASÞFLKASÞFLKASÞFLKASFÞK-------------------------------------------------------
	//------------------------------------------00****ASDASDSADDASFSAFASÞLASFKÞASFLKASÞFLKASÞFLKASÞFLKASFÞK-------------------------------------------------------
	//------------------------------------------00****ASDASDSADDASFSAFASÞLASFKÞASFLKASÞFLKASÞFLKASÞFLKASFÞK-------------------------------------------------------
	
	//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='A'  && iter8->next->kapitipi1[2]=='N')
		{
		
			
		iter8->next->cikiskapi1 = !((iter8->girisler1[0] && iter8->next->girisler1[1]));
	
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		

		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD

	//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='A' && iter8->next->kapitipi1[1]=='N'  && iter8->next->kapitipi1[2]=='D')
		{
		
			
		iter8->next->cikiskapi1 = ((iter8->girisler1[0] && iter8->next->girisler1[1]));
	
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		
	//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
		{
		

		iter8->next->cikiskapi1 = !((iter8->girisler1[0] || iter8->next->girisler1[1]));

			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		

		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
			fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		
	//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='O' && iter8->next->kapitipi1[1]=='R')
		{
		

		iter8->next->cikiskapi1 = ((iter8->girisler1[0] || iter8->next->girisler1[1]));
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
				fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		

	//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='X' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
		{
		
			
		iter8->next->cikiskapi1 = ((iter8->girisler1[0] ^ iter8->next->girisler1[1]));
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
			//KAPI BAÞIIUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='T')
		{
		
			
		iter8->next->cikiskapi1 = !(iter8->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
				
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
						//----------------------------------------------------------------------
					if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						fopen("log_komut1.txt","ab+");
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						break;
					}
			//----------------------------------------------------------------------
			
			
			
				
			}
			
		}
			
	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU0ASDASDASDÝASD
		

		

	}










	break;
	}
		
		
				
	}

	}
}	
	
//SIRALAMASIZ ÝÞLEM********************************************************************************
//NOR, AND, OR  XOR, NOT, NAN
	if(bsayaci==1)
	{
		

	if(dns==0)
	{

//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='R')
	{
		
		iter8->cikiskapi1 = (!(iter8->girisler1[0] || iter8->girisler1[1]));
		
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						
						
						
						
						
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************			
		//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='O' && iter8->kapitipi1[1]=='R')
	{
		
		iter8->cikiskapi1 = ((iter8->girisler1[0] || iter8->girisler1[1]));
		
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
		fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
	
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************			
		//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='X' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='R')
	{
		
		iter8->cikiskapi1 = ((iter8->girisler1[0] ^ iter8->girisler1[1]));
	
	
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
			
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
		fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
	
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************			
	//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='A'  && iter8->kapitipi1[2]=='N')
	{
		
		iter8->cikiskapi1 = (!(iter8->girisler1[0] && iter8->girisler1[1]));
		
	
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
		fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************				
		//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='A' && iter8->kapitipi1[1]=='N'  && iter8->kapitipi1[2]=='D')
	{
		
		iter8->cikiskapi1 = ((iter8->girisler1[0] && iter8->girisler1[1]));
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				
						fopen("log_komut1.txt","ab+");
						
				
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
					
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************			
		//KAPI BAÞIIIIIIIIIIIIIIIIIIIIIIIIIIIII*************************************************------------------------------------------------

	if(iter8->kapitipi1[0]=='N' && iter8->kapitipi1[1]=='O'  && iter8->kapitipi1[2]=='T')
	{
		
		iter8->cikiskapi1 = (!iter8->girisler1[0]);
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->cikiskapi[0],iter8->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->ns);
						printf("\n %c->%d\n",iter8->cikiskapi[0],iter8->cikiskapi1);
						fclose(logdosyasi1);
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->cikiskapi1;
				
			//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
					
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------
	//------------------------------------------------------------------
				
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//------------------------------------------------------------------

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUU-------------------------***************************************************************			
		
	}
	
//---------------------------------------------------------------------

	if(dns==1)
	{

//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] || iter8->next->girisler1[1]));
		
		
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
		
		
		
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						
						
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************			
//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='O' && iter8->next->kapitipi1[1]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] || iter8->next->girisler1[1]));
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************
//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='X' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='R')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] ^ iter8->next->girisler1[1]));
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
		fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************				
		//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='A'  && iter8->next->kapitipi1[2]=='N')
	{
		
		iter8->next->cikiskapi1 = (!(iter8->next->girisler1[0] && iter8->next->girisler1[1]));
		
	fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************		
//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='A' && iter8->next->kapitipi1[1]=='N'  && iter8->next->kapitipi1[2]=='D')
	{
		
		iter8->next->cikiskapi1 = ((iter8->next->girisler1[0] && iter8->next->girisler1[1]));
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************		

//KAPI BAÞOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO***************************************************************************
	if(iter8->next->kapitipi1[0]=='N' && iter8->next->kapitipi1[1]=='O'  && iter8->next->kapitipi1[2]=='T')
	{
		
		iter8->next->cikiskapi1 = !(iter8->next->girisler1[0]);
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->ns);
						printf("\n %c->%d\n",iter8->next->cikiskapi[0],iter8->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->cikiskapi1;
			
		//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				
//------------------------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
		//------------------------------------------------------------------------------------				

						
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUUU**************************************************************************************		

	}
	
//--------------------------------------------------------------------------------------------

	if(dns==2)
	{

//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
	{
		
		iter8->next->next->cikiskapi1 = (!(iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));
		
		
			fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		
		
		
		
		
		
		
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
						
						
						
						
						
						
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************
//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='O' && iter8->next->next->kapitipi1[1]=='R')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] || iter8->next->next->girisler1[1]));
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************
//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='X' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='R')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] ^ iter8->next->next->girisler1[1]));
				fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************
	//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='A'  && iter8->next->next->kapitipi1[2]=='N')
	{
		
		iter8->next->next->cikiskapi1 = (!(iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
				fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
				fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
			fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************	
//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='A' && iter8->next->next->kapitipi1[1]=='N'  && iter8->next->next->kapitipi1[2]=='D')
	{
		
		iter8->next->next->cikiskapi1 = ((iter8->next->next->girisler1[0] && iter8->next->next->girisler1[1]));
		
		fopen("log_komut1.txt","ab+");
					fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
						fclose(logdosyasi1);
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
					fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************
//KAPI BAÞÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÖÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ**************************
	if(iter8->next->next->kapitipi1[0]=='N' && iter8->next->next->kapitipi1[1]=='O'  && iter8->next->next->kapitipi1[2]=='T')
	{
		
		iter8->next->next->cikiskapi1 = !(iter8->next->next->girisler1[0]);
		
		fopen("log_komut1.txt","ab+");
						
						fprintf(logdosyasi1,"\t%d. ns ",iter8->next->next->ns);
						fprintf(logdosyasi1,"\t %c->%d\t",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
	
						printf("\n\n%d. ns ",iter8->next->next->ns);
						printf("\n %c->%d\n",iter8->next->next->cikiskapi[0],iter8->next->next->cikiskapi1);
		fclose(logdosyasi1);
		
		
	
		for(int l=0; l<3; l++)
		{
			if(iter8->next->next->cikiskapi[0] == iter9->girisler[l])
			{
				iter9->girisler1[l]=iter8->next->next->cikiskapi1;
				
			//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='A' && iter9->kapitipi1[1]=='N'  && iter9->kapitipi1[2]=='D')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						fclose(logdosyasi1);
						
						
						
						
				
					}
					
			//-----------------------------------------------------------------------
						//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='A'  && iter9->kapitipi1[2]=='N')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] && iter9->girisler1[1]&& iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='O' && iter9->kapitipi1[1]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] || iter9->girisler1[1] || iter9->girisler1[2]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='X' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='R')
					{
						iter9->cikiskapi1= (iter9->girisler1[0] ^ iter9->girisler1[1] ^ iter9->girisler1[2]);
						
							fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				//-----------------------------------------------------------------------	
				if(iter9->kapitipi1[0]=='N' && iter9->kapitipi1[1]=='O'  && iter9->kapitipi1[2]=='T')
					{
						iter9->cikiskapi1= !(iter9->girisler1[0]);
						
						fopen("log_komut1.txt","ab+");
						
					
					
						fprintf(logdosyasi1,"\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						fprintf(logdosyasi1,"\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						
						
						printf("\n\n%d. ns ",iter8->next->next->ns+(iter9->ns));
						printf("\n %c->%d \n",iter9->cikiskapi[0],iter9->cikiskapi1);
						fclose(logdosyasi1);
					}
					
			//-----------------------------------------------------------------------
				
	
			}
			
		}
		

	}
//KAPI SONUUUUUUUUUUUUUUUUUUUUUUUUÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐÐ******************************************************
		
		
	}
	 
	
	


	}
	

		
	}
	
	bsayaci=0;
	 
	iter5=root;
	
		if(text3[kb]=='G' && text3[kb+1]!='*')
	{	
	
	int t=kb+1;
	printf(">%c ",text3[kb]);
	fopen("log_komut1.txt","ab+");
	fprintf(logdosyasi1,">%c ",text3[kb]);


		while(!isalpha(text3[t]))
		{
			
			t++;
				
		}
		degisen2[0]=text3[t];
		printf("%c",degisen2[0]);
		fprintf(logdosyasi1,"%c ",degisen2[0]);
		
		while(iter5->next !=NULL)
		{
			for(int yc=0; yc<2; yc++)
			{
				if(iter5->girisler[yc] == degisen2[0])
				{
					printf("\n%c->",iter5->girisler[yc]);
					printf("%d",iter5->girisler1[yc]);
					fprintf(logdosyasi1,">\t%c ",iter5->girisler[yc]);
					fprintf(logdosyasi1,">\t%d ",iter5->girisler1[yc]);
					
					break;
				}
			}
			if(iter5->cikiskapi[0]== degisen2[0])
				{
					printf("\n%c->",iter5->cikiskapi[0]);
					printf("%d",iter5->cikiskapi1);
					fprintf(logdosyasi1,">\t%c ",iter5->cikiskapi[0]);
					fprintf(logdosyasi1,">\t%d ",iter5->cikiskapi1);
					
					break;
				}
				
				iter5=iter5->next;
			
		}
		
		
		
	log();
	fclose(logdosyasi1);
	
		printf("\n");
		
	
	}
	
	iter5=root;
	
	

		if(text3[kb]=='G' && text3[kb+1]=='*')
	{	
	
	printf(">G*\n");
	fopen("log_komut1.txt","ab+");
	fprintf(logdosyasi1,">G*	");
		while(iter5->next !=NULL)
		{
			for(int yc=0; yc<=2; yc++)
			{
				if(isalpha(iter5->girisler[yc]))
				{
					printf("\n%c->",iter5->girisler[yc]);
						fprintf(logdosyasi1,"\n\t%c ->",iter5->girisler[yc]);
					printf("%d",iter5->girisler1[yc]);
						fprintf(logdosyasi1,"\t%d",iter5->girisler1[yc]);
				}
					
			
		
			}
		
			
				if(iter5->next->next==NULL)
			{
					printf("\n%c->",iter5->cikiskapi[0]);
					fprintf(logdosyasi1,"\n\t%c ->",iter5->cikiskapi[0]);
					printf("%d",iter5->cikiskapi1);
					fprintf(logdosyasi1,"\t%d",iter5->cikiskapi1);
			}	
			
				iter5=iter5->next;
			
		}
		log();
		fclose(logdosyasi1);
		printf("\n\n");
	
	}

  
	
	
	
	
}


//***
//S ÝÞLEMÝ***
//***




	return 0;
}
