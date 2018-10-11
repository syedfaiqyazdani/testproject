#include<stdio.h>

#include<unistd.h>
#include<sys/types.h>
#include<string.h>

int main()
{
	int pipeDes[2];
	pipe(pipeDes);  // Create pipe
	int procs=1; //self is first

	int tempIn[1000];
while(fork()==0) //at child and calculates sum of elements of array by each process and return 
{
	++procs;
	
	
	if(procs==2)
	{
		
	int sum = 0;
        
    
        close (pipeDes[1]);  

        for (int i = 0; i < 100; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
        return sum;
    }
    
    if (procs==3)
   {
   	
	 
     int sum = 0;
    
        close (pipeDes[1]);  

        for (int i = 100; i>100 && i < 200; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]); 
    
        return sum;
    }
    
    if(procs==4)
    {
    	
     int sum = 0;
        
        close (pipeDes[1]);  

        for (int i = 200; i>200 && i < 300; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==5)
	{
		
     int sum = 0;
        
    
        close (pipeDes[1]);  

        for (int i = 300; i>300 && i < 400; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==6)
    {
    	
     int sum = 0;
        
    
        close (pipeDes[1]);  

        for (int i = 400; i>400 && i < 500; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==7)
    {
    	

     int sum = 0;
    
    
        close (pipeDes[1]);  

        for (int i = 500; i>500 && i < 600; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    

    }
    
    if(procs==8)
    {
    	
     int sum = 0;
    
    
        close (pipeDes[1]); 

        for (int i = 600; i >600 && i < 700; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==9)
    {
    	
     int sum = 0;
    
    
        close (pipeDes[1]); 

        for (int i = 700; i>700 && i < 800; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==10)
    {
    	
	
     int sum = 0;
        
    
        close (pipeDes[1]); 
        for (int i = 800; i>800 && i < 900; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]);  
    
        return sum;
    }
    
    if(procs==11)
    {
    	
     int sum = 0;
        
    
        close (pipeDes[1]);  

        for (int i = 900; i>900 && i < 1000; i++)
        {
            read (pipeDes[0], &tempIn[i], 4);  // Read each integer and store in array of integers
        
            sum = sum + (int) tempIn[i];  // Add the integers and store in sum
        }

        close (pipeDes[0]); 
    
        return sum;
    }
    

if (procs == 12)
break;

}

return 0;
}
