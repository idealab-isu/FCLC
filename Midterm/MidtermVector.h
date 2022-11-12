#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>

template <class T>
class MidtermVector
{
public:
    MidtermVector();
    MidtermVector(std::vector<T> inputData);

    int GetNumDims() const;

    T GetElement(int index) const;
    void SetElement(int index, T value);

    T norm();
    template <class U> friend MidtermVector <U> operator* (const U &lhs, const MidtermVector<U> &rhs);

private:
    std::vector<T> m_vectordata;
    int m_nDims;

};

template <class T>
T MidtermVector<T>::norm()
{
    int T_cum_sum;
    int cum_sum;
    T_cum_sum = static_cast<T>(0,0);
    for (int i=0; i<m_nDims; ++i)
        cum_sum += (m_vectordata.at(i) * m_vectordata.at(i));
    return sqrt(cum_sum);
}

