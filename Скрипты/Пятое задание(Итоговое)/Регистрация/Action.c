Action()
{

	lr_start_transaction("getWebTours");


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
	
	web_reg_find("Text=<title>Web Tours</title>",
		LAST);

	web_url("WebTours", 
		"URL=http://127.0.0.1:1080/WebTours/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Sec-Fetch-Dest", 
		"frame");

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	lr_end_transaction("getWebTours", LR_AUTO);

	lr_start_transaction("signUp");


	web_reg_find("Text=<title>User Information</title>",
		LAST);

	web_link("sign up now", 
		"Text=sign up now", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Origin", 
		"http://127.0.0.1:1080");

	web_add_auto_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	lr_end_transaction("signUp", LR_AUTO);


	lr_think_time(53);
	
	lr_start_transaction("enterUserData");

	web_reg_find("Text=<title>Welcome to Web Tours</title>",
		LAST);

	web_submit_form("login.pl", 
		"Snapshot=t3.inf", 
		ITEMDATA, 
		"Name=username", "Value={randomString}", ENDITEM, 
		"Name=password", "Value={randomString}", ENDITEM, 
		"Name=passwordConfirm", "Value={randomString}", ENDITEM, 
		"Name=firstName", "Value={randomString}", ENDITEM, 
		"Name=lastName", "Value={randomString}", ENDITEM, 
		"Name=address1", "Value={randomString}", ENDITEM, 
		"Name=address2", "Value={randomString}", ENDITEM, 
		"Name=register.x", "Value=50", ENDITEM, 
		"Name=register.y", "Value=7", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-User");

	web_revert_auto_header("Upgrade-Insecure-Requests");
	
	lr_end_transaction("enterUserData", LR_AUTO);


	lr_think_time(12);
	
	lr_start_transaction("submitRegistration");

	web_reg_find("Text= User has returned to the home page.",
		LAST);

	web_image("button_next.gif", 
		"Src=/WebTours/images/button_next.gif", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	lr_end_transaction("submitRegistration", LR_AUTO);
	
	lr_start_transaction("signOff");

	web_reg_find("Text= A Session ID has been created and loaded into a cookie",
		LAST);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t5.inf", 
		LAST);
	
	lr_end_transaction("signOff", LR_AUTO);


	return 0;
}