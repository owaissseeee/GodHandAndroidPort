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

// Function: func_003588B0
// Address: 0x3588b0 - 0x358930
void func_003588B0_0x3588b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003588B0_0x3588b0");
#endif

    switch (ctx->pc) {
        case 0x3588c4u: goto label_3588c4;
        case 0x3588f0u: goto label_3588f0;
        case 0x358904u: goto label_358904;
        case 0x358918u: goto label_358918;
        default: break;
    }

    ctx->pc = 0x3588b0u;

    // 0x3588b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3588b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3588b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3588b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3588b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3588b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3588bc: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x3588BCu;
    SET_GPR_U32(ctx, 31, 0x3588C4u);
    ctx->pc = 0x3588C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588BCu;
    // 0x3588c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x3588BCu, 0x3588C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588C4u;
label_3588c4:
    // 0x3588c4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3588c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3588c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3588c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3588CCu;
    {
        const bool branch_taken_0x3588cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588CCu;
        // 0x3588d0: 0x34a50132  ori         $a1, $a1, 0x132 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)306);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588cc) {
            ctx->pc = 0x3588E8u;
            goto label_3588e8;
        }
    }
    ctx->pc = 0x3588D4u;
    // 0x3588d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3588d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3588d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3588d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3588dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3588dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3588e0: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3588E0u;
    ctx->pc = 0x3588E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588E0u;
    // 0x3588e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3588E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3588E8u;
label_3588e8:
    // 0x3588e8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x3588E8u;
    SET_GPR_U32(ctx, 31, 0x3588F0u);
    ctx->pc = 0x3588ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3588E8u;
    // 0x3588ec: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x3588E8u, 0x3588F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588F0u;
label_3588f0:
    // 0x3588f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3588f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3588f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3588F4u;
    {
        const bool branch_taken_0x3588f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3588F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588F4u;
        // 0x3588f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588f4) {
            ctx->pc = 0x358910u;
            goto label_358910;
        }
    }
    ctx->pc = 0x3588FCu;
    // 0x3588fc: 0xc0d5c50  jal         func_357140
    ctx->pc = 0x3588FCu;
    SET_GPR_U32(ctx, 31, 0x358904u);
    ctx->pc = 0x357140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357140u, 0x3588FCu, 0x358904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358904u;
label_358904:
    // 0x358904: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x358904u;
    {
        const bool branch_taken_0x358904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358904u;
        // 0x358908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358904) {
            ctx->pc = 0x35891Cu;
            goto label_35891c;
        }
    }
    ctx->pc = 0x35890Cu;
    // 0x35890c: 0x0  nop
    ctx->pc = 0x35890cu;
    // NOP
label_358910:
    // 0x358910: 0xc0d624c  jal         func_358930
    ctx->pc = 0x358910u;
    SET_GPR_U32(ctx, 31, 0x358918u);
    ctx->pc = 0x358930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358930u, 0x358910u, 0x358918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358918u;
label_358918:
    // 0x358918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35891c:
    // 0x35891c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358920: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x358920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x358924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358928: 0x3e00008  jr          $ra
    ctx->pc = 0x358928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358928u;
        // 0x35892c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358930u;
}
