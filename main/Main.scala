object Main extends App {
  // Створення курсів
  val mathCourse = new Course("Math")
  val historyCourse = new Course("History")

  val students: List[Student] = List(
    new Student("Petrov", "Ivan", 20, "Male", new Address("Kyiv", "Ukraine"), List(85, 90, 78), List(mathCourse)),
    new Student("Ivanov", "Oleg", 22, "Male", new Address("Lviv", "Ukraine"), List(92, 88, 75), List(historyCourse)),
    new Student("Ander", "Sergey", 21, "Male", new Address("Kherson", "Ukraine"), List(78, 85, 90), List(mathCourse)),
    new Student("Chuprina", "Elsa", 23, "Female", new Address("Odesa", "Ukraine"), List(95, 89, 93), List(historyCourse))
  )

  val teachers: List[Teacher] = List(
    new Teacher("Sidorova", "Olena", 35, "Female", new Address("Kyiv", "Ukraine"), List(mathCourse)),
    new Teacher("Ivanova", "Maria", 40, "Female", new Address("Lviv", "Ukraine"), List(historyCourse))

  )

  // виведення інформації про студентів
  println("Students:")
  students.foreach(_.displayInfo())

  // виведення інформації про вчителів
  println("\nTeachers:")
  teachers.foreach(_.displayInfo())
}