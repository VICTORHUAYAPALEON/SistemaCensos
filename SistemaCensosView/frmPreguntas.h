#pragma once
#include "frmNuevaPregunta.h"
#include "frmEditarPregunta.h"
#include "frmMantAlternativas.h"

namespace SistemaCensosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCensosModel;
	using namespace SistemaCensosController;
	/// <summary>
	/// Resumen de frmPreguntas
	/// </summary>
	public ref class frmPreguntas : public System::Windows::Forms::Form
	{
	public:
		frmPreguntas(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmPreguntas(GestorFormulario^ objGestorFormulario, int codigoAgregarPregunta) {
			InitializeComponent();
			this->objGestorFormulario = objGestorFormulario;
			this->codigoAgregarPregunta = codigoAgregarPregunta;
			this->objGestorPregunta = gcnew GestorPregunta();

		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmPreguntas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: GestorFormulario^ objGestorFormulario;
	private: int codigoAgregarPregunta;
	private: GestorPregunta^ objGestorPregunta;






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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(31, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(496, 141);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código de Pregunta";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripción";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Modalidad de Respuesta";
			this->Column3->Name = L"Column3";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(165, 219);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Editar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmPreguntas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(49, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmPreguntas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(297, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmPreguntas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(417, 211);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 42);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Agregar Alternativas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmPreguntas::button4_Click);
			// 
			// frmPreguntas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 283);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmPreguntas";
			this->Text = L"frmPreguntas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmPreguntas::frmPreguntas_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmPreguntas::frmPreguntas_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmPreguntas_Load(System::Object^ sender, System::EventArgs^ e) {
		Formulario^ objFormulario = this->objGestorFormulario->ObtenerFormularioxCodigo(this->codigoAgregarPregunta);
		this->objGestorFormulario->GenerarGestorPreguntas(objFormulario, this->objGestorPregunta);
		MostrarGrilla();


	}
		   private:void MostrarGrilla() {
			   this->dataGridView1->Rows->Clear();
			   for (int i = 0; i < objGestorPregunta->ObtenerCantPreguntas(); i++) {
				   Pregunta^ objPregunta = objGestorPregunta->ObtenerPreguntasDeLista(i);
				   array<String^>^ fila = gcnew array<String^>(3);
				   fila[0] = Convert::ToString(objPregunta->codigoPregunta);
				   fila[1] = objPregunta->Descripcion;
				   fila[2] = objPregunta->ModalidadRespuesta;
				   this->dataGridView1->Rows->Add(fila);
			   }
		   }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaPregunta^ ventanaNuevaPregunta = gcnew frmNuevaPregunta(this->objGestorPregunta); 
	ventanaNuevaPregunta->ShowDialog();
	this->dataGridView1->Rows->Clear();
	MostrarGrilla();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->objGestorPregunta->EliminarPreguntaxCodigo(codigoEliminar);
		MessageBox::Show("La pregunta ha sido eliminada correctamente");
		this->dataGridView1->Rows->Clear();
		MostrarGrilla();
	}
}
private: System::Void frmPreguntas_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Formulario^ objFormularioPreguntasEditadas = this->objGestorFormulario->ObtenerFormularioxCodigo(codigoAgregarPregunta);
	this->objGestorFormulario->DevolverListaPreguntasFormulario(objFormularioPreguntasEditadas, this->objGestorPregunta);
	this->objGestorFormulario->EliminarFormularioxCodigo(codigoAgregarPregunta);
	this->objGestorFormulario->AgregarFormularioLista(objFormularioPreguntasEditadas);

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaEditar = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaEditar]->Cells[0]->Value->ToString());
		frmEditarPregunta^ ventanaEditarPregunta = gcnew frmEditarPregunta(this->objGestorPregunta, codigoEditar);
		ventanaEditarPregunta->ShowDialog();

		MostrarGrilla();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoAgregarAlternativa = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		frmMantAlternativas^ VentanaMantenimientoAlternativa = gcnew frmMantAlternativas(this->objGestorPregunta, codigoAgregarAlternativa); /*hacerlo adentro*/
		VentanaMantenimientoAlternativa->ShowDialog();
	}
}
};
}
