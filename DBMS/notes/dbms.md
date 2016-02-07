# DBMS NOTES

----

####DDL (Data - Definition Language):

> ######Constraints :
1. Entity integrity constraint (Rule -1 primary-key)
2. Referential integrity constraint (Rule -2 foreign-key)

`Primary Key` : Used to uniquely identify each record present in a table.


`Super key set` : A set of one or more attribute whose values are guaranteed to identify tuples in the relation uniquely.

A candidate key is a minimal super key, i.e a set of the attribute that forms a super key, but none of whose subsets is a super key. One of the candidate keys of a relation is chosen as a primary key.  
Set of all possible keys.
Types:
* Simple Key (Single attribute)
* Composite Key (More than one attribute)

A foreign key is a set of attribute in a referencing relation, such that for each tuple in the referencing relation, the values of the foreign key attribute are guaranteed to occur as the primary key value of a tuple in the referencing relation.

`The value of foreign-key may be null.`

`Every relation is a table but every table is not necessarily a relation.`

Referential integrity constraint :
* Insert Violation applied over foreign key column: user not able to insert an element in foreign-key column until the given element is not there in the primary key column.

* Delete Violation: User not able to delete an element from primary key column until all the references from that table is not deleted. 
