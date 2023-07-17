import QtQuick 2.15
import QtQuick.Controls 2.12
import "../Components"

Item
{
  //  id: root
    anchors.fill: parent
    signal requesthome()

    Connections
    {
        target: gpio
    }
    Rectangle
    {
        anchors.fill: parent
        color: "moccasin"
        Button
        {
            id: loadbtn
            x:220
            y:220
            height: 40
            width: 180
            text: "HOME"
            onClicked: requesthome()
        }
        Button
        {
            id: lowload
            anchors.horizontalCenter: parent.horizontalCenter
            y: 220
            height: 40
            width: 180
            text: "LOAD 1"
            //onClicked: gpio.setlevel("/sys/class/gpio/gpio17/value")
        }
        Button
        {
            id: lowmid
            anchors.horizontalCenter: parent.horizontalCenter
            y: 280
            height: 40
            width: 180
            text: "LOAD 2"
            //onClicked: gpio.setlevel("/sys/class/gpio/gpio18/value")
        }
        Button
        {
            id: highmid
            anchors.horizontalCenter: parent.horizontalCenter
            y:340
            height: 40
            width: 180
            text:"LOAD 3"
            //onClicked: gpio.setlevel("/sys/class/gpio/gpio27/value")
        }
        Button
        {
            id: highload
            anchors.horizontalCenter: parent.horizontalCenter
            y: 400
            height: 40
            width: 180
            text: "NO LOAD"
            //onClicked: gpio.setlevel("/sys/class/gpio/gpio23/value")
        }

    }

}
