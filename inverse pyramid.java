                               SOURCE CODE
                               
    import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner obj = new Scanner(System.in);
	    int k=1,s,i,j;
		System.out.println("enter the number");
		int n = obj.nextInt();
		for(i=1;i<n;i++)
		{
		    k+=2;
		}
		for(i=1;i<=n;i++)
		{
		    for(s=1;s<=i-1;s++)
		     {System.out.print(" ");}
		     for(j=1;j<=i+k-i;j++)
		    { System.out.print("*");}
		    System.out.println();
		     k-=2;
		    
		}
	}
}
                                    OUTPUT
                                    enter the number
enter the number
4
*******
 *****
  ***
   *
