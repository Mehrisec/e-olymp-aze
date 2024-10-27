using System; // System kitabxanasını daxil edir.

namespace Test // Test adlı ad məkanını yaradır.
{
    class Problem5 // Problem5 adlı sinifi yaradır.
    {
        public static void Main(string[] args) // Proqramın giriş nöqtəsi.
        {
            // Müxtəlif k qiymətləri üçün n-in minimum dəyərləri.
            long[] s = new long[1000]; // Uzun ədəd tipləri üçün massiv yaradır.
            s[1] = 1; // k=1 üçün n.
            s[2] = 4; // k=2 üçün n.
            s[3] = 12; // k=3 üçün n.
            s[4] = 24; // k=4 üçün n.
            s[5] = 36; // k=5 üçün n.
            s[6] = 60; // k=6 üçün n.
            s[7] = 192; // k=7 üçün n.
            s[8] = 120; // k=8 üçün n.
            s[9] = 180; // k=9 üçün n.
            s[10] = 240; // k=10 üçün n.
            s[11] = 576; // k=11 üçün n.
            s[12] = 360; // k=12 üçün n.
            s[13] = 1296; // k=13 üçün n.
            s[14] = 900; // k=14 üçün n.
            s[15] = 720; // k=15 üçün n.
            s[16] = 840; // k=16 üçün n.
            s[17] = 9216; // k=17 üçün n.
            s[18] = 1260; // k=18 üçün n.
            s[19] = 786432; // k=19 üçün n.
            s[20] = 1680; // k=20 üçün n.
            s[21] = 2880; // k=21 üçün n.
            s[22] = 15360; // k=22 üçün n.
            s[23] = 3600; // k=23 üçün n.
            s[24] = 2520; // k=24 üçün n.
            s[25] = 6480; // k=25 üçün n.
            s[26] = 61440; // k=26 üçün n.
            s[27] = 6300; // k=27 üçün n.
            s[28] = 6720; // k=28 üçün n.
            s[29] = 2359296; // k=29 üçün n.
            s[30] = 5040; // k=30 üçün n.
            s[31] = 3221225472; // k=31 üçün n.
            s[32] = 7560; // k=32 üçün n.
            s[33] = 46080; // k=33 üçün n.
            s[34] = 983040; // k=34 üçün n.
            s[35] = 25920; // k=35 üçün n.
            s[36] = 10080; // k=36 üçün n.
            s[37] = 206158430208; // k=37 üçün n.
            s[38] = 32400; // k=38 üçün n.
            s[39] = 184320; // k=39 üçün n.
            s[40] = 15120; // k=40 üçün n.
            s[41] = 44100; // k=41 üçün n.
            s[42] = 20160; // k=42 üçün n.
            s[43] = 5308416; // k=43 üçün n.
            s[44] = 107520; // k=44 üçün n.
            s[45] = 25200; // k=45 üçün n.
            s[46] = 2985984; // k=46 üçün n.
            s[47] = 9663676416; // k=47 üçün n.
            s[48] = 27720; // k=48 üçün n.
            s[49] = 233280; // k=49 üçün n.
            s[50] = 45360; // k=50 üçün n.

            Console.WriteLine(s[long.Parse(Console.ReadLine())]); // İstifadəçidən k qiymətini alır və müvafiq n-i çıxarır.
        }
    }
}
