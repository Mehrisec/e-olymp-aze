//Bu sualda bize iki dairnenin qanuna uygunluq seklinde keisdiyini ver bizim de bunlarin neche noqtede kesiydini tapmamiz istenilir 
using System; // System kitabxanasını daxil edir.

namespace Problem4 // Problem4 adlı ad məkanını yaradır.
{
    internal class Program // Proqramın əsas sinfi.
    {
        public static void Main(string[] args) // Proqramın giriş nöqtəsi.
        {
            string setir = Console.ReadLine(); // İstifadəçidən giriş xəttini oxuyur.
            var massiv = setir.Split(' '); // Girişi boşluqlara görə parçalayır.

            double x1 = double.Parse(massiv[0]); // Birinci dairənin mərkəzinin x koordinatını alır.
            double y1 = double.Parse(massiv[1]); // Birinci dairənin mərkəzinin y koordinatını alır.
            double r1 = double.Parse(massiv[2]); // Birinci dairənin radiusunu alır.
            double x2 = double.Parse(massiv[3]); // İkinci dairənin mərkəzinin x koordinatını alır.
            double y2 = double.Parse(massiv[4]); // İkinci dairənin mərkəzinin y koordinatını alır.
            double r2 = double.Parse(massiv[5]); // İkinci dairənin radiusunu alır.

            var mesafe = Math.Sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)); // Dairələrin mərkəzləri arasındakı məsafəni hesablayır.
            var cr = r1 + r2; // İki dairənin radiuslarının cəmini tapır.
            var fr = Math.Abs(r1 - r2); // Dairələrin radiuslarının fərqini tapır.

            if (mesafe == cr) // Əgər məsafə radiusların cəbinə bərabərdirsə:
                Console.WriteLine("1"); // Dairələr bir nöqtədə kəsişir.
            else if (mesafe > cr) // Əgər məsafə radiusların cəbindən böyükdürsə:
                Console.WriteLine("0"); // Dairələr kəsişmir.
            else if (mesafe == 0) // Əgər məsafə sıfırdırsa (mərkəzlər eyni):
                Console.WriteLine(Math.Abs(r1 - r2) < double.Epsilon ? "-1" : "0"); // Radiuslar bərabərdirsə sonsuz kəsişmə (-1), əks halda (0).
            else if (0 < mesafe && mesafe < cr) // Məsafə sıfırdan böyük, lakin radiusların cəminə bərabərdirsə:
            {
                if (fr < mesafe) // Əgər radiusların fərqi məsafədən kiçikdirsə:
                    Console.WriteLine("2"); // Dairələr iki nöqtədə kəsişir.
                else if (fr == mesafe) // Əgər radiusların fərqi məsafəyə bərabərdirsə:
                    Console.WriteLine("1"); // Dairələr bir nöqtədə kəsişir.
                else // Əgər radiusların fərqi məsafədən böyükdürsə:
                    Console.WriteLine("0"); // Dairələr kəsişmir.
            }
        }
    }
}
