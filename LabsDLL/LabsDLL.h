#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace Microsoft::Office::Interop;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

namespace LabsDLL {
    public ref class FunctsForAll
    {
    public:
        static double Vvod(TextBox^ t);
        static void Vivod(double x, TextBox^ t);
        static void RegenerateDataGrid(int arraylen, System::Windows::Forms::DataGridView^ datagrid);
        static void output_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid);
        static void GenerateArray(int* array, int arraylen, int minvalue, int maxvalue);
        static void input_mas(int* array, int arraylen, System::Windows::Forms::DataGridView^ datagrid);
        static void add();
        static void add_struct();
        static void add_zap(int* arr, int* rezmas, int len, int j);
        static void ZapisWord(int* mas, int* rezmas, int n, int j);
        static void ZapisExcel(int* mas, int* rezmas, int n, int j);
    };

    public ref class Lab1Functs
    {
    public:
        static double Solve1(double a, double b, double x);
        static void Solve2(double* w, double a, double b, double x);
        static void Solve12(double* z, double* w, double a, double b, double x);
    };

    public ref class PoshDetFuncts
    {
    public:
        static double Sh(double x);
        static double Solve(double x);
    };

    public ref class Lab2Functs
    {
    public:
        static int SearchMaxChetInd(int *array, int arraylen);
        static int SearchNewArrayLen(int* array, int arraylen, int maxchetind);
        static void FillNewArray(int* array, int arraylen, int maxchetind, int* resarray);
    };

    public ref class Lab3Functs
    {
    public:
        static void Solve3(int* array, int arraylen, int insertelement, int insertindex);
        static bool Solve4(int* array, int arraylen);
        static void Solve7(int* array, int arraylen, int* polind, int* polval);
        static void Solve8(int* array, int arraylen, int* chetind, int* chetval);
        static void Solve10(int* array, int arraylen);
        static void Solve11(int* array, int arraylen);
        static void Solve12(int* array, int arraylen);
        static void Solve13(int* array, int arraylen);
    };
}