#include <iostream>
#include <string>
using namespace std;

struct soal{
    string pertanyaan;
    string pilihan;
    char jawaban;
    char kunci;
};
bool konfirmasi(char jawaban){
if(jawaban == 'a'||jawaban == 'b'||jawaban == 'c'||jawaban == 'd'||jawaban == 'A'||jawaban == 'B'||jawaban == 'C'||jawaban == 'D'){
  return true;
}else{
  return false;
}
}

int main() {



  int nilai=0
  ;
  int n=10;
  int jawabanbenar=100/n;
  string nim;
  string nama;
  string kelas;

    soal s[10];
    s[0].pertanyaan="1. Permainan sepak bola berasal dari negara...";
    s[0].pilihan="A.Inggris \nB.Italia \nC.India \nD.Indonesia";
    s[0].kunci='A';

    s[1].pertanyaan="2. Teknik dasar permainan sepak bola adalah dengan...";
    s[1].pilihan="A.Digiring lalu dipukul \nB.Direbut dan diambil \nC.Digiring dan ditendang \nD.Diambil lalu ditembak";
    s[1].kunci='C';

    s[2].pertanyaan="3. Pemain depan dalam sepak bola sering disebut dengan...";
    s[2].pilihan="A.Penyerang \nB.Pengumpan \nC.Penghubung \nD.Pengatur";
    s[2].kunci='A';

    s[3].pertanyaan="4. Jika seorang pemain bertahan memberikan umpan kepada penjaga gawang dan diterima dengan kaki untuk menyelamatkan dari ser4567angan lawan maka terjadi tendangan...";
    s[3].pilihan="A.Pinalty \nB.Gawang \nC.Bebas \nD.Langsung";
    s[3].kunci='D';

    s[4].pertanyaan="5. Sistem penyerangan sepak bola yang terdiri atas 4 pemain belakan, 2 pemain tengah, 4 pemain depan.Maka pola yang digunakan adalah";
    s[4].pilihan="A.3-2-4 \nB.4-2-4 \nC.4-2-3 \nD.4-3-3";
    s[4].kunci='B';

    s[5].pertanyaan="6. Permainan softball diciptakan pertama kali oleh seorang berkebangsaan Amerika yang bernama...";
    s[5].pilihan="A.Lewis Robert \nB.H.Fisher \nC.George hancock \nD.Jules rimet";
    s[5].kunci='C';

    s[6].pertanyaan="7. Jumlah pemain dalam permainan softball pada seriap regunya adalah...";
    s[6].pilihan="A.7 pemain \nB.8 pemain \nC.9 pemain \nD.10 pemain";
    s[6].kunci='C';

    s[7].pertanyaan="8. Pemain yang bertugas melambungkan bola kepada pemukul dalam permainan softball dinamakan...";
    s[7].pilihan="A.Pitcher \nB.Catcher \nC.Fielder \nD.Pusher";
    s[7].kunci='A';

    s[8].pertanyaan="9. Setiap pemain softball yang berhasil kembali ke home dengan selamat dan melalui jalan yang benar baik pukulannya sendiri atau karena pukulan orang lain akan mendapatkan nilai..";
    s[8].pilihan="A.1 angka \nB.2 angka \nC.3 angka \nD.4 angka";
    s[8].kunci='A';

    s[9].pertanyaan="10. Teknik memukul bola dengan menggunakan bola dalam permainan softball disebut..";
    s[9].pilihan="A.Slide \nB.Hunting \nC.Strike \nD.Swing";
    s[9].kunci='D';


  cout<<"================= Masukan Data Anda =================="<<endl;
  cout<<"NIM  : ";
    getline(cin,nim);
  cout<<"NAMA : ";
    getline(cin,nama);
  cout<<"KELAS: ";
    getline(cin,kelas);
  cout<<"======================================================"<<endl;
    cout<<endl;

cout<<"                 SELAMAT MENGERJAKAN                  "<<endl<<endl;

    for (int i = 0; i <= 9; i++) {
      cout<<s[i].pertanyaan<<endl;
      cout<<s[i].pilihan<<endl;
        ulang:
      cout<<"Jawab :";
      cin>>s[i].jawaban;

          if (konfirmasi(s[i].jawaban)) {
            if (s[i].jawaban==s[i].kunci ) {
              nilai=nilai+jawabanbenar;
              cout<<"Jawaban benar"<<endl<<endl;
            }else{
              cout<<"Jawaban salah"<<endl<<endl;
            }
          }else{
            cout<<"Masukan Jawaban antara A,B,C dan D"<<endl;
            goto ulang;
          }

}



cout<<"================== Hasil Ujian Mahasiswa ================="<<endl;

cout<<"NIM        : "<<nim<<endl;
cout<<"NAMA       : "<<nama<<endl;
cout<<"KELAS      : "<<kelas<<endl;
cout<<"NILAI      : "<<nilai<<endl;
cout<<"KETERANGAN : ";

if (nilai>85) {
  cout<<"Baik Sekali"<<endl;
}else if(nilai<=85&&nilai>75){
  cout<<"Baik"<<endl;
}else if(nilai<=75&&nilai>60){
  cout<<"Cukup"<<endl;
}else{
  cout<<"Kurang"<<endl;
}
cout<<"==========================================================";
  return 0;
}
