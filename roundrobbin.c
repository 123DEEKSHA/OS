#include<stdio.h>  
 #include<conio.h>  
void main()   {  
     // initlialize the variable name  
     int i, NOP, sum=0,count=0, y, quant, wt=0, tat=0, at[10], bt[10], temp[10];  
     float avg_wt, avg_tat;  
     printf(&quot; Total number of process in the system: &quot;);  
     scanf(&quot;%d&quot;, &amp;NOP);  
     y = NOP; // Assign the number of process to variable y  
  

// Use for loop to enter the details of the process like Arrival time and the Burst Time 
 
 for(i=0; i&lt;NOP; i++)  
{  
printf(&quot;\n Enter the Arrival and Burst time of the Process[%d]\n&quot;, i+1);  
 printf(&quot; Arrival time is: \t&quot;);  // Accept arrival time  
 scanf(&quot;%d&quot;, &amp;at[i]);  
 printf(&quot; \nBurst time is: \t&quot;); // Accept the Burst time  

 scanf(&quot;%d&quot;, &amp;bt[i]);  
 temp[i] = bt[i]; // store the burst time in temp array  
 }  
 // Accept the Time qunat  
 printf(&quot;Enter the Time Quantum for the process: \t&quot;);  
 scanf(&quot;%d&quot;, &amp;quant);  
 // Display the process No, burst time, Turn Around Time and the waiting time  
 printf(&quot;\n Process No \t\t Burst Time \t\t TAT \t\t Waiting Time &quot;);  
for(sum=0, i = 0; y!=0; )  
{  
f(temp[i] &lt;= quant &amp;&amp; temp[i] &gt; 0) // define the conditions   
 {  
     sum = sum + temp[i];  
    temp[i] = 0;  
    count=1;  
    }     
     else if(temp[i] &gt; 0)  
    {  
         temp[i] = temp[i] - quant;  
         sum = sum + quant;    
     }  
     if(temp[i]==0 &amp;&amp; count==1)      {  
         y--; //decrement the process no.  
         printf(&quot;\nProcess No[%d] \t\t %d\t\t\t\t %d\t\t\t %d&quot;, i+1, bt[i], sum-at[i], sum-at[i]-bt[i]);  
         wt = wt+sum-at[i]-bt[i];  
         tat = tat+sum-at[i];  
         count =0;     
     }  
     if(i==NOP-1)  
     {  
         i=0;  
    }  
     else if(at[i+1]&lt;=sum)  
    {          i++;  

    }      else  
    {  
        i=0;  
     }  
 }  
 // represents the average waiting time and Turn Around time  
 avg_wt = wt * 1.0/NOP;  
 avg_tat = tat * 1.0/NOP;  
 printf(&quot;\n Average Turn Around Time: \t%f&quot;, avg_wt);  
 printf(&quot;\n Average Waiting Time: \t%f&quot;, avg_tat);  
 getch();  
 }

/*output:
Total number of process in the system: 5

 Enter the Arrival and Burst time of the Process[1]
 Arrival time is:       0
 
Burst time is:  5

 Enter the Arrival and Burst time of the Process[2]
 Arrival time is:       1
 
Burst time is:  3

 Enter the Arrival and Burst time of the Process[3]
 Arrival time is:       2
 
Burst time is:  1

 Enter the Arrival and Burst time of the Process[4]
 Arrival time is:       3
 
Burst time is:  2

 Enter the Arrival and Burst time of the Process[5]
 Arrival time is:       4
 
Burst time is:  3
Enter the Time Quantum for the process:         2

 Process No              Burst Time              TAT             Waiting Time
Process No[3]            1                               3                       2
Process No[4]            2                               4                       2
Process No[2]            3                               11                      8
Process No[5]            3                               9                       6
Process No[1]            5                               14                      9
 Average Turn Around Time:      5.400000
 Average Waiting Time:  8.200000
