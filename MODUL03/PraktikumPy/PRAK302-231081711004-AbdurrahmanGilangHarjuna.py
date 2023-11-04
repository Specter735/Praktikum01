nilai = int(input("Masukkan nilai: "))

if nilai >= 90:
    hasil = 'A'
elif nilai >= 80:
    hasil = 'B'
elif nilai >= 70:
    hasil = 'C'
elif nilai >= 60:
    hasil = 'D'
else:
    hasil = 'E'

print(f"Nilai {nilai}")
print(f"Grade anda {hasil}")
