using System;

namespace PGCE
{
	public class PlayerSessionManager
	{
		public static PlayerSession? GetPlayerSessionFromID(long sesh_id)
		{
			foreach (PlayerSession sesh in Server.PlayerSessions)
			{
				if (sesh.SessionID == sesh_id)
				{
					return sesh;
				}
			}
			return null;
		}
		public static PlayerSession? GetPlayerSessionFromAccountID(long acc_id)
		{
			foreach (PlayerSession sesh in Server.PlayerSessions)
			{
				if (sesh.AccountParameters.Value.ID == acc_id)
				{
					return sesh;
				}
			}
			return null;
		}
		public static bool UpdatePlayerSession(long sesh_id, PlayerSession update)
		{
			for (int i = 0; i < Server.PlayerSessions.Count; i++)
			{
				if (Server.PlayerSessions[i].SessionID == sesh_id)
				{
					Server.PlayerSessions[i] = update;
					return true;
				}
			}
			return false;
		}
		public static bool DestroySession(AccountParameters account_parameters)
		{
			if (GetPlayerSessionFromAccountID(account_parameters.ID) == null)
				return false;
			try
			{
				PlayerSession s = GetPlayerSessionFromAccountID(account_parameters.ID).GetValueOrDefault();
				Server.PlayerSessions.Remove(s);
			}
			catch (Exception e)
			{
				return false;
			}
			return true;
		}
		public static bool DestroySession(long sesh_id)
		{
			if (GetPlayerSessionFromID(sesh_id) == null)
				return false;
			try
			{
				PlayerSession s = GetPlayerSessionFromID(sesh_id).GetValueOrDefault();
				Server.PlayerSessions.Remove(s);
			}
			catch (Exception e)
			{
				return false;
			}
			return true;
		}
		public static PlayerSession CreateNewSession()
		{
			Random SeshGenRandom = new Random();
			PlayerSession NewSession = new PlayerSession();
			long s_id = 0;
			// make sure to avoid session id overlaps!
			while (GetPlayerSessionFromID(s_id) != null)
			{
				s_id = SeshGenRandom.NextInt64(0, 0xADDED702023);
			}
			NewSession.SessionID = s_id;
			// don't mind key overlaps, still have a large value though
			NewSession.DecryptionKey = SeshGenRandom.NextInt64(0, 0xF0CE552E770CA5A);
			Server.PlayerSessions.Add(NewSession);
			return NewSession;
		}
	}
}