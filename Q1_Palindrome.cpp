
#include <bits/stdc++.h> 
using namespace std; 


bool IsPalindrome(string str) 
{ 
	int l = 0, h = str.length(); 


	for (int i = 0; i < h; i++) 
		str[i] = tolower(str[i]); 

	
	while (l <= h) { 

	
		if (!(str[l] >= 'a' && str[l] <= 'z')) 
			l++; 

	
		else if (!(str[h] >= 'a' && str[h] <= 'z')) 
			h--; 

		
		else if (str[l] == str[h]) 
			l++, h--; 

		
		else
			return false; 
	}
 
	return true; 
} 

bool IsPalindrome(int num) 
{ 
    int rem,sum=0,temp=0;
    while(num>0)    
    {    
    rem=num%10;    
    sum=(sum*10)+rem;    
    num=num/10;    
    }    
    if(temp==sum)
    {    
     return true;   
    }
    else    
    {
     return false;  
    } 
} 


int main() 
{ 
    int n = 567;

	if (IsPalindrome(n)) 
		cout <<n<< " is palindrome."<<endl; 
	else
		cout <<n<< " is not palindrome."<<endl; 
		
	string str2 = "ABA"; 

	if (IsPalindrome(str2)) 
		cout <<str2<< " is palindrome."<<endl; 
	else
		cout <<str2<< " is not palindrome."<<endl; 
		
	//Step on no pets
	string str3 = "Step on no pets"; 

	if (IsPalindrome(str3)) 
		cout <<str3<< " is palindrome."<<endl; 
	else
		cout <<str3<< " is not palindrome."<<endl; 
	return 0; 
} 
