Action()
{

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_revert_auto_header("Sec-Fetch-User");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(8);

	web_submit_form("login.pl", 
		"Snapshot=t10.inf", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_image("Itinerary Button", 
		"Alt=Itinerary Button", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	lr_think_time(6);
	
	web_reg_find("Text=Flight Transaction Summary",
		LAST);

	web_submit_form("itinerary.pl", 
		"Snapshot=t12.inf", 
		ITEMDATA, 
		"Name=1", "Value=<OFF>", ENDITEM,  
		LAST);


	web_revert_auto_header("Sec-Fetch-User");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_revert_auto_header("Sec-Fetch-User");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t13.inf", 
		LAST);

	return 0;
}