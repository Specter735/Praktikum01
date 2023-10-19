r = float(input("Masukkan jari-jari bejana: "))
h = float(input("Masukkan tinggi bejana: "))
pi = 22/7
volume = pi * r**2 * h
luas = 2 * pi * r * (r + h)
keliling = 2 * pi * r

volume = round(volume, 2)
luas = round(luas, 2)
keliling = round(keliling, 2)

print("Volume = {:.2f}".format(volume))
print("Luas = {:.2f}".format(luas))
print("Keliling = {:.2f}".format(keliling))
