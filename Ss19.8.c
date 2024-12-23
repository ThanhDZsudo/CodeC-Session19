#include <stdio.h>
typedef struct {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
} SinhVien;
void sapXepSinhVienTheoTen(SinhVien arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i].name, arr[j].name) > 0) {
                SinhVien temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void hienThiDanhSach(SinhVien arr[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone: %s\n", arr[i].id, arr[i].name, arr[i].age, arr[i].phoneNumber);
    }
}
int main() {
    SinhVien sv[3] = {
        {1, "Nguyen Van R", 18, "0124368756"}, 
		{2, "Nguyen Van A", 19, "0987254336"},
		{3, "Nguyen Van E", 20, "0362736206"}
	};
    int soLuong = 3;
    printf("Danh sach sinh vien ban dau la:\n");
    hienThiDanhSach(sv, soLuong);
    sapXepSinhVienTheoTen(sv, soLuong);
    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    hienThiDanhSach(sv, soLuong);
    return 0;
}
