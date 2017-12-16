#include <stdio.h>
int main() {
	int o,k,y,x,i,j,pocet_zadani,vyska_default_obdlznika,sirka_default_obdlznika,nasobok_sirka,nasobok_vyska;

	scanf("%d",&pocet_zadani);
	scanf("%d %d %d %d",&nasobok_vyska,&nasobok_sirka,&vyska_default_obdlznika,&sirka_default_obdlznika);




	for(k=1;k<=nasobok_vyska;k++) {
		for(j=1;j<=vyska_default_obdlznika;j++) {
			for(y=1;y<=nasobok_sirka;y++) {
				if(j==vyska_default_obdlznika) 


					for (x=1;x<=sirka_default_obdlznika;x++) printf("#"); 
				else {
					for(i=1;i<=sirka_default_obdlznika;i++) {

						                                                //for(o=1;o<=sirka_default_obdlznika;o++)
						if((j % 3 == 0) && (i % 2 == 0)) printf("."); else printf("*"); //else

								if(i==sirka_default_obdlznika) printf("#"); else {
									if(i % 2 == 0) printf("*"); else printf("."); 
								}

				}
			}
		}
		printf("\n");
	} 
}





return 0;
}

//TUTO TO FUNGUJE BEZ 3 RIADKOV KTORE NEJSU NAOPAK !!!!!!!!!!!!!!!!!!!
//verzia 2
/// verziaaaaaaaaaaaaaaaaaaaaaa
// for (i=0;i<3;i++){
		//cely zivot commit push
//}
//new branchsdfasdsadadsdsadasds
