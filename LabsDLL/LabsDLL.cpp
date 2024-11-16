#include "pch.h"
#include "LabsDLL.h"

#include <cmath>

using namespace System; // Дописываем объявления пространств имен
using namespace System::Windows::Forms;

namespace LabsDLL {
    double Class1::Vvod(TextBox^ t)
    {
        if (t->Text == "") {
            t->Text = "0";
            return 0;
        }
        else {
            return Convert::ToDouble(t->Text->Replace('.', ','));
        }
    }

    void Class1::Vivod(double x, TextBox^ t)
    {
        t->Text = Convert::ToString(x);
    }

    void Class1::Vivod(double x, Label^ l)
    {
        l->Text = Convert::ToString(x);
    }

    double Class1::Solve1(double a, double b, double x)
    {
        double z = sqrt(a * x * sin(2 * x) + exp(-2 * x) * (x + b));
        return z;
    }

    void Class1::Solve2(double* w, double a, double b, double x)
    {
        *w = pow(cos(pow(x, 3)), 2) - x / sqrt(pow(a, 2) + pow(b, 2));
    }

    void Class1::Solve12(double* z, double* w, double a, double b, double x)
    {
        *z = Class1::Solve1(a, b, x);
        Class1::Solve2(w, a, b, x);
    }

    void Class1::RegenerateDataGrid(int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
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

    void Class1::FillDataGrid(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
        for (int i = 0; i < arraylen; i++) {
            datagrid->Rows[0]->Cells[i]->Value = array[i];
        }
    }

    void Class1::GenerateArray(int* array, int arraylen, int minvalue, int maxvalue) {
        for (int i = 0; i < arraylen; i++) {
            array[i] = minvalue + (std::rand() % (maxvalue - minvalue + 1));
        }
    }

    void Class1::DatagridToArray(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
        for (int i = 0; i < arraylen; i++) {
            array[i] = Convert::ToInt32(datagrid->Rows[0]->Cells[i]->Value);
        }
    }
}