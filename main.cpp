#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int umur,lahir;
    int tahun_sekarang=2018;
    cout << " Assalamualaikum WR.WB " << endl;
    cout << " Kali ini saya akan memvalidasi umur anda"<<endl<<endl;
    cout << " Masukan tahun kelahiran anda : ";cin>>lahir; cout<<endl;
    umur=tahun_sekarang-lahir;
    if (umur<=3){
        cout << " Umur anda adalah : "<< umur << " tahun, Itu berarti anda masih bayi"<<endl;}
    else if(umur<=10){
        cout << " Umur anda adalah : "<< umur <<" tahun, Itu berarti anda masih anak-anak " << endl;}
    else if (umur<=16){
        cout << " Umur anda adalah : "<< umur <<" tahun, itu berarti anda sudah remaja atau sedang masa pubertas "<<endl;}
    else if (umur<=25){
        cout << " Umur anda adalah : "<< umur <<" tahun, itu berarti anda sudah dewasa dan sudah pantas untuk menikah "<<endl;}
    else if (umur<=40){
        cout << " Umur anda adalah : "<< umur <<" tahun, itu berarti anda sudah sangat matang untuk menikah "<< endl;}
    else if (umur<=50){
        cout << " Umur anda adalah : "<< umur <<" tahun, itu berarti umur anda sudah tua " << endl;}
    else if (umur<=100){
        cout << " Umur anda adalah : "<< umur <<" tahun, anda sudah simbah-simbah, tinggal ngumpulin bekal untuk akhirat yang banyak "<< endl;}
         else{
        cout << " Umur anda adalah : "<< umur <<" tahun, tinggal nunggu ajal, bentar lagi datang";}
    getch();
    return 0;









}
