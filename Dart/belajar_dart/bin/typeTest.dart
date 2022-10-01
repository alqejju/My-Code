void main(List<String> args) {
    dynamic variable = 292;

    var variableInt = variable as int;

    var isInt = variable is int;
    var isBoll = variable is! bool;

    print(variableInt is int);
}