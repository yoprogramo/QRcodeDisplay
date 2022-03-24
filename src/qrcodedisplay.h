#ifndef ESPQRCODE_H
#define ESPQRCODE_H
/* QRcodeDisplay - generic class
 */

class QRcodeDisplay
{
	protected:
		uint8_t model;
		int offsetsX;
		int offsetsY;
		int screenwidth;
		int screenheight;
		bool QRDEBUG;
		int multiply;
		virtual void drawPixel(int x, int y, int color)=0;
		void render(int x, int y, int color);

	public:

		virtual void init(uint16_t width, uint16_t height);
		virtual void init();
		virtual void screenwhite() = 0;
		virtual void screenupdate() = 0;
		void debug();
		void create(String message);
};

#endif
