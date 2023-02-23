import QtQuick 2.15
import QtQuick.Controls 2.12
import "../Components"
Item
{
    id: root
    anchors.fill: parent
    signal requesthome()
    Rectangle
    {
        anchors.fill: parent
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

}
