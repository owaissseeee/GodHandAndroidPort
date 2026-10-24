// SPDX-FileCopyrightText: 2025 Android Port Contributors
// SPDX-License-Identifier: GPL-3.0+

#pragma once

// Forward declarations from rc_client.h
struct rc_client_achievement_t;
struct rc_client_leaderboard_t;
struct rc_client_user_game_summary_t;

namespace AchievementsAndroid
{
	/// Initialize the Android achievements system
	bool Initialize();

	/// Shutdown the Android achievements system
	void Shutdown();

	/// Notify that an achievement was unlocked
	void NotifyAchievementUnlocked(const rc_client_achievement_t* achievement);

	/// Notify that the game was completed
	void NotifyGameComplete(const char* game_title, int achievement_count, int total_points);

	/// Notify that a leaderboard attempt started
	void NotifyLeaderboardStarted(const rc_client_leaderboard_t* leaderboard);

	/// Notify that a leaderboard score was submitted
	void NotifyLeaderboardSubmitted(const rc_client_leaderboard_t* leaderboard,
		const char* score, int rank, int total_entries);

	/// Notify that login was successful
	void NotifyLoginSuccess(const char* username, int score, int softcore_score, int unread_messages);

	/// Notify that a challenge indicator should be shown
	void NotifyChallengeIndicatorShow(const rc_client_achievement_t* achievement);

	/// Notify that progress towards an achievement was made
	void NotifyProgressIndicatorUpdate(const rc_client_achievement_t* achievement);

	/// Notify game summary information
	void NotifyGameSummary(const char* game_title, const rc_client_user_game_summary_t* summary);

	/// Show a generic notification
	void ShowNotification(const char* message, bool is_long = false);

} // namespace AchievementsAndroid
