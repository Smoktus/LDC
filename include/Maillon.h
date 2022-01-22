template <typename T>
class Maillon
{
public:
    Maillon()
    {
        next = NULL;
        prev = NULL;
    };
    Maillon(T &d)
    {
        data = d;
        next = NULL;
        prev = NULL;
    }
    Maillon(Maillon<T> &maillon)
    {
        data = maillon.data;
        next = maillon.next;
        prev = maillon.prev;
    };
    Maillon &operator=(const Maillon<T> &maillon)
    {
        if (maillon.data != NULL)
        {
            this->data = maillon->data;
        }
        this->next = maillon->next;
        this->prev = maillon->prev;
        return this;
    }
    ~Maillon()
    {
        delete next;
        delete prev;
    };
    //T& getData();
private:
    T data;
    Maillon<T> *next;
    Maillon<T> *prev;
};

/*template <typename T>
T& Maillon<T>::getData()
{
    return data;
}*/
