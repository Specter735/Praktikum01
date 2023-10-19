import math

tinggi = float(input("Sisi A = "))
samping = float(input("Sisi B = "))
alas = math.sqrt(samping ** 2 - tinggi ** 2)

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {alas + tinggi + samping:.0f} cm")
print(f"Luas = {0.5 * alas * tinggi:.0f} cm^2")