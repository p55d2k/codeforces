fun main(args: Array<String>) {
    var t = readLine()!!.toInt()

    while (t-- > 0) {
        var n = readLine()!!.toInt()
        val a = readLine()!!.split(" ").map { it.toInt() }.toIntArray()
        var unique = a.groupBy { it }.values.first { it.size == 1 }[0]
        println(a.indexOf(unique) + 1)
    }
}