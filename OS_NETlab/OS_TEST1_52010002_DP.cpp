#include<iostream>
using namespace std;
 
int compltedPhilo = 0,i;

class fork{
public:
	int taken;
};
 
class philosp{
public:
	int left;
	int right;
};
 
void goForDinner(fork* ForkAvil,philosp* Philostatus,int philID,int n){ //same like threads concept here cases implemented
	if(Philostatus[philID].left==10 && Philostatus[philID].right==10)
	        cout<<"Philosopher "<<philID+1<<" completed his dinner\n";
	//if already completed dinner
	else if(Philostatus[philID].left==1 && Philostatus[philID].right==1){
	            //if just taken two forks
	            cout<<"Philosopher "<<philID+1<<" completed his dinner\n";
 
            Philostatus[philID].left = Philostatus[philID].right = 10; //remembering that he completed dinner by assigning value 10
            int otherFork = philID-1;
 
            if(otherFork== -1)
                otherFork=(n-1);
 
            ForkAvil[philID].taken = ForkAvil[otherFork].taken = 0; //releasing forks
            cout<<"Philosopher "<<philID+1<<" released fork "<<philID+1<<" and fork "<<otherFork+1<<"\n";
            compltedPhilo++;
        }
        else if(Philostatus[philID].left==1 && Philostatus[philID].right==0){ //left already taken, trying for right fork
                if(philID==(n-1)){
                    if(ForkAvil[philID].taken==0){ //KEY POINT OF THIS PROBLEM, THAT LAST PHILOSOPHER TRYING IN reverse DIRECTION
                        ForkAvil[philID].taken = Philostatus[philID].right = 1;
                        cout<<"Fork "<<philID+1<<" taken by philosopher "<<philID+1<<"\n";
                    }else{
                        cout<<"Philosopher "<<philID+1<<" is waiting for fork "<<philID+1<<"\n";
                    }
                }else{ //except last philosopher case
                    int dupphilID = philID;
                    philID-=1;
 
                    if(philID== -1)
                        philID=(n-1);
 
                    if(ForkAvil[philID].taken == 0){
                        ForkAvil[philID].taken = Philostatus[dupphilID].right = 1;
                        cout<<"Fork "<<philID+1<<" taken by Philosopher "<<dupphilID+1<<"\n";
                    }else{
                        cout<<"Philosopher "<<dupphilID+1<<" is waiting for Fork "<<philID+1<<"\n";
                    }
                }
            }
            else if(Philostatus[philID].left==0){ //nothing taken yet
                    if(philID==(n-1)){
                        if(ForkAvil[philID-1].taken==0){ //KEY POINT OF THIS PROBLEM, THAT LAST PHILOSOPHER TRYING IN reverse DIRECTION
                            ForkAvil[philID-1].taken = Philostatus[philID].left = 1;
                            cout<<"Fork "<<philID<<" taken by philosopher "<<philID+1<<"\n";
                        }else{
                            cout<<"Philosopher "<<philID+1<<" is waiting for fork "<<philID<<"\n";
                        }
                    }else{ //except last philosopher case
                        if(ForkAvil[philID].taken == 0){
                            ForkAvil[philID].taken = Philostatus[philID].left = 1;
                            cout<<"Fork "<<philID+1<<" taken by Philosopher "<<philID+1<<"\n";
                        }else{
                            cout<<"Philosopher "<<philID+1<<" is waiting for Fork "<<philID+1<<"\n";
                        }
                    }
        }else{}
}
 
int main(){
	cout<<"Enter Number of Philosopher : ";
	int n;cin>>n;
	cout<<"\n";
	fork* ForkAvil = new fork[n];
	philosp* Philostatus = new philosp[n];
	for(i=0;i<n;i++)
	        ForkAvil[i].taken=Philostatus[i].left=Philostatus[i].right=0;
	 
	while(compltedPhilo<n){
	/* Observe here carefully, while loop will run until all philosophers complete dinner
	Actually problem of deadlock occur only thy try to take at same time
	This for loop will say that they are trying at same time. And remaining status will print by go for dinner function
	*/
		for(i=0;i<n;i++)
		    goForDinner(ForkAvil,Philostatus,i,n);
		cout<<"\nTill now number of philosophers completed dinner are "<<compltedPhilo<<"\n\n";
	}
	return 0;
}