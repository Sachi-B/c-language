#include<stdio.h>
struct  address
{
	char cityname[50];
	int postcode;
};
struct person
{
	int id;
	char name[50];
	struct address d;
};
void main()
{
	struct person s;
	printf("\n enter id");
	scanf("%d",&s.id);
	printf("\n enter name");
	scanf("%s",s.name);
	printf("\n enter cityname:");
	scanf("%s",s.d.cityname);
	printf("\n enter postcode");
	scanf("%d",&s.d.postcode);
	printf("\nname %s",s.name);
	printf("\n id %d",s.id);
	printf("\n cityname %s",s.d.cityname);
	printf("\npost code %d",s.d.postcode);

}