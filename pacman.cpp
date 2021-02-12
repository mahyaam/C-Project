#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>
#include<windows.h>
int main(){
	int a=219,i,j,x,ipac=14,jpac=13,ig1=5,jg1=4,ig2=3,jg2=21;
	char w[18][33];
	for(i=0;i<17;i++)
	{
		for(j=0;j<32;j++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=0;j<32;j++)
	{
		w[1][j]='.';
	}
	for(j=0;j<32;j++)
	{
		w[16][j]='.';
	}
	for(i=0;i<17;i++)
	{
		w[i][1]='.';
	}
	for(i=0;i<17;i++)
	{
		w[i][31]='.';
	}
	/////////////////
	for(j=4;j<8;j++)
	{		
		for(i=4;i<15;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=26;j<30;j++)
	{		
		for(i=4;i<15;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=8;j<26;j++)
	{
		w[4][j]='.';
	}
	for(j=8;j<26;j++)
	{
		w[14][j]='.';
	}
	for(i=6;i<13;i++)
	{
		for(j=8;j<11;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=6;i<13;i++)
	{
		for(j=23;j<26;j++)
		{
			w[i][j]='.';
		}
	}	
	for(i=5;i<7;i++)
	{
		for(j=12;j<22;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=12;i<15;i++)
	{
		for(j=12;j<22;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=4;i<15;i++)
	{
		w[i][12]='.';
	}
	for(i=4;i<15;i++)
	{
		w[i][21]='.';
	}
	for(i=8;i<9;i++)
	{
		for(j=14;j<20;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=10;i<11;i++)
	{
		for(j=14;j<20;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=9;i<10;i++)
	{
		for(j=13;j<15;j++)
		{
			w[i][j]='.';
		}
	}
	for(i=9;i<10;i++)
	{
		for(j=19;j<21;j++)
		{
			w[i][j]='.';
		}
	}
	for(j=16;j<18;j++)
	{
		for(i=7;i<8;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=16;j<18;j++)
	{
		for(i=11;i<12;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=10;j<12;j++)
	{
		for(i=15;i<16;i++)
		{
			w[i][j]='.';
		}
	}
		for(j=10;j<12;j++)
	{
		for(i=3;i<4;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=21;j<23;j++)
	{
		for(i=15;i<16;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=21;j<23;j++)
	{
		for(i=3;i<4;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=3;j<4;j++)
	{
		for(i=4;i<8;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=30;j<31;j++)
	{
		for(i=7;i<8;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=3;j<4;j++)
	{
		for(i=8;i<15;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=30;j<31;j++)
	{
		for(i=11;i<12;i++)
		{
			w[i][j]='.';
		}
	}
	for(j=6;j<7;j++)
	{
		for(i=8;i<11;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=9;j<10;j++)
	{
		for(i=8;i<11;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=25;j<26;j++)
	{
		for(i=8;i<11;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=27;j<28;j++)
	{
		for(i=8;i<11;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=9;j<10;j++)
	{
		for(i=6;i<7;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=9;j<10;j++)
	{
		for(i=12;i<13;i++)
		{
			w[i][j]=(char)a;
		}
	}
	for(j=24;j<25;j++)
	{
		for(i=6;i<7;i++)
		{
			w[i][j]=(char)a;
		}
	}
		for(j=24;j<25;j++)
	{
		for(i=12;i<13;i++)
		{
			w[i][j]=(char)a;
		}
	}
	w[0][1]=(char)a; 
	w[1][0]=(char)a;
	w[16][0]=(char)a;
	w[0][31]=(char)a; 
	w[7][2]='.'; 
	w[11][2]='.';
	for(j=10;j<23;j++)
	{
		w[2][j]='.';
	}
	for(i=0;i<17;i++)
	{
		w[i][32]=(char)a;
	}
	for(j=0;j<33;j++)
	{
		w[17][j]=(char)a;	
	}

	w[ipac][jpac]='P';
	w[ig1][jg1]='G';
	w[ig2][jg2]='G';
	
	printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
	
	for(i=0;i<18;i++)
	{
		for(j=0;j<33;j++)
		{
			printf("%c",w[i][j]);
		}
		printf("\n");
	}
	//////////////////
	while(1)
	{
		int chz,dot=0;
		chz=getch();
		switch(chz)
		{
			case 48://down
			if(w[ipac+1][jpac]!=(char)a){
				w[ipac][jpac]=' ';
				w[ipac+1][jpac]='P';
				ipac=ipac+1;
				system ("cls");
				printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");		
				for(i=0;i<18;i++)
				{
					for(j=0;j<33;j++)
					{
					printf("%c",w[i][j]);
					}
				printf("\n");
				}
					for(i=0 ; i<18 ; i++)
					{
						for(j=0 ; j<33 ; j++)
						{
							if(w[i][j]=='.')
								dot=dot+1;
						}
					}
					if(dot==0)
					{
						system("cls");
						printf("YOU WIN (:");
						return 1;
					}
			}
			break;
				
			case 49://left
			if(w[ipac][jpac-1]!=(char)a){
				w[ipac][jpac]=' ';
				w[ipac][jpac-1]='P';
				jpac=jpac-1;
				system ("cls");
				printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
				for(i=0;i<18;i++)
				{
						for(j=0;j<33;j++)
						{
						printf("%c",w[i][j]);
						}
					printf("\n");
				}
				for(i=0 ; i<18 ; i++)
					{
						for(j=0 ; j<330 ; j++)
						{
							if(w[i][j]=='.')
								dot=dot+1;
						}
					}
					if(dot==0)
					{
						system("cls");
						printf("YOU WIN (:");
						return 1;
					}
			}
				break;
				
				case 50://up
				if(w[ipac-1][jpac]!=(char)a){
					w[ipac][jpac]=' ';
					w[ipac-1][jpac]='P';
					ipac=ipac-1;
					system ("cls");
					printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
					for(i=0;i<18;i++)
					{
						  for(j=0;j<33;j++)
							{
								printf("%c",w[i][j]);
							}
							printf("\n");
					}
					for(i=0 ; i<18 ; i++)
					{
						for(j=0 ; j<33 ; j++)
						{
							if(w[i][j]=='.')
								dot=dot+1;
						}
					}
					if(dot==0)
					{
						system("cls");
						printf("YOU WIN (:");
						return 1;
					}
				}
					break;
				case 51://right
				if(w[ipac][jpac+1]!=(char)a){
					w[ipac][jpac]=' ';
					w[ipac][jpac+1]='P';
					jpac=jpac+1;
					system ("cls");
					printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
					for(i=0;i<18;i++)
					{
							for(j=0;j<33;j++)
							{	
								printf("%c",w[i][j]);
							}
							printf("\n");
					}
					for(i=0 ; i<18 ; i++)
					{
						for(j=0 ; j<33 ; j++)
						{
							if(w[i][j]=='.')
								dot=dot+1;
						}
					}
					if(dot==0)
					{
						system("cls");
						printf("YOU WIN (:");
						return 1;
					}
				}
					break;
					
					case 52://EXIT
					return 1;
					break;
		}
		int r1;
		srand(time(0));
		r1=rand()%4+1;
		Sleep(100);
		switch(r1)
		{
			case 1://down
				if(w[ig1+1][jg1]!=(char)a){
					w[ig1][jg1]='.';
					w[ig1+1][jg1]='G';
					ig1=ig1+1;
					if(w[ig1+1][jg1]=='G'){
						w[ig1][jg1]=' ';
						w[ig1+1][jg1]='G';
						ig1=ig1+1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig1+1][jg1]==(char)a)
				{
					r1=2,3,4;
				}
				
			case 2://left
				if(w[ig1][jg1-1]!=(char)a){
					w[ig1][jg1]='.';
					w[ig1][jg1-1]='G';
					jg1=jg1-1;
					if(w[ig1][jg1-1]=='G'){
						w[ig1][jg1]=' ';
						w[ig1][jg1-1]='G';
						jg1=jg1-1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig1][jg1-1]==(char)a)
				{
					r1=1,3,4;
				}
				
			case 3://up
				if(w[ig1-1][jg1]!=(char)a){
					w[ig1][jg1]='.';
					w[ig1-1][jg1]='G';
					ig1=ig1-1;
					if(w[ig1-1][jg1]=='G'){
						w[ig1][jg1]=' ';
						w[ig1-1][jg1]='G';
						ig1=ig1-1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig1-1][jg1]==(char)a)
				{
					r1=1,2,4;
				}
				
			case 4://right
				if(w[ig1][jg1+1]!=(char)a){
					w[ig1][jg1]='.';
					w[ig1][jg1+1]='G';
					jg1=jg1+1;
					if(w[ig1][jg1+1]=='G'){
						w[ig1][jg1]=' ';
						w[ig1][jg1+1]='G';
						jg1=jg1+1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig1][jg1+1]==(char)a)
				{
					r1=1,2,3;
				}
		}
		system("cls");
		printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
				for(i=0;i<18;i++)
				{
						for(j=0;j<33;j++)
						{
						printf("%c",w[i][j]);
						}
					printf("\n");
				}
				if(ipac==ig1&&jpac==jg1)
				{
					printf("SORRY:( U FAIL/game over -_-");
					exit(0);
				}
		////////
		int r2;
		srand(time(0));
		r2=rand()%4+5;
		Sleep(100);
		switch(r2)
		{
			case 5://down
				if(w[ig2+1][jg2]!=(char)a){
					w[ig2][jg2]='.';
					w[ig2+1][jg2]='G';
					ig2=ig2+1;
					if(w[ig2+1][jg2]=='G'){
						w[ig2][jg2]=' ';
						w[ig2+1][jg2]='G';
						ig2=ig2+1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig2+1][jg2]==(char)a)
				{
					r2=6,7,8;
				}
				
			case 6://left
				if(w[ig2][jg2-1]!=(char)a){
					w[ig2][jg2]='.';
					w[ig2][jg2-1]='G';
					jg2=jg2-1;
					if(w[ig2][jg2-1]=='G'){
						w[ig2][jg2]=' ';
						w[ig2][jg2-1]='G';
						jg2=jg2-1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig2][jg2-1]==(char)a)
				{
					r2=5,8,7;
				}
				
			case 7://up
				if(w[ig2-1][jg2]!=(char)a){
					w[ig2][jg2]='.';
					w[ig2-1][jg2]='G';
					ig2=ig2-1;
					if(w[ig2-1][jg2]=='G'){
						w[ig2][jg2]=' ';
						w[ig2-1][jg2]='G';
						ig2=ig2-1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig2-1][jg2]==(char)a)
				{
					r2=	5,6,8;
				}
				
			case 8://right
				if(w[ig2][jg2+1]!=(char)a){
					w[ig2][jg2]='.';
					w[ig2][jg2+1]='G';
					jg2=jg2+1;
					if(w[ig2][jg2+1]=='G'){
						w[ig2][jg2]=' ';
						w[ig2][jg2+1]='G';
						jg2=jg2+1;
						if(ig1==ig2&&jg1==jg2)
						{
							w[ig1][jg1]='G';
							w[ig2][jg2]='G';
						}
					}
				}
				break;
				if(w[ig2][jg2+1]==(char)a)
				{
					r2=5,6,7;
				}
		}
		system("cls");
		printf("movement--->> right=3 , up=2 , left=1 , down=0 , EXIT=4 \n");
				for(i=0;i<18;i++)
				{
						for(j=0;j<33;j++)
						{
						printf("%c",w[i][j]);
						}
					printf("\n");
				}
				if(ipac==ig2&&jpac==jg2)
				{
					printf("SORRY:( U FAIL/game over -_-");
					exit(0);
				}
	}

}