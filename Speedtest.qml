import QtQuick 2.15
import "../Components"
Item
{
    id: root
    anchors.fill: parent
    signal requesthome()
    Rectangle
    {
        anchors.fill: root
        color: "lightblue"
    }
    Connections{
        target: gpio
    }



    Button
    {
        id: onbtn
        text: "ON"
        x:180
        y: 240
        height: 30
        width: 50
        onClicked:
        {
            gpio.setlevel()

        }
    }
    Button
    {
        id: offbtn
        x: 360
        y: 240
        text:"OFF"
        height: 30
        width:50

        onClicked:
        {
            gpio.setlevellow()
        }

    }
    Button
    {
        id: loadbtn
        x:540
        y:240
        height: 40
        width: 180
        text: "HOME"
        onClicked: requesthome()
    }

}
