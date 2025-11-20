#pragma once
#include "frmNuevaEntidadPersona.h"
#include "frmEditarEntidadPersona.h"


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
	/// Resumen de frmMantEntidadPersona
	/// </summary>
	public ref class frmMantEntidadPersona : public System::Windows::Forms::Form
	{
	public:
		frmMantEntidadPersona(void)
		{
			InitializeComponent();
			//
			this->objGestorPersona = gcnew GestorEntidadPersona();

			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantEntidadPersona()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: GestorEntidadPersona^ objGestorPersona;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(102, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(471, 86);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantEntidadPersona::groupBox1_Enter);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Dni";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::label1_Click);
			this->textBox1->Location = System::Drawing::Point(173, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(129, 20);
			this->textBox1->TabIndex = 6;
			this->button4->Location = System::Drawing::Point(335, 42);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::button4_Click);
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 120);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(745, 123);
			this->dataGridView1->TabIndex = 1;
			this->Column1->HeaderText = L"Nombres";
			this->Column1->Name = L"Column1";
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->Name = L"Column2";
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->Name = L"Column3";
			this->Column4->HeaderText = L"dni";
			this->Column4->Name = L"Column4";
			this->Column5->HeaderText = L"Edad";
			this->Column5->Name = L"Column5";
			this->Column6->HeaderText = L"Sexo";
			this->Column6->Name = L"Column6";
			this->Column7->HeaderText = L"Telefono";
			this->Column7->Name = L"Column7";
			this->button1->Location = System::Drawing::Point(121, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::button1_Click);
			this->button2->Location = System::Drawing::Point(121, 328);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Editar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::button2_Click);
			this->button3->Location = System::Drawing::Point(423, 328);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::button3_Click);
			this->button5->Location = System::Drawing::Point(398, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(137, 47);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Informacion de formularios";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantEntidadPersona::button5_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 376);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantEntidadPersona";
			this->Text = L"frmMantEntidadPersona";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantEntidadPersona::frmMantEntidadPersona_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantEntidadPersona::frmMantEntidadPersona_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmMantEntidadPersona_Load(System::Object^ sender, System::EventArgs^ e) {
	objGestorPersona->LeerEntidadPersonaDesdeArchivo();

	for (int i = 0; i < objGestorPersona->ObtenerCantidadEntidadPersonas(); i++) {
		EntidadPersona^ objPersona = objGestorPersona->ObtenerEntidadPersonaLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = objPersona->nombre;
		fila[1] = objPersona->apellidoPaterno;
		fila[2] = objPersona->apellidoMaterno;
		fila[3] = objPersona->dni;
		fila[4] = objPersona->edad;
		fila[5] = objPersona->sexo;
		fila[6] = objPersona->telefono;

	
		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dniELiminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString();
	this->objGestorPersona->EliminarEntidadPersona(dniELiminar);
	MessageBox::Show("El contacto ha sido eliminado correctamente");
	/*vuelve a mostrar en la grilla*/
	this->dataGridView1->Rows->Clear(); /*limpia la grilla*/
	for (int i = 0; i < objGestorPersona->ObtenerCantidadEntidadPersonas(); i++) {
		EntidadPersona^ objPersona = objGestorPersona->ObtenerEntidadPersonaLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = objPersona->nombre;
		fila[1] = objPersona->apellidoPaterno;
		fila[2] = objPersona->apellidoMaterno;
		fila[3] = objPersona->dni;
		fila[4] = objPersona->edad;
		fila[5] = objPersona->sexo;
		fila[6] = objPersona->telefono;


		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dni = this->textBox1->Text;
	EntidadPersona^ objPersona = objGestorPersona->ObtenerEntidadPersonaxDni(dni);
	this->dataGridView1->Rows->Clear();
	array<String^>^ fila = gcnew array<String^>(7);
	fila[0] = objPersona->nombre;
	fila[1] = objPersona->apellidoPaterno;
	fila[2] = objPersona->apellidoMaterno;
	fila[3] = objPersona->dni;
	fila[4] = objPersona->edad;
	fila[5] = objPersona->sexo;
	fila[6] = objPersona->telefono;


	this->dataGridView1->Rows->Add(fila);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaEntidadPersona^ ventanaNuevoEntidadPersona = gcnew frmNuevaEntidadPersona(this->objGestorPersona);
	ventanaNuevoEntidadPersona->ShowDialog();
	/*vuelve a mostrar en la grilla*/
	this->dataGridView1->Rows->Clear(); /*limpia la grilla*/
	for (int i = 0; i < objGestorPersona->ObtenerCantidadEntidadPersonas(); i++) {
		EntidadPersona^ objPersona = objGestorPersona->ObtenerEntidadPersonaLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = objPersona->nombre;
		fila[1] = objPersona->apellidoPaterno;
		fila[2] = objPersona->apellidoMaterno;
		fila[3] = objPersona->dni;
		fila[4] = objPersona->edad;
		fila[5] = objPersona->sexo;
		fila[6] = objPersona->telefono;


		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void frmMantEntidadPersona_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorPersona->EscribirArchivo();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	String^ dniPersonaEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString();
	frmEditarEntidadPersona^ ventanaEditarEntidadPersona = gcnew frmEditarEntidadPersona(this->objGestorPersona,dniPersonaEditar);
	ventanaEditarEntidadPersona->ShowDialog();
	/*vuelve a mostrar en la grilla*/
	this->dataGridView1->Rows->Clear(); /*limpia la grilla*/
	for (int i = 0; i < objGestorPersona->ObtenerCantidadEntidadPersonas(); i++) {
		EntidadPersona^ objPersona = objGestorPersona->ObtenerEntidadPersonaLista(i);
		array<String^>^ fila = gcnew array<String^>(7);
		fila[0] = objPersona->nombre;
		fila[1] = objPersona->apellidoPaterno;
		fila[2] = objPersona->apellidoMaterno;
		fila[3] = objPersona->dni;
		fila[4] = objPersona->edad;
		fila[5] = objPersona->sexo;
		fila[6] = objPersona->telefono;


		this->dataGridView1->Rows->Add(fila);
	}

}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
