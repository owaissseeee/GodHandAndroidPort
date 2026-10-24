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

// Function: func_002DC898
// Address: 0x2dc898 - 0x2dc920
void func_002DC898_0x2dc898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DC898_0x2dc898");
#endif

    switch (ctx->pc) {
        case 0x2dc8b0u: goto label_2dc8b0;
        case 0x2dc8c8u: goto label_2dc8c8;
        case 0x2dc8ecu: goto label_2dc8ec;
        default: break;
    }

    ctx->pc = 0x2dc898u;

    // 0x2dc898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc89c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc8a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2dc8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2dc8a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc8a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DC8A8u;
    SET_GPR_U32(ctx, 31, 0x2DC8B0u);
    ctx->pc = 0x2DC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8A8u;
    // 0x2dc8ac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DC8A8u, 0x2DC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8B0u;
label_2dc8b0:
    // 0x2dc8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8b4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2dc8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2dc8b8: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC8B8u;
    {
        const bool branch_taken_0x2dc8b8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2dc8b8) {
            ctx->pc = 0x2DC8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8B8u;
            // 0x2dc8bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8C0u;
    // 0x2dc8c0: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DC8C0u;
    SET_GPR_U32(ctx, 31, 0x2DC8C8u);
    ctx->pc = 0x2DC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8C0u;
    // 0x2dc8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DC8C0u, 0x2DC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8C8u;
label_2dc8c8:
    // 0x2dc8c8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DC8C8u;
    {
        const bool branch_taken_0x2dc8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8c8) {
            ctx->pc = 0x2DC8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8C8u;
            // 0x2dc8cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8D0u;
    // 0x2dc8d0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2dc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2dc8d4: 0x244464f0  addiu       $a0, $v0, 0x64F0
    ctx->pc = 0x2dc8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2dc8d8: 0x8c830514  lw          $v1, 0x514($a0)
    ctx->pc = 0x2dc8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2dc8dc: 0x5c60000c  bgtzl       $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC8DCu;
    {
        const bool branch_taken_0x2dc8dc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2dc8dc) {
            ctx->pc = 0x2DC8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8DCu;
            // 0x2dc8e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8E4u;
    // 0x2dc8e4: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2DC8E4u;
    SET_GPR_U32(ctx, 31, 0x2DC8ECu);
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2DC8E4u, 0x2DC8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8ECu;
label_2dc8ec:
    // 0x2dc8ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC8ECu;
    {
        const bool branch_taken_0x2dc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8ec) {
            ctx->pc = 0x2DC8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC8ECu;
            // 0x2dc8f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC910u;
            goto label_2dc910;
        }
    }
    ctx->pc = 0x2DC8F4u;
    // 0x2dc8f4: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2dc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2dc8f8: 0xae110694  sw          $s1, 0x694($s0)
    ctx->pc = 0x2dc8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 17));
    // 0x2dc8fc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2dc8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dc900: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2dc900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc904: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x2dc904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc908: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x2dc908u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x2dc90c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2dc90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dc910:
    // 0x2dc910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc918: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC918u;
        // 0x2dc91c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC920u;
}
