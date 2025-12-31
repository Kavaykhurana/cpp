// #include <iostream>
// #include <string>
// #include <curl/curl.h>
// #include <json/json.h>  // Include JSONcpp header

// // Function to send data to the frontend via HTTP POST request
// void sendDataToFrontend(const std::string& jsonString) {
//     CURL* curl;
//     CURLcode res;

//     // Initialize libcurl globally
//     curl_global_init(CURL_GLOBAL_DEFAULT);
//     curl = curl_easy_init();

//     if (curl) {
//         // Set the URL for the POST request
//         curl_easy_setopt(curl, CURLOPT_URL, "http://yourfrontendserver.com/api/status");

//         // Set the content type to application/json
//         struct curl_slist* headers = nullptr;
//         headers = curl_slist_append(headers, "Content-Type: application/json");

//         // Set the POST data (your JSON string)
//         curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
//         curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonString.c_str());

//         // Perform the request
//         res = curl_easy_perform(curl);

//         // Check for errors
//         if (res != CURLE_OK) {
//             std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
//         }

//         // Cleanup
//         curl_easy_cleanup(curl);
//         curl_slist_free_all(headers);
//     }

//     // Cleanup global libcurl
//     curl_global_cleanup();
// }

// int main() {
//     // Create a JSON object to hold the status data
//     Json::Value status;

//     // Add robot state information
//     status["robotState"] = "MOVING";  // Example state
//     status["batteryLevel"] = 80;      // Example battery level
//     status["position"] = Json::arrayValue;
//     status["position"].append(10);     // x-coordinate
//     status["position"].append(20);     // y-coordinate

//     // Serialize the JSON object into a string
//     Json::StreamWriterBuilder writer;
//     std::string jsonString = Json::writeString(writer, status);

//     // Send the JSON data to the frontend via HTTP
//     sendDataToFrontend(jsonString);

//     return 0;
// }

#include <iostream>
#include <string>
#include <curl/curl.h>
#include <json/json.h>  // Include JSONcpp header

// Function to send data to the frontend via HTTP POST request
void sendDataToFrontend(const std::string& jsonString) {
    CURL* curl;
    CURLcode res;

    // Initialize libcurl globally
    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        // Set the URL for the POST request
        curl_easy_setopt(curl, CURLOPT_URL, "http://yourfrontendserver.com/api/status");

        // Set the content type to application/json
        struct curl_slist* headers = nullptr;
        headers = curl_slist_append(headers, "Content-Type: application/json");

        // Set the POST data (your JSON string)
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonString.c_str());

        // Perform the request
        res = curl_easy_perform(curl);

        // Check for errors
        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            // Capture HTTP response code
            long http_code = 0;
            curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, &http_code);
            if (http_code != 200) {
                std::cerr << "Error: Server returned HTTP " << http_code << std::endl;
            }
        }

        // Cleanup
        curl_easy_cleanup(curl);
        curl_slist_free_all(headers);
    }

    // Cleanup global libcurl
    curl_global_cleanup();
}

int main() {
    // Create a JSON object to hold the status data
    Json::Value status;

    // Add robot state information
    status["robotState"] = "MOVING";  // Example state
    status["batteryLevel"] = 80;      // Example battery level
    status["position"] = Json::arrayValue;
    status["position"].append(10);     // x-coordinate
    status["position"].append(20);     // y-coordinate

    // Serialize the JSON object into a string
    Json::StreamWriterBuilder writer;
    std::string jsonString = Json::writeString(writer, status);

    // Send the JSON data to the frontend via HTTP
    sendDataToFrontend(jsonString);

    return 0;
}

