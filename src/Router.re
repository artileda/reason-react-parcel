// type is work as url representation
// will destructured an App.re with
// components
type t = 
 | Home
 | Profile(string)
 | Hook
 | NotFound;

// this for ease link href
 let unwrap = 
  fun
  | Home => "/"
  | Hook => "/hook"
  | Profile(name) => {j|/p/$name|j}
  | _ => "/404"
;

// this will convert url to t elements
// https://reasonml.github.io/reason-react/docs/en/router
let urlToEnumerable = (url: ReasonReactRouter.url) => {
    switch(url.path){
        | [] => Home
        | ["p",name] => Profile(name)
        | ["hook"] => Hook
        | _ => NotFound
    }
}