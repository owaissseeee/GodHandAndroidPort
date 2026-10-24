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

// Function: ForwardInit1AE798_315F90
// Address: 0x315f90 - 0x316000
void ForwardInit1AE798_315F90_0x315f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1AE798_315F90_0x315f90");
#endif

    switch (ctx->pc) {
        case 0x315fc4u: goto label_315fc4;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe4u: goto label_315fe4;
        default: break;
    }

    ctx->pc = 0x315f90u;

    // 0x315f90: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315f94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315f98: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315f98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315f9c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315fa0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315fa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315fa8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315FA8u;
    {
        const bool branch_taken_0x315fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FA8u;
        // 0x315fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fa8) {
            ctx->pc = 0x315FECu;
            goto label_315fec;
        }
    }
    ctx->pc = 0x315FB0u;
    // 0x315fb0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315fb4: 0x24040b00  addiu       $a0, $zero, 0xB00
    ctx->pc = 0x315fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    // 0x315fb8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315fbc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315FBCu;
    SET_GPR_U32(ctx, 31, 0x315FC4u);
    ctx->pc = 0x315FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315FBCu;
    // 0x315fc0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315FBCu, 0x315FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315FC4u;
label_315fc4:
    // 0x315fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315fc8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315FC8u;
    {
        const bool branch_taken_0x315fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FC8u;
        // 0x315fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fc8) {
            ctx->pc = 0x315FECu;
            goto label_315fec;
        }
    }
    ctx->pc = 0x315FD0u;
    // 0x315fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315fd4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315FD4u;
    SET_GPR_U32(ctx, 31, 0x315FDCu);
    ctx->pc = 0x315FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315FD4u;
    // 0x315fd8: 0x24060b00  addiu       $a2, $zero, 0xB00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315FD4u, 0x315FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315FDCu;
label_315fdc:
    // 0x315fdc: 0xc06b9e6  jal         func_1AE798
    ctx->pc = 0x315FDCu;
    SET_GPR_U32(ctx, 31, 0x315FE4u);
    ctx->pc = 0x315FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315FDCu;
    // 0x315fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE798u, 0x315FDCu, 0x315FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315FE4u;
label_315fe4:
    // 0x315fe4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315FE4u;
    {
        const bool branch_taken_0x315fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FE4u;
        // 0x315fe8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fe4) {
            ctx->pc = 0x315FF4u;
            goto label_315ff4;
        }
    }
    ctx->pc = 0x315FECu;
label_315fec:
    // 0x315fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315ff4:
    // 0x315ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x315FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FF8u;
        // 0x315ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316000u;
}
