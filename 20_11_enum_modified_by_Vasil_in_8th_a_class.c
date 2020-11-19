#include <stdio.h>                                                                  //�������� ������������ stdio.h

#define CLASS_SIZE 5                                                                //���������� ���������


int main () {                                                                       //��������� main ���������
    enum classes { MATH, BG, PROGRAMMING };                                         //���������� �������� �������� ��,��� � ������������ ��� ���� ����� �������� classes
    int scores[PROGRAMMING + 1][CLASS_SIZE];                                        //��������� �����, � ����� �� �� ���������� ������ �� 5 ������� �� 4 ������ ��������
    int i = -1;                                                                     //����������� i ���� ���� �����, ����� �� � ����� �� -1
    char c;                                                                         //��������� ����� ��� ����� c
    char subject;                                                                   //��������� ����� ��� ����� subject

    // M 4 3 2 5 6 B 54333 P 43546

   while ((i < CLASS_SIZE * (PROGRAMMING + 1)+2) && (c = getchar()) != EOF) {       //������ i � ��-������ �� CLASS_SIZE �� PROGRAMMING, ���� 1 � c �� � ������ ����������, �� �� �������� ���� � while ������������� CURIGIRAL SUM BROJ POVTORENIJA VUV WHILE
        if (c == 'M' || c == 'B' || c == 'P') {                                     //�� �� ������� ���� � if ������������� ��� c e ����� M ��� B ��� P
            subject = c;                                                            //subject � ����� �� c
            i++;                                                                    //i �� ��������� � 1
        }                                                                           //������� if �������������

        if (c > 49 && c <= '6') {                                                   //�� �� ������� ���� � if ������������� ��� c � ��-������ �� 2 (49 � ASCII) � � ��-����� ��� ����� �� 6

            if (subject == 'M') {                                                   //�� �� ������� ���� � if ������������� ��� subject � ����� �� M
                scores[MATH][i] = c - '0';                                          //� ������� ��� ��������� ������� MATH � i �� ������ scores �� �� ����� ��������� �� c ����� 0
            }                                                                       //������� if �������������
            if (subject == 'B') {                                                   //�� �� ������� ���� � if ������������� ��� subject � ����� �� B
                scores[BG][i-6] = c - '0';                                            //� ������� ��� ��������� ������� BG � i �� ������ scores �� �� ����� ��������� �� c ����� 0 CURIGIRAL SUM INDEKS
            }                                                                       //������� if �������������
            if (subject == 'P') {                                                   //�� �� ������� ���� � if ������������� ��� subject � ����� �� P
                scores[PROGRAMMING][i-12] = c - '0';                                   //� ������� ��� ��������� ������� PROGRAMMING � i �� ������ scores �� �� ����� ��������� �� c ����� 0 CURIGIRAL SUM INDEKS
            }                                                                       //������� if �������������

            i++;                                                                    //i �� ��������� � 1
        }                                                                           //������� if �������������((c > 49 && c <= '6'))
    }                                                                               //������� while �������������((i < CLASS_SIZE * PROGRAMMING + 1) && (c = getchar()) != EOF)

    for (i = 0; i < PROGRAMMING + 1; ++i) {                                         //�� �� ��������� ���� ��� for ������������� ������ i � ��-����� �� PROGRAMMING ���� 1 � ����� ��� ������ �� ��������� ������ i �� ��������� � 1
        for(int j = 0; j < CLASS_SIZE; j++) {                                       //�� �� ��������� ���� ��� for ������������� ������ j � ��-����� �� PROGRAMMING ���� 1 � ����� ��� ������ �� ��������� ������ j �� ��������� � 1
            printf("%d ", scores[i][j]);                                            //������� �� ������� �� ������ scores ��� ��������� ��������� i � j
        }                                                                           //������� for �������������((int j = 0; j < CLASS_SIZE; j++))
    }                                                                               //������� for �������������((i = 0; i < PROGRAMMING + 1; ++i))

    return 0;                                                                       //���������� �� ����� � �������� �� main ���������
}