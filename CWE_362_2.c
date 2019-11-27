//c 362_2

//void f(PTHREAD_MUTEX_T *mutex) {
void f(char *mutex) {
pthread_mutex_lock(mutex);

/* access shared resource */ 


pthread_mutex_unlock(mutex);
}
