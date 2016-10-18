n = 0
toplam = 0
son = 1000000
while n < son:
    toplam = toplam + ((-1)**n)/(2*n + 1)
    n = n + 1
print("Pi Sayisinin Degeri: ",4*toplam)