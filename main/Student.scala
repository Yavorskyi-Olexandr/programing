class Student(lastName: String, firstName: String, age: Int, gender: String, address: Address, val grades: List[Int], courses: List[Course])
  extends Human(lastName, firstName, age, gender, address, courses) {

  // Перевизначення методу addCourses для студента
  override def addCourses(coursesToAdd: List[Course]): Student = {
    new Student(lastName, firstName, age, gender, address, grades, courses ++ coursesToAdd)
  }

  override def displayInfo(): Unit = {
    super.displayInfo()
    println(s"Grades: ${grades.mkString(", ")}")
  }
}