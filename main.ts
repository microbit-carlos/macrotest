basic.forever(function () {
    if (input.buttonIsPressed(Button.A)) {
        macrotest.printMacros()
    }
    basic.pause(300)
})

macrotest.printMacros()
