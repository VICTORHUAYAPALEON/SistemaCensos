#pragma once

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
	/// Resumen de frmAgregarCensador
	/// </summary>
	public ref class frmAgregarCensador : public System::Windows::Forms::Form
	{
	public:
		frmAgregarCensador(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmAgregarCensador(Censador^ objCensador)
		{
			InitializeComponent();
			this->objCensadorSeleccionado = objCensador;
			this->objGestorCensador = gcnew GestorCensador();

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarCensador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Direccion;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: Censador^ objCensadorSeleccionado;
	private: GestorCensador^ objGestorCensador;
	


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(319, 421);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(164, 31);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarCensador::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Direccion
			});
			this->dataGridView1->Location = System::Drawing::Point(36, 165);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(733, 230);
			this->dataGridView1->TabIndex = 15;
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
			this->Column2->HeaderText = L"Nombre";
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
			// Direccion
			// 
			this->Direccion->HeaderText = L"DNI";
			this->Direccion->MinimumWidth = 6;
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(36, 37);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(733, 75);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"DNI";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(508, 20);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarCensador::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(204, 23);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 22);
			this->textBox1->TabIndex = 0;
			// 
			// frmAgregarCensador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 491);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAgregarCensador";
			this->Text = L"frmAgregarCensador";
			this->Load += gcnew System::EventHandler(this, &frmAgregarCensador::frmAgregarCensador_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	
		

	private: System::Void frmAgregarCensador_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: void MostrarGrilla() {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < this->objGestorCensador->ObtenerCantidadCensador(); i++) {
			Censador^ objCensador = this->objGestorCensador->ObtenerCensadorLista(i);
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objCensador->Codigo);
			fila[1] = objCensador->Nombres;
			fila[2] = objCensador->Apellido_Paterno;
			fila[3] = objCensador->Apellido_Materno;
			fila[4] = objCensador->DNI;
			this->dataGridView1->Rows->Add(fila);
		}
	}
	private: System::Void frmAgregarCensador_Load_1(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorCensador->LeerCensadorDesdeArchivo();
		MostrarGrilla();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoCensador = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
	Censador^ objCensadorSeleccionado = this->objGestorCensador->ObtenerContactoxCodigo(codigoCensador);
	this->objCensadorSeleccionado->Codigo = objCensadorSeleccionado->Codigo;
	this->objCensadorSeleccionado->Nombres = objCensadorSeleccionado->Nombres;
	this->objCensadorSeleccionado->Apellido_Paterno = objCensadorSeleccionado->Apellido_Paterno;
	this->objCensadorSeleccionado->Apellido_Materno = objCensadorSeleccionado->Apellido_Materno;
	this->objCensadorSeleccionado->DNI = objCensadorSeleccionado->DNI;
	this->objCensadorSeleccionado->Username = objCensadorSeleccionado->Username;
	this->objCensadorSeleccionado->Password = objCensadorSeleccionado->Password;
	MessageBox::Show("Censador Asociado al Censo");
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ DNI = this->textBox1->Text;
	Censador^ objCensador = this->objGestorCensador->ObtenerCensadorxDNI(DNI);

	if (objCensador != nullptr) {
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(5);
		fila[0] = Convert::ToString(objCensador->Codigo);
		fila[1] = objCensador->Nombres;
		fila[2] = objCensador->Apellido_Paterno;
		fila[3] = objCensador->Apellido_Materno;
		fila[4] = objCensador->DNI;
		this->dataGridView1->Rows->Add(fila);
	}
	else {
		MessageBox::Show("No hay censador con dicho DNI");
		MostrarGrilla();
	}
}
};
}
