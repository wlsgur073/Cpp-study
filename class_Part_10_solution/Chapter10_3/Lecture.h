#pragma once

#include <vector>
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;

	/*Teacher teacher;
	std::vector<Student> students;*/

	Teacher *teacher;
	 std::vector<Student*> students;

public:
	Lecture(std::string name_in)
		:m_name(name_in)
	{}
	
	~Lecture()
	{
		// do NOT delete teacher
		// do NOT delete students
	}

	/*void assignTeacher(const Teacher& const teacher_input)
	{
		teacher = teacher_input;
	}*/

	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}

	/*void registerStudent(const Student& const student_input)
	{
		students.push_back(student_input);
	}*/

	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << m_name << " Study " << std::endl << std::endl;

		//for (auto& element : students) // Note : 'auto element' doesn't work
		//	element.setIntel(element.getIntel() + 1);

		for (auto element : students) // Note : 'auto element' works
			element->setIntel(element->getIntel() + 1);
	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.m_name << std::endl;

		/*out << lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << element << std::endl;*/

		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}
};