#ifndef PROBEAUFGABEN_FUNCTORS_H
#define PROBEAUFGABEN_FUNCTORS_H
template <typename T, typename R> class Functor {

public:
/**
 * \brief Function call operator has to be implemented by the user.
 *
 * @param value Input for the operator.
 * @return Output of the operator.
 */
virtual R operator()(T value) const = 0;

/**
 * \brief Destructor.
 */
virtual ~Functor() {}
};
#endif //PROBEAUFGABEN_FUNCTORS_H
