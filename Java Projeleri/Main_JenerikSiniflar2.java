package javaileprogramlama;

//	!!!!! Genel sınıflar sadece referans tipi(Double,Integer,String vb.) verileri taşıyabilirler. İlkel veri tiplerini taşıyamazlar.

class DizilerSinifi<Genel> {// <...> buraya istedigini dersin. genel bir sinif
							// olusturmuş olursun
	public void diziyaz(Genel[] dizi) {
		for (Genel s : dizi) {
			System.out.print(s + " ");
		}
		System.out.println();
	}
}

public class Main_JenerikSiniflar2 {

	public static void main(String[] args) {

		// genel sınıfımıza ait nesnelerimizi referans tiplerine göre oluşturduk
		// bu sayede java bizim yerimize genel yazısı gördügü koda
		// bizim belirledigimiz tipleri gönderecek

		DizilerSinifi<String> stringdiziyaz = new DizilerSinifi<String>();
		DizilerSinifi<Character> characterdiziyaz = new DizilerSinifi<Character>();
		DizilerSinifi<Integer> integerdiziyaz = new DizilerSinifi<Integer>();
		DizilerSinifi<Double> doublediziyaz = new DizilerSinifi<Double>();

		String[] stringdizi = { "abc", "def", "ghi", "jkl", "mno" };
		Character[] charDizi = { 'a', 'b', 'c', 'd', 'e' };
		Integer[] intDizi = { 1, 2, 3, 4, 5, 6 };
		Double[] doubleDizi = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

		// Genel sınıfımızın metodunu dizi nesnelerimizin referans tiplerine
		// bağlı kalarak çağıralım.
		stringdiziyaz.diziyaz(stringdizi);
		characterdiziyaz.diziyaz(charDizi);
		integerdiziyaz.diziyaz(intDizi);
		doublediziyaz.diziyaz(doubleDizi);

	}

}
