class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setWidth(double w);
      void setLength(double l);
      void setHeight(double h);
      int getWidth();
      int getLength();
      int getHeight();
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
