#pragma once
#include "frmAperturaAnhoAcademico.h"
#include "frmMantCarrera.h"
#include "frmMantCurso.h"

namespace SistemaPlanificacionMatriculaView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ planificaciónToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aperturaSemestreAcadémicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ matrículaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asociarCursosASemestreAcadémicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programarHorariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aperturaAñoAcadémicoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carrerasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cursosToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->planificaciónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aperturaAñoAcadémicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aperturaSemestreAcadémicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asociarCursosASemestreAcadémicoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarHorariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matrículaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->carrerasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cursosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->planificaciónToolStripMenuItem,
					this->matrículaToolStripMenuItem, this->reportesToolStripMenuItem, this->mantenimientoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(960, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// planificaciónToolStripMenuItem
			// 
			this->planificaciónToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->aperturaAñoAcadémicoToolStripMenuItem,
					this->aperturaSemestreAcadémicoToolStripMenuItem, this->asociarCursosASemestreAcadémicoToolStripMenuItem, this->programarHorariosToolStripMenuItem
			});
			this->planificaciónToolStripMenuItem->Name = L"planificaciónToolStripMenuItem";
			this->planificaciónToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->planificaciónToolStripMenuItem->Text = L"Planificación";
			// 
			// aperturaAñoAcadémicoToolStripMenuItem
			// 
			this->aperturaAñoAcadémicoToolStripMenuItem->Name = L"aperturaAñoAcadémicoToolStripMenuItem";
			this->aperturaAñoAcadémicoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->aperturaAñoAcadémicoToolStripMenuItem->Text = L"Apertura Año Académico";
			this->aperturaAñoAcadémicoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::aperturaAñoAcadémicoToolStripMenuItem_Click);
			// 
			// aperturaSemestreAcadémicoToolStripMenuItem
			// 
			this->aperturaSemestreAcadémicoToolStripMenuItem->Name = L"aperturaSemestreAcadémicoToolStripMenuItem";
			this->aperturaSemestreAcadémicoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->aperturaSemestreAcadémicoToolStripMenuItem->Text = L"Apertura Semestre Académico";
			// 
			// asociarCursosASemestreAcadémicoToolStripMenuItem
			// 
			this->asociarCursosASemestreAcadémicoToolStripMenuItem->Name = L"asociarCursosASemestreAcadémicoToolStripMenuItem";
			this->asociarCursosASemestreAcadémicoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->asociarCursosASemestreAcadémicoToolStripMenuItem->Text = L"Asociar Cursos a Semestre Académico";
			// 
			// programarHorariosToolStripMenuItem
			// 
			this->programarHorariosToolStripMenuItem->Name = L"programarHorariosToolStripMenuItem";
			this->programarHorariosToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->programarHorariosToolStripMenuItem->Text = L"Programar Horarios";
			// 
			// matrículaToolStripMenuItem
			// 
			this->matrículaToolStripMenuItem->Name = L"matrículaToolStripMenuItem";
			this->matrículaToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->matrículaToolStripMenuItem->Text = L"Matrícula";
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->carrerasToolStripMenuItem,
					this->cursosToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 24);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// carrerasToolStripMenuItem
			// 
			this->carrerasToolStripMenuItem->Name = L"carrerasToolStripMenuItem";
			this->carrerasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->carrerasToolStripMenuItem->Text = L"Carreras";
			this->carrerasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::carrerasToolStripMenuItem_Click);
			// 
			// cursosToolStripMenuItem
			// 
			this->cursosToolStripMenuItem->Name = L"cursosToolStripMenuItem";
			this->cursosToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->cursosToolStripMenuItem->Text = L"Cursos";
			this->cursosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::cursosToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 597);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"Sistema de Planificación y Matrícula";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aperturaAñoAcadémicoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmAperturaAnhoAcademico^ ventanaAnhoAcademico = gcnew frmAperturaAnhoAcademico();
		ventanaAnhoAcademico->MdiParent = this;
		ventanaAnhoAcademico->Show();
	}

	private: System::Void carrerasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantCarrera^ ventanaMantCarrera = gcnew frmMantCarrera();
		ventanaMantCarrera->MdiParent = this;
		ventanaMantCarrera->Show();
	}

	private: System::Void cursosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantCurso^ ventanaMantCurso = gcnew frmMantCurso();
		ventanaMantCurso->MdiParent = this;
		ventanaMantCurso->Show();
	}
};
}
