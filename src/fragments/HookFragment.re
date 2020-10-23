let str = React.string;

[@react.component]
let make = () =>{
    let (count,setCounter) = React.useState(()=> 0);
    <div>
        <button onClick={_ => setCounter(_ => count - 1)}> "-"->str </button>
        <h3>{count->React.int}</h3>
        <button onClick={_ => setCounter(_ => count + 1)}> "+"->str </button>
    </div>
}