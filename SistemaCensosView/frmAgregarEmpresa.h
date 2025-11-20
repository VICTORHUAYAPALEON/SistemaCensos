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
	/// Resumen de frmAgregarEmpresa
	/// </summary>
	public ref class frmAgregarEmpresa : public System::Windows::Forms::Form
	{
	public:
		frmAgregarEmpresa(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		frmAgregarEmpresa(Empresa^ objEmpresa) {
			InitializeComponent();
			this-> objEmpresaSeleccionada = objEmpresa;
			this->objGestorEmpresa = gcnew GestorEmpresa();
			//
			//TODO: agregar código de constructor aquí
			//

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmAgregarEmpresa()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
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
	private: System::Windows::Forms::Button^ button2;
	private: GestorEmpresa^ objGestorEmpresa;
	private: Empresa^ objEmpresaSeleccionada;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Direccion = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(32, 26);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(617, 61);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Búsqueda";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Razón Social";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(381, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 25);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAgregarEmpresa::button1_Click);
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
			this->dataGridView1->Location = System::Drawing::Point(32, 130);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(635, 147);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Codigo";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Razon Social";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"URL";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"RUC";
			this->Column4->Name = L"Column4";
			// 
			// Direccion
			// 
			this->Direccion->HeaderText = L"Direccion";
			this->Direccion->Name = L"Direccion";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Area Laboral";
			this->Column5->Name = L"Column5";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(288, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 25);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Seleccionar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAgregarEmpresa::button2_Click);
			// 
			// frmAgregarEmpresa
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 372);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmAgregarEmpresa";
			this->Text = L"frmAgregarEmpresa";
			this->Load += gcnew System::EventHandler(this, &frmAgregarEmpresa::frmAgregarEmpresa_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmAgregarEmpresa_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorEmpresa->LeerEmpresaDesdeArchivo();
		MostrarGrilla();
	}
			private: void MostrarGrilla() {
				this->dataGridView1->Rows->Clear();
				for (int i = 0; i < this->objGestorEmpresa->ObtenerCantidadEmpresas(); i++) {
					Empresa^ objEmpresa = this->objGestorEmpresa->ObtenerEmpresaLista(i);
					array<String^>^ fila = gcnew array<String^>(6);
					fila[0] = Convert::ToString(objEmpresa->codigo);
					fila[1] = objEmpresa->RazonSocial;
					fila[2] = objEmpresa->URL;
					fila[3] = objEmpresa->RUC;
					fila[4] = objEmpresa->Direccion;
					fila[5] = objEmpresa->AreaLaboral;
					this->dataGridView1->Rows->Add(fila);
				}
			}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
	int codigoEmpresa = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
    Empresa^ objEmpresaSeleccionada = this->objGestorEmpresa-> ObtenerEmpresaxcodigo(codigoEmpresa);
	this->objEmpresaSeleccionada->codigo = objEmpresaSeleccionada->codigo;
	this->objEmpresaSeleccionada->RazonSocial = objEmpresaSeleccionada->RazonSocial;
	this->objEmpresaSeleccionada->URL = objEmpresaSeleccionada->URL;
	this->objEmpresaSeleccionada->RUC = objEmpresaSeleccionada->RUC;
	this->objEmpresaSeleccionada->Direccion = objEmpresaSeleccionada->Direccion;
	this->objEmpresaSeleccionada->AreaLaboral = objEmpresaSeleccionada->AreaLaboral;

	MessageBox::Show("Empresa Asociada al Censo");
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ RazonSocial = this->textBox1->Text;
	Empresa^ objEmpresa = this->objGestorEmpresa->ObtenerEmpresaxRazonSocial(RazonSocial);

	if (objEmpresa != nullptr) {
		this->dataGridView1->Rows->Clear();
		array<String^>^ fila = gcnew array<String^>(6);
		fila[0] = Convert::ToString(objEmpresa->codigo);
		fila[1] = objEmpresa->RazonSocial;
		fila[2] = objEmpresa->URL;
		fila[3] = objEmpresa->RUC;
		fila[4] = objEmpresa->Direccion;
		fila[5] = objEmpresa->AreaLaboral;
		this->dataGridView1->Rows->Add(fila);
	}
	else {
		MessageBox::Show("No hay empresa con dicha Razon social");
		MostrarGrilla();
	}
}
};
}
