#include<stdio.h>
#define CANDIDATE1 "TONY STARK"
#define CANDIDATE2 "STEVE ROGERS"
#define CANDIDATE3 "THOR ODINSON"
#define CANDIDATE4 "LOKI"

int voteCount1=0, voteCount2=0, voteCount3=0, voteCount4=0, notavotes=0;

void castVote(){
int choice;    
printf("\n\n***** Please choose your Candidate *****\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "NOTA");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice){
    case 1:
        voteCount1++;
        break;
    case 2:
        voteCount2++;
        break;
    case 3:
        voteCount3++;
        break;
    case 4:
        voteCount4++;
        break;
    case 5:
        notavotes++;
        break;
    default: printf("\n ERROR : WRONG CHOICE PLEASE RETRY!!!");
             
             getchar();
}
printf("\n***** YOUR VOTE HAS BEEN SUCCESSFULLY CASTED *****");
}

void votesCount(){
printf("\n\n****** VOTE STATISTICS ******");
printf("\n %s - %d ", CANDIDATE1, voteCount1);
printf("\n %s - %d ", CANDIDATE2, voteCount2);
printf("\n %s - %d ", CANDIDATE3, voteCount3);
printf("\n %s - %d ", CANDIDATE4, voteCount4);
printf("\n %s - %d ", "NOTA VOTES", notavotes); 
}

void getLeadingCandidate(){
    printf("\n\n****** LEADING CANDIDATE ******\n\n");
    if(voteCount1>voteCount2 && voteCount1>voteCount3 && voteCount1 >voteCount4)
    printf("[%s]",CANDIDATE1);
    else if (voteCount2>voteCount3 && voteCount2>voteCount4 && voteCount2 >voteCount1)
    printf("[%s]",CANDIDATE2);
    else if(voteCount3>voteCount4 && voteCount3>voteCount2 && voteCount3 >voteCount1)
    printf("[%s]",CANDIDATE3);
    else if(voteCount4>voteCount1 && voteCount4>voteCount2 && voteCount4 >voteCount3)
    printf("[%s]",CANDIDATE4);
    else
    printf("!!!!!!!!! NO WIN SITUATION !!!!!!!!!!");    
    
    
    
}

int main()
{
int i;
int choice;

do{
printf("\n\n**************** WELCOME TO ELECTION VOTING SYSTEM ****************");
printf("\n\n 1. CAST YOUR VOTE");
printf("\n 2. VIEW VOTE STATISTICS");
printf("\n 3. VIEW LEADING CANDIDATE");
printf("\n 4. EXIT");

printf("\n\n PLEASE ENTER YOUR CHOICE : ");
scanf("%d", &choice);

switch(choice)
{
case 1:
    castVote();
    break;
case 2:
    votesCount();
    break;
case 3:
    getLeadingCandidate();
    break;
default: 
    printf("\n ********** THANK YOU ***********");
    break;
}
}while(choice!=0);
getchar();

return 0;
}
