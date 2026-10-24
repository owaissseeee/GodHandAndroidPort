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

// Function: ForwardInitObject_316850
// Address: 0x316850 - 0x3168c0
void ForwardInitObject_316850_0x316850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316850_0x316850");
#endif

    switch (ctx->pc) {
        case 0x316884u: goto label_316884;
        case 0x31689cu: goto label_31689c;
        case 0x3168a4u: goto label_3168a4;
        default: break;
    }

    ctx->pc = 0x316850u;

    // 0x316850: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316854: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316858: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316858u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31685c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31685cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316864: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316868: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316868u;
    {
        const bool branch_taken_0x316868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316868u;
        // 0x31686c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316868) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316870u;
    // 0x316870: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316874: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316878: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31687c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31687Cu;
    SET_GPR_U32(ctx, 31, 0x316884u);
    ctx->pc = 0x316880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31687Cu;
    // 0x316880: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31687Cu, 0x316884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316884u;
label_316884:
    // 0x316884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316888: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316888u;
    {
        const bool branch_taken_0x316888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316888u;
        // 0x31688c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316888) {
            ctx->pc = 0x3168ACu;
            goto label_3168ac;
        }
    }
    ctx->pc = 0x316890u;
    // 0x316890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316894: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316894u;
    SET_GPR_U32(ctx, 31, 0x31689Cu);
    ctx->pc = 0x316898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316894u;
    // 0x316898: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316894u, 0x31689Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31689Cu;
label_31689c:
    // 0x31689c: 0xc06fd1e  jal         func_1BF478
    ctx->pc = 0x31689Cu;
    SET_GPR_U32(ctx, 31, 0x3168A4u);
    ctx->pc = 0x3168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31689Cu;
    // 0x3168a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF478u, 0x31689Cu, 0x3168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168A4u;
label_3168a4:
    // 0x3168a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3168A4u;
    {
        const bool branch_taken_0x3168a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168A4u;
        // 0x3168a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168a4) {
            ctx->pc = 0x3168B4u;
            goto label_3168b4;
        }
    }
    ctx->pc = 0x3168ACu;
label_3168ac:
    // 0x3168ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3168acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3168b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3168b4:
    // 0x3168b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3168b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3168b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3168B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3168BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168B8u;
        // 0x3168bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3168B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3168C0u;
}
