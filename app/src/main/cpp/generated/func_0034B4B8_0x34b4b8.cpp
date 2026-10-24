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

// Function: func_0034B4B8
// Address: 0x34b4b8 - 0x34b508
void func_0034B4B8_0x34b4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B4B8_0x34b4b8");
#endif

    switch (ctx->pc) {
        case 0x34b4dcu: goto label_34b4dc;
        case 0x34b4ecu: goto label_34b4ec;
        default: break;
    }

    ctx->pc = 0x34b4b8u;

    // 0x34b4b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34b4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34b4bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34b4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34b4c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x34b4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b4c4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34b4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34b4c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34b4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b4cc: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x34b4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34b4d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34b4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34b4d4: 0xc0d6d6e  jal         func_35B5B8
    ctx->pc = 0x34B4D4u;
    SET_GPR_U32(ctx, 31, 0x34B4DCu);
    ctx->pc = 0x34B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4D4u;
    // 0x34b4d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5B8u, 0x34B4D4u, 0x34B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4DCu;
label_34b4dc:
    // 0x34b4dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b4e4: 0xc0db248  jal         func_36C920
    ctx->pc = 0x34B4E4u;
    SET_GPR_U32(ctx, 31, 0x34B4ECu);
    ctx->pc = 0x34B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4E4u;
    // 0x34b4e8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x34B4E4u, 0x34B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4ECu;
label_34b4ec:
    // 0x34b4ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x34b4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x34b4f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34b4f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b4f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34b4f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b4f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34b4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x34B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B4FCu;
        // 0x34b500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B504u;
    // 0x34b504: 0x0  nop
    ctx->pc = 0x34b504u;
    // NOP
    ctx->pc = 0x34b508u;
}
