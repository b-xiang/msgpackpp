# msgpackpp
msgpack parser &amp; packer

- header only
- simple

# msgpack spec
- https://github.com/msgpack/msgpack/blob/master/spec.md

# unittest framework
- https://github.com/philsquared/Catch

# usage
samples/sample.cpp

```c++
#include <msgpackpp.h>
#include <iostream>

int main(int argc, char **argv)
{
    // pack
    auto packer = msgpackpp::packer();
    packer.pack_array(4);
    packer.pack_integer(0);
    packer.pack_integer(256);
    packer.pack_str("method");
    packer.pack_map(3);
    packer.pack_str("x"); packer.pack_float(1.0f);
    packer.pack_str("y"); packer.pack_float(2.0f);
    packer.pack_str("z"); packer.pack_float(3.0f);

    // std::vector<std::uint8_t>
    auto p = packer.get_payload();

    // unpack
    auto u = msgpackpp::parser(p);
    std::cout << u << std::endl; // json style for debug

    std::cout << u.is_array() << std::endl;
    std::cout << u[0].get_number<int>() << std::endl;
    std::cout << u[1].get_number<int>() << std::endl;
    std::cout << u[2].get_string() << std::endl;
    std::cout << u[3].is_map() << std::endl;
    std::cout << u[3]["x"].get_number<float>() << std::endl;
    std::cout << u[3]["y"].get_number<float>() << std::endl;
    std::cout << u[3]["z"].get_number<float>() << std::endl;

    return 0;
}
```

```
[0,256,"method",{"x":1,"y":2,"z":3}]
1
0
256
method
1
1
2
3
```

see [tests](tests/tests.cpp).

