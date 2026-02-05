/******************************************************************************
 * Họ và tên: [Nguyễn Trường Sơn]
 * MSSV:      [PS48636]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    int a[100];
    int sum = 0, count = 0;
    float avg;

    // Nhập số phần tử
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Tính tổng và đếm các số chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            sum += a[i];
            count++;
        }
    }

    // Tính trung bình
    if (count > 0) {
        avg = sum / count;
        printf("Trung binh cong cac so chia het cho 3 la: %.2f\n", avg);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang\n");
    }

    return 0;
}

