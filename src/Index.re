[@bs.module] external css: string = "./assets/main.css";

[@react.component]
let make = () =>{
    let url = ReasonReactRouter.useUrl();
    let enum = url->Router.urlToEnumerable;
    <div>
        <Navbar />
        <div className="container__div">
            {
                switch enum{
                    | Home => <HomeFragment />
                    | Profile(name) => <ProfileFragment name=name />
                    | Hook => <HookFragment />
                    | _ => <NotFoundFragment />
                }
            }
        </div>
    </div>
}