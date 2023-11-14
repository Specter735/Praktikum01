def tambah_kurang(angka1, angka2):
    if angka1 < angka2:
        for i in range(angka1, angka2 + 1):
            print(f"{i} {angka2 - i + angka1}", end="")
            if i < angka2:
                print(" - ", end="")
    else:
        for i in range(angka1, angka2 - 1, -1):
            print(f"{i} {angka2 - i + angka1}", end="")
            if i > angka2:
                print(" - ", end="")

if __name__ == "__main__":
    ke1, ke2 = map(int, input().split())
    tambah_kurang(ke1, ke2)
