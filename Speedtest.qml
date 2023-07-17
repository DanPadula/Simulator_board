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



    Text
    {
        id:oncolum
        text: "ON"
        x: 180
        y:220
        font.pointSize: 30

    }
    Text
    {
        id: offculum
        text: "OFF"
        x: 360
        y:220
        font.pointSize: 30
    }

    Button
    {
        id: lowon
        text: "1 ON"
        y: 280
        x: 180
        height: 30
        width: 70
        onClicked: gpio.setlevel("/sys/class/gpio/gpio24/value")
    }
    Button
    {
        id: lowoff
        text: "1 OFF"
        y:280
        x: 360
        height: 30
        width: 70
        onClicked: gpio.setlevellow("/sys/class/gpio/gpio24/value")
    }
    Button
    {
        id: midon
        text: "2 ON"
        y: 340
        x: 180
        height: 30
        width: 70
        onClicked: gpio.setlevel("/sys/class/gpio/gpio26/value")
    }
    Button
    {
        id: midoff
        text: "2 OFF"
        height: 30
        width: 70
        x: 360
        y:340
        onClicked: gpio.setlevellow("/sys/class/gpio/gpio26/value")
    }
    Button
    {
        id: highmidon
        text: "3 ON"
        height: 30
        width: 70
        x: 180
        y: 400
        onClicked: gpio.setlevel("/sys/class/gpio/gpio5/value")
    }
    Button
    {
        id: highmidoff
        text: "3 OFF"
        height: 30
        width: 70
        x: 360
        y: 400
        onClicked: gpio.setlevellow("/sys/class/gpio/gpio5/value")
    }
    Button
    {
        id: highon
        text: "4 ON"
        height: 30
        width: 70
        x: 180
        y: 460
        onClicked: gpio.setlevel("/sys/class/gpio/gpio6/value")
    }
    Button
    {
        id: highoff
        text: "4 OFF"
        height: 30
        width: 70
        x: 360
        y: 460
        onClicked: gpio.setlevellow("/sys/class/gpio/gpio6/value")
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
