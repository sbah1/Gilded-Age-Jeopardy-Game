#pragma once

#include <string>

namespace ReviewGameRebuild {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int qNum = 0;
	int qCount = 0;
	int t1score = 0;
	int t2score = 0;
	int scoreDiff = 0;
	int uTurn = 1;

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
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  status;
	private: System::Windows::Forms::Label^  t1amount;
	private: System::Windows::Forms::Label^  t2amount;
	protected:

	protected:



	private: System::Windows::Forms::Label^  t1amount_num;
	private: System::Windows::Forms::Label^  t2amount_num;
	private: System::Windows::Forms::Label^  leader;
	private: System::Windows::Forms::Label^  leaderstring;
	private: System::Windows::Forms::Label^  turn;
	private: System::Windows::Forms::Label^  whosturn;
	private: System::Windows::Forms::Label^  p_terms;

	private: System::Windows::Forms::Label^  invent;
	private: System::Windows::Forms::Label^  m_events;
	private: System::Windows::Forms::Label^  vocab;
	private: System::Windows::Forms::Button^  pt_100;
	private: System::Windows::Forms::Button^  pt_200;
	private: System::Windows::Forms::Button^  pt_300;
	private: System::Windows::Forms::Button^  pt_400;
	private: System::Windows::Forms::Button^  pt_500;
	private: System::Windows::Forms::Button^  me_500;

	private: System::Windows::Forms::Button^  me_400;

	private: System::Windows::Forms::Button^  me_300;

	private: System::Windows::Forms::Button^  me_200;

	private: System::Windows::Forms::Button^  me_100;
	private: System::Windows::Forms::Button^  v_400;



	private: System::Windows::Forms::Button^  v_300;

	private: System::Windows::Forms::Button^  v_200;

	private: System::Windows::Forms::Button^  v_100;

	private: System::Windows::Forms::Button^  i_100;
	private: System::Windows::Forms::Button^  i_200;
	private: System::Windows::Forms::Button^  i_300;
	private: System::Windows::Forms::Button^  i_400;
	private: System::Windows::Forms::Button^  i_500;
	private: System::Windows::Forms::Button^  v_500;
	private: System::Windows::Forms::Label^  question;
	private: System::Windows::Forms::Label^  readout;
	private: System::Windows::Forms::Label^  ans_a;
	private: System::Windows::Forms::Label^  ans_a_readout;
	private: System::Windows::Forms::Label^  ans_b_readout;
	private: System::Windows::Forms::Label^  ans_b;
	private: System::Windows::Forms::Label^  ans_c_readout;
	private: System::Windows::Forms::Label^  ans_c;
	private: System::Windows::Forms::Label^  ans_d_readout;
	private: System::Windows::Forms::Label^  ans_d;
	private: System::Windows::Forms::Button^  ans_a_but;
	private: System::Windows::Forms::Button^  ans_b_but;
	private: System::Windows::Forms::Button^  ans_c_but;
	private: System::Windows::Forms::Button^  ans_d_but;
	private: System::Windows::Forms::Label^  validity;
	private: System::Windows::Forms::Label^  point_diff;














	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->title = (gcnew System::Windows::Forms::Label());
			this->status = (gcnew System::Windows::Forms::Label());
			this->t1amount = (gcnew System::Windows::Forms::Label());
			this->t2amount = (gcnew System::Windows::Forms::Label());
			this->t1amount_num = (gcnew System::Windows::Forms::Label());
			this->t2amount_num = (gcnew System::Windows::Forms::Label());
			this->leader = (gcnew System::Windows::Forms::Label());
			this->leaderstring = (gcnew System::Windows::Forms::Label());
			this->turn = (gcnew System::Windows::Forms::Label());
			this->whosturn = (gcnew System::Windows::Forms::Label());
			this->p_terms = (gcnew System::Windows::Forms::Label());
			this->invent = (gcnew System::Windows::Forms::Label());
			this->m_events = (gcnew System::Windows::Forms::Label());
			this->vocab = (gcnew System::Windows::Forms::Label());
			this->pt_100 = (gcnew System::Windows::Forms::Button());
			this->pt_200 = (gcnew System::Windows::Forms::Button());
			this->pt_300 = (gcnew System::Windows::Forms::Button());
			this->pt_400 = (gcnew System::Windows::Forms::Button());
			this->pt_500 = (gcnew System::Windows::Forms::Button());
			this->me_500 = (gcnew System::Windows::Forms::Button());
			this->me_400 = (gcnew System::Windows::Forms::Button());
			this->me_300 = (gcnew System::Windows::Forms::Button());
			this->me_200 = (gcnew System::Windows::Forms::Button());
			this->me_100 = (gcnew System::Windows::Forms::Button());
			this->v_400 = (gcnew System::Windows::Forms::Button());
			this->v_300 = (gcnew System::Windows::Forms::Button());
			this->v_200 = (gcnew System::Windows::Forms::Button());
			this->v_100 = (gcnew System::Windows::Forms::Button());
			this->i_100 = (gcnew System::Windows::Forms::Button());
			this->i_200 = (gcnew System::Windows::Forms::Button());
			this->i_300 = (gcnew System::Windows::Forms::Button());
			this->i_400 = (gcnew System::Windows::Forms::Button());
			this->i_500 = (gcnew System::Windows::Forms::Button());
			this->v_500 = (gcnew System::Windows::Forms::Button());
			this->question = (gcnew System::Windows::Forms::Label());
			this->readout = (gcnew System::Windows::Forms::Label());
			this->ans_a = (gcnew System::Windows::Forms::Label());
			this->ans_a_readout = (gcnew System::Windows::Forms::Label());
			this->ans_b_readout = (gcnew System::Windows::Forms::Label());
			this->ans_b = (gcnew System::Windows::Forms::Label());
			this->ans_c_readout = (gcnew System::Windows::Forms::Label());
			this->ans_c = (gcnew System::Windows::Forms::Label());
			this->ans_d_readout = (gcnew System::Windows::Forms::Label());
			this->ans_d = (gcnew System::Windows::Forms::Label());
			this->ans_a_but = (gcnew System::Windows::Forms::Button());
			this->ans_b_but = (gcnew System::Windows::Forms::Button());
			this->ans_c_but = (gcnew System::Windows::Forms::Button());
			this->ans_d_but = (gcnew System::Windows::Forms::Button());
			this->validity = (gcnew System::Windows::Forms::Label());
			this->point_diff = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(12, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(280, 39);
			this->title->TabIndex = 0;
			this->title->Text = L"Gilded Age Jeopardy";
			// 
			// status
			// 
			this->status->AutoSize = true;
			this->status->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->status->Location = System::Drawing::Point(12, 89);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(117, 26);
			this->status->TabIndex = 1;
			this->status->Text = L"Team Status";
			this->status->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t1amount
			// 
			this->t1amount->AutoSize = true;
			this->t1amount->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1amount->Location = System::Drawing::Point(9, 153);
			this->t1amount->Name = L"t1amount";
			this->t1amount->Size = System::Drawing::Size(74, 26);
			this->t1amount->TabIndex = 2;
			this->t1amount->Text = L"Team 1:";
			this->t1amount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t2amount
			// 
			this->t2amount->AutoSize = true;
			this->t2amount->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2amount->Location = System::Drawing::Point(9, 227);
			this->t2amount->Name = L"t2amount";
			this->t2amount->Size = System::Drawing::Size(77, 26);
			this->t2amount->TabIndex = 3;
			this->t2amount->Text = L"Team 2:";
			this->t2amount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t1amount_num
			// 
			this->t1amount_num->AutoSize = true;
			this->t1amount_num->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t1amount_num->Location = System::Drawing::Point(89, 153);
			this->t1amount_num->Name = L"t1amount_num";
			this->t1amount_num->Size = System::Drawing::Size(23, 26);
			this->t1amount_num->TabIndex = 4;
			this->t1amount_num->Text = L"0";
			this->t1amount_num->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// t2amount_num
			// 
			this->t2amount_num->AutoSize = true;
			this->t2amount_num->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->t2amount_num->Location = System::Drawing::Point(92, 227);
			this->t2amount_num->Name = L"t2amount_num";
			this->t2amount_num->Size = System::Drawing::Size(23, 26);
			this->t2amount_num->TabIndex = 5;
			this->t2amount_num->Text = L"0";
			this->t2amount_num->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// leader
			// 
			this->leader->AutoSize = true;
			this->leader->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leader->Location = System::Drawing::Point(9, 295);
			this->leader->Name = L"leader";
			this->leader->Size = System::Drawing::Size(76, 26);
			this->leader->TabIndex = 6;
			this->leader->Text = L"Leader:";
			this->leader->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// leaderstring
			// 
			this->leaderstring->AutoSize = true;
			this->leaderstring->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->leaderstring->Location = System::Drawing::Point(91, 289);
			this->leaderstring->Name = L"leaderstring";
			this->leaderstring->Size = System::Drawing::Size(155, 26);
			this->leaderstring->TabIndex = 7;
			this->leaderstring->Text = L"No Game Started";
			this->leaderstring->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// turn
			// 
			this->turn->AutoSize = true;
			this->turn->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turn->Location = System::Drawing::Point(12, 359);
			this->turn->Name = L"turn";
			this->turn->Size = System::Drawing::Size(56, 26);
			this->turn->TabIndex = 8;
			this->turn->Text = L"Turn:";
			this->turn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// whosturn
			// 
			this->whosturn->AutoSize = true;
			this->whosturn->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->whosturn->Location = System::Drawing::Point(74, 359);
			this->whosturn->Name = L"whosturn";
			this->whosturn->Size = System::Drawing::Size(70, 26);
			this->whosturn->TabIndex = 9;
			this->whosturn->Text = L"Team 1";
			this->whosturn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p_terms
			// 
			this->p_terms->AutoSize = true;
			this->p_terms->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p_terms->Location = System::Drawing::Point(428, 22);
			this->p_terms->Name = L"p_terms";
			this->p_terms->Size = System::Drawing::Size(159, 23);
			this->p_terms->TabIndex = 10;
			this->p_terms->Text = L"Presidential Terms";
			this->p_terms->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// invent
			// 
			this->invent->AutoSize = true;
			this->invent->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invent->Location = System::Drawing::Point(629, 22);
			this->invent->Name = L"invent";
			this->invent->Size = System::Drawing::Size(92, 23);
			this->invent->TabIndex = 11;
			this->invent->Text = L"Inventions";
			this->invent->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// m_events
			// 
			this->m_events->AutoSize = true;
			this->m_events->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_events->Location = System::Drawing::Point(782, 22);
			this->m_events->Name = L"m_events";
			this->m_events->Size = System::Drawing::Size(109, 23);
			this->m_events->TabIndex = 12;
			this->m_events->Text = L"Major Events";
			this->m_events->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// vocab
			// 
			this->vocab->AutoSize = true;
			this->vocab->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vocab->Location = System::Drawing::Point(943, 22);
			this->vocab->Name = L"vocab";
			this->vocab->Size = System::Drawing::Size(99, 23);
			this->vocab->TabIndex = 13;
			this->vocab->Text = L"Vocabulary";
			this->vocab->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pt_100
			// 
			this->pt_100->Location = System::Drawing::Point(445, 86);
			this->pt_100->Name = L"pt_100";
			this->pt_100->Size = System::Drawing::Size(125, 29);
			this->pt_100->TabIndex = 14;
			this->pt_100->Text = L"100";
			this->pt_100->UseVisualStyleBackColor = true;
			this->pt_100->Click += gcnew System::EventHandler(this, &MyForm::pt_100_Click);
			// 
			// pt_200
			// 
			this->pt_200->Location = System::Drawing::Point(445, 156);
			this->pt_200->Name = L"pt_200";
			this->pt_200->Size = System::Drawing::Size(125, 29);
			this->pt_200->TabIndex = 15;
			this->pt_200->Text = L"200";
			this->pt_200->UseVisualStyleBackColor = true;
			this->pt_200->Click += gcnew System::EventHandler(this, &MyForm::pt_200_Click);
			// 
			// pt_300
			// 
			this->pt_300->Location = System::Drawing::Point(445, 224);
			this->pt_300->Name = L"pt_300";
			this->pt_300->Size = System::Drawing::Size(125, 29);
			this->pt_300->TabIndex = 16;
			this->pt_300->Text = L"300";
			this->pt_300->UseVisualStyleBackColor = true;
			this->pt_300->Click += gcnew System::EventHandler(this, &MyForm::pt_300_Click);
			// 
			// pt_400
			// 
			this->pt_400->Location = System::Drawing::Point(445, 292);
			this->pt_400->Name = L"pt_400";
			this->pt_400->Size = System::Drawing::Size(125, 29);
			this->pt_400->TabIndex = 17;
			this->pt_400->Text = L"400";
			this->pt_400->UseVisualStyleBackColor = true;
			this->pt_400->Click += gcnew System::EventHandler(this, &MyForm::pt_400_Click);
			// 
			// pt_500
			// 
			this->pt_500->Location = System::Drawing::Point(445, 362);
			this->pt_500->Name = L"pt_500";
			this->pt_500->Size = System::Drawing::Size(125, 29);
			this->pt_500->TabIndex = 18;
			this->pt_500->Text = L"500";
			this->pt_500->UseVisualStyleBackColor = true;
			this->pt_500->Click += gcnew System::EventHandler(this, &MyForm::pt_500_Click);
			// 
			// me_500
			// 
			this->me_500->Location = System::Drawing::Point(777, 362);
			this->me_500->Name = L"me_500";
			this->me_500->Size = System::Drawing::Size(125, 29);
			this->me_500->TabIndex = 28;
			this->me_500->Text = L"500";
			this->me_500->UseVisualStyleBackColor = true;
			this->me_500->Click += gcnew System::EventHandler(this, &MyForm::me_500_Click);
			// 
			// me_400
			// 
			this->me_400->Location = System::Drawing::Point(777, 292);
			this->me_400->Name = L"me_400";
			this->me_400->Size = System::Drawing::Size(125, 29);
			this->me_400->TabIndex = 27;
			this->me_400->Text = L"400";
			this->me_400->UseVisualStyleBackColor = true;
			this->me_400->Click += gcnew System::EventHandler(this, &MyForm::me_400_Click);
			// 
			// me_300
			// 
			this->me_300->Location = System::Drawing::Point(777, 224);
			this->me_300->Name = L"me_300";
			this->me_300->Size = System::Drawing::Size(125, 29);
			this->me_300->TabIndex = 26;
			this->me_300->Text = L"300";
			this->me_300->UseVisualStyleBackColor = true;
			this->me_300->Click += gcnew System::EventHandler(this, &MyForm::me_300_Click);
			// 
			// me_200
			// 
			this->me_200->Location = System::Drawing::Point(777, 156);
			this->me_200->Name = L"me_200";
			this->me_200->Size = System::Drawing::Size(125, 29);
			this->me_200->TabIndex = 25;
			this->me_200->Text = L"200";
			this->me_200->UseVisualStyleBackColor = true;
			this->me_200->Click += gcnew System::EventHandler(this, &MyForm::me_200_Click);
			// 
			// me_100
			// 
			this->me_100->Location = System::Drawing::Point(777, 86);
			this->me_100->Name = L"me_100";
			this->me_100->Size = System::Drawing::Size(125, 29);
			this->me_100->TabIndex = 24;
			this->me_100->Text = L"100";
			this->me_100->UseVisualStyleBackColor = true;
			this->me_100->Click += gcnew System::EventHandler(this, &MyForm::me_100_Click);
			// 
			// v_400
			// 
			this->v_400->Location = System::Drawing::Point(937, 292);
			this->v_400->Name = L"v_400";
			this->v_400->Size = System::Drawing::Size(125, 29);
			this->v_400->TabIndex = 32;
			this->v_400->Text = L"400";
			this->v_400->UseVisualStyleBackColor = true;
			this->v_400->Click += gcnew System::EventHandler(this, &MyForm::v_400_Click);
			// 
			// v_300
			// 
			this->v_300->Location = System::Drawing::Point(937, 224);
			this->v_300->Name = L"v_300";
			this->v_300->Size = System::Drawing::Size(125, 29);
			this->v_300->TabIndex = 31;
			this->v_300->Text = L"300";
			this->v_300->UseVisualStyleBackColor = true;
			this->v_300->Click += gcnew System::EventHandler(this, &MyForm::v_300_Click);
			// 
			// v_200
			// 
			this->v_200->Location = System::Drawing::Point(937, 156);
			this->v_200->Name = L"v_200";
			this->v_200->Size = System::Drawing::Size(125, 29);
			this->v_200->TabIndex = 30;
			this->v_200->Text = L"200";
			this->v_200->UseVisualStyleBackColor = true;
			this->v_200->Click += gcnew System::EventHandler(this, &MyForm::v_200_Click);
			// 
			// v_100
			// 
			this->v_100->Location = System::Drawing::Point(937, 86);
			this->v_100->Name = L"v_100";
			this->v_100->Size = System::Drawing::Size(125, 29);
			this->v_100->TabIndex = 29;
			this->v_100->Text = L"100";
			this->v_100->UseVisualStyleBackColor = true;
			this->v_100->Click += gcnew System::EventHandler(this, &MyForm::v_100_Click);
			// 
			// i_100
			// 
			this->i_100->Location = System::Drawing::Point(612, 86);
			this->i_100->Name = L"i_100";
			this->i_100->Size = System::Drawing::Size(125, 29);
			this->i_100->TabIndex = 19;
			this->i_100->Text = L"100";
			this->i_100->UseVisualStyleBackColor = true;
			this->i_100->Click += gcnew System::EventHandler(this, &MyForm::i_100_Click);
			// 
			// i_200
			// 
			this->i_200->Location = System::Drawing::Point(612, 156);
			this->i_200->Name = L"i_200";
			this->i_200->Size = System::Drawing::Size(125, 29);
			this->i_200->TabIndex = 20;
			this->i_200->Text = L"200";
			this->i_200->UseVisualStyleBackColor = true;
			this->i_200->Click += gcnew System::EventHandler(this, &MyForm::i_200_Click);
			// 
			// i_300
			// 
			this->i_300->Location = System::Drawing::Point(612, 224);
			this->i_300->Name = L"i_300";
			this->i_300->Size = System::Drawing::Size(125, 29);
			this->i_300->TabIndex = 21;
			this->i_300->Text = L"300";
			this->i_300->UseVisualStyleBackColor = true;
			this->i_300->Click += gcnew System::EventHandler(this, &MyForm::i_300_Click);
			// 
			// i_400
			// 
			this->i_400->Location = System::Drawing::Point(612, 292);
			this->i_400->Name = L"i_400";
			this->i_400->Size = System::Drawing::Size(125, 29);
			this->i_400->TabIndex = 22;
			this->i_400->Text = L"400";
			this->i_400->UseVisualStyleBackColor = true;
			this->i_400->Click += gcnew System::EventHandler(this, &MyForm::i_400_Click);
			// 
			// i_500
			// 
			this->i_500->Location = System::Drawing::Point(612, 362);
			this->i_500->Name = L"i_500";
			this->i_500->Size = System::Drawing::Size(125, 29);
			this->i_500->TabIndex = 23;
			this->i_500->Text = L"500";
			this->i_500->UseVisualStyleBackColor = true;
			this->i_500->Click += gcnew System::EventHandler(this, &MyForm::i_500_Click);
			// 
			// v_500
			// 
			this->v_500->Location = System::Drawing::Point(937, 362);
			this->v_500->Name = L"v_500";
			this->v_500->Size = System::Drawing::Size(125, 29);
			this->v_500->TabIndex = 33;
			this->v_500->Text = L"500";
			this->v_500->UseVisualStyleBackColor = true;
			this->v_500->Click += gcnew System::EventHandler(this, &MyForm::v_500_Click);
			// 
			// question
			// 
			this->question->AutoSize = true;
			this->question->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->question->Location = System::Drawing::Point(12, 451);
			this->question->Name = L"question";
			this->question->Size = System::Drawing::Size(92, 26);
			this->question->TabIndex = 34;
			this->question->Text = L"Question:";
			this->question->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// readout
			// 
			this->readout->AutoSize = true;
			this->readout->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->readout->Location = System::Drawing::Point(110, 451);
			this->readout->Name = L"readout";
			this->readout->Size = System::Drawing::Size(18, 26);
			this->readout->TabIndex = 35;
			this->readout->Text = L"-";
			this->readout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_a
			// 
			this->ans_a->AutoSize = true;
			this->ans_a->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_a->Location = System::Drawing::Point(18, 510);
			this->ans_a->Name = L"ans_a";
			this->ans_a->Size = System::Drawing::Size(26, 26);
			this->ans_a->TabIndex = 36;
			this->ans_a->Text = L"A:";
			this->ans_a->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_a_readout
			// 
			this->ans_a_readout->AutoSize = true;
			this->ans_a_readout->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_a_readout->Location = System::Drawing::Point(50, 510);
			this->ans_a_readout->Name = L"ans_a_readout";
			this->ans_a_readout->Size = System::Drawing::Size(14, 20);
			this->ans_a_readout->TabIndex = 37;
			this->ans_a_readout->Text = L"-";
			this->ans_a_readout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_b_readout
			// 
			this->ans_b_readout->AutoSize = true;
			this->ans_b_readout->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_b_readout->Location = System::Drawing::Point(335, 510);
			this->ans_b_readout->Name = L"ans_b_readout";
			this->ans_b_readout->Size = System::Drawing::Size(14, 20);
			this->ans_b_readout->TabIndex = 39;
			this->ans_b_readout->Text = L"-";
			this->ans_b_readout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_b
			// 
			this->ans_b->AutoSize = true;
			this->ans_b->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_b->Location = System::Drawing::Point(303, 510);
			this->ans_b->Name = L"ans_b";
			this->ans_b->Size = System::Drawing::Size(28, 26);
			this->ans_b->TabIndex = 38;
			this->ans_b->Text = L"B:";
			this->ans_b->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_c_readout
			// 
			this->ans_c_readout->AutoSize = true;
			this->ans_c_readout->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_c_readout->Location = System::Drawing::Point(578, 510);
			this->ans_c_readout->Name = L"ans_c_readout";
			this->ans_c_readout->Size = System::Drawing::Size(14, 20);
			this->ans_c_readout->TabIndex = 41;
			this->ans_c_readout->Text = L"-";
			this->ans_c_readout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_c
			// 
			this->ans_c->AutoSize = true;
			this->ans_c->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_c->Location = System::Drawing::Point(546, 510);
			this->ans_c->Name = L"ans_c";
			this->ans_c->Size = System::Drawing::Size(28, 26);
			this->ans_c->TabIndex = 40;
			this->ans_c->Text = L"C:";
			this->ans_c->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_d_readout
			// 
			this->ans_d_readout->AutoSize = true;
			this->ans_d_readout->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_d_readout->Location = System::Drawing::Point(858, 510);
			this->ans_d_readout->Name = L"ans_d_readout";
			this->ans_d_readout->Size = System::Drawing::Size(14, 20);
			this->ans_d_readout->TabIndex = 43;
			this->ans_d_readout->Text = L"-";
			this->ans_d_readout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_d
			// 
			this->ans_d->AutoSize = true;
			this->ans_d->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans_d->Location = System::Drawing::Point(826, 510);
			this->ans_d->Name = L"ans_d";
			this->ans_d->Size = System::Drawing::Size(28, 26);
			this->ans_d->TabIndex = 42;
			this->ans_d->Text = L"D:";
			this->ans_d->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ans_a_but
			// 
			this->ans_a_but->Location = System::Drawing::Point(44, 563);
			this->ans_a_but->Name = L"ans_a_but";
			this->ans_a_but->Size = System::Drawing::Size(125, 29);
			this->ans_a_but->TabIndex = 44;
			this->ans_a_but->Text = L"A";
			this->ans_a_but->UseVisualStyleBackColor = true;
			this->ans_a_but->Click += gcnew System::EventHandler(this, &MyForm::ans_a_but_Click);
			// 
			// ans_b_but
			// 
			this->ans_b_but->Location = System::Drawing::Point(331, 563);
			this->ans_b_but->Name = L"ans_b_but";
			this->ans_b_but->Size = System::Drawing::Size(125, 29);
			this->ans_b_but->TabIndex = 45;
			this->ans_b_but->Text = L"B";
			this->ans_b_but->UseVisualStyleBackColor = true;
			this->ans_b_but->Click += gcnew System::EventHandler(this, &MyForm::ans_b_but_Click);
			// 
			// ans_c_but
			// 
			this->ans_c_but->Location = System::Drawing::Point(596, 563);
			this->ans_c_but->Name = L"ans_c_but";
			this->ans_c_but->Size = System::Drawing::Size(125, 29);
			this->ans_c_but->TabIndex = 46;
			this->ans_c_but->Text = L"C";
			this->ans_c_but->UseVisualStyleBackColor = true;
			this->ans_c_but->Click += gcnew System::EventHandler(this, &MyForm::ans_c_but_Click);
			// 
			// ans_d_but
			// 
			this->ans_d_but->Location = System::Drawing::Point(863, 563);
			this->ans_d_but->Name = L"ans_d_but";
			this->ans_d_but->Size = System::Drawing::Size(125, 29);
			this->ans_d_but->TabIndex = 47;
			this->ans_d_but->Text = L"D";
			this->ans_d_but->UseVisualStyleBackColor = true;
			this->ans_d_but->Click += gcnew System::EventHandler(this, &MyForm::ans_d_but_Click);
			// 
			// validity
			// 
			this->validity->AutoSize = true;
			this->validity->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->validity->ForeColor = System::Drawing::Color::Red;
			this->validity->Location = System::Drawing::Point(12, 627);
			this->validity->Name = L"validity";
			this->validity->Size = System::Drawing::Size(0, 26);
			this->validity->TabIndex = 48;
			this->validity->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// point_diff
			// 
			this->point_diff->AutoSize = true;
			this->point_diff->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->point_diff->Location = System::Drawing::Point(92, 315);
			this->point_diff->Name = L"point_diff";
			this->point_diff->Size = System::Drawing::Size(155, 26);
			this->point_diff->TabIndex = 49;
			this->point_diff->Text = L"No Game Started";
			this->point_diff->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1104, 676);
			this->Controls->Add(this->point_diff);
			this->Controls->Add(this->validity);
			this->Controls->Add(this->ans_d_but);
			this->Controls->Add(this->ans_c_but);
			this->Controls->Add(this->ans_b_but);
			this->Controls->Add(this->ans_a_but);
			this->Controls->Add(this->ans_d_readout);
			this->Controls->Add(this->ans_d);
			this->Controls->Add(this->ans_c_readout);
			this->Controls->Add(this->ans_c);
			this->Controls->Add(this->ans_b_readout);
			this->Controls->Add(this->ans_b);
			this->Controls->Add(this->ans_a_readout);
			this->Controls->Add(this->ans_a);
			this->Controls->Add(this->readout);
			this->Controls->Add(this->question);
			this->Controls->Add(this->v_500);
			this->Controls->Add(this->v_400);
			this->Controls->Add(this->v_300);
			this->Controls->Add(this->v_200);
			this->Controls->Add(this->v_100);
			this->Controls->Add(this->me_500);
			this->Controls->Add(this->me_400);
			this->Controls->Add(this->me_300);
			this->Controls->Add(this->me_200);
			this->Controls->Add(this->me_100);
			this->Controls->Add(this->i_500);
			this->Controls->Add(this->i_400);
			this->Controls->Add(this->i_300);
			this->Controls->Add(this->i_200);
			this->Controls->Add(this->i_100);
			this->Controls->Add(this->pt_500);
			this->Controls->Add(this->pt_400);
			this->Controls->Add(this->pt_300);
			this->Controls->Add(this->pt_200);
			this->Controls->Add(this->pt_100);
			this->Controls->Add(this->vocab);
			this->Controls->Add(this->m_events);
			this->Controls->Add(this->invent);
			this->Controls->Add(this->p_terms);
			this->Controls->Add(this->whosturn);
			this->Controls->Add(this->turn);
			this->Controls->Add(this->leaderstring);
			this->Controls->Add(this->leader);
			this->Controls->Add(this->t2amount_num);
			this->Controls->Add(this->t1amount_num);
			this->Controls->Add(this->t2amount);
			this->Controls->Add(this->t1amount);
			this->Controls->Add(this->status);
			this->Controls->Add(this->title);
			this->Name = L"MyForm";
			this->Text = L"Gilded Age Jeopardy Game";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pt_100_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was Rutherford B Hayes' presidential term?";
		this->ans_a_readout->Text = "1876 - 1880";
		this->ans_b_readout->Text = "1872 - 1876";
		this->ans_c_readout->Text = "1872- 1880";
		this->ans_d_readout->Text = "-";
		this->pt_100->Enabled = false;
		this->ans_d_but->Enabled = false;

		qNum = 1;
	}
	private: System::Void pt_200_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was Stephen Grover Cleveland's presidential term?";
		this->ans_a_readout->Text = "1880 - 1884";
		this->ans_b_readout->Text = "1884 - 1888";
		this->ans_c_readout->Text = "1884 - 1892";
		this->ans_d_readout->Text = "-";
		this->ans_d_but->Enabled = false;
		this->pt_200->Enabled = false;

		qNum = 2;
	}
	private: System::Void pt_300_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was James A. Garfield's presidential term?";
		this->ans_a_readout->Text = "1892 - 1896";
		this->ans_b_readout->Text = "1880 - 1880";
		this->ans_c_readout->Text = "1884 - 1884";
		this->ans_d_readout->Text = "-";
		this->ans_d_but->Enabled = false;
		this->pt_300->Enabled = false;

		qNum = 3;
	}
	private: System::Void pt_400_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was Benjamin Harrison's presidential term?";
		this->ans_a_readout->Text = "1884 - 1888";
		this->ans_b_readout->Text = "1884 - 1892";
		this->ans_c_readout->Text = "1888 - 1892";
		this->ans_d_readout->Text = "-";
		this->ans_d_but->Enabled = false;
		this->pt_400->Enabled = false;

		qNum = 4;
	}
	private: System::Void pt_500_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "Who was elected after James A. Garfield's Assassination";
		this->ans_a_readout->Text = "Chester A. Arthur";
		this->ans_b_readout->Text = "its 1:22 am help me";
		this->ans_c_readout->Text = "the jonas brothers";
		this->ans_d_readout->Text = "stoopid";
		this->ans_d_but->Enabled = false;
		this->pt_500->Enabled = false;

		qNum = 5;
	}
	private: System::Void i_100_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "When was the Trans-continental railroad invented?";
		this->ans_a_readout->Text = "Fredrick Winslow; 1868";
		this->ans_b_readout->Text = "Andrew Carnegie; 1867";
		this->ans_c_readout->Text = "ASA Whitney; 1869";
		this->ans_d_readout->Text = "Aaron Montgomery; 1870";
		this->i_100->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 6;
	}
	private: System::Void i_200_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "When was the telegraph invented? By Who?";
		this->ans_a_readout->Text = "Alexander Graham Bell; 1876";
		this->ans_b_readout->Text = "Thomas Edison; 1877";
		this->ans_c_readout->Text = "Alexander Graham Bell; 1886";
		this->ans_d_readout->Text = "James Albert Bonsack; 1880";
		this->i_200->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 7;
	}
	private: System::Void i_300_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "First lightbulb inventor & date:";
		this->ans_a_readout->Text = "Thomas Edison; 1878";
		this->ans_b_readout->Text = "Thomas Edison; 1879";
		this->ans_c_readout->Text = "Thomas Edison; 1880";
		this->ans_d_readout->Text = "Thomas Edison; 1888";
		this->i_300->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 8;
	}
	private: System::Void i_400_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "Coca-Cola inventor & date:";
		this->ans_a_readout->Text = "Dr. John Pemberton; 1888";
		this->ans_b_readout->Text = "George Eastman; 1876";
		this->ans_c_readout->Text = "Dr. John Pemberton; 1886";
		this->ans_d_readout->Text = "1889; George Eastman";
		this->i_400->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 9;
	}
	private: System::Void i_500_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "AC Power inventor & date:";
		this->ans_a_readout->Text = "Fredrick Taylor; 1896";
		this->ans_b_readout->Text = "Westinghouse Co; 1895";
		this->ans_c_readout->Text = "General Electric; 1894";
		this->ans_d_readout->Text = "Herman Hollerith; 1893";
		this->i_500->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 10;
	}
	private: System::Void me_100_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What year was Carnegie Steel founded?";
		this->ans_a_readout->Text = "1890";
		this->ans_b_readout->Text = "1892";
		this->ans_c_readout->Text = "1894";
		this->ans_d_readout->Text = "1896";
		this->me_100->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 11;
	}
	private: System::Void me_200_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What date did the Homestead Strike occur?";
		this->ans_a_readout->Text = "1/1/1899";
		this->ans_b_readout->Text = "4/20/1893";
		this->ans_c_readout->Text = "12/31/1891";
		this->ans_d_readout->Text = "6/30/1892";
		this->me_200->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 12;
	}
	private: System::Void me_300_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "When did the Triangle Shirtwaist Fire occur?";
		this->ans_a_readout->Text = "3/17/1911";
		this->ans_b_readout->Text = "3/25/1911";
		this->ans_c_readout->Text = "3/25/1901";
		this->ans_d_readout->Text = "3/17/1912";
		this->me_300->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 13;
	}
	private: System::Void me_400_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was the reason given for the Shirtwaist Fire?";
		this->ans_a_readout->Text = "A cigarette butt lit cloth.";
		this->ans_b_readout->Text = "A cig butt lit in a scrap bin.";
		this->ans_c_readout->Text = "A match was dropped.";
		this->ans_d_readout->Text = "An arsonist threw a molotov.";
		this->me_400->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 14;
	}
	private: System::Void me_500_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What year was the Credit Scandal?";
		this->ans_a_readout->Text = "1870";
		this->ans_b_readout->Text = "1871";
		this->ans_c_readout->Text = "1872";
		this->ans_d_readout->Text = "1873";
		this->me_500->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 15;
	}
	private: System::Void v_100_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "Who was Andrew Carnegie?";
		this->ans_a_readout->Text = "A steel mogul.";
		this->ans_b_readout->Text = "An iron VIP.";
		this->ans_c_readout->Text = "An Irish immigrant.";
		this->ans_d_readout->Text = "A rich businessman.";
		this->v_100->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 16;
	}
	private: System::Void v_200_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was the Trans-Continental railroad?";
		this->ans_a_readout->Text = "An inter-country railroad.";
		this->ans_b_readout->Text = "A slave escape route.";
		this->ans_c_readout->Text = "A railroad covering all of the US.";
		this->ans_d_readout->Text = "The railroad of the continent.";
		this->v_200->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 17;
	}
	private: System::Void v_300_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What is a monopoly?";
		this->ans_a_readout->Text = "Monopolization of resources.";
		this->ans_b_readout->Text = "Ownership of all competition.";
		this->ans_c_readout->Text = "An illegal method of obtaining wealth.";
		this->ans_d_readout->Text = "-";
		this->v_300->Enabled = false;
		this->ans_d_but->Enabled = false;

		qNum = 18;
	}
	private: System::Void v_400_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What were political machines?";
		this->ans_a_readout->Text = "Machines predicting vote outcomes.";
		this->ans_b_readout->Text = "Corrupt politicians.";
		this->ans_c_readout->Text = "Politicians supporting the people.";
		this->ans_d_readout->Text = "-";
		this->v_400->Enabled = false;
		this->ans_d_but->Enabled = false;

		qNum = 19;
	}
	private: System::Void v_500_Click(System::Object^  sender, System::EventArgs^  e) {
		this->readout->Text = "What was the Homestead Strike?";
		this->ans_a_readout->Text = "A strike against Carnegie Steel.";
		this->ans_b_readout->Text = "A wave of home invasions.";
		this->ans_c_readout->Text = "A strike against house constructors.";
		this->ans_d_readout->Text = "-";
		this->v_500->Enabled = false;
		this->ans_d_but->Enabled = true;

		qNum = 20;
	}
	private: System::Void ans_a_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (qNum == 1 || qNum == 5 || qNum == 16 || qNum == 20)
		{
			this->validity->Text = "";

			if (uTurn == 1)
			{
				this->readout->Text = "Correct.";
				if (qNum == 1 || qNum == 16)
				{
					t1score = t1score + 100;
					qCount = qCount + 1;
				}
				else
				{
					t1score = t1score + 500;
					qCount = qCount + 1;
				}
				this->t1amount_num->Text = Convert::ToString(t1score);
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->readout->Text = "Correct.";
				if (qNum == 1 || qNum == 16)
				{
					t2score = t2score + 100;
					qCount = qCount + 1;
				}
				else
				{
					t2score = t2score + 500;
					qCount = qCount + 1;
				}
				this->t2amount_num->Text = Convert::ToString(t2score);
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
		}
		else
		{
			if (uTurn == 1)
			{
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
			this->validity->Text = "Incorrect.";
		}

		scoreDiff = t1score - t2score;
		if (scoreDiff > 0)
		{
			this->leaderstring->Text = "Team 1";
			this->point_diff->Text = Convert::ToString(scoreDiff);
		}
		if (scoreDiff < 0)
		{
			this->leaderstring->Text = "Team 2";
			this->point_diff->Text = Convert::ToString(scoreDiff * -1);
		}
		if (scoreDiff == 0)
		{
			this->leaderstring->Text = "Tie";
			this->point_diff->Text = "Tie";
		}

		if (qCount == 20)
		{
			this->leader->Text = "Winner:";
		}
	}
	private: System::Void ans_b_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (qNum == 2 || qNum == 3 || qNum == 8 || qNum == 10 || qNum == 11 || qNum == 13 || qNum == 14 || qNum == 18 || qNum == 19)
		{
			this->validity->Text = "";

			if (uTurn == 1)
			{
				this->readout->Text = "Correct.";
				if (qNum == 11)
				{
					t1score = t1score + 100;
					qCount = qCount + 1;
				}
				if (qNum == 2)
				{
					t1score = t1score + 200;
					qCount = qCount + 1;
				}
				if (qNum == 3 || qNum == 8 || qNum == 13 || qNum == 18)
				{
					t1score = t1score + 300;
					qCount = qCount + 1;
				}
				if (qNum == 14 || qNum == 19)
				{
					t1score = t1score + 400;
					qCount = qCount + 1;
				}
				if (qNum == 10)
				{
					t1score = t1score + 500;
					qCount = qCount + 1;
				}
				this->t1amount_num->Text = Convert::ToString(t1score);
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->readout->Text = "Correct.";
				if (qNum == 11)
				{
					t2score = t2score + 100;
					qCount = qCount + 1;
				}
				if (qNum == 2)
				{
					t2score = t2score + 200;
					qCount = qCount + 1;
				}
				if (qNum == 3 || qNum == 8 || qNum == 13 || qNum == 18)
				{
					t2score = t2score + 300;
					qCount = qCount + 1;
				}
				if (qNum == 14 || qNum == 19)
				{
					t2score = t2score + 400;
					qCount = qCount + 1;
				}
				if (qNum == 10)
				{
					t2score = t2score + 500;
					qCount = qCount + 1;
				}
				this->t2amount_num->Text = Convert::ToString(t2score);
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
		}
		else
		{
			if (uTurn == 1)
			{
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
			this->validity->Text = "Incorrect.";
		}

		scoreDiff = t1score - t2score;
		if (scoreDiff > 0)
		{
			this->leaderstring->Text = "Team 1";
			this->point_diff->Text = Convert::ToString(scoreDiff);
		}
		if (scoreDiff < 0)
		{
			this->leaderstring->Text = "Team 2";
			this->point_diff->Text = Convert::ToString(scoreDiff * -1);
		}
		if (scoreDiff == 0)
		{
			this->leaderstring->Text = "Tie";
			this->point_diff->Text = "Tie";
		}

		if (qCount == 20)
		{
			this->leader->Text = "Winner:";
		}
	}
	private: System::Void ans_c_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (qNum == 4 || qNum == 6 || qNum == 7 || qNum == 9 || qNum == 15 || qNum == 17)
		{
			this->validity->Text = "";

			if (uTurn == 1)
			{
				this->readout->Text = "Correct.";
				if (qNum == 6)
				{
					t1score = t1score + 100;
					qCount = qCount + 1;
				}
				if (qNum == 7 || qNum == 17)
				{
					t1score = t1score + 200;
					qCount = qCount + 1;
				}
				if (qNum == 4 || qNum == 9)
				{
					t1score = t1score + 400;
					qCount = qCount + 1;
				}
				if (qNum == 15)
				{
					t1score = t1score + 500;
					qCount = qCount + 1;
				}
				this->t1amount_num->Text = Convert::ToString(t1score);
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->readout->Text = "Correct.";
				if (qNum == 6)
				{
					t2score = t2score + 100;
					qCount = qCount + 1;
				}
				if (qNum == 7 || qNum == 17)
				{
					t2score = t2score + 200;
					qCount = qCount + 1;
				}
				if (qNum == 4 || qNum == 9)
				{
					t2score = t2score + 400;
					qCount = qCount + 1;
				}
				if (qNum == 15)
				{
					t2score = t2score + 500;
					qCount = qCount + 1;
				}
				this->t2amount_num->Text = Convert::ToString(t2score);
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
		}
		else
		{
			if (uTurn == 1)
			{
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
			this->validity->Text = "Incorrect.";
		}

		scoreDiff = t1score - t2score;
		if (scoreDiff > 0)
		{
			this->leaderstring->Text = "Team 1";
			this->point_diff->Text = Convert::ToString(scoreDiff);
		}
		if (scoreDiff < 0)
		{
			this->leaderstring->Text = "Team 2";
			this->point_diff->Text = Convert::ToString(scoreDiff * -1);
		}
		if (scoreDiff == 0)
		{
			this->leaderstring->Text = "Tie";
			this->point_diff->Text = "Tie";
		}

		if (qCount == 20)
		{
			this->leader->Text = "Winner:";
		}
	}
	private: System::Void ans_d_but_Click(System::Object^  sender, System::EventArgs^  e) {
		if (qNum == 12)
		{
			this->validity->Text = "";

			if (uTurn == 1)
			{
				this->readout->Text = "Correct.";
				t1score = t1score + 200;
				this->t1amount_num->Text = Convert::ToString(t1score);
				this->whosturn->Text = "Team 2";
				uTurn = 2;
				qCount = qCount + 1;
			}
			else
			{
				this->readout->Text = "Correct.";
				t2score = t2score + 200;
				this->t1amount_num->Text = Convert::ToString(t1score);
				this->whosturn->Text = "Team 2";
				uTurn = 1;
				qCount = qCount + 1;
			}
		}
		else
		{
			if (uTurn == 1)
			{
				this->whosturn->Text = "Team 2";
				uTurn = 2;
			}
			else
			{
				this->whosturn->Text = "Team 1";
				uTurn = 1;
			}
			this->validity->Text = "Incorrect.";
		}

		scoreDiff = t1score - t2score;
		if (scoreDiff > 0)
		{
			this->leaderstring->Text = "Team 1";
			this->point_diff->Text = Convert::ToString(scoreDiff);
		}
		if (scoreDiff < 0)
		{
			this->leaderstring->Text = "Team 2";
			this->point_diff->Text = Convert::ToString(scoreDiff * -1);
		}
		if (scoreDiff == 0)
		{
			this->leaderstring->Text = "Tie";
			this->point_diff->Text = "Tie";
		}

		if (qCount == 20)
		{
			this->leader->Text = "Winner:";
		}
	}
	};
}