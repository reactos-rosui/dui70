#pragma once

namespace DirectUI
{
	class SelectorSelectionProxy :IProxy
	{
	public:
		SelectorSelectionProxy(SelectorSelectionProxy const &);
		SelectorSelectionProxy(void);
		SelectorSelectionProxy & operator=(SelectorSelectionProxy const &);

		virtual long DoMethod(int, char *);
	protected:
		virtual void Init(Element *);
	private:
		long GetIsSelectionRequired(int *);

	};
}