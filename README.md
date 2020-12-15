# Data_Structure_3
긴 String 의 암호를 찾는 프로그램
# 1. main code
 Program의 code는 먼저 앞서 design에서 말한 것처럼 입력 값을 받아야 하므로 int type value인 inputPW와 String type value인 inputData 두가지를 선언하고 입력 받도록 하였습니다.
 그리고 inputPW는 program을 사용하면서 변경하지 않는 상수 값이므로 const static int인 sizePW에 값을 복사해 주었습니다.
 입력 받은 string인 inputData와 그 안에서 sizePW의 길이를 갖는 string들이 출현하는 빈도수가 함께 저장이 되어야 하므로 unordered_map<string, int> table을 선언해주었습니다. 그리고 for문을 활용해 sizePW의 길이를 갖는 string만 table에 저장이 되어야 하므로 for문의 반복 횟수는 “inputData.length()-sizePW+1” 만큼 반복하도록 하였습니다. For문 내부에서는 inputData가 sizePW의 크기로 잘려야 하므로 string을 잠시 저장할 tempString을 선언하고 String method인 substr을 이용해 sizePW크기를 갖는 String을 반환하고 반환된 값을 tempString에 복사하도록 하였습니다.
 그리고 복사된 tempString을 if else문의 조건으로 (table.find(tempString)==table.end())을 활용해 만약 table에 tempString을 key 값으로 갖는 data가 없다면 table에 해당 string을 0의 value를 갖게 table에 초기화 시키고, table에 tempString을 key 값으로 갖는 data가 이미 존재한다면 그 data의 value값을 1 증가하도록 해 여러 번 나온 String은 높은 value를 갖도록 코딩했습니다.
 앞선 작업을 마치게 된다면 table에는 sizePW의 길이를 갖는 String들이 출현한 빈도수와 함께 저장이 되었을 겁니다. Program의 목적은 빈도수가 가장 높은 즉, table에서 value가 가장 큰 값을 찾아야 하므로 먼저 table의 data들을 모두 확인하기 위해 unordered_map의 iterator it를 선언해 주고 가장 큰 String을 저장할 maxS와 가장 큰 빈도수, value를 저장할 maxF를 선언해 주었습니다.
Iterator를 이용한 for문으로 table의 모든 data를 다 확인하도록 하고 if문을 활용해 만약 iterator가 가리키는 값의 second(value)가 maxF보다 크다면 maxS와 maxF를 각각 현재 it가 가리키는 it->first와 it->second로 변경하게 합니다. 결국, it가 table의 마지막 data를 훑는 다면 maxS에 program의 결과 값인 password가 저장되도록 하였고 이를 출력하며 program을 마치도록 하였습니다. 
