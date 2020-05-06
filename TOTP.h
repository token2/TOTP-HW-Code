#ifndef _TOTP_H
#define _TOTP_H


class TOTP {

	public:
	
		TOTP(uint8_t* hmacKey, int keyLength);
		TOTP(uint8_t* hmacKey, int keyLength, int timeStep);
		char* getCode(long timeStamp);
		char* getCodeFromSteps(long steps);
	
	private:

		uint8_t* _hmacKey;
		int _keyLength;
		int _timeStep;
		uint8_t _byteArray[8];
		uint8_t* _hash;
		int _offset;
		long _truncatedHash;
		char _code[7];
};

#endif