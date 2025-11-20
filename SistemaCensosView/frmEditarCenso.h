#pragma once
#include "frmAgregarEmpresa.h"

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
	/// Resumen de frmEditarCenso
	/// </summary>
	public ref class frmEditarCenso : public System::Windows::Forms::Form
	{
	public:
		frmEditarCenso(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmEditarCenso(GestorCenso^ objGestorCenso, int codigoEditar) {
			InitializeComponent();
			this->objGestorCenso = objGestorCenso;
			this->codigoEditar = codigoEditar;
			this->objEmpresa = gcnew Empresa();
			this->objGestorFormularioSalvar = gcnew GestorFormulario();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmEditarCenso()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: GestorCenso^ objGestorCenso;
	private: Empresa^ objEmpresa;
	private: int codigoEditar;
	private: GestorEmpresa^ objGestorEmpresa;
	private: GestorFormulario^ objGestorFormularioSalvar;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;

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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(37, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(417, 244);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Generales del Censo";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(25, 42);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Codigo";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(189, 39);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(137, 20);
			this->textBox10->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(189, 205);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(189, 166);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 20);
			this->textBox2->TabIndex = 8;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(189, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(137, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(189, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Fecha Fin";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fecha Inicio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Region de Interés";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre Censo";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(37, 309);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(482, 295);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Datos de Empresa";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(367, 119);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 62);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Cambiar Empresa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmEditarCenso::button3_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(189, 239);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 20);
			this->textBox9->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(189, 201);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(137, 20);
			this->textBox8->TabIndex = 11;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(189, 158);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(137, 20);
			this->textBox7->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(189, 119);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 20);
			this->textBox6->TabIndex = 9;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 20);
			this->textBox5->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(189, 40);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(20, 242);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Area Laboral";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 204);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Dirección";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"RUC";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"URL";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(22, 83);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Razon Social";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(40, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Código";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(122, 625);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmEditarCenso::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(316, 625);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmEditarCenso::button2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(62, 278);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Tipo Entidad";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Persona", L"Colegio", L"Universidad" });
			this->comboBox2->Location = System::Drawing::Point(226, 275);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(137, 21);
			this->comboBox2->TabIndex = 12;
			// 
			// frmEditarCenso
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 682);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmEditarCenso";
			this->Text = L"frmEditarCenso";
			this->Load += gcnew System::EventHandler(this, &frmEditarCenso::frmEditarCenso_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmEditarCenso_Load(System::Object^ sender, System::EventArgs^ e) {
		Censo^ objCensoEditar = this->objGestorCenso->ObtenerCensoxCodigo(codigoEditar);

		this->textBox10->Text = Convert::ToString(objCensoEditar->codigo);
		this->textBox10->ReadOnly = "True";

		this->textBox1->Text = objCensoEditar->NombreCenso;
		this->comboBox1->Text = objCensoEditar->RegionInteres;
        this->textBox2->Text = objCensoEditar->FechaInicio;
		this->textBox3->Text = objCensoEditar->FechaFin;
		this->comboBox2->Text = objCensoEditar->objTipoEntidad->tipo;

		this->textBox4->Text = Convert::ToString(objCensoEditar->objEmpresa->codigo);
		this->textBox5->Text = objCensoEditar->objEmpresa->RazonSocial;
		this->textBox6->Text = objCensoEditar->objEmpresa->URL;
		this->textBox7->Text = objCensoEditar->objEmpresa->RUC;
		this->textBox8->Text = objCensoEditar->objEmpresa->Direccion;
		this->textBox9->Text = objCensoEditar->objEmpresa->AreaLaboral;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	frmAgregarEmpresa^ VentanaAgregarEmpresa = gcnew frmAgregarEmpresa(this->objEmpresa);
	VentanaAgregarEmpresa->ShowDialog();
	this->textBox4->Text = Convert::ToString(this->objEmpresa->codigo);
	this->textBox5->Text = this->objEmpresa->RazonSocial;
	this->textBox6->Text = this->objEmpresa->URL;
	this->textBox7->Text = this->objEmpresa->RUC;
	this->textBox8->Text = this->objEmpresa->Direccion;
	this->textBox9->Text = this->objEmpresa->AreaLaboral;
	MessageBox::Show("Empresa Modificada");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigoCenso = Convert::ToInt32(this->textBox10->Text);
	String^ NombreCenso = this->textBox1->Text;
	String^ RegionInteres = this->comboBox1->Text;
	String^ FechaInicio = this->textBox2->Text;
	String^ FechaFin = this->textBox3->Text;

	String^ tipo = this->comboBox2->Text;
	TipoEntidad^ objTipoEntidad = gcnew TipoEntidad(tipo);

	int codigoEmpresa = Convert::ToInt32(this->textBox4->Text);
	String^ RazonSocial = this->textBox5->Text;
	String^ URL = this->textBox6->Text;
	String^ RUC = this->textBox7->Text;
	String^ Direccion = this->textBox8->Text;
	String^ AreaLaboral = this->textBox9->Text;
	Empresa^ objEmpresa = gcnew Empresa(codigoEmpresa, RazonSocial, URL, RUC, Direccion, AreaLaboral);

    Censo ^ objCensoEditar = gcnew Censo(codigoCenso, NombreCenso, RegionInteres, FechaInicio, FechaFin, objEmpresa, objTipoEntidad);
	this->objGestorCenso->EliminarCensoxCodigoSalvaFormularios(codigoCenso,objGestorFormularioSalvar);
	this->objGestorCenso->DevolverListaFormulariosaCenso(objCensoEditar, objGestorFormularioSalvar);
	this->objGestorCenso->AgregarCensoLista(objCensoEditar);
	
	MessageBox::Show("Censo Editado");
	this->Close();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
