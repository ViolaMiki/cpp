//参考c++ primer
typedef int Rank;
#define DEFAULT_CAPACITY 3
    
template <typename T> class Vector {
    protected:
        Rank _size;//规模
        int _capacity;//容量
        T* _elem;//数据区
        void copyFrom ( T const*, Rank lo, Rank hi );//复制数组区间A[lo,hi)
        void expand();//空间不足时扩容
        void shrink();//装填因子过小时压缩
        bool bubble ( Rank lo, Rank hi );//扫描交换
        void bubbleSort ( Rank lo, Rank hi);//起泡排序算法
        Rank max ( Rank lo, Rank hi);//选取最大元素
        void selectionSort ( Rank lo, Rank hi );//选择排序算法
        void merge ( Rank lo, Rank hi );//归并算法
        void mergeSort ( Rank lo, Rank hi );//归并排序
        Rank partition( Rank lo, Rank hi );//轴点构造算法
        void quickSort ( Rank lo, Rank hi );//快速排序算法
        void heapSort ( Rank lo, Rank hi );//堆排序
    public:
    //构造函数
        Vector( int c = DEFAULT_CAPACITY, int s = 0, T v = 0 ){
			_elem = new T[_capacity = c];
            for ( _size = 0; _size < s; _elem[_size++] = v );
        };
        
        T& operator[] ( int position ) const {
            return _elem[position];
        }
 };