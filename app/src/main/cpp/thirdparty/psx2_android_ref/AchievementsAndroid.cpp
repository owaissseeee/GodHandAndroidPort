// SPDX-FileCopyrightText: 2025 Android Port Contributors
// SPDX-License-Identifier: GPL-3.0+

#include "AchievementsAndroid.h"
#include "AchievementsJNI.h"
#include "pcsx2/Achievements.h"
#include "common/Console.h"
#include "rc_client.h"

namespace AchievementsAndroid
{
	static bool s_initialized = false;

	bool Initialize()
	{
		if (s_initialized)
			return true;

		Console.WriteLn("AchievementsAndroid: Initializing...");
		s_initialized = true;
		return true;
	}

	void Shutdown()
	{
		if (!s_initialized)
			return;

		Console.WriteLn("AchievementsAndroid: Shutting down...");
		s_initialized = false;
	}

	void NotifyAchievementUnlocked(const rc_client_achievement_t* achievement)
	{
		if (!s_initialized || !achievement)
			return;

		const bool is_hardcore = Achievements::IsHardcoreModeActive();
		
		AchievementsJNI::OnAchievementUnlocked(
			achievement->title,
			achievement->description,
			achievement->points,
			is_hardcore
		);
	}

	void NotifyGameComplete(const char* game_title, int achievement_count, int total_points)
	{
		if (!s_initialized)
			return;

		AchievementsJNI::OnGameComplete(game_title, achievement_count, total_points);
	}

	void NotifyLeaderboardStarted(const rc_client_leaderboard_t* leaderboard)
	{
		if (!s_initialized || !leaderboard)
			return;

		AchievementsJNI::OnLeaderboardStarted(leaderboard->title);
	}

	void NotifyLeaderboardSubmitted(const rc_client_leaderboard_t* leaderboard,
		const char* score, int rank, int total_entries)
	{
		if (!s_initialized || !leaderboard)
			return;

		AchievementsJNI::OnLeaderboardSubmitted(
			leaderboard->title,
			score ? score : "Unknown",
			rank,
			total_entries
		);
	}

	void NotifyLoginSuccess(const char* username, int score, int softcore_score, int unread_messages)
	{
		if (!s_initialized)
			return;

		AchievementsJNI::OnLoginSuccess(username, score, softcore_score, unread_messages);
	}

	void NotifyChallengeIndicatorShow(const rc_client_achievement_t* achievement)
	{
		if (!s_initialized || !achievement)
			return;

		AchievementsJNI::OnChallengeIndicatorShow(achievement->title);
	}

	void NotifyProgressIndicatorUpdate(const rc_client_achievement_t* achievement)
	{
		if (!s_initialized || !achievement)
			return;

		const char* progress = achievement->measured_progress[0] ? achievement->measured_progress : "0%";
		AchievementsJNI::OnProgressIndicatorUpdate(achievement->title, progress);
	}

	void NotifyGameSummary(const char* game_title, const rc_client_user_game_summary_t* summary)
	{
		if (!s_initialized || !summary)
			return;

		const bool is_hardcore = Achievements::IsHardcoreModeActive();

		AchievementsJNI::OnGameSummary(
			game_title,
			summary->num_unlocked_achievements,
			summary->num_core_achievements,
			summary->points_unlocked,
			summary->points_core,
			is_hardcore
		);
	}

	void ShowNotification(const char* message, bool is_long)
	{
		if (!s_initialized)
			return;

		AchievementsJNI::ShowNotification(message, is_long ? 1 : 0);
	}

} // namespace AchievementsAndroid
