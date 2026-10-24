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

// Function: func_001A7880
// Address: 0x1a7880 - 0x1a7940
void func_001A7880_0x1a7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A7880_0x1a7880");
#endif

    switch (ctx->pc) {
        case 0x1a7880u: goto label_1a7880;
        case 0x1a7884u: goto label_1a7884;
        case 0x1a7888u: goto label_1a7888;
        case 0x1a788cu: goto label_1a788c;
        case 0x1a7890u: goto label_1a7890;
        case 0x1a7894u: goto label_1a7894;
        case 0x1a7898u: goto label_1a7898;
        case 0x1a789cu: goto label_1a789c;
        case 0x1a78a0u: goto label_1a78a0;
        case 0x1a78a4u: goto label_1a78a4;
        case 0x1a78a8u: goto label_1a78a8;
        case 0x1a78acu: goto label_1a78ac;
        case 0x1a78b0u: goto label_1a78b0;
        case 0x1a78b4u: goto label_1a78b4;
        case 0x1a78b8u: goto label_1a78b8;
        case 0x1a78bcu: goto label_1a78bc;
        case 0x1a78c0u: goto label_1a78c0;
        case 0x1a78c4u: goto label_1a78c4;
        case 0x1a78c8u: goto label_1a78c8;
        case 0x1a78ccu: goto label_1a78cc;
        case 0x1a78d0u: goto label_1a78d0;
        case 0x1a78d4u: goto label_1a78d4;
        case 0x1a78d8u: goto label_1a78d8;
        case 0x1a78dcu: goto label_1a78dc;
        case 0x1a78e0u: goto label_1a78e0;
        case 0x1a78e4u: goto label_1a78e4;
        case 0x1a78e8u: goto label_1a78e8;
        case 0x1a78ecu: goto label_1a78ec;
        case 0x1a78f0u: goto label_1a78f0;
        case 0x1a78f4u: goto label_1a78f4;
        case 0x1a78f8u: goto label_1a78f8;
        case 0x1a78fcu: goto label_1a78fc;
        case 0x1a7900u: goto label_1a7900;
        case 0x1a7904u: goto label_1a7904;
        case 0x1a7908u: goto label_1a7908;
        case 0x1a790cu: goto label_1a790c;
        case 0x1a7910u: goto label_1a7910;
        case 0x1a7914u: goto label_1a7914;
        case 0x1a7918u: goto label_1a7918;
        case 0x1a791cu: goto label_1a791c;
        case 0x1a7920u: goto label_1a7920;
        case 0x1a7924u: goto label_1a7924;
        case 0x1a7928u: goto label_1a7928;
        case 0x1a792cu: goto label_1a792c;
        case 0x1a7930u: goto label_1a7930;
        case 0x1a7934u: goto label_1a7934;
        case 0x1a7938u: goto label_1a7938;
        case 0x1a793cu: goto label_1a793c;
        default: break;
    }

    ctx->pc = 0x1a7880u;

label_1a7880:
    // 0x1a7880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a7880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a7884:
    // 0x1a7884: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a7884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a7888:
    // 0x1a7888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a788c:
    // 0x1a788c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a7890:
    // 0x1a7890: 0xc06ddac  jal         func_1B76B0
label_1a7894:
    if (ctx->pc == 0x1A7894u) {
        ctx->pc = 0x1A7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7890u;
        // 0x1a7894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7898u;
        goto label_1a7898;
    }
    ctx->pc = 0x1A7890u;
    SET_GPR_U32(ctx, 31, 0x1A7898u);
    ctx->pc = 0x1A7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7890u;
    // 0x1a7894: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1A7890u, 0x1A7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7898u;
label_1a7898:
    // 0x1a7898: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1a789c:
    if (ctx->pc == 0x1A789Cu) {
        ctx->pc = 0x1A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7898u;
        // 0x1a789c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A78A0u;
        goto label_1a78a0;
    }
    ctx->pc = 0x1A7898u;
    {
        const bool branch_taken_0x1a7898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7898u;
        // 0x1a789c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7898) {
            ctx->pc = 0x1A7928u;
            goto label_1a7928;
        }
    }
    ctx->pc = 0x1A78A0u;
label_1a78a0:
    // 0x1a78a0: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1a78a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1a78a4:
    // 0x1a78a4: 0x2446dbc0  addiu       $a2, $v0, -0x2440
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
label_1a78a8:
    // 0x1a78a8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1a78a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a78ac:
    // 0x1a78ac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1a78acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a78b0:
    // 0x1a78b0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1a78b4:
    // 0x1a78b4: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1a78b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1a78b8:
    // 0x1a78b8: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1a78bc:
    if (ctx->pc == 0x1A78BCu) {
        ctx->pc = 0x1A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78B8u;
        // 0x1a78bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A78C0u;
        goto label_1a78c0;
    }
    ctx->pc = 0x1A78B8u;
    {
        const bool branch_taken_0x1a78b8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78B8u;
        // 0x1a78bc: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78b8) {
            ctx->pc = 0x1A78E4u;
            goto label_1a78e4;
        }
    }
    ctx->pc = 0x1A78C0u;
label_1a78c0:
    // 0x1a78c0: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1a78c4:
    // 0x1a78c4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1a78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a78c8:
    // 0x1a78c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a78cc:
    // 0x1a78cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a78d0:
    // 0x1a78d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a78d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a78d4:
    // 0x1a78d4: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1a78d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1a78d8:
    // 0x1a78d8: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1a78d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1a78dc:
    // 0x1a78dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a78e0:
    if (ctx->pc == 0x1A78E0u) {
        ctx->pc = 0x1A78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78DCu;
        // 0x1a78e0: 0x2503dbc0  addiu       $v1, $t0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A78E4u;
        goto label_1a78e4;
    }
    ctx->pc = 0x1A78DCu;
    {
        const bool branch_taken_0x1a78dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A78E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78DCu;
        // 0x1a78e0: 0x2503dbc0  addiu       $v1, $t0, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78dc) {
            ctx->pc = 0x1A78F0u;
            goto label_1a78f0;
        }
    }
    ctx->pc = 0x1A78E4u;
label_1a78e4:
    // 0x1a78e4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1a78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a78e8:
    // 0x1a78e8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1a78e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a78ec:
    // 0x1a78ec: 0x2503dbc0  addiu       $v1, $t0, -0x2440
    ctx->pc = 0x1a78ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958016));
label_1a78f0:
    // 0x1a78f0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1a78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1a78f4:
    // 0x1a78f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a78f8:
    // 0x1a78f8: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1a78fc:
    if (ctx->pc == 0x1A78FCu) {
        ctx->pc = 0x1A78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78F8u;
        // 0x1a78fc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7900u;
        goto label_1a7900;
    }
    ctx->pc = 0x1A78F8u;
    {
        const bool branch_taken_0x1a78f8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1A78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A78F8u;
        // 0x1a78fc: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a78f8) {
            ctx->pc = 0x1A7914u;
            goto label_1a7914;
        }
    }
    ctx->pc = 0x1A7900u;
label_1a7900:
    // 0x1a7900: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1a7900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1a7904:
    // 0x1a7904: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1a7904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1a7908:
    // 0x1a7908: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1a7908u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1a790c:
    // 0x1a790c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a7910:
    if (ctx->pc == 0x1A7910u) {
        ctx->pc = 0x1A7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A790Cu;
        // 0x1a7910: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7914u;
        goto label_1a7914;
    }
    ctx->pc = 0x1A790Cu;
    {
        const bool branch_taken_0x1a790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A790Cu;
        // 0x1a7910: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a790c) {
            ctx->pc = 0x1A7918u;
            goto label_1a7918;
        }
    }
    ctx->pc = 0x1A7914u;
label_1a7914:
    // 0x1a7914: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1a7914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a7918:
    // 0x1a7918: 0xc0f809  jalr        $a2
label_1a791c:
    if (ctx->pc == 0x1A791Cu) {
        ctx->pc = 0x1A791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7918u;
        // 0x1a791c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7920u;
        goto label_1a7920;
    }
    ctx->pc = 0x1A7918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A7920u);
        ctx->pc = 0x1A791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7918u;
        // 0x1a791c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7918u, 0x1A7920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A7920u;
label_1a7920:
    // 0x1a7920: 0xc06ddb6  jal         func_1B76D8
label_1a7924:
    if (ctx->pc == 0x1A7924u) {
        ctx->pc = 0x1A7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7920u;
        // 0x1a7924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7928u;
        goto label_1a7928;
    }
    ctx->pc = 0x1A7920u;
    SET_GPR_U32(ctx, 31, 0x1A7928u);
    ctx->pc = 0x1A7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7920u;
    // 0x1a7924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1A7920u, 0x1A7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7928u;
label_1a7928:
    // 0x1a7928: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a7928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a792c:
    // 0x1a792c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a792cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7930:
    // 0x1a7930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7934:
    // 0x1a7934: 0x3e00008  jr          $ra
label_1a7938:
    if (ctx->pc == 0x1A7938u) {
        ctx->pc = 0x1A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7934u;
        // 0x1a7938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A793Cu;
        goto label_1a793c;
    }
    ctx->pc = 0x1A7934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7934u;
        // 0x1a7938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A793Cu;
label_1a793c:
    // 0x1a793c: 0x0  nop
    ctx->pc = 0x1a793cu;
    // NOP
    ctx->pc = 0x1a7940u;
}
