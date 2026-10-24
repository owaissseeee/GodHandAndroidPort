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

// Function: func_0017EBB8
// Address: 0x17ebb8 - 0x17ec08
void func_0017EBB8_0x17ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017EBB8_0x17ebb8");
#endif

    switch (ctx->pc) {
        case 0x17ebdcu: goto label_17ebdc;
        case 0x17ebf4u: goto label_17ebf4;
        default: break;
    }

    ctx->pc = 0x17ebb8u;

    // 0x17ebb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ebbc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x17ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x17ebc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17ebc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17ebc4: 0x8c6259f8  lw          $v0, 0x59F8($v1)
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7859F8u));
    // 0x17ebc8: 0x247059f8  addiu       $s0, $v1, 0x59F8
    ctx->pc = 0x17ebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23032));
    // 0x17ebcc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17EBCCu;
    {
        const bool branch_taken_0x17ebcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBCCu;
        // 0x17ebd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebcc) {
            ctx->pc = 0x17EBF4u;
            goto label_17ebf4;
        }
    }
    ctx->pc = 0x17EBD4u;
    // 0x17ebd4: 0xc06f780  jal         func_1BDE00
    ctx->pc = 0x17EBD4u;
    SET_GPR_U32(ctx, 31, 0x17EBDCu);
    ctx->pc = 0x1BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE00u, 0x17EBD4u, 0x17EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBDCu;
label_17ebdc:
    // 0x17ebdc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x17ebdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x17ebe0: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17ebe4: 0x24a52228  addiu       $a1, $a1, 0x2228
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8744));
    // 0x17ebe8: 0x24c65858  addiu       $a2, $a2, 0x5858
    ctx->pc = 0x17ebe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22616));
    // 0x17ebec: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x17EBECu;
    SET_GPR_U32(ctx, 31, 0x17EBF4u);
    ctx->pc = 0x17EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EBECu;
    // 0x17ebf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x17EBECu, 0x17EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBF4u;
label_17ebf4:
    // 0x17ebf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17ebf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ebf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ebf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17ebfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ec00: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EC00u;
        // 0x17ec04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EC08u;
}
