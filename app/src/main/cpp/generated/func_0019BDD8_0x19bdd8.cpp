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

// Function: func_0019BDD8
// Address: 0x19bdd8 - 0x19be28
void func_0019BDD8_0x19bdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019BDD8_0x19bdd8");
#endif

    switch (ctx->pc) {
        case 0x19bdfcu: goto label_19bdfc;
        case 0x19be14u: goto label_19be14;
        default: break;
    }

    ctx->pc = 0x19bdd8u;

    // 0x19bdd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bddc: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19bde0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19bde4: 0x8c625da8  lw          $v0, 0x5DA8($v1)
    ctx->pc = 0x19bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DA8u));
    // 0x19bde8: 0x24705da8  addiu       $s0, $v1, 0x5DA8
    ctx->pc = 0x19bde8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23976));
    // 0x19bdec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BDECu;
    {
        const bool branch_taken_0x19bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BDECu;
        // 0x19bdf0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdec) {
            ctx->pc = 0x19BE14u;
            goto label_19be14;
        }
    }
    ctx->pc = 0x19BDF4u;
    // 0x19bdf4: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x19BDF4u;
    SET_GPR_U32(ctx, 31, 0x19BDFCu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x19BDF4u, 0x19BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BDFCu;
label_19bdfc:
    // 0x19bdfc: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19be00: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19be00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19be04: 0x24a559c0  addiu       $a1, $a1, 0x59C0
    ctx->pc = 0x19be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22976));
    // 0x19be08: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x19be08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x19be0c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19BE0Cu;
    SET_GPR_U32(ctx, 31, 0x19BE14u);
    ctx->pc = 0x19BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BE0Cu;
    // 0x19be10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19BE0Cu, 0x19BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19BE14u;
label_19be14:
    // 0x19be14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19be14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19be1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be20: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE20u;
        // 0x19be24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BE28u;
}
