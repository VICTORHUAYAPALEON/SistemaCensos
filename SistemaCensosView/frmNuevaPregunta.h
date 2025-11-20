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
	/// Resumen de frmNuevaPregunta
	/// </summary>
	public ref class frmNuevaPregunta : public System::Windows::Forms::Form
	{
	public:
		frmNuevaPregunta(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		frmNuevaPregunta(GestorPregunta^ objGestorPregunta) {
			InitializeComponent();
			this->objGestorPregunta = objGestorPregunta;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmNuevaPregunta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: GestorPregunta^ objGestorPregunta;

	protected:







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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevaPregunta::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(390, 324);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Datos de la Pregunta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Código de Pregunta:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 20);
			this->textBox1->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Múltiple", L"Única", L"Texto" });
			this->comboBox1->Location = System::Drawing::Point(153, 273);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(198, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevaPregunta::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 276);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Modalidad Respuesta:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(29, 138);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(322, 104);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción: ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(108, 352);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevaPregunta::button1_Click);
			// 
			// frmNuevaPregunta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 402);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Name = L"frmNuevaPregunta";
			this->Text = L"frmNuevaPregunta";
			this->Load += gcnew System::EventHandler(this, &frmNuevaPregunta::frmNuevaPregunta_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	String^ descripcion = this->richTextBox1->Text;
	String^ modalidad = this->comboBox1->Text;
	Pregunta^ objPregunta = gcnew Pregunta(codigo, descripcion, modalidad);
	this->objGestorPregunta->AgregarPreguntaLista(objPregunta);
	MessageBox::Show("Pregunta agregada correctamente");
	this->Close();
}
private: System::Void frmNuevaPregunta_Load(System::Object^ sender, System::EventArgs^ e) {
	int cantidadPreguntas = this->objGestorPregunta->ObtenerCantPreguntas();
	this->textBox1->Text = Convert::ToString(cantidadPreguntas + 1);
	this->textBox1->ReadOnly = "True";
}
};
}
