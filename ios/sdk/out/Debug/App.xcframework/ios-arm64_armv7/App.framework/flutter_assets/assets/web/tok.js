//js function in web/script.js file
function showAlert(message) {
    alert(message)
}

function loadTok1(tokRoomName, tokDisplayName) {
    var domain = "custommeet3.centralus.cloudapp.azure.com";
    var webOptions = {
      "roomName": tokRoomName,
      "width": "100%",
      "height": "100%",
      "enableWelcomePage": false,
      "chromeExtensionBanner": null,
      "userInfo": {"displayName": tokDisplayName},
      "configOverwrite": {
        "requireDisplayName": false,
        "prejoinPageEnabled": false,
        "disableDeepLinking": true,
        "startWithAudioMuted": true,
      },
      "interfaceConfigOverwrite": {"MOBILE_APP_PROMO": false, "TILE_VIEW_MAX_COLUMNS": 2},
      "parentNode": document.querySelector('#meeting')
    };
    var api = new JitsiMeetExternalAPI(domain, webOptions);
}