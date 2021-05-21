#pragma once
#define _USE_MATH_DEFINES
#include<cmath>
#include<vector>
double alpha;
std::vector<double> A(14);
std::vector<double> B(14);

namespace numericalintegration {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();
			DrawGraph();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1239, 652);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1231, 619);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задача 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(107, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 45);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(194, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(135, 26);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"100";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 25);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Число разбиений";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(311, 221);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 25);
			this->label9->TabIndex = 13;
			this->label9->Text = L"]";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(184, 221);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 25);
			this->label8->TabIndex = 12;
			this->label8->Text = L";";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(65, 220);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 25);
			this->label7->TabIndex = 11;
			this->label7->Text = L"[";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(38, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 32);
			this->label6->TabIndex = 10;
			this->label6->Text = L"∈";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 103);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 25);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Метод";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"прямоугольников", L"трапеций", L"Симпсона" });
			this->comboBox2->Location = System::Drawing::Point(117, 104);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(212, 28);
			this->comboBox2->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 26);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"2";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 221);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(95, 26);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(14, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"X";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Функция";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"sin(x)cos(2x)", L"sin(x)cos(2x) + cos(10x)",
					L"sin(x)cos(2x) + cos(100x)"
			});
			this->comboBox1->Location = System::Drawing::Point(117, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(212, 28);
			this->comboBox1->TabIndex = 1;
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(457, 27);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(675, 482);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl2);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->comboBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1231, 619);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задача 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl2->Location = System::Drawing::Point(457, 27);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(675, 491);
			this->tabControl2->TabIndex = 24;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zedGraphControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(667, 458);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"График функции g(x)";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(0, 1);
			this->zedGraphControl2->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(662, 447);
			this->zedGraphControl2->TabIndex = 23;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->zedGraphControl3);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(667, 458);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"График функции трудоемкости T(x)";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(0, 1);
			this->zedGraphControl3->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(662, 447);
			this->zedGraphControl3->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(82, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 45);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Построить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(194, 146);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(135, 26);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"0,01";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(6, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(100, 25);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Точность";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(194, 85);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(135, 26);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"100";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(172, 25);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Число разбиений";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(6, 23);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 25);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Метод";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"прямоугольников", L"трапеций", L"Симпсона" });
			this->comboBox3->Location = System::Drawing::Point(117, 24);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(212, 28);
			this->comboBox3->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1239, 654);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Численное интегрирование";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}

private:
	char number_function;
	double func(double _x) {
		if (number_function == 1) {
			return sin(_x) * cos(2 * _x);
		}

		if (number_function == 2) {
			return sin(_x) * cos(2 * _x) + cos(10*_x);
		}

		if (number_function == 3) {
			return sin(_x) * cos(2 * _x) + cos(100 * _x);
		}

	}
	double true_value(double a, double b) {
		if (number_function == 1) {
			return ((3*cos(b) - cos(3*b))/6 - (3 * cos(a) - cos(3 * a)) / 6);
		}

		if (number_function == 2) {
			return ((3*sin(10*b)+15*cos(b)-5*cos(3*b))/30 - 
				(3 * sin(10 * a) + 15 * cos(a) - 5 * cos(3 * a)) / 30);
		}

		if (number_function == 3) {
			return ((sin(100 * b) / 100) + (cos(b) / 2) - (cos(3 * b) / 6) - 
				((sin(100 * a) / 100) + (cos(a) / 2) - (cos(3 * a) / 6)));
		}
	}
	double Method_Integration(double a, double b, int N, String^ method) {
		//  Шаг
		double h = (b - a) / N;

		double curr_x = a;
		double I = 0;
		if (method == "прямоугольников") {
			for (int i = 0; i < N; i++) {
				I += func((curr_x + (curr_x + h)) / 2) * h;
				curr_x += h;
			}
		}

		if (method == "трапеций") {
			for (int i = 0; i < N; i++) {
				I += (func(curr_x) + func(curr_x + h)) * h / 2;
				curr_x += h;
			}
		}

		if (method == "Симпсона") {
			for (int i = 0; i < N; i++) {
				I += (func(curr_x) + 4 * func(curr_x + h / 2) + func(curr_x + h)) * h / 6;
				curr_x += h;
			}
		}

		return I;
	}

	double adaptive_quadrature(double a, double b, int N, double eps, String^ method) {
		double I = Method_Integration(a, b, N, method);

		double I1 = Method_Integration(a, (a+b)/2, N, method);
		double I2 = Method_Integration((a + b) / 2, b, N, method);

		if (abs(I1 + I2 - I) < eps)
			return I;
		else {
			double Integral = adaptive_quadrature(a, (a + b) / 2, N, eps / 2, method) +
				adaptive_quadrature((a + b) / 2, b, N, eps / 2, method);
			return Integral;
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//  Границы интегрирования
	double a = Convert::ToDouble(textBox1->Text);
	double b = Convert::ToDouble(textBox2->Text);

	//  Число разбиений
	int N = Convert::ToInt32(textBox3->Text);

	//  Подынтегральная функция
	String^ work_function = Convert::ToString(comboBox1->Text);

	//  Метод расчета интеграла
	String^ method = Convert::ToString(comboBox2->Text);

	//  Значение интеграла
	double I = 0;

	//  Выбор функции
	if (work_function == "sin(x)cos(2x)") {
		number_function = 1;
	}

	if (work_function == "sin(x)cos(2x) + cos(10x)") {
		number_function = 2;
	}

	if (work_function == "sin(x)cos(2x) + cos(100x)") {
		number_function = 3;
	}

	double eps = 0.01;

	I = Method_Integration(a, b, N, method);
	//I = adaptive_quadrature(a, b, N, eps, method);

	//  Построение графика интегрируемой функции
	double x_min = a;
	double x_max = a;
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

	//  Для точной верхней и нижней границы

	for (double i = a; i <= b; i += (b-a)/1000) {
		f1_list->Add(i, func(i));
		if (func(x_max) < func(i)) {
			x_max = i;
		}
		if (func(x_min) > func(i)) {
			x_min = i;
		}
	}



	if (method != "") {

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = a - 1;
		panel->XAxis->Scale->Max = b + 1;

		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = func(x_min) - 1;
		panel->YAxis->Scale->Max = func(x_max) + 1;

		LineItem Curve1 = panel->AddCurve("График функции", f1_list, Color::Red, SymbolType::None);
		
		//  Обновляем оси
		zedGraphControl1->AxisChange();

		// Обновляем график
		zedGraphControl1->Invalidate();

		System::Windows::Forms::MessageBox::Show(
			" Интеграл от фунции " + Convert::ToString(work_function) + 
			"\n \n на отрезке от " + Convert::ToString(a) + " до " + Convert::ToString(b) +
			"\n\n вычисленный методом " + Convert::ToString(method) +
			"\n\n при числе разбиений равном " + Convert::ToString(N) +
			"\n\n равен " + Convert::ToString(I) +
			"\n\n Истинное значение интеграла равно " + Convert::ToString(true_value(a, b)) + 
			"\n\n Погрешность интегрирования равна " + Convert::ToString(abs(true_value(a, b)- I)),
			"Выходные данные",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1);
	}

}

private:
	void Random(double& _alpha, std::vector<double>& A, std::vector<double>& B) {
		_alpha =  double(rand()) / RAND_MAX;

		for (int i = 0; i < A.size(); i++) {
			A[i] = double(rand()) / RAND_MAX * (2) - 1;
		}

		for (int i = 0; i < B.size(); i++) {
			B[i] = double(rand()) / RAND_MAX * (2) - 1;
		}
	}
	double Adaptive_Quadrature(double a, double b, double eps, double _x, String^ method) {
		count++;
		double I = method_integration(a, b, _x, method);

		double I1 = method_integration(a, (a + b) / 2, _x, method);
		double I2 = method_integration((a + b) / 2, b, _x, method);

		if (abs(I1 + I2 - I) < eps)
			return I;
		else {
			double Integral = Adaptive_Quadrature(a, (a + b) / 2, eps / 2, _x, method) +
				Adaptive_Quadrature((a + b) / 2, b, eps / 2, _x, method);
			return Integral;
		}
	}

	double func_G(double _t, double x) {
		double res = 0;
		for (int i = 0; i < 14; i++) {
			res += A[i] * sin(2 * M_PI * i * (alpha - x) * _t) + B[i] * cos(2 * M_PI * i * (alpha - x) * _t);
		}
		return res;
	}
	//  Не составная формула
	double method_integration(double a, double b, double x, String^ method) {
		//  Шаг
		//double h = (b - a) / 2;

		//double curr_x = a;
		double I;
		if (method == "прямоугольников") {
			I = func_G((a + b) / 2, x) * (b - a);
		}

		if (method == "трапеций") {
			I = (func_G(a, x) + func_G(b, x)) * (b - a) / 2;
		}

		if (method == "Симпсона") {
			I = (func_G(a, x) + 4 * func_G((a + b) / 2, x) +
				func_G(b, x)) * (b - a) / 6;
		}

		return I;
	}
	int count = 0;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//  Метод расчета интеграла
	String^ method = Convert::ToString(comboBox3->Text);

	//  Число разбиений
	int N = Convert::ToInt32(textBox4->Text);

	//  Точность
	double eps = Convert::ToDouble(textBox5->Text);

	double min = 0;
	double max = 0;

	int max_T = 0;

	Random(alpha, A, B);
	GraphPane^ panel = zedGraphControl2->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

	GraphPane^ panel2 = zedGraphControl3->GraphPane;
	panel2->CurveList->Clear();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	if (method != "") {
		double p = 1.0 / (N);
		//  Интегрировать снова для каждого значения Х
		for (double x = 0; x <= 1; x = x + p) {
			count = 0;
			double value = Adaptive_Quadrature(-M_PI / 2, M_PI / 2, eps, x, method);
			f1_list->Add(x, value);
			if (value > max) {
				max = value;
			}
			if (value < min) {
				min = value;
			}
			if (count > max_T) {
				max_T = count;
			}
			f2_list->Add(x, count);
		}
		LineItem Curve1 = panel->AddCurve("График функции g(x)", f1_list, Color::Blue, SymbolType::None);
		LineItem Curve2 = panel2->AddCurve("График функции T(x)", f2_list, Color::Green, SymbolType::None);

		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = -0.5;
		panel->XAxis->Scale->Max = 1.5;

		panel2->XAxis->Scale->Min = -0.5;
		panel2->XAxis->Scale->Max = 1.5;

		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = min - 0.5;
		panel->YAxis->Scale->Max = max + 0.5;

		panel2->YAxis->Scale->Min = -0.5;
		panel2->YAxis->Scale->Max = max_T + 0.5;

		//  Обновляем оси
		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();

		// Обновляем график
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
	}

}
	private: void DrawGraph()
	{
		GraphPane^ panel = zedGraphControl1->GraphPane;

		panel->XAxis->Title->Text = "Ось X";
		panel->YAxis->Title->Text = "Ось Y";

		panel->Title->Text = "Подынтегральная функция";

		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		GraphPane^ panel2 = zedGraphControl2->GraphPane;

		panel2->XAxis->Title->Text = "Ось X";
		panel2->YAxis->Title->Text = "Ось G";

		panel2->Title->Text = "Функция g(x)";

		zedGraphControl2->AxisChange();
		zedGraphControl2->Invalidate();


		GraphPane^ panel3 = zedGraphControl3->GraphPane;

		panel3->XAxis->Title->Text = "Ось X";
		panel3->YAxis->Title->Text = "Ось глубины рекурсии";

		panel3->Title->Text = "Функция трудоемкости";

		zedGraphControl3->AxisChange();
		zedGraphControl3->Invalidate();


	}
};
}
