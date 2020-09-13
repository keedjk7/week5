#include<iostream>

using namespace std;

int show(int print){
	if(print==false){
		cout<<"Not Palindrom";
		return false;
	}
	else{
		cout<<"Palindrom";
		return true;	
		
	}
}

int size_array(char input[100]){
	int count=0,s=0;
	while(input[s]!='\0'){
		count++;
		s++;
	}
	return count;
}

void palindrom(){
	char input[100]="\0";
	bool pass=false;
	cout<<"Input : ";
	while(pass!=true){
	      cin>>input;
	      
		  int Size=size_array(input);
	      int i=0,j=Size-1;
	      char *start=&input[i];
	      char *end=&input[j];
	      bool print=true;
	
	      while(j>i){
		    if(*start!=*end){
			   print=false;
			   break;
		    }
		    i++;
		    j--;
		    start=&input[i];
		    end=&input[j];
	    }
	    pass=show(print);
	    cout<<"\nSize of This string = "<<Size<<" Characters\n";
	    if(pass==false){
	    	cout<<"\n\nInput Again :";
		}
		else{
			cout<<"\nEnd This Program";
		}
    }
}

int main(){
	
	palindrom();
	
}
