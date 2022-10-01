void main(List<String> args) {
  var nilaiAkhir = 80;
  var nilaiAbasen = 40;

  var standartAkhir = nilaiAkhir >= 76;
  var standartAbsen = nilaiAbasen >= 65;

  print(standartAkhir);
  print(standartAbsen);

  var lulus = standartAkhir && standartAbsen;

  print(lulus);
}