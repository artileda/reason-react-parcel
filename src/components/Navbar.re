let str = React.string;

[@react.component]
let make = () =>{
    <nav>
        <ul>
            <li>
                <Link href=Router.Home>
                  "Home" -> str
                </Link>
            </li>
            <li>
                <Link href=Router.Hook>
                  "Hook" -> str
                </Link>
            </li>
             <li>
                <Link href=Router.NotFound>
                  "NotFound" -> str
                </Link>
            </li>
        </ul>
        <ul style=(ReactDOMStyle.make(~justifyContent="flex-end",()))>
            <li>
                <Link href=Router.Profile("Elisabeth Kartini")>
                  "Profile: Elisabeth Kartini" -> str
                </Link>
            </li>
        </ul>
    </nav>
}