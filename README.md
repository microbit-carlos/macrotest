# MakeCode project that prints C++ macros

This project can be imported into MakeCode and modified in the online editor
as needed.

Unfortunately the online editor does not allow users to create .cpp files, so
a project from GitHub or a share link has to be opened to be able to edit
existing cpp files.

## Edit this project

To edit this repository in MakeCode.

* open [https://makecode.microbit.org/](https://makecode.microbit.org/)
* click on **Import** then click on **Import URL**
* paste **https://github.com/microbit-carlos/macrotest** and click import

## Running locally

```
npm install pxt
npx pxt target microbit
npx pxt install
PXT_FORCE_LOCAL=1 PXT_NODOCKER=1 PXT_COMPILE_SWITCHES=csv---mbcodal npx pxt
```
