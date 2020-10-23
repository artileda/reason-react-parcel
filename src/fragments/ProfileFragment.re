let str = React.string;

[@react.component]
let make = (~name: string) =>{

    // JS Binding a.k.a Interop
    let urlDecodeSafe = [%raw{|
function(s){
return decodeURI(s)
}
    |}];

    let (myname,setMyname) = React.useState(()=> urlDecodeSafe(name));


    <div>
        <h1>("Hello, " ++ myname)->str</h1>
        <p>"Edit this at src/fragments/ProfileFragments.re"->str</p>
        <hr />
        <h2>"Input your name: "->str</h2>
        <input onChange={e => setMyname( _ => ReactEvent.Form.target(e)##value)} />
    </div>
}