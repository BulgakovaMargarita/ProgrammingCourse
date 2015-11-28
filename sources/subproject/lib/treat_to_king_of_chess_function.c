int poisk_ugrozi2(int x1, int x2, int y1, int y2, int z1, int z2, int a1, int a2){
    int rez;
    if (x1==y1){
        puts("Угроза от первой ладьи");
        rez=1;
}
    if (x1==z1){
        rez=2;
        puts("Угроза от второй ладьи");
    }
    if (x1==a1){
        puts("Угроза от третьей ладьи");
        rez=3;
    }
    if (x2==y2){
        puts("Угроза от первой ладьи");
        rez=1;
    }
    if (x2==z2){
        puts("Угроза от второй ладьи");
        rez=2;
    }
    if (x2==a2){
        puts("Угроза от третьей ладьи");
        rez=3;
    }
    return rez;
}

