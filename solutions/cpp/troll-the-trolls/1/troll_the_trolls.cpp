namespace hellmath {

    enum class AccountStatus {
        guest,
        troll,
        user,
        mod
    };

    enum class Action {
        read,
        write,
        remove
    };

    bool display_post(AccountStatus posted_by, AccountStatus saw_by) {
        if (posted_by != AccountStatus::troll || saw_by == AccountStatus::troll) {
            return true;
        } else {
            return false;
        }
    }

    bool permission_check(Action action, AccountStatus account) {
        switch (action) {
            case Action::write:
                if (account == AccountStatus::guest) {
                    return false;
                } else {
                    return true;
                }
            case Action::remove:
                if (account == AccountStatus::mod) {
                    return true;
                } else {
                    return false;
                }
            default:
                return true;
        }
    }

    bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
        switch (player1) {
            case AccountStatus::troll:
                switch (player2) {
                    case AccountStatus::troll:
                        return true;
                    default:
                        return false;
                }
            case AccountStatus::user:
            case AccountStatus::mod:
                switch (player2) {
                    case AccountStatus::user:
                    case AccountStatus::mod:
                        return true;
                    default:
                        return false;
                }
            default:
                return false;
        }
    }

    bool has_priority(AccountStatus player1, AccountStatus player2) {
        switch (player1) {
            case AccountStatus::guest:
                switch (player2) {
                    case AccountStatus::troll:
                        return true;
                    default:
                        return false;
                }
            case AccountStatus::user:
                switch (player2) {
                    case AccountStatus::troll:
                    case AccountStatus::guest:
                        return true;
                    default:
                        return false;
                }
            case AccountStatus::mod:
                switch (player2) {
                    case AccountStatus::mod:
                        return false;
                    default:
                        return true;
                }
            default:
                return false;
        }
    } 

}  // namespace hellmath