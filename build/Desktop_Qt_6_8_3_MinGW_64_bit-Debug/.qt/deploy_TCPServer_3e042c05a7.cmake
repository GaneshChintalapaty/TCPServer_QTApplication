include("C:/GUIProjects/C++/TCPServer_QTApplication/build/Desktop_Qt_6_8_3_MinGW_64_bit-Debug/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/TCPServer-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE C:/GUIProjects/C++/TCPServer_QTApplication/build/Desktop_Qt_6_8_3_MinGW_64_bit-Debug/TCPServer.exe
    GENERATE_QT_CONF
)
