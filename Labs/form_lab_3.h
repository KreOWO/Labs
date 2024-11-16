#pragma once

namespace Labs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� form_lab_3
	/// </summary>
	public ref class form_lab_3 : public System::Windows::Forms::Form
	{
	public:
		form_lab_3(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~form_lab_3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dg_3start;
	private: System::Windows::Forms::Button^ btn_3insert;
	protected:

	protected:

	protected:




	private: System::Windows::Forms::Button^ btn_3generate;
	private: System::Windows::Forms::TextBox^ tb_3arraylen;





	private: System::Windows::Forms::Label^ lbl_arraylen;
	private: System::Windows::Forms::TextBox^ tb_3element;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dg_3result;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tb_3insertind;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_4generate;
	private: System::Windows::Forms::TextBox^ tb_4arraylen;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btn_4solve;
	private: System::Windows::Forms::DataGridView^ dg_4start;

	private: System::Windows::Forms::TextBox^ tb_4answer;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tb_7resind;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ tb_7generate;
	private: System::Windows::Forms::TextBox^ tb_7arraylen;




	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btn_7solve;
	private: System::Windows::Forms::DataGridView^ dg_7start;





	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ btn_8generate;


	private: System::Windows::Forms::TextBox^ tb_8arraylen;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ btn_8solve;

	private: System::Windows::Forms::DataGridView^ dg_8start;


	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tb_7resval;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tb_8resval;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tb_8resind;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::DataGridView^ dg_10result;
	private: System::Windows::Forms::Button^ btn_10generate;
	private: System::Windows::Forms::TextBox^ tb_10arraylen;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ btn_10sort;



	private: System::Windows::Forms::DataGridView^ dg_10start;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::DataGridView^ dg_11result;

	private: System::Windows::Forms::Button^ btn_11generate;
	private: System::Windows::Forms::TextBox^ tb_11arraylen;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ btn_11sort;
	private: System::Windows::Forms::DataGridView^ dg_11start;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::DataGridView^ dg_13result;

	private: System::Windows::Forms::Button^ btn_13generate;
	private: System::Windows::Forms::TextBox^ tb_13arraylen;


	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Button^ btn_13sort;
	private: System::Windows::Forms::DataGridView^ dg_13start;


	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ dg_12result;

	private: System::Windows::Forms::Button^ btn_12generate;
	private: System::Windows::Forms::TextBox^ tb_12arraylen;


	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Button^ btn_12sort;
	private: System::Windows::Forms::DataGridView^ dg_12start;




















	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dg_3start = (gcnew System::Windows::Forms::DataGridView());
			this->btn_3insert = (gcnew System::Windows::Forms::Button());
			this->btn_3generate = (gcnew System::Windows::Forms::Button());
			this->tb_3arraylen = (gcnew System::Windows::Forms::TextBox());
			this->lbl_arraylen = (gcnew System::Windows::Forms::Label());
			this->tb_3element = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dg_3result = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_3insertind = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_4generate = (gcnew System::Windows::Forms::Button());
			this->tb_4arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_4solve = (gcnew System::Windows::Forms::Button());
			this->dg_4start = (gcnew System::Windows::Forms::DataGridView());
			this->tb_4answer = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tb_7resind = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tb_7generate = (gcnew System::Windows::Forms::Button());
			this->tb_7arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_7solve = (gcnew System::Windows::Forms::Button());
			this->dg_7start = (gcnew System::Windows::Forms::DataGridView());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_8generate = (gcnew System::Windows::Forms::Button());
			this->tb_8arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btn_8solve = (gcnew System::Windows::Forms::Button());
			this->dg_8start = (gcnew System::Windows::Forms::DataGridView());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tb_7resval = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tb_8resval = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tb_8resind = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->dg_10result = (gcnew System::Windows::Forms::DataGridView());
			this->btn_10generate = (gcnew System::Windows::Forms::Button());
			this->tb_10arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->btn_10sort = (gcnew System::Windows::Forms::Button());
			this->dg_10start = (gcnew System::Windows::Forms::DataGridView());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->dg_11result = (gcnew System::Windows::Forms::DataGridView());
			this->btn_11generate = (gcnew System::Windows::Forms::Button());
			this->tb_11arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->btn_11sort = (gcnew System::Windows::Forms::Button());
			this->dg_11start = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dg_13result = (gcnew System::Windows::Forms::DataGridView());
			this->btn_13generate = (gcnew System::Windows::Forms::Button());
			this->tb_13arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->btn_13sort = (gcnew System::Windows::Forms::Button());
			this->dg_13start = (gcnew System::Windows::Forms::DataGridView());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->dg_12result = (gcnew System::Windows::Forms::DataGridView());
			this->btn_12generate = (gcnew System::Windows::Forms::Button());
			this->tb_12arraylen = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->btn_12sort = (gcnew System::Windows::Forms::Button());
			this->dg_12start = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_3start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_3result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_4start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_7start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_8start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_10result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_10start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_11result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_11start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_13result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_13start))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_12result))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_12start))->BeginInit();
			this->SuspendLayout();
			// 
			// dg_3start
			// 
			this->dg_3start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_3start->Location = System::Drawing::Point(23, 65);
			this->dg_3start->Name = L"dg_3start";
			this->dg_3start->Size = System::Drawing::Size(423, 62);
			this->dg_3start->TabIndex = 0;
			// 
			// btn_3insert
			// 
			this->btn_3insert->Enabled = false;
			this->btn_3insert->Location = System::Drawing::Point(810, 35);
			this->btn_3insert->Name = L"btn_3insert";
			this->btn_3insert->Size = System::Drawing::Size(75, 23);
			this->btn_3insert->TabIndex = 0;
			this->btn_3insert->Text = L"��������";
			this->btn_3insert->UseVisualStyleBackColor = true;
			this->btn_3insert->Click += gcnew System::EventHandler(this, &form_lab_3::btn_3add_Click);
			// 
			// btn_3generate
			// 
			this->btn_3generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_3generate->Location = System::Drawing::Point(335, 36);
			this->btn_3generate->Name = L"btn_3generate";
			this->btn_3generate->Size = System::Drawing::Size(111, 23);
			this->btn_3generate->TabIndex = 11;
			this->btn_3generate->Text = L"�������������";
			this->btn_3generate->UseVisualStyleBackColor = false;
			this->btn_3generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_3generate_Click);
			// 
			// tb_3arraylen
			// 
			this->tb_3arraylen->Location = System::Drawing::Point(158, 38);
			this->tb_3arraylen->Name = L"tb_3arraylen";
			this->tb_3arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_3arraylen->TabIndex = 10;
			this->tb_3arraylen->Text = L"10";
			this->tb_3arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_3arraylen_KeyPress);
			// 
			// lbl_arraylen
			// 
			this->lbl_arraylen->AutoSize = true;
			this->lbl_arraylen->Location = System::Drawing::Point(28, 41);
			this->lbl_arraylen->Name = L"lbl_arraylen";
			this->lbl_arraylen->Size = System::Drawing::Size(124, 13);
			this->lbl_arraylen->TabIndex = 9;
			this->lbl_arraylen->Text = L"���������� ���������";
			// 
			// tb_3element
			// 
			this->tb_3element->Location = System::Drawing::Point(660, 12);
			this->tb_3element->Name = L"tb_3element";
			this->tb_3element->Size = System::Drawing::Size(56, 20);
			this->tb_3element->TabIndex = 13;
			this->tb_3element->Text = L"10";
			this->tb_3element->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_3element_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(531, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"����������� �������";
			// 
			// dg_3result
			// 
			this->dg_3result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_3result->Location = System::Drawing::Point(534, 65);
			this->dg_3result->Name = L"dg_3result";
			this->dg_3result->Size = System::Drawing::Size(423, 62);
			this->dg_3result->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(322, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"3. ������� ��������� � ���������� ������";
			// 
			// tb_3insertind
			// 
			this->tb_3insertind->Location = System::Drawing::Point(660, 38);
			this->tb_3insertind->Name = L"tb_3insertind";
			this->tb_3insertind->Size = System::Drawing::Size(56, 20);
			this->tb_3insertind->TabIndex = 17;
			this->tb_3insertind->Text = L"5";
			this->tb_3insertind->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_3insertind_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(531, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"������ �������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(20, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(316, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"4. ����������� �� ������������ (��������)";
			// 
			// btn_4generate
			// 
			this->btn_4generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_4generate->Location = System::Drawing::Point(335, 162);
			this->btn_4generate->Name = L"btn_4generate";
			this->btn_4generate->Size = System::Drawing::Size(111, 23);
			this->btn_4generate->TabIndex = 22;
			this->btn_4generate->Text = L"�������������";
			this->btn_4generate->UseVisualStyleBackColor = false;
			this->btn_4generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_4generate_Click);
			// 
			// tb_4arraylen
			// 
			this->tb_4arraylen->Location = System::Drawing::Point(158, 164);
			this->tb_4arraylen->Name = L"tb_4arraylen";
			this->tb_4arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_4arraylen->TabIndex = 21;
			this->tb_4arraylen->Text = L"10";
			this->tb_4arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_4arraylen_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"���������� ���������";
			// 
			// btn_4solve
			// 
			this->btn_4solve->Enabled = false;
			this->btn_4solve->Location = System::Drawing::Point(742, 161);
			this->btn_4solve->Name = L"btn_4solve";
			this->btn_4solve->Size = System::Drawing::Size(84, 23);
			this->btn_4solve->TabIndex = 18;
			this->btn_4solve->Text = L"����������";
			this->btn_4solve->UseVisualStyleBackColor = true;
			this->btn_4solve->Click += gcnew System::EventHandler(this, &form_lab_3::btn_4solve_Click);
			// 
			// dg_4start
			// 
			this->dg_4start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_4start->Location = System::Drawing::Point(23, 191);
			this->dg_4start->Name = L"dg_4start";
			this->dg_4start->Size = System::Drawing::Size(423, 62);
			this->dg_4start->TabIndex = 19;
			// 
			// tb_4answer
			// 
			this->tb_4answer->BackColor = System::Drawing::SystemColors::Window;
			this->tb_4answer->Enabled = false;
			this->tb_4answer->Location = System::Drawing::Point(716, 212);
			this->tb_4answer->Name = L"tb_4answer";
			this->tb_4answer->Size = System::Drawing::Size(141, 20);
			this->tb_4answer->TabIndex = 25;
			this->tb_4answer->Text = L"����������";
			this->tb_4answer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(580, 215);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"������������ �������:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(424, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 34;
			// 
			// tb_7resind
			// 
			this->tb_7resind->BackColor = System::Drawing::SystemColors::Window;
			this->tb_7resind->Enabled = false;
			this->tb_7resind->Location = System::Drawing::Point(779, 325);
			this->tb_7resind->Name = L"tb_7resind";
			this->tb_7resind->Size = System::Drawing::Size(88, 20);
			this->tb_7resind->TabIndex = 33;
			this->tb_7resind->Text = L"����������";
			this->tb_7resind->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(20, 272);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(374, 13);
			this->label8->TabIndex = 32;
			this->label8->Text = L"7. ���������� ������� �������������� ��������";
			// 
			// tb_7generate
			// 
			this->tb_7generate->BackColor = System::Drawing::SystemColors::Control;
			this->tb_7generate->Location = System::Drawing::Point(335, 290);
			this->tb_7generate->Name = L"tb_7generate";
			this->tb_7generate->Size = System::Drawing::Size(111, 23);
			this->tb_7generate->TabIndex = 31;
			this->tb_7generate->Text = L"�������������";
			this->tb_7generate->UseVisualStyleBackColor = false;
			this->tb_7generate->Click += gcnew System::EventHandler(this, &form_lab_3::tb_7generate_Click);
			// 
			// tb_7arraylen
			// 
			this->tb_7arraylen->Location = System::Drawing::Point(158, 292);
			this->tb_7arraylen->Name = L"tb_7arraylen";
			this->tb_7arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_7arraylen->TabIndex = 30;
			this->tb_7arraylen->Text = L"10";
			this->tb_7arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_7arraylen_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(28, 295);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 13);
			this->label9->TabIndex = 29;
			this->label9->Text = L"���������� ���������";
			// 
			// btn_7solve
			// 
			this->btn_7solve->Enabled = false;
			this->btn_7solve->Location = System::Drawing::Point(742, 292);
			this->btn_7solve->Name = L"btn_7solve";
			this->btn_7solve->Size = System::Drawing::Size(84, 23);
			this->btn_7solve->TabIndex = 27;
			this->btn_7solve->Text = L"����������";
			this->btn_7solve->UseVisualStyleBackColor = true;
			this->btn_7solve->Click += gcnew System::EventHandler(this, &form_lab_3::btn_7solve_Click);
			// 
			// dg_7start
			// 
			this->dg_7start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_7start->Location = System::Drawing::Point(23, 319);
			this->dg_7start->Name = L"dg_7start";
			this->dg_7start->Size = System::Drawing::Size(423, 62);
			this->dg_7start->TabIndex = 28;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(20, 396);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(365, 13);
			this->label11->TabIndex = 40;
			this->label11->Text = L"8. ���������� ������ ������� ������� ��������";
			// 
			// btn_8generate
			// 
			this->btn_8generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_8generate->Location = System::Drawing::Point(335, 417);
			this->btn_8generate->Name = L"btn_8generate";
			this->btn_8generate->Size = System::Drawing::Size(111, 23);
			this->btn_8generate->TabIndex = 39;
			this->btn_8generate->Text = L"�������������";
			this->btn_8generate->UseVisualStyleBackColor = false;
			this->btn_8generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_8generate_Click);
			// 
			// tb_8arraylen
			// 
			this->tb_8arraylen->Location = System::Drawing::Point(158, 419);
			this->tb_8arraylen->Name = L"tb_8arraylen";
			this->tb_8arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_8arraylen->TabIndex = 38;
			this->tb_8arraylen->Text = L"10";
			this->tb_8arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_8arraylen_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(28, 422);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"���������� ���������";
			// 
			// btn_8solve
			// 
			this->btn_8solve->Enabled = false;
			this->btn_8solve->Location = System::Drawing::Point(742, 417);
			this->btn_8solve->Name = L"btn_8solve";
			this->btn_8solve->Size = System::Drawing::Size(84, 23);
			this->btn_8solve->TabIndex = 35;
			this->btn_8solve->Text = L"����������";
			this->btn_8solve->UseVisualStyleBackColor = true;
			this->btn_8solve->Click += gcnew System::EventHandler(this, &form_lab_3::btn_8solve_Click);
			// 
			// dg_8start
			// 
			this->dg_8start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_8start->Location = System::Drawing::Point(23, 446);
			this->dg_8start->Name = L"dg_8start";
			this->dg_8start->Size = System::Drawing::Size(423, 62);
			this->dg_8start->TabIndex = 36;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(533, 328);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(231, 13);
			this->label13->TabIndex = 43;
			this->label13->Text = L"������ ������� �������������� ��������:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(533, 354);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(241, 13);
			this->label14->TabIndex = 45;
			this->label14->Text = L"�������� ������� �������������� ��������:";
			// 
			// tb_7resval
			// 
			this->tb_7resval->BackColor = System::Drawing::SystemColors::Window;
			this->tb_7resval->Enabled = false;
			this->tb_7resval->Location = System::Drawing::Point(779, 351);
			this->tb_7resval->Name = L"tb_7resval";
			this->tb_7resval->Size = System::Drawing::Size(88, 20);
			this->tb_7resval->TabIndex = 44;
			this->tb_7resval->Text = L"����������";
			this->tb_7resval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(533, 482);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(196, 13);
			this->label10->TabIndex = 49;
			this->label10->Text = L"�������� ������� ������� ��������:";
			// 
			// tb_8resval
			// 
			this->tb_8resval->BackColor = System::Drawing::SystemColors::Window;
			this->tb_8resval->Enabled = false;
			this->tb_8resval->Location = System::Drawing::Point(779, 479);
			this->tb_8resval->Name = L"tb_8resval";
			this->tb_8resval->Size = System::Drawing::Size(88, 20);
			this->tb_8resval->TabIndex = 48;
			this->tb_8resval->Text = L"����������";
			this->tb_8resval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(533, 456);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(186, 13);
			this->label15->TabIndex = 47;
			this->label15->Text = L"������ ������� ������� ��������:";
			// 
			// tb_8resind
			// 
			this->tb_8resind->BackColor = System::Drawing::SystemColors::Window;
			this->tb_8resind->Enabled = false;
			this->tb_8resind->Location = System::Drawing::Point(779, 453);
			this->tb_8resind->Name = L"tb_8resind";
			this->tb_8resind->Size = System::Drawing::Size(88, 20);
			this->tb_8resind->TabIndex = 46;
			this->tb_8resind->Text = L"����������";
			this->tb_8resind->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(18, 522);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(276, 13);
			this->label17->TabIndex = 58;
			this->label17->Text = L"10. ���������� ��������� ���������";
			// 
			// dg_10result
			// 
			this->dg_10result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_10result->Location = System::Drawing::Point(534, 571);
			this->dg_10result->Name = L"dg_10result";
			this->dg_10result->Size = System::Drawing::Size(423, 62);
			this->dg_10result->TabIndex = 57;
			// 
			// btn_10generate
			// 
			this->btn_10generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_10generate->Location = System::Drawing::Point(333, 542);
			this->btn_10generate->Name = L"btn_10generate";
			this->btn_10generate->Size = System::Drawing::Size(111, 23);
			this->btn_10generate->TabIndex = 54;
			this->btn_10generate->Text = L"�������������";
			this->btn_10generate->UseVisualStyleBackColor = false;
			this->btn_10generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_10generate_Click);
			// 
			// tb_10arraylen
			// 
			this->tb_10arraylen->Location = System::Drawing::Point(156, 544);
			this->tb_10arraylen->Name = L"tb_10arraylen";
			this->tb_10arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_10arraylen->TabIndex = 53;
			this->tb_10arraylen->Text = L"10";
			this->tb_10arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_10arraylen_KeyPress);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(26, 547);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(124, 13);
			this->label19->TabIndex = 52;
			this->label19->Text = L"���������� ���������";
			// 
			// btn_10sort
			// 
			this->btn_10sort->Enabled = false;
			this->btn_10sort->Location = System::Drawing::Point(536, 542);
			this->btn_10sort->Name = L"btn_10sort";
			this->btn_10sort->Size = System::Drawing::Size(93, 23);
			this->btn_10sort->TabIndex = 50;
			this->btn_10sort->Text = L"�����������";
			this->btn_10sort->UseVisualStyleBackColor = true;
			this->btn_10sort->Click += gcnew System::EventHandler(this, &form_lab_3::vtn_10sort_Click);
			// 
			// dg_10start
			// 
			this->dg_10start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_10start->Location = System::Drawing::Point(21, 571);
			this->dg_10start->Name = L"dg_10start";
			this->dg_10start->Size = System::Drawing::Size(423, 62);
			this->dg_10start->TabIndex = 51;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(20, 647);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(246, 13);
			this->label16->TabIndex = 65;
			this->label16->Text = L"11. ���������� ������� �������";
			// 
			// dg_11result
			// 
			this->dg_11result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_11result->Location = System::Drawing::Point(534, 694);
			this->dg_11result->Name = L"dg_11result";
			this->dg_11result->Size = System::Drawing::Size(423, 62);
			this->dg_11result->TabIndex = 64;
			// 
			// btn_11generate
			// 
			this->btn_11generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_11generate->Location = System::Drawing::Point(335, 665);
			this->btn_11generate->Name = L"btn_11generate";
			this->btn_11generate->Size = System::Drawing::Size(111, 23);
			this->btn_11generate->TabIndex = 63;
			this->btn_11generate->Text = L"�������������";
			this->btn_11generate->UseVisualStyleBackColor = false;
			this->btn_11generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_11generate_Click);
			// 
			// tb_11arraylen
			// 
			this->tb_11arraylen->Location = System::Drawing::Point(158, 667);
			this->tb_11arraylen->Name = L"tb_11arraylen";
			this->tb_11arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_11arraylen->TabIndex = 62;
			this->tb_11arraylen->Text = L"10";
			this->tb_11arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_11arraylen_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(28, 670);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(124, 13);
			this->label18->TabIndex = 61;
			this->label18->Text = L"���������� ���������";
			// 
			// btn_11sort
			// 
			this->btn_11sort->Enabled = false;
			this->btn_11sort->Location = System::Drawing::Point(538, 665);
			this->btn_11sort->Name = L"btn_11sort";
			this->btn_11sort->Size = System::Drawing::Size(93, 23);
			this->btn_11sort->TabIndex = 59;
			this->btn_11sort->Text = L"�����������";
			this->btn_11sort->UseVisualStyleBackColor = true;
			this->btn_11sort->Click += gcnew System::EventHandler(this, &form_lab_3::btn_11sort_Click);
			// 
			// dg_11start
			// 
			this->dg_11start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_11start->Location = System::Drawing::Point(23, 694);
			this->dg_11start->Name = L"dg_11start";
			this->dg_11start->Size = System::Drawing::Size(423, 62);
			this->dg_11start->TabIndex = 60;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(20, 895);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(312, 13);
			this->label20->TabIndex = 79;
			this->label20->Text = L"13. ���������� ������� ������� (2 ������)";
			// 
			// dg_13result
			// 
			this->dg_13result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_13result->Location = System::Drawing::Point(534, 942);
			this->dg_13result->Name = L"dg_13result";
			this->dg_13result->Size = System::Drawing::Size(423, 62);
			this->dg_13result->TabIndex = 78;
			// 
			// btn_13generate
			// 
			this->btn_13generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_13generate->Location = System::Drawing::Point(335, 913);
			this->btn_13generate->Name = L"btn_13generate";
			this->btn_13generate->Size = System::Drawing::Size(111, 23);
			this->btn_13generate->TabIndex = 77;
			this->btn_13generate->Text = L"�������������";
			this->btn_13generate->UseVisualStyleBackColor = false;
			this->btn_13generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_13generate_Click);
			// 
			// tb_13arraylen
			// 
			this->tb_13arraylen->Location = System::Drawing::Point(158, 915);
			this->tb_13arraylen->Name = L"tb_13arraylen";
			this->tb_13arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_13arraylen->TabIndex = 76;
			this->tb_13arraylen->Text = L"10";
			this->tb_13arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_13arraylen_KeyPress);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(28, 918);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(124, 13);
			this->label21->TabIndex = 75;
			this->label21->Text = L"���������� ���������";
			// 
			// btn_13sort
			// 
			this->btn_13sort->Enabled = false;
			this->btn_13sort->Location = System::Drawing::Point(536, 912);
			this->btn_13sort->Name = L"btn_13sort";
			this->btn_13sort->Size = System::Drawing::Size(93, 23);
			this->btn_13sort->TabIndex = 73;
			this->btn_13sort->Text = L"�����������";
			this->btn_13sort->UseVisualStyleBackColor = true;
			this->btn_13sort->Click += gcnew System::EventHandler(this, &form_lab_3::btn_13sort_Click);
			// 
			// dg_13start
			// 
			this->dg_13start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_13start->Location = System::Drawing::Point(23, 942);
			this->dg_13start->Name = L"dg_13start";
			this->dg_13start->Size = System::Drawing::Size(423, 62);
			this->dg_13start->TabIndex = 74;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(18, 770);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(312, 13);
			this->label22->TabIndex = 72;
			this->label22->Text = L"12. ���������� ������� ������� (1 ������)";
			// 
			// dg_12result
			// 
			this->dg_12result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_12result->Location = System::Drawing::Point(534, 819);
			this->dg_12result->Name = L"dg_12result";
			this->dg_12result->Size = System::Drawing::Size(423, 62);
			this->dg_12result->TabIndex = 71;
			// 
			// btn_12generate
			// 
			this->btn_12generate->BackColor = System::Drawing::SystemColors::Control;
			this->btn_12generate->Location = System::Drawing::Point(333, 790);
			this->btn_12generate->Name = L"btn_12generate";
			this->btn_12generate->Size = System::Drawing::Size(111, 23);
			this->btn_12generate->TabIndex = 70;
			this->btn_12generate->Text = L"�������������";
			this->btn_12generate->UseVisualStyleBackColor = false;
			this->btn_12generate->Click += gcnew System::EventHandler(this, &form_lab_3::btn_12generate_Click);
			// 
			// tb_12arraylen
			// 
			this->tb_12arraylen->Location = System::Drawing::Point(156, 792);
			this->tb_12arraylen->Name = L"tb_12arraylen";
			this->tb_12arraylen->Size = System::Drawing::Size(56, 20);
			this->tb_12arraylen->TabIndex = 69;
			this->tb_12arraylen->Text = L"10";
			this->tb_12arraylen->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &form_lab_3::tb_12arraylen_KeyPress);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(26, 795);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(124, 13);
			this->label23->TabIndex = 68;
			this->label23->Text = L"���������� ���������";
			// 
			// btn_12sort
			// 
			this->btn_12sort->Enabled = false;
			this->btn_12sort->Location = System::Drawing::Point(536, 790);
			this->btn_12sort->Name = L"btn_12sort";
			this->btn_12sort->Size = System::Drawing::Size(93, 23);
			this->btn_12sort->TabIndex = 66;
			this->btn_12sort->Text = L"�����������";
			this->btn_12sort->UseVisualStyleBackColor = true;
			this->btn_12sort->Click += gcnew System::EventHandler(this, &form_lab_3::btn_12sort_Click);
			// 
			// dg_12start
			// 
			this->dg_12start->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dg_12start->Location = System::Drawing::Point(21, 819);
			this->dg_12start->Name = L"dg_12start";
			this->dg_12start->Size = System::Drawing::Size(423, 62);
			this->dg_12start->TabIndex = 67;
			// 
			// form_lab_3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(988, 1017);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->dg_13result);
			this->Controls->Add(this->btn_13generate);
			this->Controls->Add(this->tb_13arraylen);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->btn_13sort);
			this->Controls->Add(this->dg_13start);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->dg_12result);
			this->Controls->Add(this->btn_12generate);
			this->Controls->Add(this->tb_12arraylen);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->btn_12sort);
			this->Controls->Add(this->dg_12start);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->dg_11result);
			this->Controls->Add(this->btn_11generate);
			this->Controls->Add(this->tb_11arraylen);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->btn_11sort);
			this->Controls->Add(this->dg_11start);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->dg_10result);
			this->Controls->Add(this->btn_10generate);
			this->Controls->Add(this->tb_10arraylen);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->btn_10sort);
			this->Controls->Add(this->dg_10start);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tb_8resval);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tb_8resind);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->tb_7resval);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btn_8generate);
			this->Controls->Add(this->tb_8arraylen);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->btn_8solve);
			this->Controls->Add(this->dg_8start);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tb_7resind);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tb_7generate);
			this->Controls->Add(this->tb_7arraylen);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btn_7solve);
			this->Controls->Add(this->dg_7start);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tb_4answer);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btn_4generate);
			this->Controls->Add(this->tb_4arraylen);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_4solve);
			this->Controls->Add(this->dg_4start);
			this->Controls->Add(this->tb_3insertind);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dg_3result);
			this->Controls->Add(this->tb_3element);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_3generate);
			this->Controls->Add(this->tb_3arraylen);
			this->Controls->Add(this->lbl_arraylen);
			this->Controls->Add(this->btn_3insert);
			this->Controls->Add(this->dg_3start);
			this->Name = L"form_lab_3";
			this->Text = L"��������� ��������� ���������� ��������";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_3start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_3result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_4start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_7start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_8start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_10result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_10start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_11result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_11start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_13result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_13start))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_12result))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dg_12start))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void generate(int arraylen, System::Windows::Forms::DataGridView^ datagrid) {
		int* array = new int[arraylen];
		LabsDLL::Class1::RegenerateDataGrid(arraylen, datagrid);
		LabsDLL::Class1::GenerateArray(array, arraylen, -100, 100);
		LabsDLL::Class1::FillDataGrid(array, arraylen, datagrid);
	}
	private: System::Void btn_3generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_3arraylen), dg_3start);
		btn_3insert->Enabled = true;
	}
	private: System::Void btn_3add_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_3arraylen);
		int element = LabsDLL::Class1::Vvod(tb_3element);
		int inserdind = LabsDLL::Class1::Vvod(tb_3insertind);
		int* array = new int[arraylen + 1] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_3start);
		for (int i = arraylen; i > inserdind; i--) {
			array[i] = array[i - 1];
		}
		array[inserdind] = element;
		LabsDLL::Class1::RegenerateDataGrid(arraylen + 1, dg_3result);
		LabsDLL::Class1::FillDataGrid(array, arraylen + 1, dg_3result);

	}
	private: System::Void tb_3element_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_3arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_3insertind_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_4generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_4arraylen), dg_4start);
		btn_4solve->Enabled = true;
	}
	private: System::Void btn_4solve_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_4arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_4start);
		bool monot = true;
		for (int i = 1; i < arraylen; i++) {
			if (array[i] > array[i - 1]) {
				monot = false;
				break;
			}
		}
		if (monot) {
			tb_4answer->Text = "������ ���������";
			tb_4answer->BackColor = System::Drawing::Color::PaleGreen;
		}
		else {
			tb_4answer->Text = "������ �� ���������";
			tb_4answer->BackColor = System::Drawing::Color::Pink;
		}
	}
	private: System::Void tb_4arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void tb_7generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_7arraylen), dg_7start);
		btn_7solve->Enabled = true;
	}
	private: System::Void btn_7solve_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_7arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_7start);
		int polval = 0;
		int polind = -1;
		for (int i = 0; i < arraylen; i++) {
			if (array[i] > 0) {
				polind = i;
				polval = array[i];
				break;
			}
		}

		if (polind != -1) {
			LabsDLL::Class1::Vivod(polind, tb_7resind);
			LabsDLL::Class1::Vivod(polval, tb_7resval);
		}
		else {
			tb_7resind->Text = "����������";
			tb_7resval->Text = "����������";
		}

	}
	private: System::Void tb_7arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_8generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_8arraylen), dg_8start);
		btn_8solve->Enabled = true;
	}
	private: System::Void btn_8solve_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_8arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_8start);
		int chetval = 0;
		int chetind = -1;
		for (int i = 0; i < arraylen; i++) {
			if (array[i] % 2 == 0) {
				chetind = i;
				chetval = array[i];
				break;
			}
		}

		if (chetind != -1) {
			LabsDLL::Class1::Vivod(chetind, tb_8resind);
			LabsDLL::Class1::Vivod(chetval, tb_8resval);
		}
		else {
			tb_8resind->Text = "����������";
			tb_8resval->Text = "����������";
		}
	}
	private: System::Void tb_8arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_10generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_10arraylen), dg_10start);
		btn_10sort->Enabled = true;
	}
	private: System::Void vtn_10sort_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_10arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_10start);
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
		LabsDLL::Class1::RegenerateDataGrid(arraylen, dg_10result);
		LabsDLL::Class1::FillDataGrid(array, arraylen, dg_10result);
	}
	private: System::Void tb_10arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_11generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_11arraylen), dg_11start);
		btn_11sort->Enabled = true;
	}
	private: System::Void btn_11sort_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_11arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_11start);

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
		LabsDLL::Class1::RegenerateDataGrid(arraylen, dg_11result);
		LabsDLL::Class1::FillDataGrid(array, arraylen, dg_11result);
	}
	private: System::Void tb_11arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_12generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_12arraylen), dg_12start);
		btn_12sort->Enabled = true;
	}
	private: System::Void btn_12sort_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_12arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_12start);

		for (int i = 0; i < arraylen - 1; ++i) {
			for (int j = 0; j < arraylen - i - 1; ++j) {
				if (array[j] > array[j + 1]) {
					int t = array[j];
					array[j] = array[j + 1];
					array[j + 1] = t;
				}
			}
		}

		LabsDLL::Class1::RegenerateDataGrid(arraylen, dg_12result);
		LabsDLL::Class1::FillDataGrid(array, arraylen, dg_12result);
	}
	private: System::Void tb_12arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void btn_13generate_Click(System::Object^ sender, System::EventArgs^ e) {
		generate(LabsDLL::Class1::Vvod(tb_13arraylen), dg_13start);
		btn_13sort->Enabled = true;
	}
	private: System::Void btn_13sort_Click(System::Object^ sender, System::EventArgs^ e) {
		int arraylen = LabsDLL::Class1::Vvod(tb_13arraylen);
		int* array = new int[arraylen] {};
		LabsDLL::Class1::DatagridToArray(array, arraylen, dg_13start);

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

		LabsDLL::Class1::RegenerateDataGrid(arraylen, dg_13result);
		LabsDLL::Class1::FillDataGrid(array, arraylen, dg_13result);
	}
	private: System::Void tb_13arraylen_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
};
}
