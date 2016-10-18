x = input("1 ile 10 arasinda bir sayi giriniz: ")
x = int(x)
i = 1

if x>=1 and x<=10:
    while i<=10:
        print(x,"*",i,"=",x*i)
        i = i + 1
else:
    print("Yanlis Sayi Girdin bb")