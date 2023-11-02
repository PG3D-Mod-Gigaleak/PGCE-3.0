public class HelicopterController
{
	public enum ReasonEnume
	{
		DEFAULT,
		RESHADE,
		INJECTION,
	}
	public static bool IsReasonBannable(ReasonEnume numerator)
	{
		return 
			(
				numerator == ReasonEnume.DEFAULT || 
				numerator == ReasonEnume.INJECTION
			);
	}
}