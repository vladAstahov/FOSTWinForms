﻿#pragma once
#include <cmath>
#include <stdlib.h>
#using <System.Windows.Forms.DataVisualization.dll>

#define PI 3.14159265

namespace lab1FOST {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Ñâîäêà äëÿ MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            //
            //TODO: äîáàâüòå êîä êîíñòðóêòîðà
            //
        }

    protected:
        /// <summary>
        /// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
    private: System::Windows::Forms::Button^ button1;

    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;

    private: System::Windows::Forms::Label^ label2;

    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button2;


    protected:

    private:
        /// <summary>
        /// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
        /// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
        /// </summary>
        void InitializeComponent(void)
        {
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // chart1
            // 
            chartArea3->Name = L"ChartArea1";
            chartArea3->Position->Auto = false;
            chartArea3->Position->Height = 100;
            chartArea3->Position->Width = 50;
            chartArea4->BackColor = System::Drawing::Color::White;
            chartArea4->Name = L"ChartArea2";
            chartArea4->Position->Auto = false;
            chartArea4->Position->Height = 100;
            chartArea4->Position->Width = 50;
            chartArea4->Position->X = 50;
            this->chart1->ChartAreas->Add(chartArea3);
            this->chart1->ChartAreas->Add(chartArea4);
            legend2->Name = L"Legend1";
            this->chart1->Legends->Add(legend2);
            this->chart1->Location = System::Drawing::Point(26, 8);
            this->chart1->Name = L"chart1";
            series2->ChartArea = L"ChartArea1";
            series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series2->Legend = L"Legend1";
            series2->Name = L"Series1";
            this->chart1->Series->Add(series2);
            this->chart1->Size = System::Drawing::Size(893, 307);
            this->chart1->TabIndex = 0;
            this->chart1->Text = L"chart1";
            this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(138, 340);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(151, 34);
            this->button1->TabIndex = 1;
            this->button1->Text = L"build";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // maskedTextBox2
            // 
            this->maskedTextBox2->Location = System::Drawing::Point(32, 348);
            this->maskedTextBox2->Mask = L"00000";
            this->maskedTextBox2->Name = L"maskedTextBox2";
            this->maskedTextBox2->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox2->TabIndex = 3;
            this->maskedTextBox2->ValidatingType = System::Int32::typeid;
            this->maskedTextBox2->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox2_MaskInputRejected);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(29, 332);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(55, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Speed";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(126, 371);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 13);
            this->label4->TabIndex = 8;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(295, 340);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(151, 34);
            this->button2->TabIndex = 9;
            this->button2->Text = L"clear";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(931, 386);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->maskedTextBox2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->chart1);
            this->Name = L"MyForm";
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void drawGrafic(System::Windows::Forms::DataVisualization::Charting::Chart^ chart, System::String^ chartArea, System::Collections::Generic::Dictionary <double, double>^ coordinates, System::Drawing::Color color, int width, System::String^ name, System::String^ legentText, double maxY, double maxX) {

        System::Windows::Forms::DataVisualization::Charting::Series^ series = (gcnew System::Windows::Forms::DataVisualization::Charting::Series(name));
        System::Windows::Forms::DataVisualization::Charting::Legend^ legend = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());

        chart->ChartAreas[chartArea]->AxisY->Interval = maxY / 10;
        chart->ChartAreas[chartArea]->AxisY->Minimum = 0;
        chart->ChartAreas[chartArea]->AxisY->Maximum = maxY + 0.1;
        chart->ChartAreas[chartArea]->AxisX->Interval = maxX / 10;
        chart->ChartAreas[chartArea]->AxisX->Minimum = 0;
        chart->ChartAreas[chartArea]->AxisX->Maximum = maxX + 0.1;

        legend->Name = name;
        chart->Legends->Add(legend);

        chart->Name = name;
        series->ChartArea = chartArea;
        series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
        series->Legend = name;
        series->Name = name;
        chart->Series->Add(series);

        chart->Series[name]->Points->DataBindXY(coordinates->Keys, coordinates->Values);
        chart->Series[name]->LegendText = legentText;
        chart->Series[name]->Color = color;
        chart->Series[name]->BorderWidth = width;

    }
    private: System::Void buildSpeedToTime(double speed, double weight, double weightV, double k, System::Drawing::Color color) {
        using namespace System::Collections::Generic;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();
        Dictionary <double, double>^ f2 = gcnew Dictionary<double, double>();
        double prevSpeed = speed;
        double currHeight = 0;
        double T = 0.02;
        bool isEnd = false;
        double t = 0;

        int sameSpeedCount = 0;

        f1->Add(t, speed);
        while (isEnd == false) {
            double currSpeed = prevSpeed + (T / 2) * ((weightV * 10 - k * prevSpeed) / weight + (weightV * 10 - k * (prevSpeed + T * (weightV * 10 - k * prevSpeed) / weight)) / weight);
            double newHeight = currHeight + currSpeed * T;
            if (f1->ContainsKey(t) == false) {
                f1->Add(t, currSpeed);
            }
            if (f2->ContainsKey(t) == false) {
                f2->Add(t, newHeight);
            }
            if (t > 1) {
                if (currSpeed - prevSpeed < 0.0001) {
                    sameSpeedCount++;
                }
                isEnd = sameSpeedCount > 3;
            }
            prevSpeed = currSpeed;
            currHeight = newHeight;
            t += T;
        }

        System::String^ nameS = System::String::Format(String::Concat(Convert::ToString(speed), ":", "speed"));
        System::String^ nameH = System::String::Format(String::Concat(Convert::ToString(speed), ":", "height"));

        this->drawGrafic(this->chart1, "ChartArea1", f1, color, 2, nameS, nameS, prevSpeed, t);
        this->drawGrafic(this->chart1, "ChartArea2", f2, color, 2, nameH, nameH, currHeight, t);
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        double speed = Convert::ToDouble(this->maskedTextBox2->Text);

        double MU = 530;
        double R = 0.1;
        double ELLIPSE_RO = 10500;
        double ELLIPSE_V = 4 / 3 * PI * pow(R, 3);
        double WEIGHT = ELLIPSE_V * ELLIPSE_RO;
        double VECTOR_WEIGHT = (ELLIPSE_RO - 700) * ELLIPSE_V;

        double K = 6 * PI * MU * R;

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        this->buildSpeedToTime(speed, WEIGHT, VECTOR_WEIGHT, K, color);
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        this->chart1->Series->Clear();
        this->chart1->Legends->Clear();
        this->chart1->Name = L"";
    }
    private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
    }
    private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    };
}