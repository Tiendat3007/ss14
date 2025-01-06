#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[100];
    int soChuCai = 0, soChuSo = 0, soKyTuDacBiet = 0, i = 0;

    printf("hay nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    while (chuoi[i] != '\0') {
        if (isalpha(chuoi[i])) {
            soChuCai++;
        } else if (isdigit(chuoi[i])) {
            soChuSo++;
        } else {
            soKyTuDacBiet++;
        }
        i++;
    }

    printf("chu cai: %d\n", soChuCai);
    printf("chu so: %d\n", soChuSo);
    printf("So ky tu dac biet (tinh ca khoang trang): %d\n", soKyTuDacBiet);

    return 0;
}

