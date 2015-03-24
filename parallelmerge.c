<<<<<<< HEAD
void partition(int arr[],int arr1[],int low,int high,int thread_count)
 {
int tid,mid;

#pragma omp if
if(low<high)
{
    if(thread_count==1)
    {
            mid=(low+high)/2;
            partition(arr,arr1,low,mid,thread_count);
            partition(arr,arr1,mid+1,high,thread_count);
                sort(arr,arr1,low,mid,high);
    }
    else
    {
        #pragma omp parallel num_threads(thread_count)
        {
                mid=(low+high)/2;
                #pragma omp sections
                {
                    #pragma omp section
                    {
                        partition(arr,arr1,low,mid,thread_count/2);
                        }
                    #pragma omp section
                    {
                        partition(arr,arr1,mid+1,high,thread_count/2);
                    }
                }
        }
        sort(arr,arr1,low,mid,high);

    }
}
 }
=======
void partition(int arr[],int arr1[],int low,int high,int thread_count)
 {
int tid,mid;

#pragma omp if
if(low<high)
{
    if(thread_count==1)
    {
            mid=(low+high)/2;
            partition(arr,arr1,low,mid,thread_count);
            partition(arr,arr1,mid+1,high,thread_count);
                sort(arr,arr1,low,mid,high);
    }
    else
    {
        #pragma omp parallel num_threads(thread_count)
        {
                mid=(low+high)/2;
                #pragma omp sections
                {
                    #pragma omp section
                    {
                        partition(arr,arr1,low,mid,thread_count/2);
                        }
                    #pragma omp section
                    {
                        partition(arr,arr1,mid+1,high,thread_count/2);
                    }
                }
        }
        sort(arr,arr1,low,mid,high);

    }
}
 }
>>>>>>> efd4245fe427ffeefe49c72470b81a015d8dcf82
