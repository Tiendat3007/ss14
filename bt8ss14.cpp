#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int i = 0;
    int vietHoa = 1;
    printf("hay nhap chuoi can viet hoa caca chu cais dau: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    while (chuoi[i] != '\0') {
        if (vietHoa && chuoi[i] >= 'a' && chuoi[i] <= 'z') {
            chuoi[i] = chuoi[i] - ('a' - 'A');
            vietHoa = 0;
        } else if (chuoi[i] == ' ' ||chuoi[i] == '\n') {
            vietHoa = 1;
        } else {
            vietHoa = 0;
        }
        i++;
    }

    printf("chuoi sau khi viet hoa cac chu cai dau: %s", chuoi);

    return 0;
}

