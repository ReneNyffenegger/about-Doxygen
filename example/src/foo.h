

//! Description of class Foo, in src/foo.h 
class Foo {

  public:
    Foo();

    
    //! xyz does eggs, why and zee.
    /**
     *
     * @param[in] param_one bla bla bla
     * @param[in] param_two bla bla bla
     *
     * @see precond
     */
    int xyz(int                param_one,
            const std::string& param_two);


    /** Function to show at-pre
     *
     *  @pre A precondition is shown with a green
     *  stripe to the left.
     */
    void precond();



    int member_1;

    //!< This comment (with <) describes the previous member, that is: member_1

    int member_2;

    //! This comment (without <) describes the following member, that is: member_3

    int member_3;
};
