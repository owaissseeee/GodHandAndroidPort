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

// Function: AllocZeroedBlock_313E50
// Address: 0x313e50 - 0x313ec0
void AllocZeroedBlock_313E50_0x313e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedBlock_313E50_0x313e50");
#endif

    switch (ctx->pc) {
        case 0x313e84u: goto label_313e84;
        case 0x313e9cu: goto label_313e9c;
        case 0x313ea4u: goto label_313ea4;
        default: break;
    }

    ctx->pc = 0x313e50u;

    // 0x313e50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313e54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313e54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313e58: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313e58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313e5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313e60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313e64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313e68: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313E68u;
    {
        const bool branch_taken_0x313e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E68u;
        // 0x313e6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e68) {
            ctx->pc = 0x313EACu;
            goto label_313eac;
        }
    }
    ctx->pc = 0x313E70u;
    // 0x313e70: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313e74: 0x240409c0  addiu       $a0, $zero, 0x9C0
    ctx->pc = 0x313e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    // 0x313e78: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313e7c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313E7Cu;
    SET_GPR_U32(ctx, 31, 0x313E84u);
    ctx->pc = 0x313E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E7Cu;
    // 0x313e80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313E7Cu, 0x313E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E84u;
label_313e84:
    // 0x313e84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e88: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313E88u;
    {
        const bool branch_taken_0x313e88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E88u;
        // 0x313e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e88) {
            ctx->pc = 0x313EACu;
            goto label_313eac;
        }
    }
    ctx->pc = 0x313E90u;
    // 0x313e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e94: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313E94u;
    SET_GPR_U32(ctx, 31, 0x313E9Cu);
    ctx->pc = 0x313E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E94u;
    // 0x313e98: 0x240609c0  addiu       $a2, $zero, 0x9C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313E94u, 0x313E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E9Cu;
label_313e9c:
    // 0x313e9c: 0xc062ca4  jal         func_18B290
    ctx->pc = 0x313E9Cu;
    SET_GPR_U32(ctx, 31, 0x313EA4u);
    ctx->pc = 0x313EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E9Cu;
    // 0x313ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B290u, 0x313E9Cu, 0x313EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EA4u;
label_313ea4:
    // 0x313ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313EA4u;
    {
        const bool branch_taken_0x313ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EA4u;
        // 0x313ea8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ea4) {
            ctx->pc = 0x313EB4u;
            goto label_313eb4;
        }
    }
    ctx->pc = 0x313EACu;
label_313eac:
    // 0x313eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313eb4:
    // 0x313eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x313EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EB8u;
        // 0x313ebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313EC0u;
}
