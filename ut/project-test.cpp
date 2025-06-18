#include <gtest/gtest.h>
#include "Task.h"
#include "ToDoList.h"




class ProjectTest : public ::testing::Test
{
    protected:
    ProjectTest() {};
    ~ProjectTest() override {};

    void SetUp() override{};
    void TearDown() override {};
    
};



/*
TEST_F(ProjectTest,CreatedObjectCanReturnCertainValue)
{
    Dictionary dict("house","dom, miejsce zamieszkania");
    EXPECT_EQ("dom, miejsce zamieszkania",dict.getDefinition("house"));
}


TEST_F(ProjectTest,NewValueCanBeAddToTheDictionary)
{
    Dictionary dict;
    dict.addDefinition("house","dom, miejsce zamieszkania");
    EXPECT_EQ("dom, miejsce zamieszkania",dict.getDefinition("house"));
}


TEST_F(ProjectTest,ObjectReturnTextWhenDidntFindWord)
{
    Dictionary dict("shelter","schronienie");
    EXPECT_EQ("NOT FOUND",dict.getDefinition("car"));
}

TEST_F(ProjectTest,ValueCanBeModyfing)
{
    Dictionary dict;
    dict.addDefinition("house","dom, miejsce zamieszkania");
    EXPECT_EQ("dom, miejsce zamieszkania",dict.getDefinition("house"));
    dict.addDefinition("house","dom, miejsce zamieszkania np. dom rodzinny");
    EXPECT_EQ("dom, miejsce zamieszkania np. dom rodzinny",dict.getDefinition("house"));
}

TEST_F(ProjectTest,ObjectPrintAllWordAndDefinition)
{
    Dictionary dict("shelter","schronienie");
    dict.printAll();
    //EXPECT_EQ("NOT FOUND",dict.getDefinition("car"));
}



// TEST_F(ProjectTest,IfObjectWordIsCreatedMethodsGetShouldReturnValues)
// {
//     Word word("name","imię");
//     EXPECT_EQ("name",word.getWord());
//     //EXPECT_EQ(word.getDateAndTimeToString(),word.getCreateDate());
//     EXPECT_EQ(0,word.getKnowingLevel());
// }



// TEST_F(ProjectTest,ObjectMyFileCanBeCreated)
// {
//     MyFile file("myNewFile.txt");
// }


*/



