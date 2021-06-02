//
//  shell_sort.h
//  ShellSort
//
//  Created by Pavel Dmitriev on 26.04.2021.
//

class Straight_Cylinder {
public:
    double radius = 0;
    double hight = 0;
    friend std::ostream& operator<<(std::ostream& stream, const Straight_Cylinder& cylinder) {
        stream << cylinder.radius << "," << cylinder.hight<<";";
        return stream;
    }
    
    friend std::istream& operator>>(std::istream& stream, Straight_Cylinder& cylinder) {
        stream >> cylinder.radius;
        stream >> cylinder.hight;
        return stream;
    }

    friend bool operator<(const Straight_Cylinder& lhs, const Straight_Cylinder& rhs) {
        return 2*3.14*lhs.radius*lhs.hight<2*3.14*rhs.radius*rhs.hight;
    }
    
    friend bool operator>(const Straight_Cylinder& lhs, const Straight_Cylinder& rhs) {
        return 2*3.14*lhs.radius*lhs.hight>2*3.14*rhs.radius*rhs.hight;
    }
    
    friend bool operator<=(const Straight_Cylinder& lhs, const Straight_Cylinder& rhs) {
        return 2*3.14*lhs.radius*lhs.hight<=2*3.14*rhs.radius*rhs.hight;
    }
    
    friend bool operator>=(const Straight_Cylinder& lhs, const Straight_Cylinder& rhs) {
        return 2*3.14*lhs.radius*lhs.hight>=2*3.14*rhs.radius*rhs.hight;
    }
    
    friend bool operator==(const Straight_Cylinder& lhs, const Straight_Cylinder& rhs) {
        return 2*3.14*lhs.radius*lhs.hight==2*3.14*rhs.radius*rhs.hight;
    }
    
    Straight_Cylinder& operator = (const Straight_Cylinder &cylinder) {
        radius = cylinder.radius;
        hight = cylinder.hight;
        return *this;
    }
};


template <typename T,typename BinaryPredicate>
void ShellSort(T begin,T end,int* steps,int number_of_steps,BinaryPredicate op){
    for (int r=number_of_steps-1; r>=0; --r) {
        for (int i=steps[r];i<std::distance(begin,end);++i) {
            auto current_it=begin;
            std::advance(current_it,i);
            auto buf = *current_it;
            if (std::distance(begin,current_it)>=steps[r]) {
                std::advance(current_it,-steps[r]);
            }
            while (std::distance(begin,current_it)>=0&&op(*current_it,buf)) {
                auto temp=*current_it;
                *current_it=buf;
                std::advance(current_it,steps[r]);
                *current_it = temp;
                std::advance(current_it,-steps[r]);
                if (std::distance(begin,current_it)>=steps[r]) {
                    std::advance(current_it,-steps[r]);
                }
            }
        }
    }
}
