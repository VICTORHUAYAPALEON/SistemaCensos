#pragma once
#include "frmNuevoCensador.h"
#include "frmEditarCensador.h"

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
	/// Resumen de frmMantCensador
	/// </summary>
	public ref class frmMantCensador : public System::Windows::Forms::Form
	{
	public:
		frmMantCensador(void)
		{
			InitializeComponent();
			this->objGestorCensador = gcnew GestorCensador();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantCensador()
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: GestorCensador^ objGestorCensador;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(40, 169);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(603, 193);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantCensador::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(89, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantCensador::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 389);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantCensador::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(473, 389);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 34);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantCensador::button3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(40, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(603, 108);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantCensador::groupBox1_Enter);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(469, 35);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 24);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantCensador::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 38);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(147, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &frmMantCensador::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dni :";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantCensador::label1_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombres";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Paterno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Apellido Materno";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"DNI";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Username";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Password";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// frmMantCensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 433);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantCensador";
			this->Text = L"frmMantCensador";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantCensador::frmMantCensador_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantCensador::frmMantCensador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {



	}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmMantCensador_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorCensador->LeerCensadorDesdeArchivo();

	for (int i = 0; i < objGestorCensador->ObtenerCantidadCensador(); i++) {
		Censador^ objCensador = objGestorCensador->ObtenerCensadorLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = Convert::ToString(objCensador->Codigo);
		fila[1] = objCensador->Nombres;
		fila[2] = objCensador->Apellido_Paterno;
		fila[3] = objCensador->Apellido_Materno;
		fila[4] = objCensador->DNI;
		fila[5] = objCensador->Username;
		fila[6] = objCensador->Password;
		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ DNI = this->textBox1->Text;
	Censador^ objCensador = this->objGestorCensador->ObtenerCensadorxDNI(DNI);
	this->dataGridView1->Rows->Clear();
	array<String^>^ fila = gcnew array<String^>(7);
	fila[0] = Convert::ToString(objCensador->Codigo);
	fila[1] = objCensador->Nombres;
	fila[2] = objCensador->Apellido_Paterno;
	fila[3] = objCensador->Apellido_Materno;
	fila[4] = objCensador->DNI;
	fila[5] = objCensador->Username;
	fila[6] = objCensador->Password;
	this->dataGridView1->Rows->Add(fila);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	frmNuevoCensador^ ventanaNuevoCensador = gcnew frmNuevoCensador(this->objGestorCensador);
	ventanaNuevoCensador->ShowDialog();

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorCensador->ObtenerCantidadCensador(); i++) {
		Censador^ objCensador = objGestorCensador->ObtenerCensadorLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = Convert::ToString(objCensador->Codigo);
		fila[1] = objCensador->Nombres;
		fila[2] = objCensador->Apellido_Paterno;
		fila[3] = objCensador->Apellido_Materno;
		fila[4] = objCensador->DNI;
		fila[5] = objCensador->Username;
		fila[6] = objCensador->Password;
		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	this->objGestorCensador->EliminarCensador(codigoEliminar);
	MessageBox::Show("El contacto ha sido eliminado correctamente");

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorCensador->ObtenerCantidadCensador(); i++) {
		Censador^ objCensador = objGestorCensador->ObtenerCensadorLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = Convert::ToString(objCensador->Codigo);
		fila[1] = objCensador->Nombres;
		fila[2] = objCensador->Apellido_Paterno;
		fila[3] = objCensador->Apellido_Materno;
		fila[4] = objCensador->DNI;
		fila[5] = objCensador->Username;
		fila[6] = objCensador->Password;
		this->dataGridView1->Rows->Add(fila);
	}



}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmMantCensador_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorCensador->EscribirArchivo();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	frmEditarCensador^ ventanaEditarCensador = gcnew frmEditarCensador(this->objGestorCensador, codigoEditar);
	ventanaEditarCensador->ShowDialog();

	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorCensador->ObtenerCantidadCensador(); i++) {
		Censador^ objCensador = objGestorCensador->ObtenerCensadorLista(i);
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = Convert::ToString(objCensador->Codigo);
		fila[1] = objCensador->Nombres;
		fila[2] = objCensador->Apellido_Paterno;
		fila[3] = objCensador->Apellido_Paterno;
		fila[4] = objCensador->DNI;
		this->dataGridView1->Rows->Add(fila);
	}
}
}
; }
