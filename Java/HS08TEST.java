import java.util.*;
 
class bank {
 
	public static void main(String[] args) {
		
		
		float x,y;
		Scanner sc = new Scanner(System.in);
		
 
		x =sc.nextFloat();
		y=sc.nextFloat();
	
		if(x%5!=0 || (x+0.50)>y)
			System.out.printf("%f", y);
		else {
			y-=(x+0.50);
			System.out.printf("%f", y);}
	}} 