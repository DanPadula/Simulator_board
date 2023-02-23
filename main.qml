import QtQuick 2.13
import QtQuick.Window 2.13
import CustomComponents 1.0
import "Components"

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
Rectangle{
    anchors.fill: parent
    Loader
    {
        id: screenloader
        anchors.fill: parent
        source: "Screens/HomeScreen.qml"
    }
    Connections {
        target: screenloader.item
        ignoreUnknownSignals: true
        function onRequestspeed() {screenloader.source = "Screens/Speedtest.qml"}
        function onRequestload() {screenloader.source = "Screens/LoadTest.qml"}
        function onRequesthome() {screenloader.source = "Screens/HomeScreen.qml"}

    }
}
}
