// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReactDom = require("react-dom");

function Home$App(Props) {
  return React.createElement("div", undefined, "Hello World");
}

var App = {
  make: Home$App
};

var root = document.querySelector("#root");

if (!(root == null)) {
  ReactDom.render(React.createElement(Home$App, {}), root);
}

exports.App = App;
/* root Not a pure module */
