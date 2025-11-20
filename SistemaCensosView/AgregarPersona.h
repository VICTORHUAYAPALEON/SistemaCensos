#pragma once

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
	/// Resumen de AgregarPersona
	/// </summary>
	public ref class AgregarPersona : public System::Windows::Forms::Form
	{
	public:
		AgregarPersona(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		AgregarPersona(EntidadPersona^ objPersona)
		{
			InitializeComponent();
			this->objPersonaSeleccionado = objPersona;
			this->objGestorEntidadPersona = gcnew GestorEntidadPersona();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarPersona()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: EntidadPersona^ objPersonaSeleccionado;
	private: GestorEntidadPersona^ objGestorEntidadPersona;

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
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(341, 421);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 44);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AgregarPersona::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 198);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(787, 203);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombres";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido Paterno";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellido Materno";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"dni";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Edad";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Sexo";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Telefono";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(56, 65);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(628, 125);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(96, 58);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Dni";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 54);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 22);
			this->textBox1->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(447, 52);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Buscar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AgregarPersona::button4_Click);
			// 
			// AgregarPersona
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(844, 531);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AgregarPersona";
			this->Text = L"AgregarPersona";
			this->Load += gcnew System::EventHandler(this, &AgregarPersona::AgregarPersona_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void MostrarGrilla() {
		for (int i = 0; i < objGestorEntidadPersona->ObtenerCantidadEntidadPersonas(); i++) {
			EntidadPersona^ objPersona = objGestorEntidadPersona->ObtenerEntidadPersonaLista(i);
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
	private: System::Void AgregarPersona_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorEntidadPersona->LeerEntidadPersonaDesdeArchivo();
		MostrarGrilla();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ dni = this->textBox1->Text;
	EntidadPersona^ objPersona = objGestorEntidadPersona->ObtenerEntidadPersonaxDni(dni);

	if (objPersona != nullptr) {
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
	else {
		MessageBox::Show("No hay Persona con dicho DNI");
		MostrarGrilla();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ dni = this->dataGridView1->Rows[filaSeleccionada]->Cells[3]->Value->ToString();
		EntidadPersona^ objPersonaSeleccionado = this->objGestorEntidadPersona->ObtenerEntidadPersonaxDni(dni);
		this->objPersonaSeleccionado->nombre = objPersonaSeleccionado->nombre;
		this->objPersonaSeleccionado->apellidoPaterno = objPersonaSeleccionado->apellidoPaterno;
		this->objPersonaSeleccionado->apellidoMaterno = objPersonaSeleccionado->apellidoMaterno;
		this->objPersonaSeleccionado->dni = objPersonaSeleccionado->dni;
		this->objPersonaSeleccionado->edad = objPersonaSeleccionado->edad;
		this->objPersonaSeleccionado->sexo = objPersonaSeleccionado->sexo;
		this->objPersonaSeleccionado->telefono = objPersonaSeleccionado->telefono;

		MessageBox::Show("Persona Asociado al Censo");
		this->Close();
	}
}
};
}
