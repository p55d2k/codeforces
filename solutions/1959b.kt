fun value(s: String): Int {
    return when {
        s == "M" -> 0
        s.contains("L") -> s.length
        s.contains("S") -> -s.length
        else -> 0
    }
}

fun main(args: Array<String>) {
    var t = readLine()?.toInt() ?: 0
    
    while (t-- > 0) {
        var (a, b) = readLine()?.split(' ') ?: listOf("", "")

        var aval = value(a)
        var bval = value(b)

        if (aval > bval) {
            println(">")
        } else if (aval < bval) {
            println("<")
        } else {
            println("=")
        }
    }
}