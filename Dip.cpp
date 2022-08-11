/Abstraction
class INetworkHandler {
public:
	virtual void O1() = 0;
	virtual void O2() = 0;
	virtual void O3() = 0;
	virtual void O4() = 0;
};

//LowLevelModule implements Abastraction
class CurlWrapper:INetworkHandler {

};

//Fake Implementation -Test Environment
class FakeNetworkHandler :INetworkHandler {

};


//Violation of DIP
//High Level Module
class ContentDownloader {
private:
	//dependence On Abstarction
   INetworkHandler  *obj;
public:
	//Dependnecy Injection
	ContentDownloader(INetworkHandler handler) {
		this->obj = handler;
  }

	void DownloadContent() {

	}
};


//


//Test Env
FakeNetworkHandler *_stubObj = new  FakeNetworkHandler();
ContentDownloader obj(_stubObj);
obj.DownloadContent();
