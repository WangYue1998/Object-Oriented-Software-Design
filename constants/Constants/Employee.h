#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
protected:
    string m_FirstName;
    string m_LastName;
    string m_DepartmentName;
    unsigned short m_HiringYear;
    
public:
    Employee(const string& firstName, const string& lastName, const string& departmentName, const unsigned short hireYear){
        m_FirstName=firstName;
        m_LastName=lastName;
        m_DepartmentName=departmentName;
        m_HiringYear=hireYear;
    }
    
    string getFirstName() const {
        //m_FirstName="Alex";
        //getLastName();
        //setFirstName("Alex");
        return m_FirstName;
    }
    
    string getLastName() const{
        return m_LastName;
    }
    
    string getDepartmentName() const{
        return m_DepartmentName;
    }
    
    unsigned short getHiringYear() const{
        return m_HiringYear;
    }
    
    void setFirstName(const string& firstName){
        m_FirstName = firstName;
    }
    
    void setLastName(const string& lastName){
        m_LastName =  lastName;
    }
    
    void setDepartmentName(const string& departmentName){
        m_DepartmentName = departmentName;
    }
    
    void setHiringYear(const unsigned short hiringYear){
        m_HiringYear = hiringYear;
    }
};


#endif /* EMPLOYEE_H */

