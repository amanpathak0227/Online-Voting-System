
#include <iostream>
using namespace std;

int bjp=0, congress=0, aap=0, bsp=0;
void electionResult()
{
    int wonByVote;
    if (bjp>congress&&bjp>aap&&bjp>bsp)
    {
        cout<<"\n***************************************";
        cout<<"\n      BJP won the election   \n"<<endl;
        cout<<"    Total vote of BJP : "<<bjp<<endl;
        wonByVote=bjp-congress;
        cout<<"\n   BJP won by "<<wonByVote<<" votes to Congress"<<endl;
        wonByVote=bjp-aap;
        cout<<"   BJP won by "<<wonByVote<<" votes to APP"<<endl;
        wonByVote=bjp-bsp;
        cout<<"   BJP won by "<<wonByVote<<" votes to BSP"<<endl;
        cout<<"**************************************\n";
    }
    else if (congress>aap&&congress>bsp)
    {
        cout<<"\n***************************************";
        cout<<"\n      Congress won the election   \n\n";
        cout<<"\n    Total vote of Congress : "<<congress<<endl;
        wonByVote=congress-bjp;
        cout<<"   Congress won by "<<wonByVote<<" votes to BJP\n";
        wonByVote=congress-aap;
        cout<<"   Congress won by "<<wonByVote<<" votes to AAP\n";
        wonByVote=congress-bsp;
        cout<<"   Congress won by "<<wonByVote<<" votes to BSP\n";
        cout<<"**************************************\n";
    }
    else if (aap>bsp)
    {
        cout<<"\n***************************************";
        cout<<"\n       AAP won the election   \n\n";
        cout<<"    Total vote of AAP : "<<aap<<endl;
        wonByVote=aap-congress;
        cout<<"\n   AAP won by "<<wonByVote<<" votes to Congress\n";
        wonByVote=aap-bjp;
        cout<<"   AAP won by "<<wonByVote<<" votes to BJP\n";
        wonByVote=aap-bsp;
        cout<<"   AAP won by "<<wonByVote<<" votes to BSP\n";
        cout<<"**************************************\n";
    }
    else if(bjp==congress&&bjp==aap&&bjp==bsp)
    {
        cout<<"\n***************************************";
        cout<<"\nEvery party got equal votes\n\n";
        cout<<"Party\t\tVotes\n";
        cout<<"BJP\t\t  "<<bjp<<endl;
        cout<<"Congress      \t  "<<congress<<endl;
        cout<<"APP\t\t  "<<aap<<endl;
        cout<<"BSP\t\t  "<<bsp<<endl;
        cout<<"**************************************\n";
    }
    else
    {
        cout<<"\n***************************************";
        cout<<"\n       BSP won the election   \n\n";
        cout<<"    Total vote of BSP : "<<bsp<<endl;
        wonByVote=bsp-congress;
        cout<<"\n   BSP won by "<<wonByVote<<" votes to Congress\n";
        wonByVote=bsp-aap;
        cout<<"   BSP won by "<<wonByVote<<" votes to AAP\n";
        wonByVote=bsp-bjp;
        cout<<"   BSP won by "<<wonByVote<<" votes to BJP\n";
        cout<<"***************************************\n";
    }
}
void calculateVote(int vote)
{
    switch (vote)
    {
    case 1:
        bjp+=1;
        break;
    case 2:
        congress+=1;
        break;
    case 3:
        aap+=1;
        break;
    case 4:
        bsp+=1;
        break;
    }
}
int main()
{
    int choose;
    
        cout<<"\n         ONLINE VOTING SYSTEM BY AMAN PATHAK AND SUCHI SINGH       \n\n";
        cout<<"\n         WELCOME TO ONLINE VOTING SYSTEM         \n\n";
        cout<<"                         MP election                        \n\n";
        cout<<"*************************************************************\n";
        cout<<"|           1.BJP             |          2.Congress         |\n";
        cout<<"*************************************************************\n";
        cout<<"|           3.APP             |          4.BSP              |\n";
        cout<<"*************************************************************\n\n";
        cout<<"Press 1 to vote BJP\tPress 2 to vote Congress\n";
        cout<<"Press 3 to vote APP\tPress 4 to vote BSP\n";
        cout<<"Press 5 to show election result\n\n";
    do
    {    
        again:
        cout<<"Vote for change: ";
        cin.sync();
        cin>>choose;
        if (choose==5)
        {
            electionResult();
        }else if(choose>=1&&choose<5)
        {
            calculateVote(choose);            
        }else
        {
            cout<<"\nInvalid key pressed try again"<<endl;
            goto again;
        }
    } while (choose != 5);
    cout<<endl;
    return 0;
}
//votingSystem.cpp
//Displaying votingSystem.cpp.
