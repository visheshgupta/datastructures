#include<stdio.h>
#include<conio.h>
struct Vit{
	int offices;
	int hostels;
	int buildings;
};
void lele(struct Vit vel);
 int main()
 {
		struct Vit v;
		
		
		v.offices=9;
		v.hostels=5;
		v.buildings=10;
		
		lele(v);
		getch();
 }
 void  lele(struct Vit vel)
 {
		printf("%d\n",vel.offices);
		printf("%d\n",vel.hostels);
		printf("%d\n",vel.buildings);
		}

