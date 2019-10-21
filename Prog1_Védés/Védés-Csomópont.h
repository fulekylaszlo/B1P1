class Csomopont
  {
  public:
  Csomopont (char b = '/'):betu (b), balNulla (0), jobbEgy (0)
    {
    };
    
  ~Csomopont ()
    {
    };
    
    Csomopont *nullasGyermek () const;
    Csomopont *egyesGyermek () const;
    void ujNullasGyermek (Csomopont * gy);
    void ujEgyesGyermek (Csomopont * gy);
    char getBetu () const;
    
  private:
  char betu;
  Csomopont *balNulla;
  Csomopont *jobbEgy;
  Csomopont (const Csomopont &);
  Csomopont & operator= (const Csomopont &);
  };
