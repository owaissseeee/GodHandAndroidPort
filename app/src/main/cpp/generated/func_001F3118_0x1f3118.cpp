#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001F3118
// Address: 0x1f3118 - 0x1f3260
void func_001F3118_0x1f3118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F3118_0x1f3118");
#endif

    switch (ctx->pc) {
        case 0x1f3198u: goto label_1f3198;
        case 0x1f31a8u: goto label_1f31a8;
        case 0x1f3238u: goto label_1f3238;
        default: break;
    }

    ctx->pc = 0x1f3118u;

    // 0x1f3118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f311c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3128: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x1f3128u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f312c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1f312cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1f3130: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3134: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1F3134u;
    {
        const bool branch_taken_0x1f3134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3134u;
        // 0x1f3138: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3134) {
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F313Cu;
    // 0x1f313c: 0x8e030920  lw          $v1, 0x920($s0)
    ctx->pc = 0x1f313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1f3140: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F3140u;
    {
        const bool branch_taken_0x1f3140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3140u;
        // 0x1f3144: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3140) {
            ctx->pc = 0x1F31B8u;
            goto label_1f31b8;
        }
    }
    ctx->pc = 0x1F3148u;
    // 0x1f3148: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x1F3148u;
    {
        const bool branch_taken_0x1f3148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3148) {
            ctx->pc = 0x1F314Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3148u;
            // 0x1f314c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3250u;
            goto label_1f3250;
        }
    }
    ctx->pc = 0x1F3150u;
    // 0x1f3150: 0x5460003f  bnel        $v1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x1F3150u;
    {
        const bool branch_taken_0x1f3150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3150) {
            ctx->pc = 0x1F3154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3150u;
            // 0x1f3154: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3250u;
            goto label_1f3250;
        }
    }
    ctx->pc = 0x1F3158u;
    // 0x1f3158: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1f3158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f315c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f3160: 0xa63024  and         $a2, $a1, $a2
    ctx->pc = 0x1f3160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1f3164: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f3168: 0x34c60073  ori         $a2, $a2, 0x73
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)115);
    // 0x1f316c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1f3170: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f3170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f3174: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1f3174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3178: 0x34c67300  ori         $a2, $a2, 0x7300
    ctx->pc = 0x1f3178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)29440);
    // 0x1f317c: 0x30c67373  andi        $a2, $a2, 0x7373
    ctx->pc = 0x1f317cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)29555);
    // 0x1f3180: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f3180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f3184: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x1f3184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1f3188: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1f3188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1f318c: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1f318cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f3190: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1F3190u;
    SET_GPR_U32(ctx, 31, 0x1F3198u);
    ctx->pc = 0x1F3194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3190u;
    // 0x1f3194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1F3190u, 0x1F3198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3198u;
label_1f3198:
    // 0x1f3198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f319c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f31a0: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F31A0u;
    SET_GPR_U32(ctx, 31, 0x1F31A8u);
    ctx->pc = 0x1F31A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F31A0u;
    // 0x1f31a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F31A0u, 0x1F31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F31A8u;
label_1f31a8:
    // 0x1f31a8: 0x8e020920  lw          $v0, 0x920($s0)
    ctx->pc = 0x1f31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
    // 0x1f31ac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f31acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f31b0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1F31B0u;
    {
        const bool branch_taken_0x1f31b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F31B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31B0u;
        // 0x1f31b4: 0xae030924  sw          $v1, 0x924($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31b0) {
            ctx->pc = 0x1F323Cu;
            goto label_1f323c;
        }
    }
    ctx->pc = 0x1F31B8u;
label_1f31b8:
    // 0x1f31b8: 0x8e020924  lw          $v0, 0x924($s0)
    ctx->pc = 0x1f31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2340)));
    // 0x1f31bc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F31BCu;
    {
        const bool branch_taken_0x1f31bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F31BCu;
        // 0x1f31c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31bc) {
            ctx->pc = 0x1F3248u;
            goto label_1f3248;
        }
    }
    ctx->pc = 0x1F31C4u;
    // 0x1f31c4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1f31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f31c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f31cc: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1f31ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1f31d0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f31d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f31d4: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1f31d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1f31d8: 0x34c600a8  ori         $a2, $a2, 0xA8
    ctx->pc = 0x1f31d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)168);
    // 0x1f31dc: 0x34a50073  ori         $a1, $a1, 0x73
    ctx->pc = 0x1f31dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)115);
    // 0x1f31e0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f31e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f31e4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f31e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f31e8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f31ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f31ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f31f0: 0x34a57300  ori         $a1, $a1, 0x7300
    ctx->pc = 0x1f31f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29440);
    // 0x1f31f4: 0x34c6a800  ori         $a2, $a2, 0xA800
    ctx->pc = 0x1f31f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43008);
    // 0x1f31f8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f31f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f31fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f31fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f3200: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x1f3200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x1f3204: 0x3c0300a8  lui         $v1, 0xA8
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)168 << 16));
    // 0x1f3208: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1f3208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1f320c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f320cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f3210: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1f3210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1f3214: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f3218: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f321c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1f3220: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f3224: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f3224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f3228: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1f3228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1f322c: 0x26040158  addiu       $a0, $s0, 0x158
    ctx->pc = 0x1f322cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x1f3230: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1F3230u;
    SET_GPR_U32(ctx, 31, 0x1F3238u);
    ctx->pc = 0x1F3234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3230u;
    // 0x1f3234: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1F3230u, 0x1F3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3238u;
label_1f3238:
    // 0x1f3238: 0x8e020920  lw          $v0, 0x920($s0)
    ctx->pc = 0x1f3238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2336)));
label_1f323c:
    // 0x1f323c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f323cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3240u;
    {
        const bool branch_taken_0x1f3240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3240u;
        // 0x1f3244: 0xae020920  sw          $v0, 0x920($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3240) {
            ctx->pc = 0x1F324Cu;
            goto label_1f324c;
        }
    }
    ctx->pc = 0x1F3248u;
label_1f3248:
    // 0x1f3248: 0xae020924  sw          $v0, 0x924($s0)
    ctx->pc = 0x1f3248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2340), GPR_U32(ctx, 2));
label_1f324c:
    // 0x1f324c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3250:
    // 0x1f3250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3254: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3254u;
        // 0x1f3258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F325Cu;
    // 0x1f325c: 0x0  nop
    ctx->pc = 0x1f325cu;
    // NOP
    ctx->pc = 0x1f3260u;
}
