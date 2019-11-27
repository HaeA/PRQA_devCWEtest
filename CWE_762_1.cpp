void foo(){

BarObj *ptr = new BarObj()
/* do some work with ptr here */ 

...

free(ptr);
}

/* // good code
void foo(){

BarObj *ptr = new BarObj()
// do some work with ptr here

...

delete ptr;
}
*/