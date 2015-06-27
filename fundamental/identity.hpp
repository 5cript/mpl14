#ifndef IDENTITY_HPP_INCLUDED
#define IDENTITY_HPP_INCLUDED

namespace mplex {
    template <typename T>
    struct identity {
        using type = T;
    };
}

#endif // IDENTITY_HPP_INCLUDED
