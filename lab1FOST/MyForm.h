#pragma once
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






    private: System::Windows::Forms::Button^ button2;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
    private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label4;





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
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
            this->SuspendLayout();
            // 
            // chart1
            // 
            chartArea5->Name = L"ChartArea1";
            chartArea5->Position->Auto = false;
            chartArea5->Position->Height = 100;
            chartArea5->Position->Width = 50;
            chartArea6->BackColor = System::Drawing::Color::White;
            chartArea6->Name = L"ChartArea2";
            chartArea6->Position->Auto = false;
            chartArea6->Position->Height = 100;
            chartArea6->Position->Width = 50;
            chartArea6->Position->X = 50;
            this->chart1->ChartAreas->Add(chartArea5);
            this->chart1->ChartAreas->Add(chartArea6);
            legend3->Name = L"Legend1";
            this->chart1->Legends->Add(legend3);
            this->chart1->Location = System::Drawing::Point(26, 8);
            this->chart1->Name = L"chart1";
            series3->ChartArea = L"ChartArea1";
            series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series3->Legend = L"Legend1";
            series3->Name = L"Series1";
            this->chart1->Series->Add(series3);
            this->chart1->Size = System::Drawing::Size(893, 307);
            this->chart1->TabIndex = 0;
            this->chart1->Text = L"chart1";
            this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(611, 340);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(151, 34);
            this->button1->TabIndex = 1;
            this->button1->Text = L"build";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(768, 340);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(151, 34);
            this->button2->TabIndex = 9;
            this->button2->Text = L"clear";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(281, 351);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(19, 13);
            this->label3->TabIndex = 13;
            this->label3->Text = L"kg";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(172, 332);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(21, 13);
            this->label5->TabIndex = 12;
            this->label5->Text = L"m0";
            // 
            // maskedTextBox1
            // 
            this->maskedTextBox1->Location = System::Drawing::Point(175, 348);
            this->maskedTextBox1->Mask = L"0000000000";
            this->maskedTextBox1->Name = L"maskedTextBox1";
            this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox1->TabIndex = 11;
            this->maskedTextBox1->ValidatingType = System::Int32::typeid;
            this->maskedTextBox1->Text = "280000";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(424, 351);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(19, 13);
            this->label6->TabIndex = 16;
            this->label6->Text = L"kg";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(315, 332);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(39, 13);
            this->label7->TabIndex = 15;
            this->label7->Text = L"m_end";
            // 
            // maskedTextBox3
            // 
            this->maskedTextBox3->Location = System::Drawing::Point(318, 348);
            this->maskedTextBox3->Mask = L"0000000000";
            this->maskedTextBox3->Name = L"maskedTextBox3";
            this->maskedTextBox3->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox3->TabIndex = 14;
            this->maskedTextBox3->ValidatingType = System::Int32::typeid;
            this->maskedTextBox3->Text = "47300";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(555, 351);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(30, 13);
            this->label8->TabIndex = 19;
            this->label8->Text = L"kg/h";
            this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(446, 332);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(24, 13);
            this->label9->TabIndex = 18;
            this->label9->Text = L"fuel";
            this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
            // 
            // maskedTextBox4
            // 
            this->maskedTextBox4->Location = System::Drawing::Point(449, 348);
            this->maskedTextBox4->Mask = L"000000000";
            this->maskedTextBox4->Name = L"maskedTextBox4";
            this->maskedTextBox4->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox4->TabIndex = 17;
            this->maskedTextBox4->ValidatingType = System::Int32::typeid;
            this->maskedTextBox4->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox4_MaskInputRejected);
            this->maskedTextBox4->Text = "1297";
            // 
            // maskedTextBox5
            // 
            this->maskedTextBox5->Location = System::Drawing::Point(40, 351);
            this->maskedTextBox5->Mask = L"00000000000";
            this->maskedTextBox5->Name = L"maskedTextBox5";
            this->maskedTextBox5->Size = System::Drawing::Size(100, 20);
            this->maskedTextBox5->TabIndex = 20;
            this->maskedTextBox5->ValidatingType = System::Int32::typeid;
            this->maskedTextBox5->Text = "13002000";
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Location = System::Drawing::Point(146, 354);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(15, 13);
            this->label10->TabIndex = 22;
            this->label10->Text = L"H";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Location = System::Drawing::Point(37, 335);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(22, 13);
            this->label11->TabIndex = 21;
            this->label11->Text = L"F_t";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(134, 323);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 13);
            this->label4->TabIndex = 8;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(931, 387);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->maskedTextBox5);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->maskedTextBox4);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->maskedTextBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->maskedTextBox1);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label4);
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
        chart->ChartAreas[chartArea]->AxisX->LabelStyle->Format = "0.00";
        chart->ChartAreas[chartArea]->AxisY->LabelStyle->Format = "0.00";

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
    private: double TimeFunction(double T, double k) {
        if (T <= 1) {
            return 1 - (1 - k) * T;
        }

        return k;
    }
    private: System::Void buildSpeedToTime(double V, double _speed, double _time, double _h, double F_t, double m_0, double m_end, System::Drawing::Color color) {
        using namespace System::Collections::Generic;
        Dictionary <double, double>^ f1 = gcnew Dictionary<double, double>();
        Dictionary <double, double>^ f2 = gcnew Dictionary<double, double>();
        double prevSpeed = V;
        double currHeight = 0;
        double timeStep = 0.2;
        bool isEnd = false;
        double t = 0;

        double iterCounter = 0;

        double a = (F_t * _time) / (m_0 * _speed);
        double b = _time * 10 / _speed;
        double p = (0.5 * 0.3 * 1.225 * 15 * _speed * _time) / m_0;
        double e = (_speed * _time) / _h;
        double k = m_end / m_0;

        f1->Add(t, V);
        while (isEnd == false) {
            double T = t / _time;
            // double H = currHeight / _h;
            double F_T = this->TimeFunction(T, k);

            double speedStar = prevSpeed + timeStep * (1 / F_T) * (a - b * F_T - p * exp(-2.3026 * currHeight) * prevSpeed * prevSpeed);
            double speedNew = prevSpeed + timeStep * 0.5 * ((1 / F_T) * (1 / F_T) * (a - b * F_T - p * exp(-2.3026 * currHeight) * prevSpeed * prevSpeed) + (1 / F_T) * (a - b * F_T - p * exp(-2.3026 * currHeight) * speedStar * speedStar));

            currHeight += speedNew * timeStep * e;
            if (f1->ContainsKey(T) == false) {
                f1->Add(T, speedNew);
            }
            if (f2->ContainsKey(T) == false) {
                f2->Add(T, currHeight);
            }
            prevSpeed = speedNew;
            t += timeStep;
            iterCounter++;
            isEnd = iterCounter > 1000;
        }

        System::String^ nameS = System::String::Format(String::Concat(Convert::ToString(V), ":", "speed"));
        System::String^ nameH = System::String::Format(String::Concat(Convert::ToString(V), ":", "height"));

        this->drawGrafic(this->chart1, "ChartArea1", f1, color, 2, nameS, nameS, prevSpeed, t/ _time);
        this->drawGrafic(this->chart1, "ChartArea2", f2, color, 2, nameH, nameH, currHeight, t / _time);
    }
    private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
        using namespace System::Drawing::Drawing2D;
        using namespace System::Windows::Forms::DataVisualization::Charting;
        
        double speed = 0;
        double weight_0 = Convert::ToDouble(this->maskedTextBox1->Text);
        double weight_end = Convert::ToDouble(this->maskedTextBox3->Text);
        double fuel_per_hour = Convert::ToDouble(this->maskedTextBox4->Text);
        double F_t = Convert::ToDouble(this->maskedTextBox5->Text);

        double _speed = 7.8 * 1000; // km/h
        double _time = (weight_0 - weight_end) / fuel_per_hour;
        double _h = 17 * 1000;

        double V = speed / _speed;

        int red = rand() % 100 + 155;
        int green = rand() % 100 + 155;
        int blue = rand() % 100 + 155;
        System::Drawing::Color color = Color::FromArgb(red, green, blue);

        this->buildSpeedToTime(V, _speed, _time, _h, F_t, weight_0, weight_end, color);
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
    private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void maskedTextBox4_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}