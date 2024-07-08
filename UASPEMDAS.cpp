#include <iostream>
using namespace std;
class MasukUniversitas { //! Class Masuk Universitas.
public:
	 // isi access modifier disini
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
	// isi daftar variable yang dibutuhkan di bawah ini
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini
	}
	virtual void namaJalurMasuk() {
		cout << "Nama Jalur Masuk" << endl;
		return; 
	}

	virtual void hitungTotalBiaya() {
		cout << " Hitung Total Biaya " << endl;
		return;
	}

	virtual void tampilkanTotalbiaya() {
		cout << " Menampilakan Total Biaya" << endl;
		return;
	}

	virtual void input() {
		cout << " Input " << endl;
		return;
	}


	// isi disini dengan fungsi virtual yang dibutuhkan
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	 
	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertamma() {
		return uangSemesterPertama;
	}
	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangbangunan() {
		return uangBangunan;
	}
	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}

	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas { //! Class SNBT.
public:

	// isi disini untuk melengkapi class SNBT
};
class SNBP : public MasukUniversitas { //! Class SNBT.
public:
	// isi disini untuk melengkapi class SNBP
};
int main() {
	cout << "\nPilih Jalur Masuk" << endl;
	cout << "1. SNBT : " << endl;
	cout << "2. SNBP : " << endl;
	cout << "3. Keluar " << endl;
	cout << "Pilih" << endl;
	// isi disini untuk fungsi main
	return 0;
}