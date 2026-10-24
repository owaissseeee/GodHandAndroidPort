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

// Function: func_00393F30
// Address: 0x393f30 - 0x393f80
void func_00393F30_0x393f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393F30_0x393f30");
#endif

    switch (ctx->pc) {
        case 0x393f54u: goto label_393f54;
        case 0x393f6cu: goto label_393f6c;
        default: break;
    }

    ctx->pc = 0x393f30u;

    // 0x393f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x393f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x393f34: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x393f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x393f38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x393f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x393f3c: 0x8c6267a8  lw          $v0, 0x67A8($v1)
    ctx->pc = 0x393f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7867A8u));
    // 0x393f40: 0x247067a8  addiu       $s0, $v1, 0x67A8
    ctx->pc = 0x393f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26536));
    // 0x393f44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x393F44u;
    {
        const bool branch_taken_0x393f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F44u;
        // 0x393f48: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393f44) {
            ctx->pc = 0x393F6Cu;
            goto label_393f6c;
        }
    }
    ctx->pc = 0x393F4Cu;
    // 0x393f4c: 0xc0e2e2c  jal         func_38B8B0
    ctx->pc = 0x393F4Cu;
    SET_GPR_U32(ctx, 31, 0x393F54u);
    ctx->pc = 0x38B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B8B0u, 0x393F4Cu, 0x393F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393F54u;
label_393f54:
    // 0x393f54: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x393f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x393f58: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x393f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x393f5c: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x393f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x393f60: 0x24c66768  addiu       $a2, $a2, 0x6768
    ctx->pc = 0x393f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26472));
    // 0x393f64: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x393F64u;
    SET_GPR_U32(ctx, 31, 0x393F6Cu);
    ctx->pc = 0x393F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393F64u;
    // 0x393f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x393F64u, 0x393F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393F6Cu;
label_393f6c:
    // 0x393f6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x393f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x393f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x393f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x393f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393f78: 0x3e00008  jr          $ra
    ctx->pc = 0x393F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393F78u;
        // 0x393f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393F80u;
}
