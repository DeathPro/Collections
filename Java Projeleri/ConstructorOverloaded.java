package javaileprogramlama;

public class ConstructorOverloaded {
	public static int topla(int a,int b)
	{
		return a+b;
	}
	public static double topla(double a,double b)
	{
		return a*b;
	}
	public static void main(String[] args)
	{
		System.out.println(topla(5,7));
		System.out.println(topla(7.7,8.8));
	}
}
