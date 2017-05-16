
[Client] curl -X POST -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"document":["Expected JsonObject got `JsonParseError`"]}}
[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"login":["Must be at least `4 characters long`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"has_error":true,"errors":{"password":["Must be at least `6 characters long`"]}}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"status":403,"message":"Bad credentials"}
[Client] rm -f test_example_auth_basic_signin.json

[Client] curl -X POST -d @test_example_auth_basic_signin.json -s localhost:*****/api/auth/signin
{"_id":"alexandre","login":"alexandre","email":"alexandre@moz-code.org","password_hash":"b7707a45e434b98e9b5dea6e53dafb3d","password_salt":"salt","email_is_verified":false,"email_verification_token":null,"reset_password_token":null,"_id":"alexandre"}
[Client] rm -f test_example_auth_basic_signin.json

