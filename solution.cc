class Solution {
public:
    string intToRoman(int num) {
        string sb = "";
        while(num >= 1000){
            sb += 'M';
            num -= 1000;
        }

        while(num >= 900){
            sb += "CM";
            num -= 900;
        }

        while(num >= 500){
            sb += 'D';
            num -= 500;
        }

        while(num >= 400){
            sb += "CD";
            num -= 400;
        }

        while(num >= 100){
            sb += 'C';
            num -= 100;
        }

        while(num >= 90){
            sb += "XC";
            num -= 90;
        }

        while(num >= 50){
            sb += 'L';
            num -= 50;
        }

        while(num >= 40){
            sb += "XL";
            num -= 40;
        }

        while(num >= 10){
            sb += 'X';
            num -= 10;
        }

        while(num >= 9){
            sb += "IX";
            num -= 9;
        }

        while(num >= 5){
            sb += 'V';
            num -= 5;
        }

        while(num >= 4){
            sb += "IV";
            num -= 4;
        }

        while(num >= 1){
            sb += 'I';
            num -= 1;
        }

        return sb;
    }
};
