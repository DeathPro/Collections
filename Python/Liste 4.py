canta = ["kalem","silgi"]

while 1:
    x = input("Canta da ne var ?\n")
    if x in canta:
        print("Canta da",x,"var")
    else:
        canta.append(x)
        break
print(canta)