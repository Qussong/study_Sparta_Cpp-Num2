# OOP Summary

### 📌 필수 구현 기능

```
- Animal이라는 기본 클래스를 정의 합니다.
    - Animal 클래스에는 `makeSound()`라는 순수 가상 함수를 포함합니다.
- Animal 클래스를 상속받아 다양한 동물 클래스를 생성합니다.
    - 예) Dog, Cat, Cow
        - 각 동물 클래스에서 makeSound()함수를 재정의하여 해당 동물의 소리를 출력하면 됩니다!
- 메인 함수에서 Animal 타입의 포인터 배열을 선언하고 Dog, Cat, Cow를 각각 배열의 원소로 선언합니다. → 이후 Animal 배열을 반복문으로 순회하면서 각 동물의 울음소리를 내게 합니다!
```

<img src="/img/ClassDiagram_Essential.png" width="">

### 📌 도전 구현 기능

```
필수 기능 가이드에 있는 요구사항을 만족하는 코드를 구현했다면 아래 코드 스니펫을 보고 요구사항대로 Zoo 클래스를 정의해주세요!
```

<img src="/img/ClassDiagram_Challenge.png\" width="">

```cpp
// Zoo 클래스 요구사항
class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
public:
    // 동물을 동물원에 추가하는 함수
    // - Animal 객체의 포인터를 받아 포인터 배열에 저장합니다.
    // - 같은 동물이라도 여러 번 추가될 수 있습니다.
    // - 입력 매개변수: Animal* (추가할 동물 객체)
    // - 반환값: 없음
    void addAnimal(Animal* animal);

    // 동물원에 있는 모든 동물의 행동을 수행하는 함수
    // - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    void performActions();

    // Zoo 소멸자
    // - Zoo 객체가 소멸될 때, 동물 벡터에 저장된 모든 동물 객체의 메모리를 해제합니다.
    // - 메모리 누수를 방지하기 위해 동적 할당된 Animal 객체를 `delete` 합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    ~Zoo();
};
```

```cpp
// createRandomAnimal() 함수 요구사항
#include <cstdlib>
#include <ctime>

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal();
```