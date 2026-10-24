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

// Function: func_0018F5D0
// Address: 0x18f5d0 - 0x18f618
void func_0018F5D0_0x18f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018F5D0_0x18f5d0");
#endif

    switch (ctx->pc) {
        case 0x18f5e8u: goto label_18f5e8;
        default: break;
    }

    ctx->pc = 0x18f5d0u;

    // 0x18f5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f5d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18f5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18f5d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5e0: 0xc06dce0  jal         func_1B7380
    ctx->pc = 0x18F5E0u;
    SET_GPR_U32(ctx, 31, 0x18F5E8u);
    ctx->pc = 0x18F5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5E0u;
    // 0x18f5e4: 0x8e050654  lw          $a1, 0x654($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7380u, 0x18F5E0u, 0x18F5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5E8u;
label_18f5e8:
    // 0x18f5e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18f5e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f5f0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F5F0u;
    {
        const bool branch_taken_0x18f5f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18f5f0) {
            ctx->pc = 0x18F5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F5F0u;
            // 0x18f5f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F60Cu;
            goto label_18f60c;
        }
    }
    ctx->pc = 0x18F5F8u;
    // 0x18f5f8: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x18f5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f5fc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x18f5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f600: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x18f600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f604: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x18f604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18f608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18f608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18f60c:
    // 0x18f60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f610: 0x3e00008  jr          $ra
    ctx->pc = 0x18F610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F610u;
        // 0x18f614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F618u;
}
