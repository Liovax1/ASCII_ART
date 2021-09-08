
pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        stage('Compile') {
            steps {
		cmake arguments: '-DCMAKE_TOOLCHAIN_FILE=/var/lib/jenkins/vcpkg/scripts/buildsystems/vcpkg.cmake', installation: 'InSearchPath'
                cmakeBuild buildType: 'Debug', generator: 'Unix Makefiles', cleanBuild: true,  installation: 'InSearchPath', steps: [[withCmake: true]]
            }
        }
        stage('Test') {
            steps {
		echo 'Testing the app..'
		ctest arguments: '--no-compress-output', installation: 'InSearchPath'
            }
        }
        stage('Analyse') {
            steps {
		echo 'Analyse app..'
                sh label: '', returnStatus: true, script: 'cppcheck . --enable=all --inconclusive --xml --language=c++ --xml-version=2 --suppressions-list=suppressions.txt 2> cppcheck-result.xml'
                publishCppcheck allowNoReport: true, ignoreBlankFiles: true, pattern: 'cppcheck-result.xml'
            }
        }
    }
}
