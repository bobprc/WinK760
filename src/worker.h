class Worker
{
public:
    Worker();
    ~Worker();

    void Work();
    void Exit();
    
private:
    static DWORD WINAPI ThreadProc(_In_  LPVOID lpParameter);
    DWORD doWork(void);

    HANDLE exitThreadEvent;
    HANDLE doWorkEvent;
    HANDLE threadHandle;

    DISALLOW_COPY_AND_ASSIGN(Worker);
};

