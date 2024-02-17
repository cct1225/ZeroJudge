import time
a=input("Enter the Word: ")
b="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz "
z=[]
for c in range(len(a)):
    for d in range(len(b)):
        if a[c]==b[d]:
            z.append(a[c])
        else:
            print(b[d])
            time.sleep(0.01)
        for x in range(len(z)):
            print(z[x],end=" ")
            
for y in range(15):
    print()
    