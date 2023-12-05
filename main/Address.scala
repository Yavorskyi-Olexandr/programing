class Address(val city: String, val country: String) {
  def displayAddress(): String = {
    s"$city, $country"
  }
}

