//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//constexpr int max_order = 12; // ������������ ������� ����������
//
//class Sturm {
//
//    // ��������� ��� ������������� ����������
//    typedef struct Polynomial {
//    public:
//        int ord; // �������
//        double coef[max_order]; // �����������
//    } Poly;
//
//    Poly sturm_seq[max_order];
//    int order, num_poly, nroots, nchanges, atmin, atmax;
//    double min = -1.0, max = 1.0, roots[max_order];
//
//    int build_sturm();
//    int modp(Poly*, Poly*, Poly*);
//    int num_roots();
//    int num_changes(const double&);
//    void bisect(double, double, const int&, const int&, double*);
//    double eval_poly(int, double*, double);
//    int mod_rf(int, double*, double, double, double*);
//
//public:
//    void set_parameters();
//    vector<vector<double>> get_sturm_sequence();
//    void show_sturm_sequence(const vector<vector<double>>&);
//    vector<double> get_real_roots();
//    void show_roots(const vector<double>&);
//};
//
//
//// ���������� ��������
//constexpr double rel_error{ 1.0e-5 };    // ��������
//constexpr int max_pow = 32;              // ������������ ������� 10 (�������� �������������)
//constexpr int max_it = 800;              // ������������ ���������� ��������
//constexpr double small_enough{ 1.0e-12 }; // �����������, ������� ���
//                                         // small_enough ���������
//                                         // ����� (0.0).
//
//void Sturm::set_parameters()
///*
//  ���� ����������
// */
//{
//    cout << "������� ������� ����������: ";
//    cin >> order;
//    cout << '\n';
//    for (auto i = order; i >= 0; --i) {
//        cout << "������� ����� ������������ " << i << ": ";
//        cin >> sturm_seq[0].coef[i];
//    }
//    cout << '\n';
//}
//
//vector<vector<double>> Sturm::get_sturm_sequence()
///*
//  ������ ������������������ ������ � ���������� ������ �������������
// */
//{
//    vector<vector<double>> seq;
//    vector<double> coefs;
//
//    num_poly = build_sturm();
//    for (auto i = order; i >= 0; --i)
//        coefs.push_back(sturm_seq[0].coef[i]);
//    seq.push_back(coefs);
//    for (auto i = 0; i <= num_poly; ++i) {
//        coefs.clear();
//        for (auto j = sturm_seq[i].ord; j >= 0; --j)
//            coefs.push_back(sturm_seq[i].coef[j]);
//        seq.push_back(coefs);
//    }
//    return seq;
//}
//
//void Sturm::show_sturm_sequence(const vector<vector<double>>& seq)
//{
//    cout << "������������������ ������ ���:\n";
//    cout << fixed;
//    auto first = true;
//    for (const auto& poly : seq) {
//        for (const auto& coef : poly)
//            cout << coef << ' ';
//        if (first) { cout << "\n"; first = false; }
//        cout << "\n";
//    }
//}
//
//int Sturm::build_sturm()
///*
//  ������������������ ������ ��� ����������, ������� ���������� ����������� � ������������������
// */
//{
//    double f, * fp, * fc;
//    Poly* sp;
//
//    sturm_seq[0].ord = order;
//    sturm_seq[1].ord = order - 1;
//
//    // ��������� ����������� � ������������� ������� �����������.
//    f = fabs(sturm_seq[0].coef[order] * order);
//    fp = sturm_seq[1].coef;
//    fc = sturm_seq[0].coef + 1;
//    for (auto i = 1; i <= order; i++)
//        *fp++ = *fc++ * i / f;
//
//    // ��������� ��������� ����� ������������������ ������
//    for (sp = sturm_seq + 2; modp(sp - 2, sp - 1, sp); sp++) {
//        // �������� ���� � �������������
//        f = -fabs(sp->coef[sp->ord]);
//        for (fp = &sp->coef[sp->ord]; fp >= sp->coef; fp--)
//            *fp /= f;
//    }
//
//    sp->coef[0] = -sp->coef[0]; // �������� ����
//
//    return sp - sturm_seq;
//}
//
//int Sturm::modp(Poly* u, Poly* v, Poly* r)
///*
//  ��������� ������� �� ������� u(x) / v(x), ��������� �������� � r, ���������� 0 ���� r(x)
//  ���������.
// */
//{
//    int k, j;
//    double* nr, * end, * uc;
//
//    nr = r->coef;
//    end = &u->coef[u->ord];
//
//    uc = u->coef;
//    while (uc <= end)
//        *nr++ = *uc++;
//
//    if (v->coef[v->ord] < 0.0) {
//        for (k = u->ord - v->ord - 1; k >= 0; k -= 2)
//            r->coef[k] = -r->coef[k];
//        for (k = u->ord - v->ord; k >= 0; k--)
//            for (j = v->ord + k - 1; j >= k; j--)
//                r->coef[j] = -r->coef[j] - r->coef[v->ord + k] * v->coef[j - k];
//    }
//    else {
//        for (k = u->ord - v->ord; k >= 0; k--)
//            for (j = v->ord + k - 1; j >= k; j--)
//                r->coef[j] -= r->coef[v->ord + k] * v->coef[j - k];
//    }
//
//    k = v->ord - 1;
//    while (k >= 0 && fabs(r->coef[k]) < small_enough) {
//        r->coef[k] = 0.0;
//        k--;
//    }
//
//    r->ord = (k < 0) ? 0 : k;
//
//    return r->ord;
//}
//
//vector<double> Sturm::get_real_roots()
//{
//    // �������� ���������� �������������� ������
//    nroots = num_roots();
//    if (nroots == 0) {
//        cout << "�������: ��� �������������� ������\n";
//        exit(0);
//    }
//
//    // �������� ���������� ������
//    nchanges = num_changes(min);
//    for (auto i = 0; nchanges != atmin && i != max_pow; ++i) {
//        min *= 10.0;
//        nchanges = num_changes(min);
//    }
//    if (nchanges != atmin) {
//        cout << "�������: ��� ������������� �����\n";
//        atmin = nchanges;
//    }
//
//    nchanges = num_changes(max);
//    for (auto i = 0; nchanges != atmax && i != max_pow; ++i) {
//        max *= 10.0;
//        nchanges = num_changes(max);
//    }
//    if (nchanges != atmax) {
//        cout << "�������: ��� ������������� �����\n";
//        atmax = nchanges;
//    }
//    nroots = atmin - atmax;
//
//    // ��������
//    bisect(min, max, atmin, atmax, roots);
//
//    // ��������� ������ ������
//    vector<double> roots_vec;
//    for (auto i = 0; i != nroots; ++i)
//        roots_vec.push_back(roots[i]);
//
//    return roots_vec;
//}
//
//int Sturm::num_roots()
///*
// ���������� ���������� ��������� �������������� ������ ����������, � ������������������ �.
// */
//{
//    int atposinf = 0, atneginf = 0;
//    Poly* s;
//    double f, lf;
//
//    // ���������� �� +
//    lf = sturm_seq[0].coef[sturm_seq[0].ord];
//
//    for (s = sturm_seq + 1; s <= sturm_seq + num_poly; ++s) {
//        f = s->coef[s->ord];
//        if (lf == 0.0 || lf * f < 0) ++atposinf;
//        lf = f;
//    }
//
//    // ���������� �� -
//    if (sturm_seq[0].ord & 1) lf = -sturm_seq[0].coef[sturm_seq[0].ord];
//    else lf = sturm_seq[0].coef[sturm_seq[0].ord];
//
//    for (s = sturm_seq + 1; s <= sturm_seq + num_poly; ++s) {
//        if (s->ord & 1) f = -s->coef[s->ord];
//        else f = s->coef[s->ord];
//        if (lf == 0.0 || lf * f < 0) ++atneginf;
//        lf = f;
//    }
//
//    atmin = atneginf;
//    atmax = atposinf;
//
//    return atneginf - atposinf;
//}
//
//int Sturm::num_changes(const double& a)
///*
//  ���������� ���-�� ���� ������ � ������������������ �.
// */
//{
//    double f, lf;
//    Poly* s;
//    int changes = 0;
//
//    lf = eval_poly(sturm_seq[0].ord, sturm_seq[0].coef, a);
//
//    for (s = sturm_seq + 1; s <= sturm_seq + num_poly; s++) {
//        f = eval_poly(s->ord, s->coef, a);
//        if (lf == 0.0 || lf * f < 0) ++changes;
//        lf = f;
//    }
//
//    return changes;
//}
//
//double Sturm::eval_poly(int ord, double* coef, double x)
//{
//    /*
//      ������� ���������, �������� � coef, ��������� ��� ��������.
//     */
//    double* fp, f;
//    fp = &coef[ord];
//    f = *fp;
//    for (fp--; fp >= coef; fp--)
//        f = x * f + *fp;
//    return f;
//}
//
//void Sturm::bisect(double min, double  max, const int& atmin, const int& atmax, double* roots)
///*
//  ���������� �������� �� ������ ������������������ ������ ��� ����������,
//  ��� ��������� ����������, � ������� ����������� �����,
//  ����� ������������ � ������� roots � ������� �����������.
// */
//{
//    double mid;
//    int n1 = 0, n2 = 0, its, atmid, nroot;
//
//    if ((nroot = atmin - atmax) == 1) {
//
//        // ������� ���������� ����� ��������� �������
//        if (mod_rf(sturm_seq->ord, sturm_seq->coef, min, max, &roots[0]))
//            return;
//
//        // ���� ������� �� ����� ������� ����, �� ����� ����������� ������� ��������
//        // ��������� ������������������ �.
//        for (its = 0; its < max_it; its++) {
//            mid = (min + max) / 2;
//            atmid = num_changes(mid);
//            if (fabs(mid) > rel_error) {
//                if (fabs((max - min) / mid) < rel_error) {
//                    roots[0] = mid;
//                    return;
//                }
//            }
//            else if (fabs(max - min) < rel_error) {
//                roots[0] = mid;
//                return;
//            }
//            if ((atmin - atmid) == 0) min = mid;
//            else max = mid;
//        }
//        if (its == max_it) {
//            cerr << "��������: ������������ min " << min << " max " << max
//                << " diff " << max - min << " nroot " << nroot << " n1 "
//                << n1 << " n2 " << n2 << "\n";
//            roots[0] = mid;
//        }
//        return;
//    }
//
//    // � ��������� ������ ������ �����, ����� �������� ��������
//    for (its = 0; its < max_it; its++) {
//        mid = (min + max) / 2;
//        atmid = num_changes(mid);
//        n1 = atmin - atmid;
//        n2 = atmid - atmax;
//        if (n1 != 0 && n2 != 0) {
//            bisect(min, mid, atmin, atmid, roots);
//            bisect(mid, max, atmid, atmax, &roots[n1]);
//            break;
//        }
//
//        if (n1 == 0) min = mid;
//        else max = mid;
//    }
//
//    if (its == max_it) {
//        cerr << "��������: ����� ������� ������ ���� � �����\n";
//        cerr << "��������: ������������ min " << min << " max " << max
//            << " diff " << max - min << " nroot " << nroot << " n1 " << n1
//            << " n2 " << n2 << "\n";
//        for (n1 = atmax; n1 < atmin; n1++) roots[n1 - atmax] = mid;
//    }
//}
//
//int Sturm::mod_rf(int ord, double* coef, double a, double b, double* val)
//{
//    /*
//      ������ ����� � ��������� [a,b] ����������, ���������� � coef.
//      ������������ ������ ������������ � *val.
//      ������� ���������� ����, ���� �� ��������.
//     */
//    int its;
//    double fa, fb, x, fx, lfx;
//    double* fp, * scoef, * ecoef;
//
//    scoef = coef;
//    ecoef = &coef[ord];
//
//    fb = fa = *ecoef;
//    for (fp = ecoef - 1; fp >= scoef; fp--) {
//        fa = a * fa + *fp;
//        fb = b * fb + *fp;
//    }
//
//    // ���� ��� ���� ������, �� ����� ��������
//    if (fa * fb > 0.0)
//        return 0;
//    if (fabs(fa) < rel_error) {
//        *val = a;
//        return 1;
//    }
//    if (fabs(fb) < rel_error) {
//        *val = b;
//        return 1;
//    }
//
//    lfx = fa;
//
//    for (its = 0; its < max_it; its++) {
//        x = (fb * a - fa * b) / (fb - fa);
//        fx = *ecoef;
//        for (fp = ecoef - 1; fp >= scoef; fp--)
//            fx = x * fx + *fp;
//        if (fabs(x) > rel_error) {
//            if (fabs(fx / x) < rel_error) {
//                *val = x;
//                return 1;
//            }
//        }
//        else if (fabs(fx) < rel_error) {
//            *val = x;
//            return 1;
//        }
//        if ((fa * fx) < 0) {
//            b = x;
//            fb = fx;
//            if ((lfx * fx) > 0)
//                fa /= 2;
//        }
//        else {
//            a = x;
//            fa = fx;
//            if ((lfx * fx) > 0)
//                fb /= 2;
//        }
//
//        lfx = fx;
//    }
//
//    cerr << "mod_rf ������������ " << a << " " << b << " " << fx << "\n";
//
//    return 0;
//}
//
//void Sturm::show_roots(const vector<double>& roots)
///*
//  �������� �����
//*/
//{
//    if (roots.size() == 1) {
//        cout << "\n1 �������������� ������ ��� x = " << roots.front() << "\n";
//    }
//    else {
//        cout << "\n" << roots.size() << " �������������� ������ ��� x: ";
//        for (const auto& root : roots) cout << root << ' ';
//        cout << '\n';
//    }
//}
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//
//    Sturm sturm;
//    sturm.set_parameters();
//    sturm.show_sturm_sequence(sturm.get_sturm_sequence());
//    sturm.show_roots(sturm.get_real_roots());
//
//    return 0;
//}
