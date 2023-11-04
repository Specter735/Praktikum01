detik = int(input("Masukkan detik: "))

jam = detik // 3600
sisadetik = detik % 3600
menit = sisadetik // 60
sisadetik = sisadetik % 60

if jam > 24:
    hari = jam // 24
    jam = jam % 24
    print(f"{hari} hari {jam:02d}:{menit:02d}:{sisadetik:02d}")
else:
    print(f"{jam:02d}:{menit:02d}:{sisadetik:02d}")
