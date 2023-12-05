class Teacher(lastName: String, firstName: String, age: Int, gender: String, address: Address, override val courses: List[Course]) extends Human(lastName, firstName, age, gender, address, courses) {
  override def displayInfo(): Unit = {
    super.displayInfo()
    println(s"Courses: ${courses.mkString(", ")}")
  }

  override def addCourses(coursesToAdd: List[Course]): Teacher = {
    new Teacher(lastName, firstName, age, gender, address, courses ++ coursesToAdd)
  }
}
