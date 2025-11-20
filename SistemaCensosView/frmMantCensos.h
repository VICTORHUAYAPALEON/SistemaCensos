#pragma once
#include "frmNuevoCenso.h"
#include "frmEditarCenso.h"
#include "frmMantFormulario.h"


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
	/// Resumen de frmMantCensos
	/// </summary>
	public ref class frmMantCensos : public System::Windows::Forms::Form
	{
	public:
		frmMantCensos(void)
		{
			InitializeComponent();
			this->objGestorCenso = gcnew GestorCenso();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantCensos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;






	private: GestorCenso^ objGestorCenso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;







	protected:

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
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(854, 177);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo Censo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre Censo";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Region Interes";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Fecha Inicio";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Fecha Fin";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Tipo Entidad";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Empresa Contratista";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 261);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantCensos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(287, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantCensos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(459, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 27);
			this->button3->TabIndex = 3;
			this->button3->Tag = L"";
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantCensos::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(620, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(95, 46);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"";
			this->button4->Text = L"Agregar Formulario";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantCensos::button4_Click);
			// 
			// frmMantCensos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(902, 348);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantCensos";
			this->Text = L"frmMantCensos";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantCensos::frmMantCensos_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantCensos::frmMantCensos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantCensos_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorCenso->Deserializar();
		MostrarGrilla();
	

	}
	   /*METODO QUE MUESTRA LA GRILLA PARA UNA LISTA DE OBJETOS DE ALGUN TIPO*/
		private: void MostrarGrilla() {
			this->dataGridView1->Rows->Clear();
			for (int i = 0; i < this->objGestorCenso->ObtenerCantCensos(); i++) {
				Censo^ objCenso = this->objGestorCenso->ObtenerCensosDeLista(i);
				array<String^>^ fila = gcnew array<String^>(7);
				fila[0] = Convert::ToString(objCenso->codigo);
				fila[1] = objCenso->NombreCenso;
				fila[2] = objCenso->RegionInteres;
				fila[3] = objCenso-> FechaInicio;
				fila[4] = objCenso-> FechaFin;
				fila[5] = objCenso->objTipoEntidad->tipo;
				fila[6] = objCenso->objEmpresa->RazonSocial;
				this->dataGridView1->Rows->Add(fila);
			}
		}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->objGestorCenso->EliminarCensoxCodigo(codigoEliminar);
		MessageBox::Show("El Censo ha sido eliminado correctamente");
		this->dataGridView1->Rows->Clear();
		MostrarGrilla();
	}


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoAgregarFormulario = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		frmMantFormulario^ VentanaMantenimientoFormulario = gcnew frmMantFormulario(this->objGestorCenso, codigoAgregarFormulario); /*hacerlo adentro*/
		VentanaMantenimientoFormulario->ShowDialog();
	}


}
private: System::Void frmMantCensos_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorCenso->Serializar();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoCenso^ VentanaNuevoCenso = gcnew frmNuevoCenso(this->objGestorCenso);
	VentanaNuevoCenso->ShowDialog();

	MostrarGrilla();
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	
    frmEditarCenso^ VentanaEditarCenso = gcnew frmEditarCenso(this->objGestorCenso,codigoEditar);
	VentanaEditarCenso->ShowDialog();

	MostrarGrilla();
	}
}


};
}
