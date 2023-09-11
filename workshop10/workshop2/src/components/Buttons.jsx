import React ,{useState} from "react";
import styles from "./Button.module.css";
const Button = ({ img }) => {
const [name,setName]=useState("") ;
const handleInput =()=>{
    console.log(name)
}
  return (
    <>
      <div>
      <input onChange={(e)=>setName(e.target.value)} type="text" placeholder="enter your name" />
      <button onClick={handleInput}>sumbit</button>
      </div>
    </>
  );
};
export default Button;
