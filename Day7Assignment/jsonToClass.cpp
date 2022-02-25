3.{

   "firstName":"John",

   "lastName":"Smith",

   "age":25,

   "address":{

      "streetAddress":"21 2nd Street",

      "city":"New York",

      "state":"NY",

      "postalCode":10021

   },

   "phoneNumbers":[

      {

         "type":"home",

         "number":"212 555-1234"

      },

      {

         "type":"fax",

         "number":"646 555-4567"

      }
   ]

}

//Converted to class


public class Id

{
	private:
		string firstName ="John";
		string lastName="Smith";
		int age=25;

};
public class Address
{
	private:
		string streetAdd="21 2nd street";
		string city="NewYork";
		string state="NY";
		int postal code=10021;
};
public class PhoneNum
{
	private:
		string type[]={"home","fax"};
		string phNumber[]={"212 555-1234","646 555-4567}";
};

