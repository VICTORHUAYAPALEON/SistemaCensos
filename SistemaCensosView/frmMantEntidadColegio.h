#pragma once
#include "frmNuevoColegio.h"
#include "frmEditarColegio.h"


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
	/// Resumen de frmMantEntidadColegio
	/// </summary>
	public ref class frmMantEntidadColegio : public System::Windows::Forms::Form
	{
	public:
		frmMantEntidadColegio(void)
		{
			InitializeComponent();
			this->objGestorColegio = gcnew GestorEntidadColegio();
			//
			//TODO: agregar código de constructor aquí
			//
		}
	
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantEntidadColegio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: GestorEntidadColegio^ objGestorColegio;




























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 28);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Borrar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantEntidadColegio::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 27);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantEntidadColegio::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(287, 284);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 27);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Editar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmMantEntidadColegio::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8
			});
			this->dataGridView1->Location = System::Drawing::Point(39, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(597, 173);
			this->dataGridView1->TabIndex = 9;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre de Institución";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Dirección";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Teléfono";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Nombre de Ugel";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Código Modular";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Nivel Educativo";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Tipo de Gestión";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Turno";
			this->Column8->Name = L"Column8";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(39, 8);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(597, 75);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Busqueda";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(480, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantEntidadColegio::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(220, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(86, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre Institución";
			// 
			// frmMantEntidadColegio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 342);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantEntidadColegio";
			this->Text = L"frmMantEntidadColegio";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantEntidadColegio::frmMantEntidadColegio_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantEntidadColegio::CargarVentana);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CargarVentana(System::Object^ sender, System::EventArgs^ e) {
		/*Solo se lee una vez los datos del archivo*/
		this->objGestorColegio->LeerColegioDesdeArchivo();
		ActualizarGrilla();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = this->textBox1->Text;
		if (nombre != nullptr) {
			EntidadColegio^ objColegio = this->objGestorColegio->ObtenerColegioxNombre(nombre);
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
				this->dataGridView1->Rows->Clear();
				ActualizarGrilla();
			}
		};
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*Considerar los objetos ventana sin el frm, cometí error al nombrarlos*/
	frmNuevoColegio^ ventanaNuevoColegio = gcnew frmNuevoColegio(this->objGestorColegio); /*Añadimos la ventana Nuevo Colegio*/
	ventanaNuevoColegio->ShowDialog();
	this->dataGridView1->Rows->Clear();
	ActualizarGrilla();
}
private: System::Void frmMantEntidadColegio_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorColegio->EscribirEnArchivo();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaEliminar = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		String^ nombreEliminar = this->dataGridView1->Rows[filaEliminar]->Cells[0]->Value->ToString();
		this->objGestorColegio->EliminarColegio(nombreEliminar);
		MessageBox::Show("Colegio eliminado de la lista");
		this->dataGridView1->Rows->Clear();
		ActualizarGrilla();
	}
}
	   private: void ActualizarGrilla() {
		   for (int i = 0; i < objGestorColegio->ObtenerCantColegios(); i++) {
			   EntidadColegio^ objColegio = objGestorColegio->ObtenerColegioDeLista(i);
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
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaEditar = this->dataGridView1->SelectedRows[0]->Index; /*acumulamos la fila en un arreglo y nos da su direccion*/
		String^ nombreEditar = this->dataGridView1->Rows[filaEditar]->Cells[0]->Value->ToString();
		frmEditarColegio^ ventanaEditarColegio = gcnew frmEditarColegio(this->objGestorColegio, nombreEditar); /*Añadimos la ventana Nuevo Colegio*/
		ventanaEditarColegio->ShowDialog();
		this->dataGridView1->Rows->Clear();
		ActualizarGrilla();
	}
}
};
	};

