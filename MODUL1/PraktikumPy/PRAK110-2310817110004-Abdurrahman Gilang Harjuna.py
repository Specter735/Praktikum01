import math
alas = 5
tinggi = 12
sisiA = alas
sisiB = tinggi
sisiC = math.hypot(alas, tinggi)
keliling = sisiA + sisiB + sisiC
luas = 0.5 * alas * tinggi
print("Diketahui:")
print(f"Alas = {alas}cm")
print(f"Tinggi= {tinggi}cm\n")
print("Jawab:")
print(f"Sisi A = {sisiA:.0f} cm")
print(f"Sisi B = {sisiB:.0f} cm")
print(f"Sisi C = {sisiC:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm")
