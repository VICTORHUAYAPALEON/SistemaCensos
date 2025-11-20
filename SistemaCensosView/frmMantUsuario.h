#pragma once
#include"frmEditarUsuario.h"
#include"frmNuevoUsuario.h"

namespace SistemaCensosView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace SistemaCensosController;
	using namespace SistemaCensosController;

	/// <summary>
	/// Resumen de frmMantUsuario
	/// </summary>
	public ref class frmMantUsuario : public System::Windows::Forms::Form
	{
	public:
		frmMantUsuario(void)
		{
			InitializeComponent();
			this->objGestorUsuario = gcnew GestorUsuario();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button4;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: GestorUsuario^ objGestorUsuario;






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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(451, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 25);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantUsuario::Button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(285, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 25);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantUsuario::Button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(112, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 25);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantUsuario::Button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(617, 61);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Usuario";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantUsuario::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Direccion, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(635, 147);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Correo";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"User Name";
			this->Column4->Name = L"Column4";
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Contraseña";
			this->Direccion->Name = L"Direccion";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Teléfono";
			this->Column5->Name = L"Column5";
			// 
			// frmMantUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 345);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmMantUsuario";
			this->Text = L"frmMantUsuario";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantUsuario::FrmMantUsuario_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantUsuario::FrmMantUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FrmMantUsuario_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorUsuario->LeerUsuarioDesdeArchivo();
		MostrarGrilla();
	}
	private: void MostrarGrilla() {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorUsuario->ObtenerCantidadUsuarios(); i++) {
			Usuario^ objUsuario = this->objGestorUsuario->ObtenerUsuarioLista(i);
			array<String^>^ fila = gcnew array<String^>(6);
			fila[0] = Convert::ToString(objUsuario->codigo);
			fila[1] = objUsuario->Nombre;
			fila[2] = objUsuario->Correo;
			fila[3] = objUsuario->UserName;
			fila[4] = objUsuario->Password;
			fila[5] = objUsuario->Telefono;
			this->dataGridView1->Rows->Add(fila);
		}
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UserName = this->textBox1->Text;
	Usuario^ objUsuario = this->objGestorUsuario->ObtenerUsuarioxUserName(UserName);

	this->dataGridView1->Rows->Clear();
	array<String^>^ fila = gcnew array<String^>(6);
	fila[0] = Convert::ToString(objUsuario->codigo);
	fila[1] = objUsuario->Nombre;
	fila[2] = objUsuario->Correo;
	fila[3] = objUsuario->UserName;
	fila[4] = objUsuario->Password;
	fila[5] = objUsuario->Telefono;
	this->dataGridView1->Rows->Add(fila);
}

private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	this->objGestorUsuario->EliminarUsuario(codigoEliminar);
	MessageBox::Show("El usuario ha sido eliminado correctamente");
	MostrarGrilla();
}

private: System::Void FrmMantUsuario_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorUsuario->EscribirArchivo();
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevoUsuario^ VentanaNuevoUsuario = gcnew frmNuevoUsuario(this->objGestorUsuario);
	VentanaNuevoUsuario->ShowDialog();
	MostrarGrilla();
}

private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEditar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	frmEditarUsuario^ VentanaEditarUsuario = gcnew frmEditarUsuario(this->objGestorUsuario, codigoEditar);
	VentanaEditarUsuario->ShowDialog();
	MostrarGrilla();
}
};
}
