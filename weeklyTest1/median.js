//Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.function median(arr1,arr2){
 function median(arr1,arr2)
 {
  let newarr = [...arr1,...arr2];
  newarr=newarr.sort();
  console.log(newarr);
let length = newarr.length;
if(length % 2 == 0)
{
 
  let midval = length/2;
 
  return ((newarr[midval-1] + newarr[midval])/2);
}
else{
  let midval = Math.floor(length/2)
  return(newarr[midval])
}
}
console.log(median([1,2],[1,7,9]));