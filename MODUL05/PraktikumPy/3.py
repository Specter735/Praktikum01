def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b

bilangan = int(input())
input_bilangan = input().split()
batas = 0
maks = -100000
minim = 100000

while batas < bilangan:
    nilai = int(input_bilangan[batas])

    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(f"{maks} {minim}")

