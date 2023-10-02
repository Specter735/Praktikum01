hargaA = 400000
hargaB = 350000
diskonA = 0.13
diskonB = 0.21
hargaDiskonA = hargaA * (1 - diskonA)
hargaDiskonB = hargaB * (1 - diskonB)
print(f"Harga sepatu A adalah {hargaA}")
print(f"Harga sepatu B adalah {hargaB}")
print(f"Sepatu A mendapat diskon {diskonA*100:.0f}% sehingga harganya menjadi {hargaDiskonA:.0f}")
print(f"Sepatu B mendapat diskon {diskonB*100:.0f}% sehingga harganya menjadi {hargaDiskonB:.0f}")
