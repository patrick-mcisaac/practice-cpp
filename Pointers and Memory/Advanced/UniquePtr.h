template <typename T> class Unique
{
  private:
    T *ptr = nullptr;

  public:
    Unique(T *val);
    ~Unique();
};