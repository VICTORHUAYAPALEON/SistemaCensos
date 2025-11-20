#pragma once

#include "frmMantEmpresas.h"
#include"frmMantUsuario.h"
#include "frmMantEntidadColegio.h"
#include "frmMantCensador.h"
#include "frmMantEntidadUniversidad.h"
#include "frmPreguntas.h"
#include "frmMantEntidadPersona.h"
#include "frmMantCensos.h"
#include "frmMantRespuestas.h"

namespace SistemaCensosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCensosController;
	using namespace SistemaCensosModel;

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
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ empresasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ censadorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ entidadesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ personaNaturalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ universidadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ colegioToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ censoToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ verCensoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ejecutarCensoToolStripMenuItem;



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
			this->mantenimientosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->empresasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->censadorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->entidadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->personaNaturalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->universidadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colegioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->censoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verCensoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ejecutarCensoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mantenimientosToolStripMenuItem,
					this->censoToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1413, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mantenimientosToolStripMenuItem
			// 
			this->mantenimientosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->empresasToolStripMenuItem,
					this->usuariosToolStripMenuItem, this->censadorToolStripMenuItem, this->entidadesToolStripMenuItem
			});
			this->mantenimientosToolStripMenuItem->Name = L"mantenimientosToolStripMenuItem";
			this->mantenimientosToolStripMenuItem->Size = System::Drawing::Size(130, 24);
			this->mantenimientosToolStripMenuItem->Text = L"Mantenimientos";
			// 
			// empresasToolStripMenuItem
			// 
			this->empresasToolStripMenuItem->Name = L"empresasToolStripMenuItem";
			this->empresasToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->empresasToolStripMenuItem->Text = L"Empresas";
			this->empresasToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::EmpresasToolStripMenuItem_Click);
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			this->usuariosToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::UsuariosToolStripMenuItem_Click);
			// 
			// censadorToolStripMenuItem
			// 
			this->censadorToolStripMenuItem->Name = L"censadorToolStripMenuItem";
			this->censadorToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->censadorToolStripMenuItem->Text = L"Censador";
			this->censadorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::censadorToolStripMenuItem_Click);
			// 
			// entidadesToolStripMenuItem
			// 
			this->entidadesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->personaNaturalToolStripMenuItem,
					this->universidadToolStripMenuItem, this->colegioToolStripMenuItem
			});
			this->entidadesToolStripMenuItem->Name = L"entidadesToolStripMenuItem";
			this->entidadesToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->entidadesToolStripMenuItem->Text = L"Entidades";
			// 
			// personaNaturalToolStripMenuItem
			// 
			this->personaNaturalToolStripMenuItem->Name = L"personaNaturalToolStripMenuItem";
			this->personaNaturalToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->personaNaturalToolStripMenuItem->Text = L"Persona Natural";
			this->personaNaturalToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::personaNaturalToolStripMenuItem_Click);
			// 
			// universidadToolStripMenuItem
			// 
			this->universidadToolStripMenuItem->Name = L"universidadToolStripMenuItem";
			this->universidadToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->universidadToolStripMenuItem->Text = L"Universidad";
			this->universidadToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::universidadToolStripMenuItem_Click);
			// 
			// colegioToolStripMenuItem
			// 
			this->colegioToolStripMenuItem->Name = L"colegioToolStripMenuItem";
			this->colegioToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->colegioToolStripMenuItem->Text = L"Colegio";
			this->colegioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::colegioToolStripMenuItem_Click);
			// 
			// censoToolStripMenuItem1
			// 
			this->censoToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->verCensoToolStripMenuItem,
					this->ejecutarCensoToolStripMenuItem
			});
			this->censoToolStripMenuItem1->Name = L"censoToolStripMenuItem1";
			this->censoToolStripMenuItem1->Size = System::Drawing::Size(63, 24);
			this->censoToolStripMenuItem1->Text = L"Censo";
			// 
			// verCensoToolStripMenuItem
			// 
			this->verCensoToolStripMenuItem->Name = L"verCensoToolStripMenuItem";
			this->verCensoToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->verCensoToolStripMenuItem->Text = L"Crear Censo";
			this->verCensoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::verCensoToolStripMenuItem_Click);
			// 
			// ejecutarCensoToolStripMenuItem
			// 
			this->ejecutarCensoToolStripMenuItem->Name = L"ejecutarCensoToolStripMenuItem";
			this->ejecutarCensoToolStripMenuItem->Size = System::Drawing::Size(258, 26);
			this->ejecutarCensoToolStripMenuItem->Text = L"Ejecutar y Ver Respuestas";
			this->ejecutarCensoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::ejecutarCensoToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1413, 725);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"frmPrincipal";
			this->Text = L"frmPrincipal";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPrincipal::FrmPrincipal_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPrincipal::FrmPrincipal_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FrmPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FrmPrincipal_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void EmpresasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantEmpresas^ VentanaMantEmpresas = gcnew frmMantEmpresas();
		VentanaMantEmpresas->MdiParent = this;
		VentanaMantEmpresas->Show();

	}
private: System::Void UsuariosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantUsuario^ VentanaMantUsuario = gcnew frmMantUsuario();
	VentanaMantUsuario->MdiParent = this;
	VentanaMantUsuario->Show();
}
private: System::Void censadorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantCensador^ ventanaMantCensador = gcnew frmMantCensador();
	ventanaMantCensador->MdiParent = this;
	ventanaMantCensador->Show();
}
private: System::Void colegioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantEntidadColegio^ ventanaMantColegio = gcnew frmMantEntidadColegio();
	ventanaMantColegio->MdiParent = this;
	ventanaMantColegio->Show();
}
private: System::Void universidadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantEntidadUniversidad^ ventanaMantUniversidad = gcnew frmMantEntidadUniversidad();
	ventanaMantUniversidad->MdiParent = this;
	ventanaMantUniversidad->Show();
}
private: System::Void crearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmPreguntas^ ventanaPreguntas = gcnew frmPreguntas();
	ventanaPreguntas->MdiParent = this;
	ventanaPreguntas->Show();
}

private: System::Void personaNaturalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantEntidadPersona^ ventanaEntidadPersona = gcnew frmMantEntidadPersona();
	ventanaEntidadPersona->MdiParent = this;
	ventanaEntidadPersona->Show();

}
private: System::Void censoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantCensos^ ventanaMantCensos = gcnew frmMantCensos();
	ventanaMantCensos->MdiParent = this;
	ventanaMantCensos->Show();
}
private: System::Void verCensoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantCensos^ ventanaMantCensos = gcnew frmMantCensos();
	ventanaMantCensos->MdiParent = this;
	ventanaMantCensos->Show();
}
private: System::Void ejecutarCensoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	frmMantRespuestas^ ventanaMantRespuestas = gcnew frmMantRespuestas();
	ventanaMantRespuestas->MdiParent = this;
	ventanaMantRespuestas->Show();
}
};
};