#pragma once
#include "BasicArithmetics.h"

namespace Windowsform07062021 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ClickMePlease;
	private: System::Windows::Forms::TextBox^ ExcerciseOutput;

	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ TypesOfQuestions;
	private: System::Windows::Forms::TextBox^ HighestNumber;
	private: System::Windows::Forms::TextBox^ LowestNumber;

	private: System::Windows::Forms::Label^ Description;
	private: System::Windows::Forms::NumericUpDown^ NoOfQuestions;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ AnsOutput;
	private: System::Windows::Forms::Button^ CopyExcercise;
	private: System::Windows::Forms::Button^ CopyAns;








	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ClickMePlease = (gcnew System::Windows::Forms::Button());
			this->ExcerciseOutput = (gcnew System::Windows::Forms::TextBox());
			this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TypesOfQuestions = (gcnew System::Windows::Forms::NumericUpDown());
			this->LowestNumber = (gcnew System::Windows::Forms::TextBox());
			this->HighestNumber = (gcnew System::Windows::Forms::TextBox());
			this->Description = (gcnew System::Windows::Forms::Label());
			this->NoOfQuestions = (gcnew System::Windows::Forms::NumericUpDown());
			this->AnsOutput = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CopyExcercise = (gcnew System::Windows::Forms::Button());
			this->CopyAns = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TypesOfQuestions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoOfQuestions))->BeginInit();
			this->SuspendLayout();
			// 
			// ClickMePlease
			// 
			this->ClickMePlease->Location = System::Drawing::Point(6, 62);
			this->ClickMePlease->Name = L"ClickMePlease";
			this->ClickMePlease->Size = System::Drawing::Size(62, 23);
			this->ClickMePlease->TabIndex = 0;
			this->ClickMePlease->Text = L"Generate";
			this->ClickMePlease->UseVisualStyleBackColor = true;
			this->ClickMePlease->Click += gcnew System::EventHandler(this, &MyForm::ClickMePlease_Click);
			// 
			// ExcerciseOutput
			// 
			this->ExcerciseOutput->AcceptsReturn = true;
			this->ExcerciseOutput->AcceptsTab = true;
			this->ExcerciseOutput->AllowDrop = true;
			this->ExcerciseOutput->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ExcerciseOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ExcerciseOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExcerciseOutput->ForeColor = System::Drawing::Color::White;
			this->ExcerciseOutput->Location = System::Drawing::Point(424, 29);
			this->ExcerciseOutput->Multiline = true;
			this->ExcerciseOutput->Name = L"ExcerciseOutput";
			this->ExcerciseOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->ExcerciseOutput->Size = System::Drawing::Size(398, 193);
			this->ExcerciseOutput->TabIndex = 1;
			// 
			// fileSystemWatcher1
			// 
			this->fileSystemWatcher1->EnableRaisingEvents = true;
			this->fileSystemWatcher1->SynchronizingObject = this;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label2->Location = System::Drawing::Point(65, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"No. of questions";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label1->Location = System::Drawing::Point(-5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label3->Location = System::Drawing::Point(181, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Lowest Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Location = System::Drawing::Point(297, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Highest Number";
			// 
			// TypesOfQuestions
			// 
			this->TypesOfQuestions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypesOfQuestions->Location = System::Drawing::Point(12, 34);
			this->TypesOfQuestions->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->TypesOfQuestions->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->TypesOfQuestions->Name = L"TypesOfQuestions";
			this->TypesOfQuestions->Size = System::Drawing::Size(47, 22);
			this->TypesOfQuestions->TabIndex = 7;
			this->TypesOfQuestions->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// LowestNumber
			// 
			this->LowestNumber->Location = System::Drawing::Point(184, 35);
			this->LowestNumber->Name = L"LowestNumber";
			this->LowestNumber->Size = System::Drawing::Size(100, 20);
			this->LowestNumber->TabIndex = 9;
			this->LowestNumber->Text = L"1";
			// 
			// HighestNumber
			// 
			this->HighestNumber->Location = System::Drawing::Point(300, 35);
			this->HighestNumber->Name = L"HighestNumber";
			this->HighestNumber->Size = System::Drawing::Size(100, 20);
			this->HighestNumber->TabIndex = 10;
			this->HighestNumber->Text = L"100";
			// 
			// Description
			// 
			this->Description->AutoSize = true;
			this->Description->BackColor = System::Drawing::Color::Transparent;
			this->Description->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Description->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Description->Location = System::Drawing::Point(74, 68);
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(221, 112);
			this->Description->TabIndex = 11;
			this->Description->Text = L"Types:\r\n1. Additions\r\n2. Subtractions(positive answers)\r\n3. Subtractions(negative"
				L" answers)\r\n4. Subtractions\r\n5. Multiplications\r\n6. Divisions(with remainders)\r\n7"
				L". Divisions(with decimal places)";
			// 
			// NoOfQuestions
			// 
			this->NoOfQuestions->Location = System::Drawing::Point(77, 35);
			this->NoOfQuestions->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->NoOfQuestions->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->NoOfQuestions->Name = L"NoOfQuestions";
			this->NoOfQuestions->Size = System::Drawing::Size(86, 20);
			this->NoOfQuestions->TabIndex = 12;
			this->NoOfQuestions->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// AnsOutput
			// 
			this->AnsOutput->AcceptsReturn = true;
			this->AnsOutput->AcceptsTab = true;
			this->AnsOutput->AllowDrop = true;
			this->AnsOutput->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->AnsOutput->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->AnsOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AnsOutput->ForeColor = System::Drawing::Color::White;
			this->AnsOutput->Location = System::Drawing::Point(424, 245);
			this->AnsOutput->Multiline = true;
			this->AnsOutput->Name = L"AnsOutput";
			this->AnsOutput->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->AnsOutput->Size = System::Drawing::Size(398, 184);
			this->AnsOutput->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label5->Location = System::Drawing::Point(582, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 17);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Excercises";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->label6->Location = System::Drawing::Point(592, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Answers";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CopyExcercise
			// 
			this->CopyExcercise->Location = System::Drawing::Point(379, 110);
			this->CopyExcercise->Name = L"CopyExcercise";
			this->CopyExcercise->Size = System::Drawing::Size(39, 23);
			this->CopyExcercise->TabIndex = 16;
			this->CopyExcercise->Text = L"Copy";
			this->CopyExcercise->UseVisualStyleBackColor = true;
			this->CopyExcercise->Click += gcnew System::EventHandler(this, &MyForm::CopyExcercise_Click);
			// 
			// CopyAns
			// 
			this->CopyAns->Location = System::Drawing::Point(379, 319);
			this->CopyAns->Name = L"CopyAns";
			this->CopyAns->Size = System::Drawing::Size(39, 23);
			this->CopyAns->TabIndex = 17;
			this->CopyAns->Text = L"Copy";
			this->CopyAns->UseVisualStyleBackColor = true;
			this->CopyAns->Click += gcnew System::EventHandler(this, &MyForm::CopyAns_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(834, 441);
			this->Controls->Add(this->CopyAns);
			this->Controls->Add(this->CopyExcercise);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->AnsOutput);
			this->Controls->Add(this->NoOfQuestions);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->HighestNumber);
			this->Controls->Add(this->LowestNumber);
			this->Controls->Add(this->TypesOfQuestions);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ExcerciseOutput);
			this->Controls->Add(this->ClickMePlease);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Elementary Arithmetic Excercises Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TypesOfQuestions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NoOfQuestions))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ClickMePlease_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int TypesOfQuestionInt = int::Parse(TypesOfQuestions->Text);
		int NoOfQuestionsInt = int::Parse(NoOfQuestions->Text);
		int LowestNumberInt = int::Parse(LowestNumber->Text);
		int HighestNumberInt = int::Parse(HighestNumber->Text);
		ExcerciseOutput->ResetText();
		AnsOutput->ResetText();
		System::String^ Result;
		switch (TypesOfQuestionInt) {
			case 1: {
				QuestionsAndAnswer<int> add;
				add.generateAdditions(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion<int>(add.Question1, add.Question2, '+');
				N_printQuestionAns<int>(add.Answer, add.Question1, add.Question2, add.Remainder, '+');
				break;
			}
			case 2: {
				QuestionsAndAnswer<int> minusPos;
				minusPos.generateSubtractionsNoNegative(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(minusPos.Question1, minusPos.Question2, '-');
				N_printQuestionAns(minusPos.Answer, minusPos.Question1, minusPos.Question2, minusPos.Remainder, '-');
				break;
			}
			case 3: {
				QuestionsAndAnswer<int> minusNeg;
				minusNeg.generateSubtractionsNegative(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(minusNeg.Question1, minusNeg.Question2, '-');
				N_printQuestionAns(minusNeg.Answer, minusNeg.Question1, minusNeg.Question2, minusNeg.Remainder, '-');
				break;
			}
			case 4: {
				QuestionsAndAnswer<int> minus;
				minus.generateSubtractionsNormal(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(minus.Question1, minus.Question2, '-');
				N_printQuestionAns(minus.Answer, minus.Question1, minus.Question2, minus.Remainder, '-');
				break;
			}
			case 5: {
				QuestionsAndAnswer<int> multiply;
				multiply.generateMultiplications(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(multiply.Question1, multiply.Question2, 'x');
				N_printQuestionAns(multiply.Answer, multiply.Question1, multiply.Question2, multiply.Remainder, 'x');
				break;
			}
			case 6: {
				QuestionsAndAnswer<int> divide;
				divide.generateDivisionsWithRemainders(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(divide.Question1, divide.Question2, '/');
				N_printQuestionAns(divide.Answer, divide.Question1, divide.Question2, divide.Remainder, '/');
				break;
			}
			case 7: {
				QuestionsAndAnswer<double> divideDec;
				divideDec.generateDivisions(NoOfQuestionsInt, LowestNumberInt, HighestNumberInt);
				N_printQuestion(divideDec.Question1, divideDec.Question2, '/');
				N_printQuestionAns(divideDec.Answer, divideDec.Question1, divideDec.Question2, divideDec.Remainder, '/');
				break;
			}
		}
	}

	private: template<typename T>
		void N_printQuestionAns(vector<T>ans, vector<T>q1, vector<T>q2, vector<T>remainder, char TYPE) {
		if (remainder[0] == -1) {
			for (int i = 0; i < ans.size(); i++) {
				//cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << ans[i] << "\n";
				//printf("%f. %f %c %f = %f\n",i + 1, q1[i], TYPE, q2[i], ans[i]);
				int tmp = i + 1;
				String^ si = tmp.ToString();
				String^ sq1 = q1[i].ToString();
				String^ type = gcnew String(&TYPE);
				String^ sq2 = q2[i].ToString();
				String^ sans = ans[i].ToString();
				AnsOutput->AppendText(si+". ");
				AnsOutput->AppendText(sq1);
				AnsOutput->AppendText(" "+type+" ");
				AnsOutput->AppendText(sq2);
				AnsOutput->AppendText(" = ");
				AnsOutput->AppendText(sans);
				AnsOutput->AppendText("\r\n");
			}
		}
		else {
			for (int i = 0; i < ans.size(); i++) {
				//cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << ans[i] << "..." << remainder[i] << "\n";
				//printf("%d. %d %c %d = %d...%d\n", i + 1, q1[i], TYPE, q2[i], ans[i], remainder[i]);
				int tmp = i + 1;
				String^ si = tmp.ToString();
				String^ sq1 = q1[i].ToString();
				String^ type = gcnew String(&TYPE);
				String^ sq2 = q2[i].ToString();
				String^ sans = ans[i].ToString();
				String^ sremainder = remainder[i].ToString();
				AnsOutput->AppendText(si + ". ");
				AnsOutput->AppendText(sq1);
				AnsOutput->AppendText(" " + type + " ");
				AnsOutput->AppendText(sq2);
				AnsOutput->AppendText(" = ");
				AnsOutput->AppendText(sans);
				AnsOutput->AppendText("...");
				AnsOutput->AppendText(sremainder);
				AnsOutput->AppendText("\r\n");
			}
		}
	}
	private: template<typename T>
		void N_printQuestion(vector<T>q1, vector<T>q2, char TYPE) {
			for (int i = 0; i < q1.size(); i++) {
				//cout << i + 1 << ". " << q1[i] << " " << TYPE << " " << q2[i] << " = " << "\n";
				//printf("%f. %f %c %f =\n",i + 1, q1[i], TYPE, q2[i]);
				int tmp = i + 1;
				String^ si = tmp.ToString();
				String^ sq1 = q1[i].ToString();
				String^ type = gcnew String(&TYPE);
				String^ sq2 = q2[i].ToString();
				ExcerciseOutput->AppendText(si + ". ");
				ExcerciseOutput->AppendText(sq1);
				ExcerciseOutput->AppendText(" " + type + " ");
				ExcerciseOutput->AppendText(sq2);
				ExcerciseOutput->AppendText(" = ");
				ExcerciseOutput->AppendText("\r\n");
			}
		}
	private: System::Void CopyExcercise_Click(System::Object^ sender, System::EventArgs^ e) {
		ExcerciseOutput->SelectAll();
		ExcerciseOutput->Copy();
		ExcerciseOutput->DeselectAll();
	}
	private: System::Void CopyAns_Click(System::Object^ sender, System::EventArgs^ e) {
		AnsOutput->SelectAll();
		AnsOutput->Copy();
		AnsOutput->DeselectAll();
	}
};
}



/*
	TheNumber++;
	//int TheNumber = int::Parse(str);
	System::String^ str = TheNumber.ToString(); // int to string
	//ExcerciseOutput->AppendText(str);
	ExcerciseOutput->ResetText();
	ExcerciseOutput->Paste(str);
	//MessageBox::Show("Test");
*/