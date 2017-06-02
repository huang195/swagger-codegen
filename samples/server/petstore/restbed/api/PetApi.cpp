/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "PetApi.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

PetApi::PetApi() {
	std::shared_ptr<PetApiAddPetResource> spPetApiAddPetResource = std::make_shared<PetApiAddPetResource>();
	this->publish(spPetApiAddPetResource);
	
	std::shared_ptr<PetApiDeletePetResource> spPetApiDeletePetResource = std::make_shared<PetApiDeletePetResource>();
	this->publish(spPetApiDeletePetResource);
	
	std::shared_ptr<PetApiFindPetsByStatusResource> spPetApiFindPetsByStatusResource = std::make_shared<PetApiFindPetsByStatusResource>();
	this->publish(spPetApiFindPetsByStatusResource);
	
	std::shared_ptr<PetApiFindPetsByTagsResource> spPetApiFindPetsByTagsResource = std::make_shared<PetApiFindPetsByTagsResource>();
	this->publish(spPetApiFindPetsByTagsResource);
	
	std::shared_ptr<PetApiUploadFileResource> spPetApiUploadFileResource = std::make_shared<PetApiUploadFileResource>();
	this->publish(spPetApiUploadFileResource);
	
}

PetApi::~PetApi() {}

void PetApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("/v2");
	
	this->start(settings);
}

void PetApi::stopService() {
	this->stop();
}

PetApiAddPetResource::PetApiAddPetResource()
{
	this->set_path("/pet/");
	this->set_method_handler("POST",
		std::bind(&PetApiAddPetResource::POST_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("PUT",
		std::bind(&PetApiAddPetResource::PUT_method_handler, this,
			std::placeholders::_1));
}

PetApiAddPetResource::~PetApiAddPetResource()
{
}

void PetApiAddPetResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 405) {
				session->close(405, "Invalid input", { {"Connection", "close"} });
				return;
			}

		});
}

void PetApiAddPetResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));

			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid ID supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "Pet not found", { {"Connection", "close"} });
				return;
			}
			if (status_code == 405) {
				session->close(405, "Validation exception", { {"Connection", "close"} });
				return;
			}

		});
}


PetApiDeletePetResource::PetApiDeletePetResource()
{
	this->set_path("/pet/{petId: .*}/");
	this->set_method_handler("DELETE",
		std::bind(&PetApiDeletePetResource::DELETE_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("GET",
		std::bind(&PetApiDeletePetResource::GET_method_handler, this,
			std::placeholders::_1));
	this->set_method_handler("POST",
		std::bind(&PetApiDeletePetResource::POST_method_handler, this,
			std::placeholders::_1));
}

PetApiDeletePetResource::~PetApiDeletePetResource()
{
}

void PetApiDeletePetResource::DELETE_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			

			// Getting the headers
			const std::string apiKey = request->get_header("apiKey", "");
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 400) {
				session->close(400, "Invalid pet value", { {"Connection", "close"} });
				return;
			}

}

void PetApiDeletePetResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				std::shared_ptr<Pet> response = NULL;
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid ID supplied", { {"Connection", "close"} });
				return;
			}
			if (status_code == 404) {
				session->close(404, "Pet not found", { {"Connection", "close"} });
				return;
			}

}
void PetApiDeletePetResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();

			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			
		
			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 405) {
				session->close(405, "Invalid input", { {"Connection", "close"} });
				return;
			}

}


PetApiFindPetsByStatusResource::PetApiFindPetsByStatusResource()
{
	this->set_path("/pet/findByStatus/");
	this->set_method_handler("GET",
		std::bind(&PetApiFindPetsByStatusResource::GET_method_handler, this,
			std::placeholders::_1));
}

PetApiFindPetsByStatusResource::~PetApiFindPetsByStatusResource()
{
}

void PetApiFindPetsByStatusResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid status value", { {"Connection", "close"} });
				return;
			}

}



PetApiFindPetsByTagsResource::PetApiFindPetsByTagsResource()
{
	this->set_path("/pet/findByTags/");
	this->set_method_handler("GET",
		std::bind(&PetApiFindPetsByTagsResource::GET_method_handler, this,
			std::placeholders::_1));
}

PetApiFindPetsByTagsResource::~PetApiFindPetsByTagsResource()
{
}

void PetApiFindPetsByTagsResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}
			if (status_code == 400) {
				session->close(400, "Invalid tag value", { {"Connection", "close"} });
				return;
			}

}



PetApiUploadFileResource::PetApiUploadFileResource()
{
	this->set_path("/pet/{petId: .*}/uploadImage/");
	this->set_method_handler("POST",
		std::bind(&PetApiUploadFileResource::POST_method_handler, this,
			std::placeholders::_1));
}

PetApiUploadFileResource::~PetApiUploadFileResource()
{
}

void PetApiUploadFileResource::POST_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			// Getting the path params
			const int64_t petId = request->get_path_parameter("petId", 0L);
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "successful operation", { {"Connection", "close"} });
				return;
			}

}




}
}
}
}

