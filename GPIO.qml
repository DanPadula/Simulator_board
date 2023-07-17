import QtQuick 2.15
import QtQuick.Controls 2.12
import "../Components"


Item
{
    id: root
    anchors.fill: parent
    signal requesthome()
    Connections
    {
        target: gpio
    }
    Rectangle
    {
        anchors.fill: parent
        color: "Lightgreen"

        Text
        {
            anchors.top: din_1.top
            x:0
            id: name
            text: qsTr("Digital Input 1")
        }

        Text
        {
            x: 0
            anchors.top: din_2.top
            text: qsTr("Digital Input 2")
        }

        Text
        {
            x: 0
            anchors.top: din_3.top
            text: qsTr("Digital Input 3")
        }
        Text
        {
            x: 0
            anchors.top: din_4.top
            text: qsTr("Digital Input 4")
        }


        RoundButton
        {
            id: din_1
            anchors.left: parent.left
            anchors.leftMargin: 130
            anchors.top: parent.top
            anchors.topMargin: 50
            onClicked: gpio.setlevel("/sys/class/gpio/gpio12/value")
            text: "ON"
        }
        RoundButton
        {
            id: din_2
            anchors.left: parent.left
            anchors.leftMargin: 130
            anchors.top: din_1.bottom
            anchors.topMargin: 50
            onClicked: gpio.setlevel("/sys/class/gpio/gpio16/value")
            text: "ON"
        }

        RoundButton
        {
            id: din_3
            anchors.left: parent.left
            anchors.leftMargin: 130
            anchors.top: din_2.bottom
            anchors.topMargin: 50
            onClicked: gpio.setlevel("/sys/class/gpio/gpio20/value")
            text: "ON"
        }

        RoundButton
        {
            id: din_4
            anchors.left: parent.left
            anchors.leftMargin: 130
            anchors.top: din_3.bottom
            anchors.topMargin: 50
            onClicked: gpio.setlevel("/sys/class/gpio/gpio21/value")
            text: "ON"
        }

        RoundButton
        {
            id:din_1_off
            anchors.left: din_1.left
            anchors.leftMargin: 50
            anchors.top: parent.top
            anchors.topMargin: 50
            text: "OFF"
            onClicked: gpio.setlevellow("/sys/class/gpio/gpio12/value")
        }

        RoundButton
        {
            id: din_2_off
            anchors.left: din_1.left
            anchors.leftMargin: 50
            anchors.top: din_2.top
            onClicked: gpio.setlevellow("/sys/class/gpio/gpio16/value")
            text: "OFF"
        }

        RoundButton
        {
            id: din_3_off
            anchors.left: din_3.left
            anchors.leftMargin: 50
            anchors.top: din_3.top
            text: "OFF"
            onClicked: gpio.setlevellow("/sys/class/gpio/gpio20/value")
        }

        RoundButton
        {
            id: din_4_off
            anchors.left: din_4.left
            anchors.leftMargin: 50
            anchors.top: din_4.top
            onClicked: gpio.setlevellow("/sys/class/gpio/gpio21/value")
            text: "OFF"
        }

        Button
        {
            id: homebtn
            x:540
            y:240
            height: 40
            width: 180
            text: "HOME"
            onClicked: requesthome()
        }

    }

}
