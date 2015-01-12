#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	
	const int righe=6;
	const int colonne=4;
	
	
	char vettore[righe*colonne]="ciao mi chiamo lorenzo";
	char vett[righe*colonne];
	char matrice[righe][colonne];
	
	
	int i=0;
	int r,c;
	

	
	for(c=0;c<colonne;c++){
		for(r=0;r<righe;r++){
			
			matrice[r][c]=vettore[i];
			i++;
						
			
		}
		
		
	}
	
	
	i=0;
	
	int h=1;
	
	int C,R;
	
	int s=0;
	
	r=0;
	
	c=0;

	
	while(i<righe*colonne){
	

		
		for(r=righe-h;r>=s;r--){
			
			vett[i]=matrice[r][c];
			
			i++;
		}
		
		r++;
		
		for(c=h;c<colonne-h;c++){
			
			vett[i]=matrice[r][c];
		
			i++;
		}
		
		for(R=r;R<=righe-h;R++){
			
			vett[i]=matrice[R][c];
			
			i++;
		}
		
		R--;
		
		for(C=colonne-(h+1);C>=h;C--){
			
			vett[i]=matrice[R][C];
			
			i++;
		}
		
		C++;
		
		s++;
		
		c=C;
		
		h++;}

	
	cout<<endl<<endl;
	












	
	
	
	for(i=0;i<righe*colonne;i++){
		
		cout<<vett[i];
	}
	
	cout<<endl<<endl<<endl;
	
	
system("pause");
return 0;
	
	
	
	
	
}
