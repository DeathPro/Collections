a = [1,5,6,15,25,66,99,150,23,44,53,55,0]

def ort(a):
    x=len(a)
    i = 0
    toplam = 0
    while i < x:
        toplam = toplam + a[i]
        i = i+1
    return toplam/x
        
    
print(ort(a))