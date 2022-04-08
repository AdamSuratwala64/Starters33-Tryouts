/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s1 = new Scanner(System.in);
		int test = s1.nextInt();
		while(test!=0){
		    int budget = s1.nextInt();
		    int expense = s1.nextInt();
		    int tot_expense = expense*30;
		    
		    if(tot_expense <= budget){
		        System.out.println("YES");
		    }
		    else{
		        System.out.println("NO");
		    }
		    test--;
		}
	}
}
