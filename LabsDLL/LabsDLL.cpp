#include "pch.h"
#include "LabsDLL.h"

#include <cmath>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::Office::Interop;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace LabsDLL {
    // Общие функции для всех лабораторных работ
    double FunctsForAll::Vvod(TextBox^ t)
    {
        if (t->Text == "") {
            t->Text = "0";
            return 0;
        }
        else {
            return Convert::ToDouble(t->Text->Replace('.', ','));
        }
    }

    void FunctsForAll::Vivod(double x, TextBox^ t)
    {
        t->Text = Convert::ToString(x);
    }

    void FunctsForAll::RegenerateDataGrid(int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
        datagrid->Columns->Clear();
        for (int i = 0; i < arraylen; i++) {
            System::Windows::Forms::DataGridViewTextBoxColumn^ newcol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            newcol->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            newcol->HeaderText = Convert::ToString(i);
            newcol->MinimumWidth = 20;
            newcol->Name = L"col" + Convert::ToString(i);
            newcol->Width = 20;
            datagrid->Columns->Add(newcol);
        }
    }

    void FunctsForAll::output_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
        FunctsForAll::RegenerateDataGrid(arraylen, datagrid);
        for (int i = 0; i < arraylen; i++) {
            datagrid->Rows[0]->Cells[i]->Value = array[i];
        }
    }

    void FunctsForAll::GenerateArray(int* array, int arraylen, int minvalue, int maxvalue) {
        for (int i = 0; i < arraylen; i++) {
            array[i] = minvalue + (std::rand() % (maxvalue - minvalue + 1));
        }
    }

    void FunctsForAll::input_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
        for (int i = 0; i < arraylen; i++) {
            array[i] = Convert::ToInt32(datagrid->Rows[0]->Cells[i]->Value);
        }
    }

    void FunctsForAll::add()
    {
        ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
        try {
            k->Create("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\docent\\sourse\\repos\\New_BD_mass.mdb");
            MessageBox::Show("База данных успешно создана");
        }
        catch (System::Runtime::InteropServices::COMException^ situation)
        {
            MessageBox::Show(situation->Message);
        }
        finally
        {
            k = nullptr;
        }
    }

    void FunctsForAll::add_struct()
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\docent\\source\\repos\\New_BD_mass.mdb");
        p->Open();
        auto c = gcnew OleDbCommand("CREATE TABLE [Massivs] ([Номер элемента] counter, [Исходный массив] char(200), [Результирующий массив] char(200)", p);
        try
        {
            c->ExecuteNonQuery(); //Возвращает количество измененных записей
            MessageBox::Show("Структура базы данных записана");
        }
        catch (Exception^ situation)
        {
            MessageBox::Show(situation->Message);
        }
        p->Close();
    }

    void FunctsForAll::add_zap(int* arr, int* rezmas, int len, int j)
    {
        for (int i = 0; i < len; i++)
        {
            auto p = gcnew OleDbConnection("Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\\Users\\docent\\source\\repos\\New_BD_mass.mdb");
            p->Open();
            if (i < j)
            {
                auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + "[Исходный массив],[Результирующий массив]" + ") VALUES(\"" + arr[i] + "','" + rezmas[i] + "\")");
                c->Connection = p;
                c->ExecuteNonQuery(); //Выход из SQL - команды 

            }
            else
            {
                auto c = gcnew OleDbCommand("INSERT INTO [Massivs](" + "[Исходныймассив],[Результирующиймассив]" + ") VALUES (\"" + arr[i] + "\", '')");
                c->Connection = p;
                c->ExecuteNonQuery(); // Выход из  SQL - команды

            }
            p->Close(); //Закрываем подключение к БД  
            MessageBox::Show("В таблицу 'Массивы' добавлена запись");
        }
    }

    void FunctsForAll::ZapisWord(int* mas, int* rezmas, int n, int j)
    {
        auto Wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
        Wrd->Visible = true;
        auto inf = Type::Missing;
        String^ str;

        auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);
        Wrd->Selection->TypeText("Исходный массив");
        Wrd->Selection->TypeParagraph();
        Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
        Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Microsoft::Office::Interop::Word::Table^ tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[2]->Range, 2, n, t1, t2);
        for (int i = 0; i < n; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", mas[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        String^ str2;
        Wrd->Selection->TypeText("Результирующий массив");
        Microsoft::Office::Interop::Word::Table^ tbl2 = Wrd->ActiveDocument->Tables->Add(Wrd->Selection->Range, 2, j, t1, t2);
        for (int i = 0; i < j; i++)
        {
            tbl2->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str2 = String::Format("{0:f0}", rezmas[i]);
            tbl2->Cell(2, i + 1)->Range->InsertAfter(str2);
        }

    }

    void FunctsForAll::ZapisExcel(int* mas, int* rezmas, int n, int j)
    {
        auto XL = gcnew Microsoft::Office::Interop::Excel::Application();
        XL->Visible = true;
        Object^ t = Type::Missing;
        auto Workbook = XL->Workbooks->Add(t);
        String^ str;

        XL->Cells[1, 1] = "Исходный массив";
        for (int i = 0; i < n; i++)
        {
            XL->Cells[2, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", mas[i]);
            XL->Cells[3, i + 1] = str;
        }

        XL->Cells[5, 1] = "Результирующий массив";
        for (int i = 0; i < j; i++)
        {
            XL->Cells[6, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", rezmas[i]);
            XL->Cells[7, i + 1] = str;
        }
    }


    // Функции для 1 лабораторной работы
    double Lab1Functs::Solve1(double a, double b, double x)
    {
        double z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b));
        return z;
    }

    void Lab1Functs::Solve2(double* w, double a, double b, double x)
    {
        *w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
    }

    void Lab1Functs::Solve12(double* z, double* w, double a, double b, double x)
    {
        *z = Lab1Functs::Solve1(a, b, x);
        Lab1Functs::Solve2(w, a, b, x);
    }


    // Функции для пошаговой детализации
    double PoshDetFuncts::Sh(double x) {
        return (exp(x) - exp(-x)) / 2;
    }

    double PoshDetFuncts::Solve(double x) {
        return PoshDetFuncts::Sh(x) + tan(x + 1) - pow(tan(2 + PoshDetFuncts::Sh(x - 1)), 2);
    }


    // Функции для 2 лабораторной работы
    int Lab2Functs::SearchMaxChetInd(int* array, int arraylen) {
        int maxchet = array[0] - 1;
        int maxchetind = -1;
        for (int i = 0; i < arraylen; i++) {
            if (array[i] % 2 == 0 && array[i] > maxchet) {
                maxchet = array[i];
                maxchetind = i;
            }
        }
        return maxchetind;
    }

    int Lab2Functs::SearchNewArrayLen(int* array, int arraylen, int maxchetind) {
        int newarrayulen = 0;
        for (int i = 0; i < arraylen; i++) {
            if (array[i] < maxchetind) {
                newarrayulen++;
            }
        }
        return newarrayulen;
    }

    void Lab2Functs::FillNewArray(int* array, int arraylen, int maxchetind, int* resarray) {
        int newi = 0;
        for (int i = 0; i < arraylen; i++) {
            if (array[i] < maxchetind) {
                resarray[newi] = i;
                newi++;
            }
        }
    }


    // Функции для 3 лабораторной работы
    void Lab3Functs::Solve3(int* array, int arraylen, int insertelement, int insertindex) {

        for (int i = arraylen; i > insertindex; i--) {
            array[i] = array[i - 1];
        }
        array[insertindex] = insertelement;
    }

    bool Lab3Functs::Solve4(int* array, int arraylen) {
        bool monot = true;
        for (int i = 1; i < arraylen; i++) {
            if (array[i] > array[i - 1]) {
                monot = false;
                break;
            }
        }
        return monot;
    }

    void Lab3Functs::Solve7(int* array, int arraylen, int* polind, int* polval) {
        for (int i = 0; i < arraylen; i++) {
            if (array[i] > 0) {
                *polind = i;
                *polval = array[i];
                break;
            }
        }
    }

    void Lab3Functs::Solve8(int* array, int arraylen, int* chetind, int* chetval) {
        for (int i = 0; i < arraylen; i++) {
            if (array[i] % 2 == 0) {
                *chetind = i;
                *chetval = array[i];
                break;
            }
        }
    }

    void Lab3Functs::Solve10(int* array, int arraylen) {
        for (int i = 1; i < arraylen; ++i) {
            int key = array[i];
            int left = 0;
            int right = i - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (array[mid] > key) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            for (int j = i - 1; j >= left; --j) {
                array[j + 1] = array[j];
            }
            array[left] = key;
        }
    }

    void Lab3Functs::Solve11(int* array, int arraylen) {
        for (int i = 0; i < arraylen - 1; ++i) {
            int minIndex = i;

            for (int j = i + 1; j < arraylen; ++j) {
                if (array[j] < array[minIndex]) {
                    minIndex = j;
                }
            }

            if (minIndex != i) {
                int t = array[i];
                array[i] = array[minIndex];
                array[minIndex] = t;
            }
        }
    }

    void Lab3Functs::Solve12(int* array, int arraylen) {
        for (int i = 0; i < arraylen - 1; ++i) {
            for (int j = 0; j < arraylen - i - 1; ++j) {
                if (array[j] > array[j + 1]) {
                    int t = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = t;
                }
            }
        }
    }

    void Lab3Functs::Solve13(int* array, int arraylen) {
        bool flag = true;

        for (int i = 0; i < arraylen - 1 && flag; ++i) {
            flag = false;

            for (int j = 0; j < arraylen - i - 1; ++j) {
                if (array[j] > array[j + 1]) {
                    int t = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = t;
                    flag = true;
                }
            }

            if (!flag) break;
        }
    }
}