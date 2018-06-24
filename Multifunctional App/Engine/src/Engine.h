#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <time.h>
using namespace System;

class Engine
{
public:
	Engine() {}
	~Engine() {}

	//Quiz Variables
	int correct = 0, incorrect = 0, NrQuestions = 0, NrChoices = 0, min, sec =0, countContent = 0;
	std::string Answers, timeLeft;
	std::vector<std::string> QuizContent; 
	//Quiz methods
	void decreaseTime()
	{
		if (!(this->sec) && this->min)
		{
			this->min--;
			this->sec = 59;
		}
		else
		{
			this->sec--;
		}
	}
    int timeOver()
	{
		if (!(this->min) && !(this->sec) ) return 1;
		return 0;
	}
	int endQuiz()
	{
		if ( countContent > (NrQuestions - 1)*(NrChoices + 1) ) return 1;
		return 0;
	}
	void readFile() //read the .txt file
	{
		std::ifstream file("Questions.txt");
		std::string line;
		while (std::getline(file, line))
		{
			std::istringstream iss(line);
			std::string content;
			if (!(iss >> content))
			{
				break;
			}
			QuizContent.push_back(line);
			if (line.find('?')!=std::string::npos)
			{
				this->NrQuestions++;
			}
			else
			{
				this->NrChoices++;
			}
		}
		this->min = this->NrQuestions;	
		this->NrChoices = this->NrChoices / this->NrQuestions;
	}
	void checkAnswer(char p)
	{
		if (p == Answers[countContent/(NrChoices+1)-1])
			this->correct++;
		else
			this->incorrect++;
	}
	std::string getContent()
	{
		return QuizContent[countContent++];
	}
	void getAnswers()
	{
		std::ifstream fanswer("Answers.txt");
		std::string ans;
		fanswer >> ans;
		this->Answers = ans;
	}
	std::string getTimeLeft()
	{
		if ((this->min) > 9 && (this->sec) > 9)
		{
			this->timeLeft = std::to_string(this->min) + ":" + std::to_string(this->sec);
		}
		else if ((this->min) <= 9 && (this->sec) <= 9)
		{
			this->timeLeft = "0"+std::to_string(this->min) + ":0" + std::to_string(this->sec);
		}
		else if ((this->min) > 9 && (this->sec) <= 9)
		{
			this->timeLeft =std::to_string(this->min) + ":0" + std::to_string(this->sec);
		}
		else
		{
			this->timeLeft ="0"+ std::to_string(this->min) + ":" + std::to_string(this->sec);
		}
		return this->timeLeft;
	}

	//Lottery variables
	std::vector<int> frequency;
	//Lottery methods
	System::String^ getRandomNumber()
	{
		int RandomNr;
		RandomNr = rand() % 49 + 1;

	    if (std::find(frequency.begin(), frequency.end(), RandomNr) == frequency.end())
		{
			frequency.push_back(RandomNr);
		}
		else
		{
			do{
				RandomNr = rand() % 49 + 1;
			} while (std::find(frequency.begin(), frequency.end(), RandomNr) != frequency.end());
		}
		return System::Convert::ToString(RandomNr);
	}
	void clearFrequency()
	{
		frequency.clear();
	}

	//Calculator methods
    System::String^ add(double a, double b)
	{
		
		return System::Convert::ToString(a+b);
	}
	System::String^ subtract(double a, double b)
	{
		return System::Convert::ToString(a - b);
	}
	System::String^ multiply(double a, double b)
	{
		return System::Convert::ToString(a*b);
	}
	System::String^ divide(double a, double b)
	{
		return System::Convert::ToString(a / b);
	}
	System::String^ modulo(int a, int b)
	{
		return System::Convert::ToString(a%b);
	}
	System::String^ EXP(double a,double b)
	{
		return System::Convert::ToString(a*pow(10, b));
	}
	System::String^ Log(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(log(result));
	}
	System::String^ Sqrt(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Sqrt(result);
		return System::Convert::ToString(result);
	}
	System::String^ Sinh(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Sinh(result);
		return System::Convert::ToString(result);
	}
	System::String^ Sin(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Sin(result);
		return System::Convert::ToString(result);
	}
	System::String^ Cosh(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Cosh(result);
		return System::Convert::ToString(result);
	}
	System::String^ Cos(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Cos(result);
		return System::Convert::ToString(result);
	}
	System::String^ Tanh(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Tanh(result);
		return System::Convert::ToString(result);
	}
	System::String^ Tan(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		result = Math::Tan(result);
		return System::Convert::ToString(result);
	}
	System::String^ Dec(System::String^ x)
	{
		int result;
		result = int::Parse(x);
		return System::Convert::ToString(result);
	}
	System::String^ Bin(System::String^ x)
	{
		int result;
		result = Double::Parse(x);
		return System::Convert::ToString(result,2);
	}
	System::String^ Hex(System::String^ x)
	{
		int result;
		result = Double::Parse(x);
		return System::Convert::ToString(result, 16);
	}
	System::String^ Oct(System::String^ x)
	{
		int result;
		result = Double::Parse(x);
		return System::Convert::ToString(result, 8);
	}
	System::String^ x2(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(std::pow(result, 2));
	}
	System::String^ x3(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(std::pow(result, 3));
	}
	System::String^ Supra(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(1.0/result);
	}
	System::String^ Ln(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(log(result));
	}
	System::String^ Percent(System::String^ x)
	{
		double result;
		result = Double::Parse(x);
		return System::Convert::ToString(result/100);
	}
	System::String^ CelsiusToFahrenheit(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
	    return ((result*1.8 + 32).ToString("F2") + "°F");
	}
	System::String^ FahrenheitToCelsius(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
		return (((result - 32) / (1.8)).ToString("F2") + "°C");
	}
	System::String^ CelsiusToKelvin(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
		return ((result + 273.15).ToString("F2") + "K");
	}
	System::String^ KelvinToCelsius(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
		return  ((result - 273.15).ToString("F2") + "°C");
	}
	System::String^ FahrenheitToKelvin(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
		return ((((result+ 459.67) * 5) / 9).ToString("F2") + "K");
	}
	System::String^ KelvinToFahrenheit(System::String^ x)
	{
		float result;
		float::TryParse(x, result);
		return ( (result*(9 / 5) - 459.67).ToString("F2") + "°F");
	}
};
