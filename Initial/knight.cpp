#include "knight.h"

void display(int HP, int level, int remedy, int maidenkiss, int phoenixdown, int rescue) {
    cout << "HP=" << HP
        << ", level=" << level
        << ", remedy=" << remedy
        << ", maidenkiss=" << maidenkiss
        << ", phoenixdown=" << phoenixdown
        << ", rescue=" << rescue << endl;
}
bool SNT(int& snt) {
    if (snt < 2) return 0;
    for (int i = 2; i < snt; i++) {
        if (snt % i == 0) return 0;
    }
    return 1;
}
int Fibo(int& fi) {
    int arr[100], i = 1;
    arr[0] = 1; arr[1] = 1;
    while (arr[i] < fi) {
        i++;
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[i - 1];
}
void adventureToKoopa(string file_input, int& HP, int& level, int& remedy, int& maidenkiss, int& phoenixdown, int& rescue) {
    int n1,n2, s1, sole, MAXHP, snt, fi,game,h,da;
    string str, sukien, sukien13,dong2;
    ifstream input;
    input.open(file_input, ios::in);
    input >> HP >> level >> remedy >> maidenkiss >> phoenixdown;
    int i = 0,x = 0;
    int levelO, b, tihon = 5,ech=5, lv = 0,sau13;
    char n13;
    double dam, basedam[100000];
    basedam[1] = 1;
    basedam[2] = 1.5;
    basedam[3] = 4.5;
    basedam[4] = 7.5;
    basedam[5] = 9.5;
    rescue = -1;
    MAXHP = HP;
                           

    getline(input,dong2);
    getline(input, dong2);
    getline(input, sukien);
    input.close();
                                                                  
    
    int leng, z[2], m = 0;
     leng = sukien.length();
     for (int i = 0; i < leng; i++) {
         i = sukien.find(",", i);
         if (i<0 || i>leng)  break;
         z[m] = i; m++;
     }
     string sk1(sukien, 0, z[0]), sk2(sukien, z[0]+1, z[1]-z[0]-1), sk3(sukien, z[1]+1);
                                                
     
     int lancelot = 0;
     snt = HP;
     if (SNT(snt) == 1) lancelot = 1;
     int win1_7=0;
    string cat,n22;
    stringstream doiso;
    input.open(sk1, ios::in);
    input >> n2;
    input >> n22;
    input.close();
    int a[100], q = 0, ab[100];
    int phay1 = 0, phay2 = 0, mtx = 0, mti = 0;
    while (phay2 <= n22.length() && phay2 >= 0) {
        phay2 = n22.find(',', phay1);
        cat = n22.substr(phay1, phay2 - phay1);
        
        phay1 = phay2 + 1;
        doiso << cat << " ";
        doiso >> a[q];
        q++;
    }
    int  maxi = 0, mini = 0, max = a[0], min = a[0];

    for (int i = 1; i < n2; i++) {
        if (max <= a[i]) { max = a[i]; maxi = i; }
        if (min >= a[i]) { min = a[i]; mini = i; }
    }
    
   
    mtx = a[0]; mti = 0;
    if (n2 > 1) {
        for (int i = 1; i < n2; i++) {
            if (a[i] > a[i - 1]) { mtx = a[i]; mti = i; }
            else break;
        }
        for (int i = mti + 1; i < n2; i++) {
            if (a[i] >= a[i - 1]) {
                mtx = -2; mti = -3;
            }
        }
    }
   
    int max2 = 0, min2 = 0, maxi2 = 0, mini2 = 0;
    if (a[0] < 0) ab[0] = -a[0]; else ab[0] = a[0];
    ab[0] = (17 * ab[0] + 9) % 257;
    max2 = ab[0]; min2 = ab[0];  
    for (int i = 1; i < n2; i++) {
        if (a[i] < 0) ab[i] = -a[i]; else ab[i] = a[i];
        ab[i] = (17 * ab[i] + 9) % 257;
    
        if (max2 < ab[i]) { max2 = ab[i]; maxi2 = i; }
        if (min2 > ab[i]) { min2 = ab[i]; mini2 = i; }
    }
 
    int    max2_3x = -5, max2_3i = -7, max2x = ab[0], max2i = 0, min2x = ab[0], min2i = 0;
    if (n2 == 2) {
        if (ab[0]> ab[1]) { max2_3x = ab[1]; max2_3i = 1; }
        if (ab[0] < ab[1]) { max2_3x = ab[0]; max2_3i = 0; }
    }
    if (n2 >= 3) {
        for (int i = 0; i < 3; i++) {
            if (max2x < ab[i]) { max2x = ab[i]; max2i = i; }
            if (min2x > ab[i]) { min2x = ab[i]; min2i = i; }
        }
        if (max2x != min2x) {
            max2_3x = min2x; max2_3i = min2i;
            for (int i = 0; i < 3; i++) {  
                if (ab[i] > min2x && ab[i] < max2x) {
                    max2_3x = ab[i]; max2_3i = i; break;
                }
            }
        }
    }
  

    stringstream game19;
    string dong;
    int r1 , c1, thuoc, dem = 0,sk19lan=0;

    
                             

    stringstream gameplay;
    gameplay << dong2;
    string n;
                                                  


    int n9, vt19 = 0, cs[6], dodai = 0, sk18lan = 0;
    string vukhi;
    gameplay >> n;
    if (MAXHP == 999 || lancelot == 1) win1_7 = 1;
    
    while (rescue == -1) {    
        i++;
        b = i % 10;
        levelO = i > 6 ? (b > 5 ? b : 5) : b;
                                                          
        
            if (n == "0") {
                rescue = 1;
                display(HP, level, remedy, maidenkiss, phoenixdown, rescue);
                break;
            }
        if (win1_7 != 1) {
            if (n == "1" || n == "2" || n == "3" || n == "4" || n == "5") {
                if (n == "1") da = 1;
                if (n == "2") da = 2;
                if (n == "3") da = 3;
                if (n == "4") da = 4;
                if (n == "5") da = 5;
                if (level > levelO && level < 10) {
                    level += 1;
                }
                if (level < levelO) {
                    dam = basedam[da] * levelO * 10;
                  
                    HP = HP - dam;
                    if (HP > 0) {
                        rescue = -1;
                    }
                    if (HP <= 0 && phoenixdown < 1) {
                        rescue = 0;
                    }
                    if (HP <= 0 && phoenixdown > 0) {
                        phoenixdown--;
                        HP = MAXHP;
                        rescue = -1;
                        if(ech<4) ech = 4; 
                        if(tihon<4) tihon = 5;
                    }

                }
            }
            if (n == "6") {
                if (tihon == 5 && ech == 5) {
                    if (level > levelO && level < 10) {
                        if (level == 9) level += 1;
                        else level += 2;
                        rescue = -1;
                    }
                    if (level < levelO) {
                        if (remedy > 0) {
                            remedy--;
                        }
                        else { if (HP >= 5) HP /= 5;
                        else HP = 1;
                        tihon = 0;
                        }
                    }
                }
            }
            if (n == "7") {
                if (tihon == 5 && ech == 5) {
                    if (level > levelO && level < 10) {
                        if (level == 9) level += 1;
                        else level += 2;
                        rescue = -1;
                    }
                    if (level < levelO) {
                        if (maidenkiss > 0) {
                            maidenkiss--;
                        }
                        else {
                            ech = 0;
                            lv = level;
                            level = 1;
                        }
                    }
                }
            }
        }
        else if ((win1_7 == 1) && (n == "1" || n == "2" || n == "3" || n == "4" || n == "5" || n == "6" || n == "7")) {
        if (level < 10)level++;
        if (level < 10 && (n == "6" || n == "7"))level++;
        }
        if (n == "11") {
            s1 = 0; sole = 99;
            n1 = ((level + phoenixdown) % 5 + 1) * 3;
            for (int i = 1; i <= n1; i++) {
                s1 += sole;
                sole -= 2;
            }
            HP = HP + (s1 % 100); 
            snt = HP+1;
            while (SNT(snt) == 0) snt++;
            if (SNT(snt)) HP = snt;
            if (HP > MAXHP) HP = MAXHP;
        }
        if (n == "12") {
            if (HP > 1) {
                fi = HP;
                HP = Fibo(fi);
            }
        }
        
        if (n == "15") {
            if (remedy < 99) remedy++;
            if (tihon < 4) {
                tihon = 4;
                remedy--;
            }
        }
        if (n == "16") {
            if (maidenkiss < 99) maidenkiss++;
            if (ech < 4) {
                ech = 4;
                maidenkiss--;
            }
        }
        if (n == "17"){
            if (phoenixdown < 99) phoenixdown++;
        }
        if (n[0] == '1' && n[1] == '3') {
            for (int i = 2; i < n.length(); i++) {
                if (HP > 0) {
                  
                    switch (n[i]) {
                    case '1':
                        
                        HP = HP - (maxi + mini);
                        if (HP > MAXHP) HP = MAXHP;
                        if (HP <= 0 && phoenixdown > 0) {
                            phoenixdown--;
                            HP = MAXHP;
                            rescue = -1;
                            if (ech < 4) ech = 4;
                            if (tihon < 4) tihon = 5;
                        }
                     
                        break;
                    case '2':
                       
                        HP = HP - (mtx + mti);
                        if (HP > MAXHP) HP = MAXHP;
                        if (HP <= 0 && phoenixdown > 0) {
                            phoenixdown--;
                            HP = MAXHP;
                            rescue = -1;
                            if (ech < 4) ech = 4;
                            if (tihon < 4) tihon = 5;
                        }
                   
                        break;
                    case '3':
                       
                        HP = HP - (maxi2 + mini2);
                        if (HP > MAXHP) HP = MAXHP;
                        if (HP <= 0 && phoenixdown > 0) {
                            phoenixdown--;
                            HP = MAXHP;
                            rescue = -1;
                            if (ech < 4) ech = 4;
                            if (tihon < 4) tihon = 5;
                        }
                     
                        break;
                    case '4':
                       

                        HP = HP - (max2_3x + max2_3i);
                        if (HP > MAXHP) HP = MAXHP;
                        if (HP <= 0 && phoenixdown > 0) {
                            phoenixdown--;
                            HP = MAXHP;
                            rescue = -1;
                            if (ech < 4) ech = 4;
                            if (tihon < 4) tihon = 5;
                        }
                 
                        break;
                    }
                }
                else break;
            }
        }
        if (n == "19" && sk19lan == 0) {
            sk19lan = 1;
            input.open(sk2, ios::in);
            input >> r1 >> c1;
            getline(input, dong);
            for (int i = 0; i < r1; i++) {
                getline(input, dong);
                dem = 0;
                                           
                game19 << dong << " ";
                for (int j = 0; j < c1; j++) {
                    game19 >> thuoc;
                    if (dem < 3) {                        
                        if (thuoc == 16) {
                            if (remedy < 99) remedy++;
                            if (tihon < 4) {
                                tihon = 4;
                                remedy--;
                            }
                            dem++;
                        }
                        if (thuoc == 17) {
                            if (maidenkiss < 99) maidenkiss++;
                            if (ech < 4) {
                                ech = 4;
                                maidenkiss--;                                
                            }
                            dem++; 
                        }
                        if (thuoc == 18) {
                            if (phoenixdown < 99) phoenixdown++;
                            dem++; 
                        }
                    }
                }
                
            }
            input.close();
        }
        if (n == "99") {
            if (MAXHP == 999|| (lancelot == 1 && level >= 8)|| (level == 10)) level = 10;
            else {
                rescue = 0;
                display(HP, level, remedy, maidenkiss, phoenixdown, rescue);
                break;
            }
        
        }
        if (n == "18" && sk18lan == 0) {
            sk18lan = 1;
            input.open(sk3, ios::in);
            input >> n9;
            getline(input, vukhi);
            for (int i = 0; i < n9; i++) {
                for (int k = 0; k < 6; k++) cs[k] = 0;
                getline(input, vukhi);
                dodai = vukhi.length();
                vt19 = vukhi.find("Merlin", 0);
                if (vt19 >= 0 && vt19 <= dodai) HP += 3;
                else {
                    vt19 = vukhi.find("merlin", 0);
                    if (vt19 >= 0 && vt19 <= dodai) HP += 3;
                    else {
                        for (int j = 0; j < dodai; j++) {
                            switch (vukhi[j]) {
                            case 'm':
                            case 'M':
                                cs[0]++; break;
                            case 'e':
                            case 'E':
                                cs[1]++; break;
                            case 'r':
                            case 'R':
                                cs[2]++; break;
                            case 'l':
                            case 'L':
                                cs[3]++; break;
                            case 'I':
                            case 'i':
                                cs[4]++; break;
                            case 'n':
                            case 'N':
                                cs[5]++; break;
                            }
                        }
                        if (cs[0] > 0 && cs[1]>0 && cs[2]>0 &&cs[3]>0 && cs[4]>0 && cs[5]>0) HP += 2;                      
                    }
                }
             
            }
            input.close();
            if (HP > MAXHP)HP = MAXHP;
        }
        
        if (HP <= 0) { 
            rescue = 0;
            display(HP, level, remedy, maidenkiss, phoenixdown, rescue);
            break;
        }
        if (tihon < 4) {tihon++;}
        if (tihon == 4) {
            HP *= 5;
            if (HP > MAXHP) HP = MAXHP;
            tihon = 5;
        }   
        if (ech < 4) { ech++; }
        if (ech == 4) {
            level = lv;
            ech = 5;
        }
        rescue = 1;
     
        while (gameplay >> n) { rescue = -1; break; }
       
       display(HP, level, remedy, maidenkiss, phoenixdown, rescue);
    }
}