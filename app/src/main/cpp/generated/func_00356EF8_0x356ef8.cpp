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

// Function: func_00356EF8
// Address: 0x356ef8 - 0x356f48
void func_00356EF8_0x356ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356EF8_0x356ef8");
#endif

    switch (ctx->pc) {
        case 0x356f0cu: goto label_356f0c;
        case 0x356f24u: goto label_356f24;
        default: break;
    }

    ctx->pc = 0x356ef8u;

    // 0x356ef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x356efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356f00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x356f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x356f04: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x356F04u;
    SET_GPR_U32(ctx, 31, 0x356F0Cu);
    ctx->pc = 0x356F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356F04u;
    // 0x356f08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x356F04u, 0x356F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F0Cu;
label_356f0c:
    // 0x356f0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x356f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x356f10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356f14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x356F14u;
    {
        const bool branch_taken_0x356f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F14u;
        // 0x356f18: 0x34a50141  ori         $a1, $a1, 0x141 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)321);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f14) {
            ctx->pc = 0x356F30u;
            goto label_356f30;
        }
    }
    ctx->pc = 0x356F1Cu;
    // 0x356f1c: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x356F1Cu;
    SET_GPR_U32(ctx, 31, 0x356F24u);
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x356F1Cu, 0x356F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356F24u;
label_356f24:
    // 0x356f24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x356F24u;
    {
        const bool branch_taken_0x356f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F24u;
        // 0x356f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356f24) {
            ctx->pc = 0x356F34u;
            goto label_356f34;
        }
    }
    ctx->pc = 0x356F2Cu;
    // 0x356f2c: 0x0  nop
    ctx->pc = 0x356f2cu;
    // NOP
label_356f30:
    // 0x356f30: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x356f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_356f34:
    // 0x356f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x356f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x356F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356F3Cu;
        // 0x356f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356F44u;
    // 0x356f44: 0x0  nop
    ctx->pc = 0x356f44u;
    // NOP
    ctx->pc = 0x356f48u;
}
