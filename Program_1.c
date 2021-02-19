//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10];
  printf("Enter String Values \n");
	scanf("%s", str);

  int i=0, count=0;

  for(i=0; i<10; i++){

    if(str[i] == 'a'){
      count++;
    }
    else if(str[i] == 'e'){
      count++;
    }
    else if(str[i] == 'i'){
      count++;
    }
    else if(str[i] == 'o'){
      count++;
    }
    else if(str[i] == 'u'){
      count++;
    }
    if(str[i] == 'A'){
      count++;
    }
    else if(str[i] == 'E'){
      count++;
    }
    else if(str[i] == 'I'){
      count++;
    }
    else if(str[i] == 'O'){
      count++;
    }
    else if(str[i] == 'U'){
      count++;
    }
    
    
    
  }

  if(count>0){
    printf("Total Vowels present in string are %d", count);
  }
  else {

    printf("Vowels are not present\n");
  }



  
	
	return 0;
}
