template <typename T>
class Maillon
{
public:
    Maillon()
    {
        //next = NULL;
        //prev = NULL;
    };
    Maillon(T d)
    {
        this->data = d;
        //next = NULL;
        //prev = NULL;
    }
    Maillon(const Maillon<T> &maillon)
    {
        data = maillon.data;
        next = maillon.next;
        prev = maillon.prev;
    };
    Maillon &operator=(const Maillon<T> &maillon)
    {
        this->data = maillon.data;
        this->next = maillon.next;
        this->prev = maillon.prev;
        return (*this);
    }
    ~Maillon()
    {
        //delete next;
        //delete prev;
    };
    T getData() { return this->data; };
    //void setData(T &data) { this->data = data; }
    Maillon* next;
    Maillon* prev;

private:
    T data;
};