#pragma once

// clang-format off

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN
};

// clang-format on

bool get_caps_lock_light_tab(void);
bool get_caps_lock_light_alphas(void);
bool get_fn_layer_transparent_keys_off(void);
bool get_fn_layer_color_enable(void);