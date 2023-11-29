# 📡 TCP & UDP

소켓 프로젝트를 하기 전에 알아둬야 할께 있는데 바로 Transport Layer에 있는 TCP와 UDP이다.
먼저 Transport Layer란 `End Point`간 **신뢰성** 있는 데이터 **전송**을 담당하는 계층이라고 할 수 있다.

이 전송 계층은 안정적이고 신뢰성 있는 데이터 전송을 보장하여 네트워크 통신을 안정화 시키는 역할을 합니다. 이 계층은 데이터를 정확하게 전달하고, 통신의 흐름을 조절하며, 네트워크 혼잡을 고나리하여 효율적인 통신을 가능하게 합니다.

## 🤔 TCP(Transmission Control Protocol)

TCP는 신뢰성 있는 데이터 통신을 가능하게 해주는 프로토콜입니다. TCP는 데이터의 순차 전송을 보장해준다는 장점을 가지고 있으며 특징으로는 3-way-handshake 통해 양방향 통신을 한다는 특징을 가지고 있습니다.

![Alt text](/Study-C/C_Socket_Project/자료%20정리/img/image2.png)

## 🤔 UDP(User Datagram Protocol)

비연결지향형 프로토콜이라고 불리며 단수한 헤더 구조와 멀티 캐스트 및 브로드 캐스트를 지원한다는 특징을 가지고 있으며 TCP보다 빠른 전송이 가능하다는 장점을 가지고 있습니다.

![Alt text](/Study-C/C_Socket_Project/자료%20정리/img/image.png)
