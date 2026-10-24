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

// Function: func_0027AC00
// Address: 0x27ac00 - 0x27ac50
void func_0027AC00_0x27ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027AC00_0x27ac00");
#endif

    switch (ctx->pc) {
        case 0x27ac24u: goto label_27ac24;
        case 0x27ac3cu: goto label_27ac3c;
        default: break;
    }

    ctx->pc = 0x27ac00u;

    // 0x27ac00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ac04: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x27ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x27ac08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ac0c: 0x8c626228  lw          $v0, 0x6228($v1)
    ctx->pc = 0x27ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786228u));
    // 0x27ac10: 0x24706228  addiu       $s0, $v1, 0x6228
    ctx->pc = 0x27ac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25128));
    // 0x27ac14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AC14u;
    {
        const bool branch_taken_0x27ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC14u;
        // 0x27ac18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac14) {
            ctx->pc = 0x27AC3Cu;
            goto label_27ac3c;
        }
    }
    ctx->pc = 0x27AC1Cu;
    // 0x27ac1c: 0xc0aa4c0  jal         func_2A9300
    ctx->pc = 0x27AC1Cu;
    SET_GPR_U32(ctx, 31, 0x27AC24u);
    ctx->pc = 0x2A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9300u, 0x27AC1Cu, 0x27AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC24u;
label_27ac24:
    // 0x27ac24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x27ac28: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x27ac2c: 0x24a58010  addiu       $a1, $a1, -0x7FF0
    ctx->pc = 0x27ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934544));
    // 0x27ac30: 0x24c654d8  addiu       $a2, $a2, 0x54D8
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21720));
    // 0x27ac34: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x27AC34u;
    SET_GPR_U32(ctx, 31, 0x27AC3Cu);
    ctx->pc = 0x27AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC34u;
    // 0x27ac38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x27AC34u, 0x27AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC3Cu;
label_27ac3c:
    // 0x27ac3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ac3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27ac44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ac48: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC48u;
        // 0x27ac4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC50u;
}
