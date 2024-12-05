#include <stdio.h>
int main() {
    printf("\nMENU\n");
    printf("1. Nhap so phan tu va gia tri cho mang\n");
    printf("2. In ra gia tri cac phan tu trong mang\n");
    printf("3. Dem so luong cac so hoan hao\n");
    printf("4. Tim gia tri nho thu 2\n");
    printf("5. Them mot phan tu\n");
    printf("6. Xoa mot phan tu\n");
    printf("7. Sap xep mang theo thu tu tang dan\n");
    printf("8. Tim kiem gia tri trong mang\n");
    printf("9. Kiem tra xem day so co tang dan khong\n");
    printf("10. Thoat\n");
    int a[1000], n = 0, choice;
    do {
        printf("\nNhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                if (n > 1000 || n <= 0) {
                    printf("So phan tu khong hop le (1 <= n <= 1000).\n");
                    n = 0;
                    break;
                }
                printf("Nhap gia tri cac phan tu:\n");
                for (int i = 0; i < n; i++) {
                    scanf("%d", &a[i]);
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang rong.\n");
                } else {
                    printf("Cac phan tu trong mang la:\n");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                
                break;
            }

            case 4: {
                
                break;
            }

            case 5: {
                if (n >= 1000) {
                    printf("Mang da day, khong the them phan tu moi.\n");
                } else {
                    printf("Nhap gia tri can them: ");
                    int value;
                    scanf("%d", &value);
                    a[n] = value;
                    n++;
                    printf("Them thanh cong.\n");
                }
                break;
            }

            case 6: {
                printf("Nhap vi tri can xoa (index): ");
                int index;
                scanf("%d", &index);
                if (index < 0 || index >= n) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = index; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                    printf("Xoa thanh cong.\n");
                }
                break;
            }

            case 7: {
                for (int i = 0; i < n - 1; i++) {
                    for (int j = i + 1; j < n; j++) {
                        if (a[i] > a[j]) {
                            int temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                printf("Sap xep thanh cong.\n");
                break;
            }

            case 8: {
                printf("Nhap gia tri can tim: ");
                int value, found = 0;
                scanf("%d", &value);
                for (int i = 0; i < n; i++) {
                    if (a[i] == value) {
                        printf("Gia tri %d o vi tri index: %d\n", value, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay gia tri.\n");
                }
                break;
            }

            case 9: {
                int isAscending = 1;
                for (int i = 0; i < n - 1; i++) {
                    if (a[i] > a[i + 1]) {
                        isAscending = 0;
                        break;
                    }
                }
                if (isAscending) {
                    printf("Mang la day tang dan.\n");
                } else {
                    printf("Mang khong phai la day tang dan.\n");
                }
                break;
            }

            case 10: {
                printf("Thoat chuong trinh.\n");
                break;
            }

            default: {
                printf("Lua chon khong hop le. Vui long chon lai.\n");
            }
        }
    } while (choice != 10);
    return 0;
}
