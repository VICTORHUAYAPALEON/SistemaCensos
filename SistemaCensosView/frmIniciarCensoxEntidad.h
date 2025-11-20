#pragma once
#include "frmAgregarCensador.h"
#include "AgregarPersona.h"
#include "AgregarUniversidad.h"
#include "AgregarColegio.h"
#include "frmRealizarFormulario.h"

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
	/// Resumen de frmIniciarCensoxEntidad
	/// </summary>
	public ref class frmIniciarCensoxEntidad : public System::Windows::Forms::Form
	{
	public:
		frmIniciarCensoxEntidad(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmIniciarCensoxEntidad(GestorFormulario^ objGestorFormulario, int codigoFormulario, String^ tipoEntidad)
		{
			InitializeComponent();
			this->objGestorFormulario = objGestorFormulario;
			this->codigoFormulario = codigoFormulario;
			this->objGestorCensoxEntidad = gcnew GestorCensoxEntidad();
			this->objCensador = gcnew Censador();
			this->objPersona = gcnew EntidadPersona();
			this->objColegio = gcnew EntidadColegio();
			this->objUniversidad= gcnew EntidadUniversidad();
			this->tipoEntidad = tipoEntidad;
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmIniciarCensoxEntidad(Censo^ objCenso, GestorCensoxEntidad^ objGestorCensoxEntidad, String^ nombreFormulario)
		{
			InitializeComponent();
			this->objCenso = objCenso;
			this->objGestorCensoxEntidad = objGestorCensoxEntidad;
			this->nombreFormulario = nombreFormulario;

			this->objGestorCenso = gcnew GestorCenso();
			this->objPersona = gcnew EntidadPersona();
			this->objColegio = gcnew EntidadColegio();
			this->objUniversidad = gcnew EntidadUniversidad();
			//
			//TODO: agregar código de constructor aquí
			//
		}


	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmIniciarCensoxEntidad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: GestorCensoxEntidad^ objGestorCensoxEntidad;
	private: Censador^ objCensador;
	private: EntidadPersona^ objPersona;
	private: EntidadColegio^ objColegio;
	private: EntidadUniversidad^ objUniversidad;
	private: GestorFormulario^ objGestorFormulario;
	private: int codigoFormulario;
	private: String^ tipoEntidad;
	private: Censo^ objCenso;
	private: GestorCenso^ objGestorCenso;
	private: String^ TipoEntidadSeleccionado;  
	private: String^ nombreFormulario;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(710, 92);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 81);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Agregar \r\nColegio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox5);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Location = System::Drawing::Point(55, 23);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(485, 200);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Colegio";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::groupBox2_Enter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(31, 145);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Nivel Educativo";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(252, 140);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(191, 22);
			this->textBox5->TabIndex = 14;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(252, 55);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(191, 22);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 101);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Código Modular";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 58);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Nombre de Institución";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(252, 98);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(191, 22);
			this->textBox7->TabIndex = 12;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(710, 271);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(183, 80);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Agregar\r\n Persona";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(55, 230);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(485, 169);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Persona";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(252, 115);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(191, 22);
			this->textBox8->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(252, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(191, 22);
			this->textBox1->TabIndex = 11;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(252, 38);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 22);
			this->textBox2->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(42, 106);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 17);
			this->label9->TabIndex = 2;
			this->label9->Text = L"DNI";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 17);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Apellido Paterno";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombres";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(710, 444);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 80);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Agregar\r\nUniversidad";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(55, 403);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(485, 169);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Persona";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(252, 115);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(191, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(252, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(191, 22);
			this->textBox4->TabIndex = 11;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(252, 38);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(191, 22);
			this->textBox9->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Telefono";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Direccion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 17);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Nombre de Universidad";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(321, 598);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 39);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Iniciar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(629, 598);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 39);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Cancelar";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::button5_Click);
			// 
			// frmIniciarCensoxEntidad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1130, 666);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox2);
			this->Name = L"frmIniciarCensoxEntidad";
			this->Text = L"frmIniciarCensoxEntidad";
			this->Load += gcnew System::EventHandler(this, &frmIniciarCensoxEntidad::frmIniciarCensoxEntidad_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmIniciarCensoxEntidad_Load(System::Object^ sender, System::EventArgs^ e) {
		this->objGestorCenso->Serializar();
		
		
		this->TipoEntidadSeleccionado = this->objCenso->objTipoEntidad->tipo;
		if (this->TipoEntidadSeleccionado == "Colegio") {
			/*frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad();
			VentanaIniciarCensoxEntidad->ShowDialog();*/
			this->button4->Enabled = false; this->button1->Enabled = false;
			this->groupBox1->Enabled = false; this->groupBox3->Enabled = false;
			this->textBox2->Enabled = false; this->textBox1->Enabled = false; this->textBox8->Enabled = false;
			this->textBox9->Enabled = false; this->textBox4->Enabled = false; this->textBox3->Enabled = false;
		}
		else {
			if (this->TipoEntidadSeleccionado == "Persona") {
				/*frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad();
				VentanaIniciarCensoxEntidad->ShowDialog();*/
				this->button1->Enabled = false; this->button2->Enabled = false;
				this->groupBox2->Enabled = false; this->groupBox3->Enabled = false;
				this->textBox6->Enabled = false; this->textBox7->Enabled = false; this->textBox5->Enabled = false;
				this->textBox9->Enabled = false; this->textBox4->Enabled = false; this->textBox3->Enabled = false;

			}
			else {
				if (this->TipoEntidadSeleccionado == "Universidad") {
					/*frmIniciarCensoxEntidad^ VentanaIniciarCensoxEntidad = gcnew frmIniciarCensoxEntidad();
					VentanaIniciarCensoxEntidad->ShowDialog();*/
					this->button2->Enabled = false; this->button4->Enabled = false;
					this->groupBox2->Enabled = false; this->groupBox1->Enabled = false;
					this->textBox6->Enabled = false; this->textBox7->Enabled = false; this->textBox5->Enabled = false;
					this->textBox2->Enabled = false; this->textBox1->Enabled = false; this->textBox8->Enabled = false;
				}
			}
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarColegio^ VentanaAgregarColegio = gcnew AgregarColegio(this->objColegio);
	VentanaAgregarColegio->ShowDialog();
	if (objColegio != nullptr) {
		this->textBox6->Text = this->objColegio->nombre;
		this->textBox7->Text = this->objColegio->codigoModular;
		this->textBox5->Text = this->objColegio->nivelEducativo;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarPersona^ VentanaAgregarPersona = gcnew AgregarPersona(this->objPersona);
	VentanaAgregarPersona->ShowDialog();
	if (objPersona != nullptr) {
		this->textBox2->Text = this->objPersona->nombre;
		this->textBox1->Text = this->objPersona->apellidoPaterno;
		this->textBox8->Text = this->objPersona->dni;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	AgregarUniversidad^ VentanaAgregarUniversidad = gcnew AgregarUniversidad(this->objUniversidad);
	VentanaAgregarUniversidad->ShowDialog();
	if (objUniversidad != nullptr) {
		this->textBox9->Text = this->objUniversidad->nombre;
		this->textBox4->Text = this->objUniversidad->direccion;
		this->textBox3->Text = this->objUniversidad->telefono;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->TipoEntidadSeleccionado == "Colegio") {
		frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorCenso, nombreFormulario, this->objCenso, this->objGestorCensoxEntidad,this->objColegio);
		VentanaResponderFormulario->ShowDialog();
	}
	else if (this->TipoEntidadSeleccionado == "Universidad") {
		frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorCenso, nombreFormulario, this->objCenso, this->objGestorCensoxEntidad, this->objUniversidad);
		VentanaResponderFormulario->ShowDialog();
	}
	else if (this->TipoEntidadSeleccionado == "Persona") {
		frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorCenso, nombreFormulario, this->objCenso, this->objGestorCensoxEntidad, this->objPersona);
		VentanaResponderFormulario->ShowDialog();
	}
	this->Close();
	/*String^ Fecha = this->dateTimePicker1->Text;
	String^ Hora = this->textBox1->Text;*/
	/*if (this->tipoEntidad == "Colegio") {
		int cant = this->objGestorCensoxEntidad->ObtenerCantCensoxEntidad();
		int codigo = cant + 1;
		CensoxEntidad^ objCensoxEntidad = gcnew CensoxEntidad(codigo, this->objColegio, this->objCensador);
		frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario();
		VentanaResponderFormulario->ShowDialog();
		this->Close();
	}*/
	/*else {
		
		if (this->tipoEntidad == "Persona") {
			int cant = this->objGestorCensoxEntidad->ObtenerCantCensoxEntidad();
			int codigo = cant + 1;
			CensoxEntidad^ objCensoxEntidad = gcnew CensoxEntidad(codigo, this->objPersona, this->objCensador);
			frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorFormulario, this->codigoFormulario, this->objGestorCensoxEntidad, objCensoxEntidad);
			VentanaResponderFormulario->ShowDialog();
			this->Close();
		}
		else {
			if (this->tipoEntidad == "Universidad") {
				int cant = this->objGestorCensoxEntidad->ObtenerCantCensoxEntidad();
				int codigo = cant + 1;
				CensoxEntidad^ objCensoxEntidad = gcnew CensoxEntidad(codigo, this->objUniversidad, this->objCensador);
				frmRealizarFormulario^ VentanaResponderFormulario = gcnew frmRealizarFormulario(this->objGestorFormulario, this->codigoFormulario, this->objGestorCensoxEntidad, objCensoxEntidad);
				VentanaResponderFormulario->ShowDialog();
				this->Close();
				
			}
		}
		
	}*/

}
};
}
