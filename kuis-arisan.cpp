#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;
int main ()
{
	int arisan[10], jml, undian[10],x,i;
	
	cout<<"Masukkan Jumlah Peserta Arisan : ";
	cin>>jml;
	
	srand(time(NULL));
	for(int i=0; i<jml; i++){
	arisan[i]=rand()%jml+1;
	
	if (i !=0){
	do{
 	arisan[i]=rand()%jml+1;
   	x=0;
   	
	for (int j=0; j<jml; j++) {
    if (arisan[i]==undian[j]){
    x++;
    }
   }
 }
	while (x>0 || arisan[i]==0);

	cout<<"undian arisan ke-"<<i+1<<": "<<arisan[i]<<endl;
	undian[i]=arisan[i];
	}

	else{
	cout<<"undian arisan ke-1: "<<arisan[0]<<endl;
	undian[0]=arisan[0];
	}
}
	getch();
}
	
