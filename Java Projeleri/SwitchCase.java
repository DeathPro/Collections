package javaileprogramlama;

public class SwitchCase
{
	public static void main(String[] args)
	{
		int hafta = 5;
		
		switch (hafta) {
		case 1:System.out.println("Pazartesi"); break;
		case 2:System.out.println("Sali"); break;
		case 3:System.out.println("Carsamba"); break;
		case 4:System.out.println("Persembe"); break;
		case 5:System.out.println("Cuma"); break;
		case 6:System.out.println("Cumartesi"); break;
		case 7:System.out.println("Pazar"); break;
		
		
		}
		
		int hafta2 = 4;
		
		System.out.println();
		
		switch (hafta2) {
		case 1:System.out.println("Pazartesi");
		case 2:System.out.println("Sali"); 
		case 3:System.out.println("Carsamba"); 
		case 4:System.out.println("PERSEMBE"); 
		case 5:System.out.println("CUMA"); 
		case 6:System.out.println("CUMARTESI"); 
		case 7:System.out.println("PAZAR"); 
		//Dogru kosuldan sonraki tum kosullar calisir cunku break koymadik nerde durcani bilmiyor.
		
			int hafta3 = 8;
			
		System.out.println();
		
		switch (hafta3) {
		case 1:System.out.println("Pazartesi"); break;
		case 2:System.out.println("Sali"); break;
		case 3:System.out.println("Carsamba"); break;
		case 4:System.out.println("Persembe"); break;
		case 5:System.out.println("Cuma"); break;
		case 6:System.out.println("Cumartesi"); break;
		case 7:System.out.println("Pazar"); break;
		default:System.out.println("Hicbir Kosul Saglanmiyor."); break;
		//Hicbir kosul saglanmiyorsa default calistirilir....
		
		}
		
		
		}
	}
}