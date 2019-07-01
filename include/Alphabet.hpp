/*
** EPITECH PROJECT, 2019
** IndieStudio
** File description:
** include/Alphabet.hpp
*/

#ifndef ALPHABET_HPP
#define ALPHABET_HPP

#include <irrlicht.h>

class LetterA
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube32;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube52;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube72;

		float scale;
		bool up = true;
	public:
		LetterA(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER B ///

class LetterB
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterB(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER C ///

class LetterC
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterC(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER D ///

class LetterD
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterD(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER E ///

class LetterE
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterE(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER F ///

class LetterF
{
	private:
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterF(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER G ///

class LetterG
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterG(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER H ///

class LetterH
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterH(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER I ///

class LetterI
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube23;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube63;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;

		float scale;
		bool up = true;
	public:
		LetterI(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER J ///

class LetterJ
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterJ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER K ///

class LetterK
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterK(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER L ///

class LetterL
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterL(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER M ///

class LetterM
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube27;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube35;
		irr::scene::ISceneNode* cube37;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube47;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube57;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube67;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube77;

		float scale;
		bool up = true;
	public:
		LetterM(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER N ///

class LetterN
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube27;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube35;
		irr::scene::ISceneNode* cube37;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube47;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube57;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube67;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube77;

		float scale;
		bool up = true;
	public:
		LetterN(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER O ///

class LetterO
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterO(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER P ///

class LetterP
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube32;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube71;

		float scale;
		bool up = true;
	public:
		LetterP(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);

};

/// LETTER Q ///

class LetterQ
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube63;
		irr::scene::ISceneNode* cube64;
		irr::scene::ISceneNode* cube65;
		irr::scene::ISceneNode* cube71;

		float scale;
		bool up = true;
	public:
		LetterQ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER R ///

class LetterR
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterR(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER S ///

class LetterS
{
	private:
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube45;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterS(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER T ///

class LetterT
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube23;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube43;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube63;
		irr::scene::ISceneNode* cube73;

		float scale;
		bool up = true;
	public:
		LetterT(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER U ///

class LetterU
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube56;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube74;
		irr::scene::ISceneNode* cube75;

		float scale;
		bool up = true;
	public:
		LetterU(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER V ///

class LetterV
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube27;
		irr::scene::ISceneNode* cube32;
		irr::scene::ISceneNode* cube36;
		irr::scene::ISceneNode* cube42;
		irr::scene::ISceneNode* cube46;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube55;
		irr::scene::ISceneNode* cube63;
		irr::scene::ISceneNode* cube65;
		irr::scene::ISceneNode* cube74;

		float scale;
		bool up = true;
	public:
		LetterV(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER W ///

class LetterW
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube21;
		irr::scene::ISceneNode* cube24;
		irr::scene::ISceneNode* cube27;
		irr::scene::ISceneNode* cube31;
		irr::scene::ISceneNode* cube34;
		irr::scene::ISceneNode* cube37;
		irr::scene::ISceneNode* cube41;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube47;
		irr::scene::ISceneNode* cube51;
		irr::scene::ISceneNode* cube54;
		irr::scene::ISceneNode* cube57;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube64;
		irr::scene::ISceneNode* cube67;
		irr::scene::ISceneNode* cube72;
		irr::scene::ISceneNode* cube73;
		irr::scene::ISceneNode* cube75;
		irr::scene::ISceneNode* cube76;

		float scale;
		bool up = true;
	public:
		LetterW(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER X ///

class LetterX
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube35;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube53;
		irr::scene::ISceneNode* cube55;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube66;
		irr::scene::ISceneNode* cube71;
		irr::scene::ISceneNode* cube77;

		float scale;
		bool up = true;
	public:
		LetterX(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER Y ///

class LetterY
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube17;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube26;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube35;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube54;
		irr::scene::ISceneNode* cube64;
		irr::scene::ISceneNode* cube74;

		float scale;
		bool up = true;
	public:
		LetterY(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

/// LETTER Z ///

class LetterZ
{
	private:
		irr::scene::ISceneNode* cube11;
		irr::scene::ISceneNode* cube12;
		irr::scene::ISceneNode* cube13;
		irr::scene::ISceneNode* cube14;
		irr::scene::ISceneNode* cube15;
		irr::scene::ISceneNode* cube16;
		irr::scene::ISceneNode* cube22;
		irr::scene::ISceneNode* cube33;
		irr::scene::ISceneNode* cube44;
		irr::scene::ISceneNode* cube55;
		irr::scene::ISceneNode* cube61;
		irr::scene::ISceneNode* cube62;
		irr::scene::ISceneNode* cube63;
		irr::scene::ISceneNode* cube64;
		irr::scene::ISceneNode* cube65;
		irr::scene::ISceneNode* cube66;

		float scale;
		bool up = true;
	public:
		LetterZ(irr::core::vector3df pos, irr::scene::ISceneManager *scene, int inter, int size, irr::video::ITexture *text);
		void animate(float max, float min, float diff);
		void setScale(float scale);
};

#endif /* ALPHABETHPP */
