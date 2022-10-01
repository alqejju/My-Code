//import 'dart:typed_data';

main (){
    //var name = 'Eko';
    //print (name);

    //final array1 = [1,2,3];
    //const array2 = [1,2,3];

    //print(array1);

    //Variable Number
    //int number1;
    //double number2;
    //num number3;

    //num bisa int bis double;

    //boolean

    bool status = true;
    print(status);

    //String

    String firstName = 'Faqih', lastName = 'Almarzuqi';

    //String Interpolation = Dynamic, atau mendukung expression

    var fullName = '$firstName ${lastName}';
    print(fullName);

    //Backlash

    var text = 'Belajar dart \$woi';
    print(text);

    //String Multiply

    var name = firstName +lastName;
    var name2 = 'Abdullah ' 'Faqih'; //pake space
    print(name2);

    //longString

    var longString = '''
    This is long string
    None of you need to know it
    ''';

    print(longString);

    //Dynamic

    dynamic variable = 100;

    print(variable);

    variable = true;
    print(variable);

    variable = 'Faqih';
    print(variable);

    var multiVar;

    
}