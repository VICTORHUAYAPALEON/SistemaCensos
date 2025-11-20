#pragma once
#include "frmVerRespuesta.h"
#include "frmRealizarFormulario.h"
#include "frmIniciarCensoxEntidad.h"


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
	/// Resumen de frmMantRespuestas
	/// </summary>
	public ref class frmMantRespuestas : public System::Windows::Forms::Form
	{
	public:
		frmMantRespuestas(void)
		{
			InitializeComponent();
			this->objGestorCenso = gcnew GestorCenso();
			this->objGestorFormulario = gcnew GestorFormulario();
			this->objGestorCensoxEntidad = gcnew GestorCensoxEntidad();
			this->objCenso = gcnew Censo();

			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmMantRespuestas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: GestorCenso^ objGestorCenso;
	private: GestorFormulario^ objGestorFormulario;
	private: GestorCensoxEntidad^ objGestorCensoxEntidad;
	private: Censo^ objCenso;
	private: String^ tipoEntidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
















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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(37, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(871, 71);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Seleccionar Formulario";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tipo Entidad:";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Persona", L"Colegio", L"Universidad" });
			this->comboBox3->Location = System::Drawing::Point(100, 29);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(158, 21);
			this->comboBox3->TabIndex = 4;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantRespuestas::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(679, 29);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(171, 21);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantRespuestas::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(603, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Formulario: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(364, 29);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(175, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantRespuestas::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(304, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Censo: ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 124);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(871, 136);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantRespuestas::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Código de Respuesta";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Hora";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 120;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Descripción/Observación";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 250;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Censador";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 150;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(469, 307);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 45);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ver Respuesta";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantRespuestas::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(137, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Agregar Datos";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantRespuestas::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(716, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Eliminar Respuesta";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantRespuestas::button3_Click);
			// 
			// frmMantRespuestas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(969, 399);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantRespuestas";
			this->Text = L"frmMantRespuestas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &frmMantRespuestas::frmMantRespuestas_FormClosing);
			this->Load += gcnew System::EventHandler(this, &frmMantRespuestas::frmMantRespuestas_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmMantRespuestas_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorCenso->Deserializar();
		
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreCenso = this->comboBox1->Text;
	objCenso = this->objGestorCenso->ObtenerCensoxNombre(nombreCenso);
	this->comboBox2->Items->Clear();
	this->comboBox2->Text = "";
	for (int i = 0; i < objCenso->listaFormularios->Count; i++) {
		this->comboBox2->Items->Add(objCenso->listaFormularios[i]->Titulo);
	}
	this->dataGridView1->Rows->Clear();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoRespuesta = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		if (this->tipoEntidad == "Colegio") {
			frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad(this->objGestorFormulario, codigoRespuesta);
			VentanaIniciarCensoxEntidad->ShowDialog();
			Button4->Enabled = false;Button1->Enabled = false;
			groupBox1->Enabled = false;groupBox3->Enabled = false;
			textBox2->Enabled = false;textBox1->Enabled = false;textBox8->Enabled = false;
			textBox9->Enabled = false;textBox4->Enabled = false;textBox3->Enabled = false;
		}
		else {
			if (this->tipoEntidad == "Persona") {
				frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad(this->objGestorFormulario, codigoRespuesta);
				VentanaIniciarCensoxEntidad->ShowDialog();
				Button1->Enabled = false;Button2->Enabled = false;
				groupBox2->Enabled = false;groupBox3->Enabled = false;
				textBox6->Enabled = false;textBox7->Enabled = false;textBox5->Enabled = false;
				textBox9->Enabled = false;textBox4->Enabled = false;textBox3->Enabled = false;

			}
			else {
				if (this->tipoEntidad == "Universidad") {
					frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad(this->objGestorFormulario, codigoRespuesta);
					VentanaIniciarCensoxEntidad->ShowDialog();
					Button2->Enabled = false;Button4->Enabled = false;
					groupBox2->Enabled = false;groupBox1->Enabled = false;
					textBox6->Enabled = false;textBox7->Enabled = false;textBox5->Enabled = false;
					textBox2->Enabled = false;textBox1->Enabled = false;textBox8->Enabled = false;
				}
			}
		}
	}*/
	
		
		String^ nombreCenso = this->comboBox1->Text;
		String^ nombreFormulario = this->comboBox2->Text;
		String^ tipoEntidad = this->comboBox3->Text;
		/*frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorCenso, nombreFormulario, this->objCenso, this->objGestorCensoxEntidad);
		VentanaResponderFormulario->ShowDialog();*/
		/*frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad(this->objGestorFormulario, codigoRespuesta);*/
		this->objGestorCenso->GenerarGestorCensoxEntidad(objCenso,nombreFormulario,this-> objGestorCensoxEntidad);
		frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad(this->objCenso,this->objGestorCensoxEntidad, nombreFormulario);
		VentanaIniciarCensoxEntidad->ShowDialog();
		MostrarGrilla();
		/*Formulario respóndido y se actualiza la grilla*/


}

	private: void MostrarGrilla() {
		   this->dataGridView1->Rows->Clear();
		   String^ NombreCensador;
		   for (int i = 0; i < this->objGestorCensoxEntidad->ObtenerCantCensoxEntidad(); i++) {
			   CensoxEntidad^ objCensoxEntidad = this->objGestorCensoxEntidad->ObtenerCensoxEntidadDeLista(i);
			   array<String^>^ fila = gcnew array<String^>(5);
			   fila[0] = Convert::ToString(objCensoxEntidad->codigoCensoxEntidad);
			   fila[1] = objCensoxEntidad->Fecha;
			   fila[2] = objCensoxEntidad->Hora;
			   fila[3] = objCensoxEntidad->Descripcion;
			   NombreCensador = objCensoxEntidad->objCensador->Nombres + " " + objCensoxEntidad->objCensador->Apellido_Paterno;
			   fila[4] = NombreCensador;
			   this->dataGridView1->Rows->Add(fila);
		   }
		}
	private: void MostrarGrilla(List<CensoxEntidad^>^ listaCensosxEntidad) {
		this->dataGridView1->Rows->Clear();
		String^ NombreCensador;
		for (int i = 0; i < listaCensosxEntidad->Count; i++) {
			CensoxEntidad^ objCensoxEntidad = listaCensosxEntidad[i];
			array<String^>^ fila = gcnew array<String^>(5);
			fila[0] = Convert::ToString(objCensoxEntidad->codigoCensoxEntidad);
			fila[1] = objCensoxEntidad->Fecha;
			fila[2] = objCensoxEntidad->Hora;
			fila[3] = objCensoxEntidad->Descripcion;
			NombreCensador = objCensoxEntidad->objCensador->Nombres +" "+ objCensoxEntidad->objCensador->Apellido_Paterno;
			fila[4] = NombreCensador;
			this->dataGridView1->Rows->Add(fila);
		}
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ nombreCenso = this->comboBox1->Text;
		String^ nombreFormulario = this->comboBox2->Text;
		/*formar gestor Censo por entidad*/
		Censo^ objCenso = this->objGestorCenso->ObtenerCensoxNombre(nombreCenso);
	    MostrarGrilla(objCenso->listaCensosxEntidad);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreFormulario = this->comboBox2->Text;
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoVer = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());

		frmVerRespuesta^ VentanaVerRespuesta = gcnew frmVerRespuesta(this->objGestorCenso,codigoVer, nombreFormulario, this->objCenso, this->objGestorCensoxEntidad);
		VentanaVerRespuesta->ShowDialog();
		this->Close();
	}

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ tipo = this->comboBox3->Text;
    this->comboBox1->Items->Clear();
	this->comboBox1->Text = "";
	this->comboBox2->Items->Clear();
	this->comboBox2->Text = "";
	for (int i = 0; i < this->objGestorCenso->ObtenerCantCensos(); i++) {
		objCenso = this->objGestorCenso->ObtenerCensosDeLista(i);
		if (objCenso->objTipoEntidad->tipo == tipo) {
			this->comboBox1->Items->Add(objCenso->NombreCenso);
		}
	}
	this->dataGridView1->Rows->Clear();
}
private: System::Void frmMantRespuestas_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->objGestorCenso->Serializar();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nombreCenso = this->comboBox1->Text;
	String^ nombreFormulario = this->comboBox2->Text;
	Censo^ objCenso = this->objGestorCenso->ObtenerCensoxNombre(nombreCenso);
	if (this->dataGridView1->SelectedRows->Count > 0) {
		int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index;
		int codigoEliminar = Convert::ToInt32(this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString());
		int lim = objCenso->listaCensosxEntidad->Count;
		for (int i = 0; i<lim; i++) { 
			if (objCenso->listaCensosxEntidad[i]->codigoCensoxEntidad == codigoEliminar && objCenso->listaCensosxEntidad[i]->formularioAsociado == nombreFormulario) {
				objCenso->listaCensosxEntidad->RemoveAt(i);
				break;
		}
	
	}
		this->objGestorCenso->EliminarCensoxCodigo(objCenso->codigo);
		this->objGestorCenso->AgregarCensoLista(objCenso);
		this->objCenso = objCenso;
		MessageBox::Show("El CensoxEntidad ha sido eliminado correctamente");
		this->dataGridView1->Rows->Clear();
		MostrarGrilla(objCenso->listaCensosxEntidad);
}


}
};
}
