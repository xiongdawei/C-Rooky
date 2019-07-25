//
// Created by Mr.нет's   on 2019-07-25.
//

#ifndef CLASS_NOTES_MAXIMUM_H
#define CLASS_NOTES_MAXIMUM_H


template <typename T>
T maximum(T value1, T value2, T value3) {
    T maximumValue{value1};  // assume value 1 is maximum, it is a initialization
    if (value2 > maximumValue) {
        maximumValue = value2;
    }
    if (value3 > maximumValue) {
        maximumValue = value3;
    }
    return maximumValue;
}

#endif //CLASS_NOTES_MAXIMUM_H
