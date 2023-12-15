ruangan = int(input())
zetsu_putih = list(map(int, input().split()))
belah_diri = [zetsu_putih[i] * (i + 1) for i in range(ruangan)]

print(*belah_diri)
