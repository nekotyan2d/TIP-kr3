include(H:/projects/TIP-3-kr/build/Desktop_Qt_6_8_2_MSVC2022_64bit-Debug/.qt/QtDeploySupport.cmake)
include("${CMAKE_CURRENT_LIST_DIR}/TIP-3-kr-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE H:/projects/TIP-3-kr/build/Desktop_Qt_6_8_2_MSVC2022_64bit-Debug/TIP-3-kr.exe
    GENERATE_QT_CONF
)
