#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
batsman[0] = Shikhar Dhawan
bastman[1] = Mahendra Singh Dhoni
batsman[2] = Virat Kohli
bastman[3] = Ajinkya Rahane
batsman[4] = Suresh Raina
batsman[5] = Rohit Sharma
*/

struct batsman
{
	int runs;
	int balls;
	float sr;
	int four;
	int six;
	char opposition[20];
	struct batsman * next;
};

struct bat_list
{
	struct batsman * head;
};

struct bat_list win_home[6];
struct bat_list win_away[6];
struct bat_list lose_home[6];
struct bat_list lose_away[6];

/*
bowler[0] = Ravichandran Ashwin	
bowler[1] = Mohit Sharma
bowler[2] = Mohammad Shami
bowler[3] = Umesh Yadav
*/

struct bowler
{
	float overs;
	int maiden;
	int runs;
	int wickets;
	float economy;
	char opposition[20];
	struct bowler * next;
};

struct bowl_list
{
	struct bowler * head;
};

struct bowl_list win_home1[4];
struct bowl_list win_away1[4];
struct bowl_list lose_home1[4];
struct bowl_list lose_away1[4];

/*
all-rounder = Ravindra Jadeja
*/

struct allrounder
{
	int runs;
	int wickets;
	int conc;
	int catches;
	int stumps;
	char opposition[20];
	struct allrounder * next;
};

struct allr_list
{
	struct allrounder * head;
};

struct allr_list win_home2;
struct allr_list win_away2;
struct allr_list lose_home2;
struct allr_list lose_away2;

void Initialise()
{
	int i = 0;
	for(i=0;i<6;i++)
	{
		win_home[i].head = NULL;
		win_away[i].head = NULL;
		lose_home[i].head = NULL;
		lose_away[i].head = NULL;
		win_home1[i].head = NULL;
		win_away1[i].head = NULL;
		lose_home1[i].head = NULL;
		lose_away1[i].head = NULL;
	}
}

void Read_Batsman_win_home()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/dhawan/won/home/dhawan_won_home.txt","r");
	int tmp1;
	char tmp2;
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[0].head;
		win_home[0].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/dhoni/won/home/dhoni_won_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[1].head;
		win_home[1].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/kohli/won/home/kohli_won_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[2].head;
		win_home[2].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rahane/won/home/rahane_won_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[3].head;
		win_home[3].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/raina/won/home/raina_won_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[4].head;
		win_home[4].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rohit/won/home/rohit_won_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_home[5].head;
		win_home[5].head=new_node;	
	}
	fclose(fp);
}

void Read_Batsman_win_away()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/dhawan/won/away/dhawan_won_away.txt","r");
	int tmp1;
	char tmp2;
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[0].head;
		win_away[0].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/dhoni/won/away/dhoni_won_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[1].head;
		win_away[1].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/kohli/won/away/kohli_won_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[2].head;
		win_away[2].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rahane/won/away/rahane_won_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[3].head;
		win_away[3].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/raina/won/away/raina_won_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[4].head;
		win_away[4].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rohit/won/away/rohit_won_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = win_away[5].head;
		win_away[5].head=new_node;	
	}
	fclose(fp);
}

void Read_Batsman_lose_home()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/dhawan/lose/home/dhawan_lose_home.txt","r");
	int tmp1;
	char tmp2;
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[0].head;
		lose_home[0].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/dhoni/lose/home/dhoni_lose_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[1].head;
		lose_home[1].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/kohli/lose/home/kohli_lose_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[2].head;
		lose_home[2].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rahane/lose/home/rahane_lose_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[3].head;
		lose_home[3].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/raina/lose/home/raina_lose_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[4].head;
		lose_home[4].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rohit/lose/home/rohit_lose_home.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_home[5].head;
		lose_home[5].head=new_node;	
	}
	fclose(fp);
}

void Read_Batsman_lose_away()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/dhawan/lose/away/dhawan_lose_away.txt","r");
	int tmp1;
	char tmp2;
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[0].head;
		lose_away[0].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/dhoni/lose/away/dhoni_lose_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[1].head;
		lose_away[1].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/kohli/lose/away/kohli_lose_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[2].head;
		lose_away[2].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rahane/lose/away/rahane_lose_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[3].head;
		lose_away[3].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/raina/lose/away/raina_lose_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[4].head;
		lose_away[4].head=new_node;	
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/rohit/lose/away/rohit_lose_away.txt","r");
	while(!feof(fp))
	{
		struct batsman * new_node = (struct batsman *)malloc(sizeof(struct batsman)); 
		fscanf(fp,"%d %d %d %f %d %d %c %s\n",&tmp1,&new_node->runs,&new_node->balls,&new_node->sr,&new_node->four,&new_node->six,&tmp2,new_node->opposition);
		new_node->next = lose_away[5].head;
		lose_away[5].head=new_node;	
	}
	fclose(fp);
}

void Read_Bowler_win_home()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/ashwin/won/home/ashwin_won_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_home1[0].head;
		win_home1[0].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/mohit/won/home/mohit_won_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_home1[1].head;
		win_home1[1].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/shami/won/home/shami_won_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_home1[2].head;
		win_home1[2].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/umesh/won/home/umesh_won_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_home1[3].head;
		win_home1[3].head=new_node;
	}
	fclose(fp);
}

void Read_Bowler_win_away()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/ashwin/won/away/ashwin_won_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_away1[0].head;
		win_away1[0].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/mohit/won/away/mohit_won_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_away1[1].head;
		win_away1[1].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/shami/won/away/shami_won_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_away1[2].head;
		win_away1[2].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/umesh/won/away/umesh_won_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = win_away1[3].head;
		win_away1[3].head=new_node;
	}
	fclose(fp);
}


void Read_Bowler_lose_home()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/ashwin/lose/home/ashwin_lose_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_home1[0].head;
		lose_home1[0].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/mohit/lose/home/mohit_lose_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_home1[1].head;
		lose_home1[1].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/shami/lose/home/shami_lose_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_home1[2].head;
		lose_home1[2].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/umesh/lose/home/umesh_lose_home.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_home1[3].head;
		lose_home1[3].head=new_node;
	}
	fclose(fp);
}

void Read_Bowler_lose_away()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/ashwin/lose/away/ashwin_lose_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_away1[0].head;
		lose_away1[0].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/mohit/lose/away/mohit_lose_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_away1[1].head;
		lose_away1[1].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/shami/lose/away/shami_lose_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_away1[2].head;
		lose_away1[2].head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/umesh/lose/away/umesh_lose_away.txt","r");
	while(!feof(fp))
	{
		struct bowler * new_node = (struct bowler *)malloc(sizeof(struct bowler));
		fscanf(fp,"%f %d %d %d %f %s\n",&new_node->overs,&new_node->maiden,&new_node->runs,&new_node->wickets,&new_node->economy,new_node->opposition);
		new_node->next = lose_away1[3].head;
		lose_away1[3].head=new_node;
	}
	fclose(fp);
}

void Read_AllRounder()
{
	FILE * fp = fopen("/home/harish/Maths_Bonus/jadeja/won/home/jadeja_won_home.txt","r");
	while(!feof(fp))
	{
		struct allrounder * new_node = (struct allrounder *)malloc(sizeof(struct allrounder));
		fscanf(fp,"%d %d %d %d %d %s\n",&new_node->runs,&new_node->wickets,&new_node->conc,&new_node->catches,&new_node->stumps,new_node->opposition);
		new_node->next = win_home2.head;
		win_home2.head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/jadeja/won/away/jadeja_won_away.txt","r");
	while(!feof(fp))
	{
		struct allrounder * new_node = (struct allrounder *)malloc(sizeof(struct allrounder));
		fscanf(fp,"%d %d %d %d %d %s\n",&new_node->runs,&new_node->wickets,&new_node->conc,&new_node->catches,&new_node->stumps,new_node->opposition);
		new_node->next = win_away2.head;
		win_away2.head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/jadeja/lose/home/jadeja_lose_home.txt","r");
	while(!feof(fp))
	{
		struct allrounder * new_node = (struct allrounder *)malloc(sizeof(struct allrounder));
		fscanf(fp,"%d %d %d %d %d %s\n",&new_node->runs,&new_node->wickets,&new_node->conc,&new_node->catches,&new_node->stumps,new_node->opposition);
		new_node->next = lose_home2.head;
		lose_home2.head=new_node;
	}
	fclose(fp);
	fp = fopen("/home/harish/Maths_Bonus/jadeja/lose/away/jadeja_lose_away.txt","r");
	while(!feof(fp))
	{
		struct allrounder * new_node = (struct allrounder *)malloc(sizeof(struct allrounder));
		fscanf(fp,"%d %d %d %d %d %s\n",&new_node->runs,&new_node->wickets,&new_node->conc,&new_node->catches,&new_node->stumps,new_node->opposition);
		new_node->next = lose_away2.head;
		lose_away2.head=new_node;
	}
	fclose(fp);
}

void part_1()
{
	printf("Analysis 1(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Virat Kohli's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct batsman * temp = win_home[2].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[2].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.323 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Virat Kohli\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 1(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Virat Kohli's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[2].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[2].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.313 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Virat Kohli\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n");
}

void part_2()
{
	printf("Analysis 2(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Shikhar Dhawan's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct batsman * temp = win_home[0].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[0].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.415 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Shikhar Dhawan\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 2(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Shikhar Dhawan's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[0].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[0].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.415 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Shikhar Dhawan\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n"); 
}

void part_3()
{
	printf("Analysis 3(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on M.S Dhoni's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n");
	int sum = 0,count = 0;
	struct batsman * temp = win_home[1].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[1].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.316 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if M.S Dhoni\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 3(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on M.S Dhoni's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[1].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[1].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.333 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if M.S Dhoni\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n"); 
}

void part_4()
{
	printf("Analysis 4(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Ajinkya Rahane's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct batsman * temp = win_home[3].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[3].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.440 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Ajinkya rahane\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 4(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Ajinkya Rahane's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[3].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[3].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.638 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Ajinkya Rahane's\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n"); 
}

void part_5()
{
	printf("Analysis 5(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Suresh Raina's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct batsman * temp = win_home[4].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[4].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.337 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Suresh Raina\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 5(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Suresh Raina's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[4].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[4].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.304 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Suresh Raina\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n"); 
}

void part_6()
{
	printf("Analysis 6(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Rohit Sharma's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct batsman * temp = win_home[5].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home[5].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.440 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Rohit Sharma\n");
	printf("             scores %.2f or more runs\n\n",ll);
	printf("Analysis 6(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Rohit Sharma's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away[5].head;
	while(temp!=NULL)
	{
		sum = sum + temp->runs;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away[5].head;
	while(temp != NULL)
	{
		var = pow(temp->runs - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (runs)        : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.307 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Rohit Sharma\n");
	printf("             scores %.2f or more runs\n\n",ll); 
	printf("=================================================================================================\n\n\n"); 
}

void part_7()
{
	printf("Analysis 7(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Ravichandran Ashwin's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct bowler * temp = win_home1[0].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home1[0].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.341 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Ravichandran Ashwin\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1);
	printf("Analysis 7(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Ravichandran Ashwin's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away1[0].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away1[0].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.337 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Ravichandran Ashwin\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1); 
	printf("=================================================================================================\n\n\n"); 
}

void part_8()
{
	printf("Analysis 8(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Mohit Sharma's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n");
	int sum = 0,count = 0;
	struct bowler * temp = win_away1[1].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_away1[1].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.356 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Mohit Sharma\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1);
	printf("=================================================================================================\n\n\n"); 
}

void part_9()
{
	printf("Analysis 9(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Mohammad Shami's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct bowler * temp = win_home1[2].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home1[2].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.372 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Mohammad Shami\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1);
	printf("Analysis 9(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Mohammad Shami's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away1[2].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away1[2].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.333 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Mohammad Shami\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1); 
	printf("=================================================================================================\n\n\n"); 
}

void part_10()
{
	printf("Analysis 10(a) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning in India based on Umesh Yadav's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	int sum = 0,count = 0;
	struct bowler * temp = win_home1[3].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	float mean = (float)sum/count;
	float var = (float)0;
	temp = win_home1[3].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	float sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	float ll;
	ll = mean - ((1.363 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning in India if Umesh Yadav\n");
	printf("             takes %d or more wickets\n\n",(int)ll);
	printf("Analysis 10(b) -\n\n");
	printf("The 'SUCCESS TIP' for Indian Cricket Team winning outside India based on Umesh Yadav's performance\n\n");
	printf("Method              : One-Sided Parameter Estimation\n");
	printf("Confidence Interval : 90 percent\n\n"); 
	sum = 0,count = 0;
	temp = win_away1[3].head;
	while(temp!=NULL)
	{
		sum = sum + temp->wickets;
		temp = temp->next;
		count++;
	}
	mean = (float)sum/count;
	var = (float)0;
	temp = win_away1[3].head;
	while(temp != NULL)
	{
		var = pow(temp->wickets - mean,2);
		temp = temp->next;
	}
	var = var/(count-1);
	sd = sqrt(var);
	printf("Sample Mean (wickets)     : %.2f\n",mean);
	printf("Sample Variance           : %.2f\n",var);
	printf("Sample Standard Deviation : %.2f\n",sd);
	ll = mean - ((1.328 * sd)/sqrt(count));
	printf("Confidence Interval       : (%.2f , infinity)\n\n",ll);
	printf("Conclusion : There is 90 percent chance of Indian Cricket Team winning outside India if Umesh Yadav\n");
	printf("             takes %d or more wickets\n\n",(int)ll+1); 
	printf("=================================================================================================\n\n\n"); 
}

void part_11()
{
	printf("Analysis 11 -\n\n");
	printf("The probability of Indian Cricket Team winning in India is more than the probability of\n");
	printf("Indian Cricket Team winning outside of India under the captainship of M.S Dhoni\n\n"); 
	printf("Method              : Hypothesis Testing\n");
	printf("p1                  : Proportion of Indian Cricket Team winning in India under the captainship of M.S Dhoni\n");
	printf("p2                  : Proportion of Indian Cricket Team winning outside India under the captainship of M.S Dhoni\n\n");   
	printf("H0                  : p1 - p2 <= 0\n");
	printf("H1                  : p1 - p2 > 0\n"); 
	printf("Significance Level  : 5 percent\n\n");
	int w = 0, n1 = 0, n2 = 0;
	struct batsman * temp = win_home[1].head;
	while(temp!=NULL)
	{
		temp = temp->next;
		w++;
		n1++;
	}
	temp = lose_home[1].head;
	while(temp != NULL)
	{
		n1++;
		temp = temp->next;
	}
	float p1 = (float)w/n1;
	w = 0;
	temp = win_away[1].head;
	while(temp!=NULL)
	{
		temp = temp->next;
		w++;
		n2++;
	}
	temp = lose_away[1].head;
	while(temp != NULL)
	{
		n2++;
		temp = temp->next;
	}
	float p2 = (float)w/n2;
	printf("p1                           : %.2f\n",p1);
	printf("p2                           : %.2f\n",p2);
	printf("n1 (Size of I sample)        : %d\n",n1);
	printf("n2 (Size of II sample)       : %d\n",n2);
	float var1 = p1*(1-p1);
	float var2 = p2*(1-p2);
	float sd1 = sqrt(var1);
	float sd2 = sqrt(var2); 
	printf("I Sample Variance            : %.2f\n",var1);
	printf("II Sample Variance           : %.2f\n",var2);
	printf("I Sample Standard Deviation  : %.2f\n",sd1);
	printf("II Sample Standard Deviation : %.2f\n",sd2);
	printf("Test Statistic               : z - test\n");
	float z;
	z =  (p1-p2)/sqrt((var1/n1)+(var2/n2));
	printf("Test Statistic Value         : %.2f\n",z);
	printf("p - value                    : 0.007\n\n");
	printf("Conclusion : Based on our p - value we can say that due to lack of evidences we reject our NULL HYPOTHESIS.\n");
	printf("             Hence, The probability of Indian Cricket Team winning in India is more than the probability of\n");
	printf("             Indian Cricket Team winning outside of India under the captainship of M.S Dhoni\n\n");               
	printf("=================================================================================================\n"); 
}

int main()
{
	Initialise();
	Read_Batsman_win_home();
	Read_Batsman_win_away();
	Read_Batsman_lose_home();
	Read_Batsman_lose_away();
	Read_Bowler_win_home();
	Read_Bowler_win_away();
	Read_Bowler_lose_home();
	Read_Bowler_lose_away();
	Read_AllRounder();
	printf("\n\n=====================================MATHS BONUS PROJECT=========================================\n\n\n");
	printf("Objective -\n\n");
	printf("To Analyze 'SUCCESS TIPS' For Indian Cricket Team Based On The Performance Of Indian Cricket Team\n");
	printf("and Indian Cricket Team Players In both Home and Away Conditions Against Some Major Cricketing Nations.\n\n");
	printf("Teams -\n\n");
	printf("1. Australia \n2. Sri Lanka \n3. South Africa \n4. Pakistan \n5. New Zealand \n6. England \n7. West Indies \n8. Zimbabwe\n\n"); 
	printf("Made By - \n\n");
	printf("1. Harish Fulara - 2014143\n");
	printf("2. Mohammad Nayeem - 2014147\n\n");
	printf("=================================================================================================\n\n\n");
	part_1();
	part_2();
	part_3();
	part_4();
	part_5();
	part_6();
	part_7();
	part_8();
	part_9();
	part_10();
	part_11();
	return(0);
}
