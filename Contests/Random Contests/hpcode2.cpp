<<<<<<< HEAD
/*Input
Each	line	of	input	will	contain	a	person's	name,	their	weight	(in	pounds,	on
Earth),	a	single‐word	name	of	a	celestial	body,	and	a	conversion	factor	for	the
surface	gravity	on	that	body.	The	last	line	of	input	is	the	word	“END”	followed	by
three	zeros.
Fred 179.0 Luna 0.1654
Layla 131 Mars 0.376
Pat 145.2 Neptune 1.14
Rajavel 156.4 Ganymede 0.146
END 0 0 0
Output
The	program	must	convert	each	weight	and	print	the	result	using	the	format	shown	below.	Weights	must
match	the	expected	values	within	+/‐	1	pound.
On Luna, Fred would weigh 29.6066 pounds.
On Mars, Layla would weigh 49.256 pounds.
On Neptune, Pat would weigh 165.528 pounds.
On Ganymede, Rajavel would weigh 22.8344 pounds.
By Ujjwal Gulecha
*/

#include<iostream>
#include<string.h>
using namespace std;
char ran[30];
class weight
{
    char planet[30];
    float w,con;
public:
     char name[30];
    void read()
    {
        cin>>name>>w>>planet>>con;
        strcpy(ran,name);
    }
    void convert()
    {
        w=con*w;
    }
    void display()
    {
        cout<<"On "<<planet<<", "<<name<<" would weigh "<<w<<" pounds."<<endl;
    }
};
int main()
{
    int i=0,count;
    weight W[30];
    for(i=0;;i++)
    {
        W[i].read();
        if(!(strcmp(ran,"END")))
            break;
    }
    count=i;
    for(i=0;i<count;i++)
    {
        W[i].convert();
        W[i].display();
    }
 return 0;

}



=======
/*Input
Each	line	of	input	will	contain	a	person's	name,	their	weight	(in	pounds,	on
Earth),	a	single‐word	name	of	a	celestial	body,	and	a	conversion	factor	for	the
surface	gravity	on	that	body.	The	last	line	of	input	is	the	word	“END”	followed	by
three	zeros.
Fred 179.0 Luna 0.1654
Layla 131 Mars 0.376
Pat 145.2 Neptune 1.14
Rajavel 156.4 Ganymede 0.146
END 0 0 0
Output
The	program	must	convert	each	weight	and	print	the	result	using	the	format	shown	below.	Weights	must
match	the	expected	values	within	+/‐	1	pound.
On Luna, Fred would weigh 29.6066 pounds.
On Mars, Layla would weigh 49.256 pounds.
On Neptune, Pat would weigh 165.528 pounds.
On Ganymede, Rajavel would weigh 22.8344 pounds.
By Ujjwal Gulecha
*/

#include<iostream>
#include<string.h>
using namespace std;
char ran[30];
class weight
{
    char planet[30];
    float w,con;
public:
     char name[30];
    void read()
    {
        cin>>name>>w>>planet>>con;
        strcpy(ran,name);
    }
    void convert()
    {
        w=con*w;
    }
    void display()
    {
        cout<<"On "<<planet<<", "<<name<<" would weigh "<<w<<" pounds."<<endl;
    }
};
int main()
{
    int i=0,count;
    weight W[30];
    for(i=0;;i++)
    {
        W[i].read();
        if(!(strcmp(ran,"END")))
            break;
    }
    count=i;
    for(i=0;i<count;i++)
    {
        W[i].convert();
        W[i].display();
    }
 return 0;

}



>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
