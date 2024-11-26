#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace LabsDLL {
    public ref class Class1
    {
    public:
        static double Vvod(TextBox^ t);
        static void Vivod(double x, TextBox^ t);
        static void Vivod(double x, Label^ l);
        static double Solve1(double a, double b, double x);
        static void Solve2(double* w, double a, double b, double x);
        static void Solve12(double* z, double* w, double a, double b, double x);
        static void RegenerateDataGrid(int arraylen, System::Windows::Forms::DataGridView^ datagrid);
        static void output_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid);
        static void GenerateArray(int* array, int arraylen, int minvalue, int maxvalue);
        static void input_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid);
    };
}