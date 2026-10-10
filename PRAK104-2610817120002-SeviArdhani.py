a = 400000
b = 350000

harga_a_diskon = int(a - (a * 13 / 100))
harga_b_diskon = int(b - (b * 21 / 100))

print(f"Harga sepatu A adalah {a}")
print(f"Harga sepatu B adalah {b}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {harga_a_diskon}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {harga_b_diskon}")