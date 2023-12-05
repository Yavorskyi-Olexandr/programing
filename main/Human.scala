class Human(val lastName: String, val firstName: String, val age: Int, val gender: String, val address: Address, val courses: List[Course]) {
  def displayInfo(): Unit = {
    println(s"Name: $lastName $firstName, Age: $age years, Gender: $gender")
    println(s"Address: ${address.displayAddress()}")
    println(s"Courses: ${courses.mkString(", ")}")
  }

  // додавання можливості додавати курси
  def addCourses(coursesToAdd: List[Course]): Human = {
    new Human(lastName, firstName, age, gender, address, courses ++ coursesToAdd)
  }
}
