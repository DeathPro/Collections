def faktor(n):
    i=1
    sonuc=1
    while i <= n:
        sonuc=sonuc*i
        i=i+1
    print(n,"!=",sonuc)

x = input("Bir Sayi Giriniz: ")
x = int(x)
faktor(x)
