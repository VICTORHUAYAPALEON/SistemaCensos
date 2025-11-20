#pragma once
#include "frmNuevaUniversidad.h"
#include "frmEditarUniversidad.h"


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
	/// Resumen de frmMantEntidadUniversidad
	/// </summary>
	public ref class frmMantEntidadUniversidad : public System::Windows::Forms::Form
	{
	public:
		frmMantEntidadUniversidad(void)
		{
			InitializeComponent();
			this->objGestorUniversidad = gcnew GestorEntidadUniversidad();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantEntidadUniversidad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;






	private: GestorEntidadUniversidad^ objGestorUniversidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;






























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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(39, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(603, 75);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(497, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::Buscar);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(239, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(78, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de Universidad";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 173);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantEntidadUniversidad::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre de Universidad";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Dirección";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Teléfono";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de Gestión";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Página Web";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Licencia";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 60;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(452, 277);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 28);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(177, 278);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 27);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(312, 278);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 27);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Editar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::button5_Click);
			// 
			// frmMantEntidadUniversidad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 314);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantEntidadUniversidad";
			this->Text = L"frmMantEntidadUniversidad";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantEntidadUniversidad::frmMantEntidadUniversidad_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantEntidadUniversidad::CargarVentana);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
	   private:void ActualizarGrilla() {
		   for (int i = 0; i < objGestorUniversidad->ObtenerCantUniversidades(); i++) {
			   EntidadUniversidad^ objUniversidad = objGestorUniversidad->ObtenerUniversidadDeLista(i);
			   array<String^>^ fila = gcnew array<String^>(8);
			   fila[0] = objUniversidad->nombre;
			   fila[1] = objUniversidad->direccion;
			   fila[2] = objUniversidad->telefono;
			   fila[3] = objUniversidad->tipoGestion;
			   fila[4] = objUniversidad->paginaWeb;
			   fila[5] = objUniversidad->licenciaSunedu;
			   this->dataGridView1->Rows->Add(fila);
		   }
	   }
private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {
	/*Solo se lee una vez los datos del archivo*/
	this->objGestorUniversidad->LeerUniversidadDesdeArchivo();
	ActualizarGrilla();
}
	private: System::Void Buscar(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;

		if (nombre != nullptr) {
			EntidadUniversidad^ objUniversidad = this->objGestorUniversidad->ObtenerUniversidadxNombre(nombre);
			if (objUniversidad != nullptr) {
				this->dataGridView1->Rows->Clear();
				array<String^>^ fila = gcnew array<String^>(6);
				fila[0] = objUniversidad->nombre;
				fila[1] = objUniversidad->direccion;
				fila[2] = objUniversidad->telefono;
				fila[3] = objUniversidad->tipoGestion;
				fila[4] = objUniversidad->paginaWeb;
				fila[5] = objUniversidad->licenciaSunedu;
				this->dataGridView1->Rows->Add(fila);
			}
			else {
				this->dataGridView1->Rows->Clear();
				ActualizarGrilla();
			}
		};
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaUniversidad^ ventanaNuevaUniversidad = gcnew frmNuevaUniversidad(this->objGestorUniversidad); /*Añadimos la ventana Nuevo Colegio*/
	ventanaNuevaUniversidad->ShowDialog();
	this->dataGridView1->Rows->Clear();
	ActualizarGrilla();
}
private: System::Void frmMantEntidadUniversidad_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorUniversidad->EscribirEnArchivo();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaEliminar = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		String^ nombreEliminar = this->dataGridView1->Rows[filaEliminar]->Cells[0]->Value->ToString();
		this->objGestorUniversidad->EliminarUniversidad(nombreEliminar);
		MessageBox::Show("Universidad eliminada de la lista");
		this->dataGridView1->Rows->Clear();
		ActualizarGrilla();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaEditar = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		String^ nombreEditar = this->dataGridView1->Rows[filaEditar]->Cells[0]->Value->ToString();
		frmEditarUniversidad^ ventanaEditarUniversidad = gcnew frmEditarUniversidad(this->objGestorUniversidad, nombreEditar); /*Añadimos la ventana Nuevo Colegio*/
		ventanaEditarUniversidad->ShowDialog();
		this->dataGridView1->Rows->Clear();
		ActualizarGrilla();
	}
}
};
}
