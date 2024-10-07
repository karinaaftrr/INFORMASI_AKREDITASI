#include<iostream>
using namespace std;

struct Akreditasi {
	string NamaFakultas;
	string NamaJurusan;
	string NamaProdi;
	string Akreditasi;
	string TanggalBerlaku;
    };
Akreditasi akreditasiData[]  = {
		{"FMIPA", "Ilmu Komputer", "D3 Manajemen Informatika", "Baik Sekali", "27-12-2027"},
	    {"FMIPA", "Ilmu Komputer", "S1 Sistem Informasi", "Proses/Prodi Baru", "-"},
	    {"FMIPA", "Ilmu Komputer", "S1 Ilmu Komputer", "A", "25-11-2026"},
	    {"FMIPA", "Ilmu Komputer", "Ilmu Komputer PSDKU Way Kanan", "Proses/Prodi Baru", "-"},
	    {"FMIPA", "Matematika", "S1 Matematika", "B", "14-07-2025"},
	    {"FMIPA", "Fisika", "S1 Fisika", "A", "9-10-2024"},
	    {"FMIPA", "Biologi", "S1 Biologi", "A", "06-02-2026"},
	    {"FMIPA", "Biologi", "S1 Biologi Terapan", "Baik", "21-09-2026"},
	    {"FMIPA", "Kimia", "S1 Kimia", "A", "11-01-2027"},
	    {"FKIP", "Ilmu Pendidikan", "S1 Pendidikan Bimbingan dan Konseling", "B", "26-05-2025"},
	    {"FKIP", "Ilmu Pendidikan", "S1 Pendidikan Teknologi Informasi", "Baik", "22-12-2026"},
	    {"FKIP", "Ilmu Pendidikan", "S1 PGSD-D", "Baik Sekali", "22-08-2027"},
	    {"FKIP", "Ilmu Pendidikan", "S1 PGSD", "Unggul", "31-07-2028"},
	    {"FKIP", "Ilmu Pendidikan", "S1 Pendidikan Jasmani", "Baik Sekali", "15-02-2027"},
	    {"FKIP", "Ilmu Pendidikan", "S1 Pendidikan Jasmani", "Baik Sekali"},                                                                                                                                                                   
	    {"FKIP", "Pendindikan Bahasa dan Seni", "S1 Pendidikan Bahasa Indonesia dan Sastra Indonesia", "Unggul", "12-12-2028"},
	    {"FKIP", "Pendindikan Bahasa dan Seni", "S1 Pendidikan Bahasa Inggris", "Baik Sekali", "20-04-2027"},
	    {"FKIP", "Pendindikan Bahasa dan Seni", "S1 Pendidikan Bahasa Lampung", "Proses/Prodi Baru", "-"},
	    {"FKIP", "Pendindikan Bahasa dan Seni", "S1 Pendidikan Bahasa Perancis", "Baik Sekali", "09-10-2028"},
	    {"FKIP", "Pendindikan Bahasa dan Seni", "S1 Pendidikan Musik", "Baik", "04-05-2026"},
	    {"FKIP", "Pendidikan Bahasa dan Seni", "S1 Pendidikan Tari", "B", "14-04-2025"},
	    {"FKIP", "Pendidikan IPS", "S1 Pendidikan Ekonomi", "B", "09-10-14"},
	    {"FKIP", "Pendidikan IPS", "S1 Pendidikan Geografi", "Unggul", "20-12-2028"},
	    {"FKIP", "Pendidikan IPS", "S1 Pendidikan Sejarah", "B", "11-03-2025"},
	    {"FKIP", "Pendidikan IPS", "S1 PPKN", "B", "17-11-2025"},
	    {"FKIP", "Pendidikan MIPA", "S1 Pendidikan Fisika", "A", "10-11-2025"},
	    {"FKIP", "Pendidikan MIPA", "S1 Pendidikan Kimia", "Baik Sekali", "12-12-2028"},
	    {"FKIP", "Pendidikan MIPA", "S1 Pendidikan Matematika", "B", "11-03-2025"},
	    {"FKIP", "Pendindikan MIPA", "S1 Pendidikan Biologi", "B", "16-08-2025"},
	    {"FT", "Teknik Elektro", "S1 Teknik Elektro", "A", "27-10-2027"},
	    {"FT", "Teknik Elektro", "S1 Teknik Informatika", "Baik Sekali", "29-03-2029"},
	    {"FT", "Teknik Sipil", "D3 Teknik Sipil", "B", "09-10-2024"},
	    {"FT", "Teknik Sipil", "S1 Teknik Sipil", "A", "12-02-2026"},
	    {"FT", "Teknik Sipil", "S1 Teknik Lingkungan", "Proses/Prodi Baru", "-"},
	    {"FT", "Teknik Mesin", "D3 Teknik Mesin", "Baik Sekali", "20-12-2027"},
	    {"FT", "Teknik Mesin", "D4 Terapan Rekayasa Otomotif", "Baik", "15-08-2025"},
	    {"FT", "Teknik Mesin", "S1 Teknik Mesin", "B", "22-09-2025"},
	    {"FT", "Teknik Kimia", "S1 Teknik Kimia", "B", "30-12-2025"},
	    {"FT", "Teknik Geodesi dan Geomatika", "D3 Teknik Survey dan Pemetaan", "Baik Sekali", "20-12-2027"},
        {"FT", "Teknik Geodesi dan Geomatika", "S1 Teknik Geologi", "Baik", "20-12-2025"},
        {"FT", "Teknik Geodesi dan Geomatika", "S1 Teknik Geodesi", "B", "20-12-2024"},
        {"FT", "Teknik Geofisika", "S1 Teknik Geofisika", "Unggul", "20-12-2027"},
        {"FT", "Arsitektur", "S1 Arsitektur", "Baik", "24-04-2029"},
        {"FP", "Agribisnis", "S1 Agribisnis", "Unggul", "19-09-2028"},
        {"FP", "Agribisnis", "S1 Penyuluhan Pertanian", "B", "07-03-2029"},
        {"FP", "Teknik Pertanian", "S1 Teknik Pertanian", "A", "31-12-2025"},
        {"FP", "Agroteknologi", "D3 Perkebunan", "B", "10-09-2024"},
        {"FP", "Agroteknologi", "S1 Agroteknologi", "A", "14-082024"},
        {"FP", "Ilmu Tanah", "S1 Ilmu Tanah", "B", "23-07-2024"},
        {"FP", "Proteksi Tanaman", "S1 Proteksi Tanaman", "B", "31-07-2-24"},
        {"FP", "Agronomi dan Hortikultura", "S1 Agronomi dan Hortikultura", "B", "06-0-2024"},
	    {"FP", "Teknologi Hasil Pertanian", "S1 Teknologi Industri Pertanian", "B", "31-07-2024"},
        {"FP", "Teknologi Hasil Pertanian","S1 Teknologi Hasil Pertanian", "A", "15-10-2024"},
        {"FP", "Peternakan", "S1 Nutrisi dan Teknologi Pakan Ternak", "Baik", "18-05-2026"},
        {"FP", "Peternakan", "S1 Peternakan", "B", "25-09-2024"},
        {"FP", "Kehutanan", "S1 Kehutanan", "A", "10-07-2029"},
        {"FP", "Perikanan dan Ilmu Kelautan", "S1 Sumber Daya Akuatik", "B", "13-08-2024"},
        {"FP", "Perikanan dan Ilmu Kelautan", "S1 Ilmu Kelautan", "B", "23-07-2024"},
        {"FEB", "Akuntansi", "D3 Akuntansi", "A", "14-07-2025"},
        {"FEB", "Akuntansi","D3 Akuntansi PSDKU Way Kanan", "Baik", "07-02-2029"},
        {"FEB", "Akuntansi", "D3 Perpajakan", "A", "30-08-2025"},
        {"FEB", "Akuntansi", "S1 Akuntansi", "A", "14-08-2-24"},
        {"FEB", "Ekonomi Pembangunan", "S1 Ekonomi Pemabangunan", "A", "01-04-2025"},
        {"FEB", "Manajemen", "D3 Keuangan dan Perbankan", "A", "04-09-2025"},
        {"FEB", "Manajemen", "D3 Manajemen Pemasaran", "A", "30-08-2025"},
        {"FEB", "Manajemen", "D3 Perbankan dan Keuangan PSDKU Lampung Tengah", "Baik", "07-02-2029"},
        {"FEB", "Manajemen", "S1 Manajemen", "Unggul", "12-12-2027"},
        {"FEB", "Manajemen", "S1 Bisnis Digital", "Baik", "15-08-2025"},
        {"FISIP", "Hubungan Masyarakat", "D3 Hubungan Masyarakat", "B", "10-09-2024"},
        {"FISIP", "Perpustakaan", "D3 Perpustakaan", "A", "16-07-2024"},
        {"FISIP", "Hubungan Internasional", "S1 Hubungan Internasional", "Baik Sekali", "18-10-2027"},
        {"FISIP", "Ilmu Administrasi", "D3 Administrasi Perkantoran", "B", "03-07-2029"},
        {"FISIP", "Ilmu Administrasi", "S1 Ilmu Administrasi Bisnis", "Unggul", "16-03-2027"},
        {"FISIP", "Ilmu Administrasi", "S1 Ilmu Administrasi Negara", "A", "11-06-2026"},
        {"FISIP", "Ilmu Komunikasi", "S1 Ilmu Komunikasi", "A", "02-12-2026"},
        {"FISIP", "Ilmu Pemerintahan", "S1 Ilmu Pemerintahan", "B", "09-05-2028"},
        {"FISIP", "Sosiologi", "S1 Sosiologi", "A", "20-08-2024"},
        {"FK", "Kedokteran", "S1 Pendidikan Dokter", "A", "27-02-2025"},
        {"FK", "Kedokteran", "S1 Farmasi", "Baik Sekali", "23-01-20228"},
        {"FH", "Ilmu Hukum" "S1 Ilmu Hukum", "A", "11-06-2026"}
   };

void TampilkanFakultas() {
	cout << "Pilih Fakultas: " << endl;
    cout << "1. FMIPA" << endl;
    cout << "2. FKIP" << endl;
    cout << "3. FT" << endl;
    cout << "4. FP" << endl;
    cout << "5. FEB" << endl;
    cout << "6. FISIP" << endl;
    cout << "7. FK" << endl;
    cout << "8. FH" << endl;	
}
void TampilkanJurusan(int fakultas) {
	switch (fakultas) { 
    case 1:
        cout << "Pilih Jurusan di FMIPA: " << endl;
        cout << "1. Ilmu Komputer" << endl;
        cout << "2. Matematika" << endl;
        cout << "3. Fisika" << endl;
        cout << "4. Biologi" << endl;
        cout << "5. Kimia" << endl;
        break;
    case 2:
        cout << "Pilih Jurusan di FKIP: " << endl;
        cout << "1. Ilmu Pendidikan" << endl;
        cout << "2. Pendidikan Bahasa dan Seni" << endl;
        cout << "3. Pendidikan IPS" << endl;
        cout << "4. Pendidikan MIPA" << endl;
        break;
   case 3:
        cout << "Pilih Jurusan di FT: " << endl;
        cout << "1. Teknik Elektro" << endl;
        cout << "2. Teknik Sipil" << endl;
        cout << "3. Teknik Mesin" << endl;
        cout << "4. Teknik Kimia" << endl;
        cout << "5. Teknik Geodesi dan Geomatika" << endl;
        cout << "6. Teknik Geofisika" << endl;
        cout << "7. Arsitektur" << endl;
        break;
   case 4:
        cout << "Pilih Jurusan di FP: " << endl;
        cout << "1. Agribisnis" << endl;
        cout << "2. Teknik Pertanian" << endl;
        cout << "3. Argoteknologi" << endl;
        cout << "4. Ilmu Tanah" << endl;
        cout << "5. Proteksi Tanaman" << endl;
        cout << "6. Agronomi dan Holtikultura" << endl;
        cout << "7. Teknologi Hasil Pertanian" << endl;
        cout << "8. Peternakan" << endl;
        cout << "9. Kehutanan" << endl;
        cout << "10. Perikanan dan Ilmu Kelautan" << endl;
        break;
    case 5:
        cout << "Pilih Jurusan di FEB: " << endl;
        cout << "1. Akuntansi" << endl;
        cout << "2. Ekonomi Pembangunan" << endl;
        cout << "3. Manajemen" << endl;
        break;
    case 6:
        cout << "Pilih Jurusan di FISIP: " << endl;
        cout << "1. Hubungan Masyarakat" << endl;
        cout << "2. Perpustakaan" << endl;
        cout << "3. Hubungan Internasional" << endl;
        cout << "4. Ilmu Administrasi" << endl;
        cout << "5. Ilmu Komunikasi" << endl;
        cout << "6. Ilmu Pemerintahan" << endl;
        cout << "7. Sosiologi" << endl;
        break;
    case 7:
        cout << "Pilih Jurusan di FK: " << endl;
        cout << "1. Kedokteran" << endl;
        break;
    case 8:
        cout << "Pilih Jurusan di FH: " << endl;
        cout << "1. Hukum" << endl;
     }
  }
  
void TampilkanProdi(int jurusan, int fakultas) {
    cout << "Program Studi yang tersedia:\n";
    switch (fakultas) {
        case 1: 
            if (jurusan == 1) { 
                cout << "1. D3 Manajemen Informatika\n";
                cout << "2. S1 Sistem Informasi\n";
                cout << "3. S1 Ilmu Komputer\n";
                cout << "4. Ilmu Komputer PSDKU Way Kanan\n";
            } else if (jurusan == 2) { 
                cout << "1. S1 Matematika\n";
            } else if (jurusan == 3) { 
                cout << "1. S1 Fisika\n";
            } else if (jurusan == 4) { 
                cout << "1. S1 Biologi\n";
                cout << "2. S1 Biologi Terapan\n";
            } else if (jurusan == 5) {
                cout << "1. S1 Kimia\n";
            }
            break;
        case 2: 
            if (jurusan == 1) { 
                cout << "1. S1 Pendidikan Bimbingan dan Konseling\n";
                cout << "2. S1 Pendidikan Teknologi Informasi\n";
                cout << "3. S1 PGSD-D\n";
                cout << "4. S1 PGSD\n";
                cout << "5. S1 Pendidikan Jasmani\n";
            } else if (jurusan == 2) { 
                cout << "1. S1 Pendidikan Bahasa Indonesia dan Sastra Indonesia\n";
                cout << "2. S1 Pendidikan Bahasa Inggris\n";
                cout << "3. S1 Pendidikan Bahasa Lampung\n";
                cout << "4. S1 Pendidikan Bahasa Perancis\n";
                cout << "5. S1 Pendidikan Musik\n";
                cout << "6. S1 Pendidikan Tari\n";
            } else if (jurusan == 3) { 
                cout << "1. S1 Pendidikan Ekonomi\n";
                cout << "2. S1 Pendidikan Geografi\n";
                cout << "3. S1 Pendidikan Sejarah\n";
                cout << "4. S1 PPKN\n";
            } else if (jurusan == 4) { 
                cout << "1. S1 Pendidikan Fisika\n";
                cout << "2. S1 Pendidikan Kimia\n";
                cout << "3. S1 Pendidikan Matematika\n";
                cout << "4. S1 Pendidikan Biologi\n";
            }
            break;
        case 3: 
            if (jurusan == 1) { 
                cout << "1. S1 Teknik Elektro\n";
                cout << "2. S1 Teknik Informatika\n";
            } else if (jurusan == 2) { 
                cout << "1. D3 Teknik Sipil\n";
                cout << "2. S1 Teknik Sipil\n";
                cout << "3. S1 Teknik Lingkungan\n";
            } else if (jurusan == 3) { 
                cout << "1. D3 Teknik Mesin\n";
                cout << "2. D4 Terapan Rekayasa Otomotif\n";
                cout << "3. S1 Teknik Mesin\n";
            } else if (jurusan == 4) { 
                cout << "1. S1 Teknik Kimia\n";
            } else if (jurusan == 5) {
            	cout << "1. D3 Teknik Survey dan Pemetaan\n";
            	cout << "2. S1 Teknik Geologi\n";
            	cout << "3. S1 Teknik Geodise\n";
			}else if (jurusan == 6) { 
                cout << "1. S1 Teknik Geofisika\n";
            }else if (jurusan == 7) { 
                cout << "1. S1 Arsitektur\n";
            }
            break;
        case 4: 
            if (jurusan == 1) { 
                cout << "1. S1 Agribisnis\n";
                cout << "2. S1 Penyuluhan Pertanian\n";
            } else if (jurusan == 2) { 
                cout << "1. S1 Teknik Pertanian\n";  
            } else if (jurusan == 3) { 
                cout << "1. D3 Perkebunan\n";
                cout << "2. S1 Argoteknologi";
            } else if (jurusan == 4) { 
                cout << "1. S1 Ilmu Tanah\n";
            } else if (jurusan == 5) { 
                cout << "1. S1 Proteksi Tanaman\n";
            } else if (jurusan == 6) { 
                cout << "1. S1 Agronomi dan Holtikultura\n";
            } else if (jurusan == 7) { 
                cout << "1. S1 Teknologi Industri Pertanian\n";
                cout << "2. S1 Teknologi Hasil Pertanian\n";
            } else if (jurusan == 8) { 
                cout << "1.S1 Nutrisi dan Teknologi Pakan Ternak\n";
                cout << "2. S1 Peternakan\n";
            } else if (jurusan == 9) { 
                cout << "1. S1 Kehutanan\n";
            } else if (jurusan == 10) { 
                cout << "1. S1 Sumber Daya Akuatik\n";
                cout << "2. S1 Ilmu Kelautan\n";
            }
            break;
        case 5: 
            if (jurusan == 1) { 
                cout << "1. D3 Akuntansi\n";
                cout << "2. D3 Akuntansi PSDKU Way Kanan\n";
                cout << "3. D3 Perpajakan\n";
                cout << "4. S1 Akuntansi\n";
            } else if (jurusan == 2) { 
                cout << "1. S1 Ekonomi Pembangunan\n";
            } else if (jurusan == 3) { 
                cout << "1. D3 Keuangan dan Perbankan\n";
                cout << "2. D3 Manajemen Pemasaran\n";
                cout << "3. S1 Manajemen\n";
                cout << "4. S1 Bisnis Digital\n";  
            }
            break;
        case 6: 
            if (jurusan == 1) { 
                cout << "1. D3 Hubungan Masyarakat\n";
            } else if (jurusan == 2) { 
                cout << "1. D3 Perpustakaan\n";
            } else if (jurusan == 3) { 
                cout << "1. S1 Hubungan Internasional\n";
            } else if (jurusan == 4) { 
                cout << "1. D3 Administrasi Perkantoran\n";
                cout << "2. S1 Ilmu Administrasi Bisnis\n";
                cout << "3. S1 Ilmu Administrasi Negara\n";
            } else if (jurusan == 5) { 
                cout << "1. S1 Ilmu Komunikasi\n";
            } else if (jurusan == 6) { 
                cout << "1. Ilmu Pemerintahan\n";
            } else if (jurusan == 7) { 
                cout << "1. S1 Sosiologi\n";
            }
            break;
        case 7: 
            if (jurusan == 1) { 
                cout << "1. S1 Pendidikan Dokter\n";
                cout << "2. S1 Farmasi\n";
            } 
            break;
        case 8: 
		    if (jurusan == 1) { 
            cout << "1. S1 Ilmu Hukum\n";
            }
            break;
        }
    }
  
void TampilkanAkreditasi(int fakultas, int jurusan, int prodi) {
    int index = 0;
    if (fakultas == 1) {
        if (jurusan == 1) {
            index = prodi - 1; 
        } else if (jurusan == 2) {
            index = 4; 
        } else if (jurusan == 3) {
            index = 5; 
        } else if (jurusan == 4) {
            index = 6 + (prodi -1); 
        } else if (jurusan == 5) {
            index = 8; 
        }
    } else if (fakultas == 2) {
        if (jurusan == 1) {
            index = 9 + (prodi -1);
        } else if (jurusan == 2) {
            index = 15 + (prodi - 1); 
        } else if (jurusan == 3) {
            index = 21 + (prodi - 1);
        } else if (jurusan == 4) {
            index = 25 + (prodi - 1);
        }
    } else if (fakultas == 3) {
        if (jurusan == 1) {
            index = 29 + (prodi -1);
        } else if (jurusan == 2) {
            index = 31 + (prodi - 1); 
        } else if (jurusan == 3) {
            index = 34 + (prodi - 1);
        } else if (jurusan == 4) {
            index = 37;
        } else if (jurusan == 5) {
            index = 38 + (prodi - 1);
        } else if (jurusan == 6) {
            index = 41;
        } else if (jurusan == 7) {
            index = 42;
        }   
    } else if (fakultas == 4) {
        if (jurusan == 1) {
            index = 43 + (prodi -1);
        } else if (jurusan == 2) {
            index = 45; 
        } else if (jurusan == 3) {
            index = 46 + (prodi - 1);
        } else if (jurusan == 4) {
            index = 48;
        } else if (jurusan == 5) {
            index = 49;
        } else if (jurusan == 6) {
            index = 50;
        } else if (jurusan == 7) {
            index = 51 + (prodi - 1);
        } else if (jurusan == 8) {
            index = 53 + (prodi - 1);
        } else if (jurusan == 9) {
            index = 55;
        } else if (jurusan == 10) {
            index = 56 + (prodi - 1);
       } 
   } else if (fakultas == 5) {
        if (jurusan == 1) {
            index = 58 + (prodi -1);
        } else if (jurusan == 2) {
            index = 62; 
        } else if (jurusan == 3) {
            index = 63 + (prodi - 1);
        } 
   } else if (fakultas == 6) {
        if (jurusan == 1) {
            index = 68;
        } else if (jurusan == 2) {
            index = 69; 
        } else if (jurusan == 3) {
            index = 70;
        } else if (jurusan == 4) {
            index = 71 + (prodi - 1);
        } else if (jurusan == 5) {
            index = 74;
        } else if (jurusan == 6) {
            index = 75;
        } else if (jurusan == 7) {
            index = 76;
        } 
   } else if (fakultas == 7) {
        if (jurusan == 1) {
            index = 77 + (prodi - 1);
        } 
   } else if (fakultas == 8) {
        if (jurusan == 1) {
            index = 79;
        }
    }
    
    Akreditasi data = akreditasiData[index];
    cout << "-------------------------\n";
    cout << "Akreditasi Program Studi\n";
    cout << "-------------------------\n";
    cout << "Fakultas       : " << data.NamaFakultas << endl;
    cout << "Jurusan        : " << data.NamaJurusan << endl;
    cout << "Program Studi  : " << data.NamaProdi << endl;
    cout << "Akreditasi     : " << data.Akreditasi << endl;
    cout << "Tanggal Berlaku: " << data.TanggalBerlaku << endl;
}

int main() {
    int fakultas, jurusan, prodi;
    cout << "_______________________________________\n";
    cout << endl;
    cout << "Selamat Datang di Universitas Lampung\n";
    cout << "_______________________________________\n";
    cout << endl;
    
    cout << "Informasi Akreditasi Prodi di UNILA\n";
    cout << endl;
    TampilkanFakultas();
    cout << "Masukkan Kode Fakultas: ";
    cin >> fakultas;
    cout << endl;
    
    TampilkanJurusan(fakultas);
    cout << "Masukkan Kode Jurusan: ";
    cin >> jurusan;
    cout << endl;
    
    TampilkanProdi(jurusan, fakultas);
    cout << "Masukkan Kode Prodi: ";
    cin >> prodi;
    cout << endl;
    
    TampilkanAkreditasi(fakultas, jurusan, prodi);

    return 0;
}
