#pragma once

namespace SistemaPlanificacionMatriculaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmEditarCurso
	/// </summary>
	public ref class frmEditarCurso : public System::Windows::Forms::Form
	{
	public:
		frmEditarCurso(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmEditarCurso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(310, 458);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(183, 458);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Grabar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->dateTimePicker1);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(47, 249);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(443, 180);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de la Carrera";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(165, 46);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 22);
			this->textBox5->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(54, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"C�digo: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(353, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCurso::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(168, 134);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(161, 22);
			this->dateTimePicker1->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(165, 86);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 22);
			this->textBox4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Fecha Creaci�n: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Nombre: ";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(47, 25);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(443, 217);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del nuevo Curso";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(156, 33);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(156, 22);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(54, 33);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"C�digo: ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 22);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Cant. Creditos: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 123);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Identificador: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre: ";
			// 
			// frmEditarCurso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 517);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarCurso";
			this->Text = L"frmEditarCurso";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
