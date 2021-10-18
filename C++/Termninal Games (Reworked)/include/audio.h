#ifndef BED5C42A_A878_4EBA_B8CC_78FEE43093DC
#define BED5C42A_A878_4EBA_B8CC_78FEE43093DC

class audio {
public:
		static void playlose() {
			PlaySound("fail.wav", NULL, SND_SYNC);
		}
		static void playwin() {
			PlaySound("win.wav", NULL, SND_SYNC);
		}
};

#endif /* BED5C42A_A878_4EBA_B8CC_78FEE43093DC */
