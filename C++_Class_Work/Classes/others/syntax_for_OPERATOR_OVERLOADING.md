# Operator Overloading

    The property of giving additional meaning to existing operators so that they can work with variables of user defined type is called operator overloading.
Providing additional meaning to existing operator by overloading it, doesn't change the original meaning of the operator but it simply __extends the functionality of the operator__.

### SYNTAX FOR OPERATOR OVERLOADING 

In order to give additional meaning to an operator, we need to overload it by creating an operator function. <br>
An __*operator function*__ defines the operation that the overloading operator will perform when used with the objects of a relative class. An operator function can be a member function of class or a non-member function ( friend function ) of the class. However the way of making a member operator function and a non-member function is different.

### Syntax MEMBER OPERATOR FUNCTION 

a). When declared inside and defined outside the class 
        
        return_type classname::operator# (argument_list)
        {
            /body of function/
        }
        
b). When defined inside the class 


        return_type operator#(argument_list) 
        {
            ...
        }

The operator distinguishes an operator function from ordinary member function of class by the keyword __*operator*__.<br>
The operators that can be overloaded are

\+ -   *   /   %   ^   &   |   ~   !   =   <   >   +=  -=  *=  /=  %=  ^=  &=  |=  <<  >>  <<= >>= ==  !=  <=  >=  &&  ||  ++  --  ->* ,   ->  []  ()  new delete new[]    delete[]

The operators that cannot be overloaded<br>

.   .*   ::   ?: