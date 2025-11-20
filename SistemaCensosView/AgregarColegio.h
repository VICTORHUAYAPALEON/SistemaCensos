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
	/// Resumen de AgregarColegio
	/// </summary>
	public ref class AgregarColegio : public System::Windows::Forms::Form
	{
	public:
		AgregarColegio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		AgregarColegio(EntidadColegio^ objColegio)
		{
			InitializeComponent();
			this->objColegioSeleccionado = objColegio;
			this->objGestorEntidadColegio = gcnew GestorEntidadColegio();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AgregarColegio()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: EntidadColegio^ objColegioSeleccionado;
	private: GestorEntidadColegio^ objGestorEntidadColegio;


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
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->button2->Location = System::Drawing::Point(393, 418);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 44);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AgregarColegio::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Direccion, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(63, 191);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(718, 181);
			this->dataGridView1->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre de Institución";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Dirección";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
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
			this->Column4->HeaderText = L"Nombre UGEL";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Código Modular";
			this->Direccion->MinimumWidth = 6;
			this->Direccion->Name = L"Direccion";
			this->Direccion->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Nivel Educativo";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Tipo de Gestión";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Turno";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(54, 63);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(703, 75);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Nombre Institución";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(532, 23);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AgregarColegio::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(243, 23);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 22);
			this->textBox1->TabIndex = 0;
			// 
			// AgregarColegio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(835, 524);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AgregarColegio";
			this->Text = L"AgregarColegio";
			this->Load += gcnew System::EventHandler(this, &AgregarColegio::AgregarColegio_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void MostrarGrilla() {
		for (int i = 0; i < objGestorEntidadColegio->ObtenerCantColegios(); i++) {
				EntidadColegio^ objColegio = objGestorEntidadColegio->ObtenerColegioDeLista(i);
				array<String^>^ fila = gcnew array<String^>(8);
				fila[0] = objColegio->nombre;
				fila[1] = objColegio->direccion;
				fila[2] = objColegio->telefono;
				fila[3] = objColegio->nombreUgel;
				fila[4] = objColegio->codigoModular;
				fila[5] = objColegio->nivelEducativo;
				fila[6] = objColegio->tipoGestion;
				fila[7] = objColegio->Turno;
				this->dataGridView1->Rows->Add(fila);
			}
		}
	private: System::Void AgregarColegio_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorEntidadColegio->LeerColegioDesdeArchivo();
		MostrarGrilla();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ NombreInstitucion = this->textBox1->Text;
	EntidadColegio^ objColegio = this->objGestorEntidadColegio->ObtenerColegioxNombre(NombreInstitucion);

	if (objColegio != nullptr) {
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(8);
		fila[0] = objColegio->nombre;
		fila[1] = objColegio->direccion;
		fila[2] = objColegio->telefono;
		fila[3] = objColegio->nombreUgel;
		fila[4] = objColegio->codigoModular;
		fila[5] = objColegio->nivelEducativo;
		fila[6] = objColegio->tipoGestion;
		fila[7] = objColegio->Turno;
		this->dataGridView1->Rows->Add(fila);
	}
	else {
		MessageBox::Show("No hay Colegio con dicho nombre");
		MostrarGrilla();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		String^ nombreColegio = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
		EntidadColegio^ objColegioSeleccionado = this->objGestorEntidadColegio->ObtenerColegioxNombre(nombreColegio);
		if (objColegioSeleccionado != nullptr) {
			this->objColegioSeleccionado->nombre = objColegioSeleccionado->nombre;
			this->objColegioSeleccionado->direccion = objColegioSeleccionado->direccion;
			this->objColegioSeleccionado->telefono = objColegioSeleccionado->telefono;
			this->objColegioSeleccionado->nombreUgel = objColegioSeleccionado->nombreUgel;
			this->objColegioSeleccionado->codigoModular = objColegioSeleccionado->codigoModular;
			this->objColegioSeleccionado->nivelEducativo = objColegioSeleccionado->nivelEducativo;
			this->objColegioSeleccionado->tipoGestion = objColegioSeleccionado->tipoGestion;
			this->objColegioSeleccionado->Turno = objColegioSeleccionado->Turno;

			MessageBox::Show("Colegio Asociado al Censo");
			this->Close();
		}
	}
}
};
}
