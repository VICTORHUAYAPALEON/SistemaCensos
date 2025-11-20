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
	/// Resumen de frmNuevoFormulario
	/// </summary>
	public ref class frmNuevoFormulario : public System::Windows::Forms::Form
	{
	public:
		frmNuevoFormulario(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevoFormulario(GestorFormulario^ objGestorFormulario) {

			InitializeComponent();
			this->objGestorFormulario = objGestorFormulario;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevoFormulario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: GestorFormulario^ objGestorFormulario;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(44, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(370, 388);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos del Formulario";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoFormulario::groupBox1_Enter);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(164, 242);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(116, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(38, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Persona Responsable";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(223, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoFormulario::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(52, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 28);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoFormulario::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(164, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(116, 20);
			this->textBox4->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(164, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(116, 20);
			this->textBox3->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(164, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 20);
			this->textBox2->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(164, 48);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(38, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Numero Secciones";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(38, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Seccion";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Titulo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Codigo Formulario";
			this->label1->Click += gcnew System::EventHandler(this, &frmNuevoFormulario::label1_Click);
			// 
			// frmNuevoFormulario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(456, 468);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoFormulario";
			this->Text = L"frmNuevoFormulario";
			this->Load += gcnew System::EventHandler(this, &frmNuevoFormulario::frmNuevoFormulario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int codigoFormulario = Convert::ToInt32(this->textBox1->Text);
		String^ Titulo = this->textBox2->Text;
		String^ Seccion = this->textBox3->Text;
		int NroSecciones = Convert::ToInt32(this->textBox4->Text);
	    String^ PersonaResponsable = this->textBox5->Text;
		Formulario^ objFormulario = gcnew Formulario(codigoFormulario,Titulo,Seccion,NroSecciones, PersonaResponsable);
		this->objGestorFormulario->AgregarFormularioLista(objFormulario);
		MessageBox::Show("Formulario Agregado");
		this->Close();

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void frmNuevoFormulario_Load(System::Object^ sender, System::EventArgs^ e) {
	int cantidadFormularios = this->objGestorFormulario->ObtenerCantFormularios();
	this->textBox1->Text = Convert::ToString(cantidadFormularios + 1);
	this->textBox1->ReadOnly = "True";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
