package com.example.myapplication;

import androidx.appcompat.app.AppCompatActivity;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.Bundle;
import android.util.Log;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import java.io.File;

public class DBActivity extends AppCompatActivity {
SQLiteDatabase contactsDB= null;
    Button cbtn, Addbtn, delbtn, getbtn,deldb;
EditText name,mail,id,res;


@Override
protected void onCreate(Bundle savedInstanceState) {
super.onCreate(savedInstanceState);
setContentView(R.layout.activity_db);
cbtn=(Button)findViewById(R.id.createDatabase);
Addbtn=(Button)findViewById(R.id.ADD);
delbtn=(Button)findViewById(R.id.Delete);
getbtn=(Button)findViewById(R.id.View);
deldb=(Button)findViewById(R.id.DeleteTable);
name=(EditText)findViewById(R.id.name);
mail=(EditText)findViewById(R.id.mail);
id=(EditText)findViewById(R.id.no);
res=(EditText)findViewById(R.id.res);


    }

public void createDB(View view) {

try{

contactsDB= this.openOrCreateDatabase("Mycontact",MODE_PRIVATE,null);
contactsDB.execSQL("CREATE TABLE IF NOT EXISTS contacts (id integer primary key,name varchar, mail varchar);");
            File database = getApplicationContext().getDatabasePath("Mycontact");
if (database.exists()){
Toast.makeText(this,"Database created Successfully"+database.toString(),Toast.LENGTH_LONG).show();}
        }

catch(Exception e){
Log.e("CONTACTS ERROR ","dATABASE CREATION ERROR");
        }
// Addbtn.setClickable(true);
}


public void addContact(View view) {
        String myname=name.getText().toString();
        String mymail=mail.getText().toString();
contactsDB.execSQL("Insert into contacts (name,mail) values ('"+myname+"','"+mymail+"');");
    }

public void deleteContact(View view) {

intid1=Integer.parseInt(id.getText().toString());
Toast.makeText(this,"  id is"+Integer.toString(id1), Toast.LENGTH_LONG).show();
contactsDB.execSQL("delete from contacts where id="+id1+";");
res.setText("");

    }

public void getContacts(View view) {
        Cursor cursor= contactsDB.rawQuery("select * from contacts",null);
intidcolumn=cursor.getColumnIndex("id");
intnamecolumn=cursor.getColumnIndex    ("name");
intmailcolumn=cursor.getColumnIndex("mail");
cursor.moveToFirst();
        String contactlist="";

if ((cursor!=null)&& (cursor.getCount()>0)){

do{
                String id=cursor.getString(idcolumn);
                String mail=cursor.getString(mailcolumn);
                String name=cursor.getString(namecolumn);
contactlist=contactlist+ "\n"+ id+"  :  "+name+"   :   "+mail +"\n";

            }while(cursor.moveToNext());

res.setText(contactlist);
        }else{
Toast.makeText(this,"No data REcord", Toast.LENGTH_LONG);
        }

    }

public void del(View view) {
Toast.makeText(this,"database deleted",Toast.LENGTH_LONG).show();
this.deleteDatabase("contactsDB");

    }

}

