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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
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
	private: System::Windows::Forms::ToolStripMenuItem^ planificaci�nToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aperturaSemestreAcad�micoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ matr�culaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asociarCursosASemestreAcad�micoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ programarHorariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aperturaA�oAcad�micoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ carrerasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ cursosToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->planificaci�nToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aperturaA�oAcad�micoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aperturaSemestreAcad�micoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asociarCursosASemestreAcad�micoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->programarHorariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->matr�culaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->planificaci�nToolStripMenuItem,
					this->matr�culaToolStripMenuItem, this->reportesToolStripMenuItem, this->mantenimientoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(960, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// planificaci�nToolStripMenuItem
			// 
			this->planificaci�nToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->aperturaA�oAcad�micoToolStripMenuItem,
					this->aperturaSemestreAcad�micoToolStripMenuItem, this->asociarCursosASemestreAcad�micoToolStripMenuItem, this->programarHorariosToolStripMenuItem
			});
			this->planificaci�nToolStripMenuItem->Name = L"planificaci�nToolStripMenuItem";
			this->planificaci�nToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->planificaci�nToolStripMenuItem->Text = L"Planificaci�n";
			// 
			// aperturaA�oAcad�micoToolStripMenuItem
			// 
			this->aperturaA�oAcad�micoToolStripMenuItem->Name = L"aperturaA�oAcad�micoToolStripMenuItem";
			this->aperturaA�oAcad�micoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->aperturaA�oAcad�micoToolStripMenuItem->Text = L"Apertura A�o Acad�mico";
			this->aperturaA�oAcad�micoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::aperturaA�oAcad�micoToolStripMenuItem_Click);
			// 
			// aperturaSemestreAcad�micoToolStripMenuItem
			// 
			this->aperturaSemestreAcad�micoToolStripMenuItem->Name = L"aperturaSemestreAcad�micoToolStripMenuItem";
			this->aperturaSemestreAcad�micoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->aperturaSemestreAcad�micoToolStripMenuItem->Text = L"Apertura Semestre Acad�mico";
			// 
			// asociarCursosASemestreAcad�micoToolStripMenuItem
			// 
			this->asociarCursosASemestreAcad�micoToolStripMenuItem->Name = L"asociarCursosASemestreAcad�micoToolStripMenuItem";
			this->asociarCursosASemestreAcad�micoToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->asociarCursosASemestreAcad�micoToolStripMenuItem->Text = L"Asociar Cursos a Semestre Acad�mico";
			// 
			// programarHorariosToolStripMenuItem
			// 
			this->programarHorariosToolStripMenuItem->Name = L"programarHorariosToolStripMenuItem";
			this->programarHorariosToolStripMenuItem->Size = System::Drawing::Size(344, 26);
			this->programarHorariosToolStripMenuItem->Text = L"Programar Horarios";
			// 
			// matr�culaToolStripMenuItem
			// 
			this->matr�culaToolStripMenuItem->Name = L"matr�culaToolStripMenuItem";
			this->matr�culaToolStripMenuItem->Size = System::Drawing::Size(85, 24);
			this->matr�culaToolStripMenuItem->Text = L"Matr�cula";
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
			this->Text = L"Sistema de Planificaci�n y Matr�cula";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aperturaA�oAcad�micoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
