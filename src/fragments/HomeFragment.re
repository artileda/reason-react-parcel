// this for shorting React.string
let str = React.string;

[@react.component]
let make = () =>{
    <div>
        <h1>"HomeFragment"->str</h1>
        <p>"Edit this file at src/fragments/HomeFragment.re"->str</p>
    </div>
}