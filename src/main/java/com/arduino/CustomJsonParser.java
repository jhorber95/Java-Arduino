package com.arduino;

import com.google.gson.JsonObject;
import com.google.gson.JsonParser;

public class CustomJsonParser {
	
	
	public void parser(String string_json) {
		 System.out.println(string_json);
		
		JsonParser parser = new JsonParser();
		JsonObject json = parser.parse(string_json).getAsJsonObject();
		
		String nodo = json.get("nodo").getAsString();
		String petal_length = json.get("Petal_Length").getAsString();
		String petal_width = json.get("Petal_Width").getAsString();
	    String sepal_length = json.get("Sepal_Length").getAsString();
	    String sepal_width = json.get("Sepal_Width").getAsString();					

		
        System.out.println("Nodo: " + nodo);
        System.out.println("Petal_Length :" + petal_length);
        System.out.println("Petal_Width: "+ petal_width);
        System.out.println("Sepal_Length: "+ sepal_length);
        System.out.println("Sepal_Width: "+ sepal_width);
	}
	

}
