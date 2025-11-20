#pragma once
#include "frmNuevoFormulario.h"
#include "frmEditarFormulario.h"
#include "frmPreguntas.h"

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
	/// Resumen de frmMantFormulario
	/// </summary>
	public ref class frmMantFormulario : public System::Windows::Forms::Form
	{
	public:
		frmMantFormulario(void)
		{
			InitializeComponent();

			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMantFormulario(GestorCenso^ objGestorCenso, int  codigoAgregarFormulario) {
			InitializeComponent();
			this->objGestorCenso = objGestorCenso;
			this->codigoAgregarFormulario= codigoAgregarFormulario;
			this->objGestorFormulario = gcnew GestorFormulario();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantFormulario()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;




	private: System::Windows::Forms::Button^ button4;
	private: GestorCenso^ objGestorCenso;
	private: int codigoAgregarFormulario;
	private: GestorFormulario^ objGestorFormulario;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 324);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantFormulario::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 324);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantFormulario::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(306, 324);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantFormulario::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(424, 313);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(87, 44);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Agregar Preguntas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantFormulario::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(611, 228);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo Formulario";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Titulo";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Seccion";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Numero Secciones";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Persona Responsable";
			this->Column5->Name = L"Column5";
			// 
			// frmMantFormulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(653, 404);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmMantFormulario";
			this->Text = L"frmMantFormulario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantFormulario::frmMantFormulario_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantFormulario::frmMantFormulario_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
		Censo^ objCenso = this->objGestorCenso->ObtenerCensoxCodigo(codigoAgregarFormulario);
		this->objGestorCenso->GenerarGestorFormularios(objCenso,this->objGestorFormulario);
 		MostrarGrilla();

	}
		   /*METODO QUE MUESTRA LA GRILLA PARA UNA LISTA DE OBJETOS DE ALGUN TIPO*/
		private: void MostrarGrilla() {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < this->objGestorFormulario->ObtenerCantFormularios(); i++) {
				Formulario^ objFormulario = this->objGestorFormulario->ObtenerFormularioDeLista(i);
				array<String^>^ fila = gcnew array<String^>(5);
				fila[0] = Convert::ToString(objFormulario->codigoFormulario);
				fila[1] = objFormulario->Titulo;
				fila[2] = objFormulario->Seccion;
				fila[3] = Convert::ToString(objFormulario->NroSecciones);
				fila[4] = objFormulario->PersonaResponsable;
				this->dataGridView1->Rows->Add(fila);
			}
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoFormulario^ VentanaNuevoFormulario = gcnew frmNuevoFormulario(this->objGestorFormulario);
	VentanaNuevoFormulario->ShowDialog();

	MostrarGrilla();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoFormularioEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

		frmEditarFormulario^ VentanaEditarFormulario = gcnew frmEditarFormulario(this->objGestorFormulario, codigoFormularioEditar);
		VentanaEditarFormulario->ShowDialog();

		MostrarGrilla();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->objGestorFormulario->EliminarFormularioxCodigo(codigoEliminar);
		MessageBox::Show("El Formulario ha sido eliminado correctamente");
		this->dataGridView1->Rows->Clear();
		MostrarGrilla();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoAgregarPregunta = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		frmPreguntas^ VentanaMantenimientoPregunta = gcnew frmPreguntas(this->objGestorFormulario, codigoAgregarPregunta); /*hacerlo adentro*/
		VentanaMantenimientoPregunta->ShowDialog();
	}
}
private: System::Void frmMantFormulario_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Censo^ objCensoFormularioEditado = this->objGestorCenso->ObtenerCensoxCodigo(codigoAgregarFormulario);
	this->objGestorCenso->DevolverListaFormulariosaCenso(objCensoFormularioEditado, this->objGestorFormulario);
	this->objGestorCenso->EliminarCensoxCodigo(codigoAgregarFormulario);
	this->objGestorCenso->AgregarCensoLista(objCensoFormularioEditado);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
