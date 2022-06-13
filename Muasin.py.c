print ("APK AutoResponder sederhana\n")


print ("tugas uts")
print ("NAMA\t: KHOIRUL MUASIN")
print ("KLS\t: TID")
print ("NPM\t: 2021020100122\n")


print ("berikut adalah hp yang ada di toko ini \n")

print ("produk Vivo dan Oppo \n")
class Vivo():

    def __init__(self, nama, ram, batre):
        self.nama = nama
        self.ram = ram
        self.batre = batre
        
    def cek_spek_hp (self):    
        print("nama \t:", self.nama)
        print ("Ram \t:", self.ram)
        print ("batre \t:", self.batre)

class Oppo(Vivo):
    pass

hp = Vivo("vivof9","6Gb","6000mah \n")
hp2 = Vivo ("Vivoy12", "6Gb","5000mah \n")
hp3 = Oppo ("Oppoa5","3Gb","4000mah \n")
hp4 = Oppo ("Oppoa9","6Gb","5000mah \n")

hp.cek_spek_hp()
hp2.cek_spek_hp()
hp3.cek_spek_hp()
hp4.cek_spek_hp()

hp = input ("pilih merek hp yang di atas :")

if hp == "vivof9":
    print("harganya cuma 1.200.000 aja 🤑\n")
elif hp == "Vivof9":
    print ("harganya cuma 1.200.000 aja 🤑\n")
elif hp == "vivoy12":
    print ("harganya cuma 1.500.000 aja 🤑\n")
elif hp == "Vivoy12":
    print ("harganya cuma 1.500.000 aja 🤑\n")
elif hp == "oppoa5":
    print ("harganya cuma 1.100.000 aja 🤑\n")
elif hp == "Oppoa5":
    print ("harganya cuma 1.100.000 aja 🤑\n")
elif hp == "oppoa9":
    print ("harganya cuma 1.700.000 aja 🤑\n")
elif hp == "Oppoa9":
    print ("harganya cuma 1.700.000 aja 🤑\n")


transaksi = input("Apakah mau di beli..?")

if transaksi == "iya":
    print ("pilih metode pembayaran\n")
    print ("Dana","ovo","rekening\n")
elif transaksi == "tidak":
    print ("terimakasih sudah berkunjung")
elif transaksi == "y":
    print ("pilih metode pembayaran\n")
    print ("Dana","ovo","rekening\n")
elif transaksi == "t":
    print ("terimakasih sudah berkunjung")
    
pembayaran = input ("Mau bayar lewat :")
    
print ("PROGRAM SUDAH BERAKHIR")