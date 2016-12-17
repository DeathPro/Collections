package javaileprogramlama;

//kod olarak en iyisi bu polymorphism de...

public class Main_Polymorphism_1 {

	public static void main(String[] args) {
		Sekiller_Polymorphism sekil = new Sekiller_Polymorphism();
		Kare_Polymorphism kare = new Kare_Polymorphism(4);
		Dikdortgen_Polymorphism dikdortgen = new Dikdortgen_Polymorphism(4, 9);
		//esitligin sag tarafindaki siniflarda tanimlanirlar.
		//esitligin sol tarafindaki siniflarda referans gosterilir.
		
		//burda dikdortgen ve kare nesnesinin solundaki referansi supersinif yapabiliriz.
		//cokbicimlilik olur.
		//Sekiller_Polymorphism kare = new Kare_Polymorphism_1(4);
		//Sekiller_Polymorphism dikdortgen = new Dikdortgen_Polymorphism_1(4, 9);
		//altsinif, ustsinif meselesi olacak....
		//kod kalabaligindan kurtulunur bu polymorphism de... !!!!!
		
		SekillerinAlanlari(sekil);
		SekillerinAlanlari(kare);
		SekillerinAlanlari(dikdortgen);
	}
	//altsinifa ait bir nesne ayni zamanda super sinifa ait bir nesne olabilir
	//Kare_Polymorphism ve Dikdortgen_Polymorphism siniflari Sekiller_Polymorphism 
	//sinifinin bir alt sinifi olarak
	//tanimladigimizdan, kare ve dikdortgen de super sinifin sekil nesnesi gibi
	//davranirlar.Ama calisirken hangi sinifa aitse orada calisirlar.
	public static void SekillerinAlanlari(Sekiller_Polymorphism sekil1) {
		//polymorphism budur iste...
		System.out.println("Sekillerin Alanlari : " + sekil1.alanHesaplama());
	}

}
