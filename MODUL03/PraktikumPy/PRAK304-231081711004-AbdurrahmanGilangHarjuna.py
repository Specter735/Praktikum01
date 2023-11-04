a = int(input())

if a == 0:
    print("Nol")
elif 1 <= a < 10:
    print("Satuan")
elif 11 <= a < 20:
    print("Belasan")
elif 20 <= a < 100:
    print("Puluhan")
elif a >= 100:
    print("Anda Menginput Melebihi Limit Bilangan")
