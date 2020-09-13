#include<iostream>

using namespace std;

int print(char output1[100],char output2[100],int count1,int count2){
	cout<<"\nunique String 1 : "<<output1;
	cout<<"\nunique String 2 : "<<output2<<"\n";
	if(count1==count2){
		int K=0;
		for(int i=0;i<count1;i++){
			if(output2[i]==output1[i]){
				K++;
			}
		}	
		if(K==count1){
			cout<<"\nSame String\n";
			return true;
		}
		else{
			cout<<"\nNot Same String\n";
			return false;
		}
	}
	else{
		cout<<"\nNot Same String\n";
		return false;
	}
}

int main(){
	bool pass=false;
	while(pass!=true){
	    char input1[100]="\0",input2[100]="\0",output1[100]="\0",output2[100]="\0";
	    cout<<"\nInput String 1 : ";
	    cin>>input1;
	    cout<<"\nInput String 2 : ";
	    cin>>input2;
	    
	    char *p1=&input1[0],*p2=&input2[0],front='\0';
	    bool check=false;
	    int i=0,count1=0,count2=0;
	    
	    while(*p1!='\0'){
	    	if(*p1>='A'&&*p1<='Z'){
	    		*p1+=32;
			}
	    	if(front!=*p1){
	    		output1[i]=*p1;
	    		front=*p1;
	    		count1++;
	    		i++;
			}
			p1++;
		}
	    
		front='\0';
	    i=0;
	    
		while(*p2!='\0'){
			if(*p2>='A'&&*p2<='Z'){
	    		*p2+=32;
			}
	    	if(front!=*p2){
	    		output2[i]=*p2;
	    		front=*p2;
	    		count2++;
	    		i++;
			}
			p2++;
		}
		
		pass=print(output1,output2,count1,count2);
		
		if(pass==false){
			cout<<"\nRun Program Again\n\n";
		}
		else{
			cout<<"\nEnd Program\n\n";
		}
	}
}
