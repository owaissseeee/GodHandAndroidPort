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

// Function: func_001B6E30
// Address: 0x1b6e30 - 0x1b6e90
void func_001B6E30_0x1b6e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B6E30_0x1b6e30");
#endif

    switch (ctx->pc) {
        case 0x1b6e54u: goto label_1b6e54;
        case 0x1b6e6cu: goto label_1b6e6c;
        default: break;
    }

    ctx->pc = 0x1b6e30u;

    // 0x1b6e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e34: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b6e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b6e38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6e3c: 0x8c6260d8  lw          $v0, 0x60D8($v1)
    ctx->pc = 0x1b6e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7860D8u));
    // 0x1b6e40: 0x247060d8  addiu       $s0, $v1, 0x60D8
    ctx->pc = 0x1b6e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24792));
    // 0x1b6e44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6E44u;
    {
        const bool branch_taken_0x1b6e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E44u;
        // 0x1b6e48: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6e44) {
            ctx->pc = 0x1B6E6Cu;
            goto label_1b6e6c;
        }
    }
    ctx->pc = 0x1B6E4Cu;
    // 0x1b6e4c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B6E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E54u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B6E4Cu, 0x1B6E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E54u;
label_1b6e54:
    // 0x1b6e54: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b6e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b6e58: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b6e58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b6e5c: 0x24a589d8  addiu       $a1, $a1, -0x7628
    ctx->pc = 0x1b6e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937048));
    // 0x1b6e60: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b6e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b6e64: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B6E64u;
    SET_GPR_U32(ctx, 31, 0x1B6E6Cu);
    ctx->pc = 0x1B6E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6E64u;
    // 0x1b6e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B6E64u, 0x1B6E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6E6Cu;
label_1b6e6c:
    // 0x1b6e6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b6e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b6e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b6e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e78: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E78u;
        // 0x1b6e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E80u;
    // 0x1b6e80: 0x0  nop
    ctx->pc = 0x1b6e80u;
    // NOP
    // 0x1b6e84: 0x0  nop
    ctx->pc = 0x1b6e84u;
    // NOP
    // 0x1b6e88: 0xa08202f4  sb          $v0, 0x2F4($a0)
    ctx->pc = 0x1b6e88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b6e8c: 0x0  nop
    ctx->pc = 0x1b6e8cu;
    // NOP
    ctx->pc = 0x1b6e90u;
}
