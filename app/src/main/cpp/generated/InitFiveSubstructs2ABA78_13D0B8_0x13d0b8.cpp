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

// Function: InitFiveSubstructs2ABA78_13D0B8
// Address: 0x13d0b8 - 0x13d100
void InitFiveSubstructs2ABA78_13D0B8_0x13d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitFiveSubstructs2ABA78_13D0B8_0x13d0b8");
#endif

    switch (ctx->pc) {
        case 0x13d0ccu: goto label_13d0cc;
        case 0x13d0d4u: goto label_13d0d4;
        case 0x13d0dcu: goto label_13d0dc;
        case 0x13d0e4u: goto label_13d0e4;
        case 0x13d0ecu: goto label_13d0ec;
        default: break;
    }

    ctx->pc = 0x13d0b8u;

    // 0x13d0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d0bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d0c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d0c4: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13D0C4u;
    SET_GPR_U32(ctx, 31, 0x13D0CCu);
    ctx->pc = 0x13D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0C4u;
    // 0x13d0c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13D0C4u, 0x13D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0CCu;
label_13d0cc:
    // 0x13d0cc: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13D0CCu;
    SET_GPR_U32(ctx, 31, 0x13D0D4u);
    ctx->pc = 0x13D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0CCu;
    // 0x13d0d0: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13D0CCu, 0x13D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0D4u;
label_13d0d4:
    // 0x13d0d4: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13D0D4u;
    SET_GPR_U32(ctx, 31, 0x13D0DCu);
    ctx->pc = 0x13D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0D4u;
    // 0x13d0d8: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13D0D4u, 0x13D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0DCu;
label_13d0dc:
    // 0x13d0dc: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13D0DCu;
    SET_GPR_U32(ctx, 31, 0x13D0E4u);
    ctx->pc = 0x13D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0DCu;
    // 0x13d0e0: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13D0DCu, 0x13D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0E4u;
label_13d0e4:
    // 0x13d0e4: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x13D0E4u;
    SET_GPR_U32(ctx, 31, 0x13D0ECu);
    ctx->pc = 0x13D0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D0E4u;
    // 0x13d0e8: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x13D0E4u, 0x13D0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D0ECu;
label_13d0ec:
    // 0x13d0ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d0ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D0F4u;
        // 0x13d0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D0FCu;
    // 0x13d0fc: 0x0  nop
    ctx->pc = 0x13d0fcu;
    // NOP
    ctx->pc = 0x13d100u;
}
