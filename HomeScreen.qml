import QtQuick 2.15
import QtQuick.Controls 2.12
import "../Components"

Item
{
    id: root
    anchors.fill: parent
    signal requestspeed()
    signal requestload()
    Rectangle
    {
        anchors.fill: parent
        color: "Lightgreen"
        Button
        {
            id: speedbtn
            height: 40
            width: 180
            anchors.centerIn: parent
            text: "SPEED SIM"
            onClicked: requestspeed()
        }
        Button
        {
            id: loadbtn
            height: 40
            width: 180
            text: "LOAD SIM"
            onClicked: requestload()
        }
    }

}
