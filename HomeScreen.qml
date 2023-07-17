import QtQuick 2.15
import QtQuick.Controls 2.12
import "../Components"

Item
{
    id: root
    anchors.fill: parent
    signal requestspeed()
    signal requestload()
    signal requestdin()
    signal requestload2()
    Rectangle
    {
        anchors.fill: parent
        color: "Lightgreen"
        Button
        {
            id: speedbtn
            height: 40
            width: 220
            anchors.top: din.bottom
            anchors.topMargin: 50
            anchors.left: parent.left
            text: "SPEED SIM"
            onClicked: requestspeed()
        }
        Button
        {
            id: loadbtn
            height: 40
            width: 220
            text: "LOAD SIM 1"
            onClicked: requestload()
        }
        Button
        {
            id: din
            anchors.top: chanel2load.bottom
            anchors.topMargin: 50
            anchors.left: parent.left
            height: 40
            width: 220
            text: "DIN SIM"
            onClicked: requestdin()
        }
        Button
        {
            id: chanel2load
            height: 40
            width: 220
            anchors.top: loadbtn.bottom
            anchors.left: parent.left
            anchors.topMargin: 50
            text: "LOAD SIM 2"
            onClicked: requestload2()
        }
    }

}
