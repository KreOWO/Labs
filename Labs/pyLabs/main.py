from packages.lab_1.main import lab_1_start
from packages.lab_2.main import lab_2_start
from packages.lab_3.main import lab_3_start


def choice_lab():
    while True:
        newchoice = input('Введите номер лабораторной работы (1 - 3); 0 - выход из программы: ')
        if newchoice.isdigit() and 0 <= int(newchoice) <= 3:
            return int(newchoice)
        else:
            print('Неправильный ввод!')


def main():
    while True:
        [exit, lab_1_start, lab_2_start, lab_3_start][choice_lab()]()


if __name__ == '__main__':
    main()
