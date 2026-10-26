#include "list.h"
#include "operation.h"
#include "my_data.h"
 

void insertAndSort(List &L, infotype x) {
    /**
    * IS : List may be empty
    * PR : insert a new element into an already sorted-by-ID List L
    *      so that the elements inside List L is still sorted by ID.
    *      procedure must also check if such ID is already exists (No Duplicate ID).
    *      If new data has duplicate ID, new data is rejected.
    * FS : elements in List L sorted by ID, P is inside List L
    */

    //-------------your code here-------------
    your code here


    //----------------------------------------
}


void deletebyID(List &L, int id_x) {
    /**
    * IS : List L may be empty
    * FS : an element with ID info = id_x is deleted from List L (deallocate)
    */

    address Prec, P;
    //-------------your code here-------------
    Prec = nullptr;
    P = L.first;

    while (P != nullptr && P->info.id != id_x) {
        Prec = P;
        P = P->next;
    }

    if (P != nullptr) {
        if (Prec == nullptr) {
            deleteFirst(L, P); 
        } else {
            deleteAfter(L, Prec, P);
        }
        deallocate(P);
    }
    //----------------------------------------
}


void savePassedMember(List &L, List &L2){
    /**
    * IS : List L and L2 may be empty
    * FS : any element with score greater than 80 is moved to L2
    */
    address P;
    //-------------your code here-------------
    address Q = L.first;
    address Prec = nullptr; 
    address nextQ;

    while (Q != nullptr) {
        nextQ = Q->next;  

        if (Q->info.score > 80) {
            if (Prec == nullptr) {
                deleteFirst(L, P);
            } else {
                deleteAfter(L, Prec, P);
            }
            insertLast(L2, P);
        } else {
            Prec = Q;
        }

        Q = nextQ;
    }

    //----------------------------------------
}
