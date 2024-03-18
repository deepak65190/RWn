// let a= document.getElementsByClassName("one") ;
// //select by tag name 
// for(let i=0 ; i<a.length;i++){
//     console.log(a[i].innerHTML)
// }


// let a =document.querySelectorAll(".one")[0].innerText  ;
// console.log(a) ;
let likes=0 ;
let a=document.getElementById("count")

// like function
function abc(){
   likes++ ;
//    console.log(likes)
a.innerText=likes
}
// D-like function
function xyz(){
  
if(likes<1){
   
    a.innerText=0 ;
}else{
    likes--;
    a.innerText=likes
}

}




















