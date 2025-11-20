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
	/// Resumen de AgregarUniversidad
	/// </summary>
	public ref class AgregarUniversidad : public System::Windows::Forms::Form
	{
	public:
		AgregarUniversidad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		AgregarUniversidad(EntidadUniversidad^ objUniversidad)
		{
			InitializeComponent();
			this->objUniversidadSeleccionado = objUniversidad;
			this->objGestorEntidadUniversidad = gcnew GestorEntidadUniversidad();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarUniversidad()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: EntidadUniversidad^ objUniversidadSeleccionado;
	private: GestorEntidadUniversidad^ objGestorEntidadUniversidad;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->groupBox1->Location = System::Drawing::Point(71, 49);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(753, 92);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(622, 41);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarUniversidad::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(319, 48);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(257, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(104, 52);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre de Universidad";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(377, 465);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 44);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AgregarUniversidad::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(71, 193);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(722, 213);
			this->dataGridView1->TabIndex = 16;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre de Universidad";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 150;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Dirección";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Teléfono";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Tipo de Gestión";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 80;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Página Web";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Licencia";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 60;
			// 
			// AgregarUniversidad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(856, 547);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AgregarUniversidad";
			this->Text = L"AgregarUniversidad";
			this->Load += gcnew System::EventHandler(this, &AgregarUniversidad::AgregarUniversidad_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ NombreUniversidad = this->textBox1->Text;
		EntidadUniversidad^ objUniversidad = objGestorEntidadUniversidad->ObtenerUniversidadxNombre(NombreUniversidad);

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
			MessageBox::Show("No hay Universidad con dicho nombre");
			MostrarGrilla();
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ NombreUniversidad = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		EntidadUniversidad^ objUniversidadSeleccionado = this->objGestorEntidadUniversidad->ObtenerUniversidadxNombre(NombreUniversidad);
		this->objUniversidadSeleccionado->nombre = objUniversidadSeleccionado->nombre;
		this->objUniversidadSeleccionado->direccion = objUniversidadSeleccionado->direccion;
		this->objUniversidadSeleccionado->telefono = objUniversidadSeleccionado->telefono;
		this->objUniversidadSeleccionado->paginaWeb = objUniversidadSeleccionado->paginaWeb;
		this->objUniversidadSeleccionado->licenciaSunedu = objUniversidadSeleccionado->licenciaSunedu;
		
		MessageBox::Show("Universidad Asociada al Censo");
		this->Close();
	}
}
private: System::Void AgregarUniversidad_Load(System::Object^ sender, System::EventArgs^ e) {
	this->objGestorEntidadUniversidad->LeerUniversidadDesdeArchivo();
	MostrarGrilla();
}
	   private: void MostrarGrilla() {
		   for (int i = 0; i < objGestorEntidadUniversidad->ObtenerCantUniversidades(); i++) {
			   EntidadUniversidad^ objUniversidad = objGestorEntidadUniversidad->ObtenerUniversidadDeLista(i);
			   array<String^>^ fila = gcnew array<String^>(6);
			   fila[0] = objUniversidad->nombre;
			   fila[1] = objUniversidad->direccion;
			   fila[2] = objUniversidad->telefono;
			   fila[3] = objUniversidad->tipoGestion;
			   fila[4] = objUniversidad->paginaWeb;
			   fila[5] = objUniversidad->licenciaSunedu;
			   this->dataGridView1->Rows->Add(fila);
		   }
	   }
};
}
