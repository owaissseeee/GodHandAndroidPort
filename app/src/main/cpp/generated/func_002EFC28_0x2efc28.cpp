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

// Function: func_002EFC28
// Address: 0x2efc28 - 0x2efc80
void func_002EFC28_0x2efc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EFC28_0x2efc28");
#endif

    switch (ctx->pc) {
        case 0x2efc4cu: goto label_2efc4c;
        case 0x2efc64u: goto label_2efc64;
        default: break;
    }

    ctx->pc = 0x2efc28u;

    // 0x2efc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efc2c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2efc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2efc30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efc34: 0x8c626468  lw          $v0, 0x6468($v1)
    ctx->pc = 0x2efc34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786468u));
    // 0x2efc38: 0x24706468  addiu       $s0, $v1, 0x6468
    ctx->pc = 0x2efc38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25704));
    // 0x2efc3c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFC3Cu;
    {
        const bool branch_taken_0x2efc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC3Cu;
        // 0x2efc40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc3c) {
            ctx->pc = 0x2EFC64u;
            goto label_2efc64;
        }
    }
    ctx->pc = 0x2EFC44u;
    // 0x2efc44: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2EFC44u;
    SET_GPR_U32(ctx, 31, 0x2EFC4Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2EFC44u, 0x2EFC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC4Cu;
label_2efc4c:
    // 0x2efc4c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2efc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2efc50: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2efc50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2efc54: 0x24a5eaa0  addiu       $a1, $a1, -0x1560
    ctx->pc = 0x2efc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961824));
    // 0x2efc58: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2efc58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2efc5c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2EFC5Cu;
    SET_GPR_U32(ctx, 31, 0x2EFC64u);
    ctx->pc = 0x2EFC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC5Cu;
    // 0x2efc60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2EFC5Cu, 0x2EFC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC64u;
label_2efc64:
    // 0x2efc64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2efc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2efc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efc6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2efc6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efc70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC70u;
        // 0x2efc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EFC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EFC78u;
    // 0x2efc78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2efc7c: 0x0  nop
    ctx->pc = 0x2efc7cu;
    // NOP
    ctx->pc = 0x2efc80u;
}
