# namespaces

namespaces help us avoid naming conflicts. When two libraries would use same name i.e cout we can have

```cpp
std::cout
library::cout
```

:: -- scope resolution operator

We can use namespace and wont have to use the scope resotultion operator

```cpp
using namespace std;

int main(){
	cout << "Test" // we don't have to use std:cout here as we are already using this namespace
}
```

we can aslo use specific name from a namspace without importing the whole thing and polution our scope

```cpp
using std::cout;
using std::cin

```


