#pragma once
#include "frmNuevaAlternativa.h"
#include "frmEditarAlternativa.h"
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
	/// Resumen de frmMantAlternativas
	/// </summary>
	public ref class frmMantAlternativas : public System::Windows::Forms::Form
	{
	public:
		frmMantAlternativas(void)
		{
			InitializeComponent();
			this->objGestorAlternativa = gcnew GestorAlternativa();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmMantAlternativas(GestorPregunta^ objGestorPregunta,int  codigoAgregarAlternativa) {
			InitializeComponent();
			this->objGestorPregunta = objGestorPregunta;
			this->codigoAgregarAlternativa = codigoAgregarAlternativa;
			this->objGestorAlternativa = gcnew GestorAlternativa();
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantAlternativas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: GestorPregunta^ objGestorPregunta;
	private: int codigoAgregarAlternativa;
	private:GestorAlternativa^ objGestorAlternativa;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Opcion";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantAlternativas::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(53, 49);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(435, 77);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(157, 30);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(316, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantAlternativas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(96, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantAlternativas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(247, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantAlternativas::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(392, 355);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantAlternativas::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Location = System::Drawing::Point(23, 161);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(557, 150);
			this->dataGridView1->TabIndex = 6;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantAlternativas::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Opcion";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Texto";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 500;
			// 
			// frmMantAlternativas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(602, 421);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantAlternativas";
			this->Text = L"frmMantAlternativas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantAlternativas::frmMantAlternativas_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantAlternativas::frmMantAlternativas_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void frmMantAlternativas_Load(System::Object^ sender, System::EventArgs^ e) {
		Pregunta^ objPregunta = this->objGestorPregunta->ObtenerPreguntaxCodigo(this->codigoAgregarAlternativa);
		this->objGestorPregunta->GenerarGestorAlternativas(objPregunta, this->objGestorAlternativa);
		MostrarGrilla();
}
private:void MostrarGrilla() {
	this->dataGridView1->Rows->Clear();
	for (int i = 0; i < objGestorAlternativa->ObtenerCantAlternativas(); i++) {
		Alternativa^ objAlternativa = objGestorAlternativa->ObtenerAlternativaLista(i);
		array<String^>^ fila = gcnew array<String^>(2);
		fila[0] = Convert::ToString(objAlternativa->codigoAlternativa);
		fila[1] = objAlternativa->texto;  /*SI ESTO NO TE QUIERE COMPILAR, PONLE PUBLIC A LOS ATRIBUTOS DE SU CLASE*/
		this->dataGridView1->Rows->Add(fila);
	}
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoAlternativa = Convert::ToInt32(this->textBox1->Text);
	Alternativa^ objAlternativa = objGestorAlternativa->ObtenerAlternativaxCodigo(codigoAlternativa);
	this->dataGridView1->Rows->Clear();
	array<String^>^ fila = gcnew array<String^>(2); 
	fila[0] = Convert::ToString(objAlternativa->codigoAlternativa);
	fila[1] = objAlternativa->texto;

	this->dataGridView1->Rows->Add(fila);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaAlternativa^ ventanaNuevaAlternativa = gcnew frmNuevaAlternativa(this->objGestorAlternativa);
	ventanaNuevaAlternativa->ShowDialog();
	MostrarGrilla();
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		frmEditarAlternativa^ ventanaEditarAlternativa = gcnew  frmEditarAlternativa(this->objGestorAlternativa, codigoEditar);
		ventanaEditarAlternativa->ShowDialog();
		MostrarGrilla();
	}
	


}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		this->objGestorAlternativa->EliminarAlternativaxCodigo(codigoEliminar);
		MessageBox::Show("La alternativa ha sido eliminada correctamente");
		MostrarGrilla();
	}



}
private: System::Void frmMantAlternativas_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	Pregunta^ objPreguntaAlternativasEditadas = this->objGestorPregunta->ObtenerPreguntaxCodigo(codigoAgregarAlternativa);
	this->objGestorPregunta->DevolverListaAlternativaPregunta(objPreguntaAlternativasEditadas, this->objGestorAlternativa);
	this->objGestorPregunta->EliminarPreguntaxCodigo(codigoAgregarAlternativa);
	this->objGestorPregunta->AgregarPreguntaLista(objPreguntaAlternativasEditadas);
}
};
}
