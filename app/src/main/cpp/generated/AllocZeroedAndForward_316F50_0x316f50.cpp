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

// Function: AllocZeroedAndForward_316F50
// Address: 0x316f50 - 0x316fc0
void AllocZeroedAndForward_316F50_0x316f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316F50_0x316f50");
#endif

    switch (ctx->pc) {
        case 0x316f84u: goto label_316f84;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa4u: goto label_316fa4;
        default: break;
    }

    ctx->pc = 0x316f50u;

    // 0x316f50: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316f54: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316f58: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316f58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316f5c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316f60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316f64: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316f68: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316F68u;
    {
        const bool branch_taken_0x316f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F68u;
        // 0x316f6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f68) {
            ctx->pc = 0x316FACu;
            goto label_316fac;
        }
    }
    ctx->pc = 0x316F70u;
    // 0x316f70: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316f70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316f74: 0x24040b40  addiu       $a0, $zero, 0xB40
    ctx->pc = 0x316f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x316f78: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316f7c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316F7Cu;
    SET_GPR_U32(ctx, 31, 0x316F84u);
    ctx->pc = 0x316F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F7Cu;
    // 0x316f80: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316F7Cu, 0x316F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F84u;
label_316f84:
    // 0x316f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f88: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316F88u;
    {
        const bool branch_taken_0x316f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F88u;
        // 0x316f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f88) {
            ctx->pc = 0x316FACu;
            goto label_316fac;
        }
    }
    ctx->pc = 0x316F90u;
    // 0x316f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f94: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316F94u;
    SET_GPR_U32(ctx, 31, 0x316F9Cu);
    ctx->pc = 0x316F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F94u;
    // 0x316f98: 0x24060b40  addiu       $a2, $zero, 0xB40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316F94u, 0x316F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F9Cu;
label_316f9c:
    // 0x316f9c: 0xc05d1ea  jal         func_1747A8
    ctx->pc = 0x316F9Cu;
    SET_GPR_U32(ctx, 31, 0x316FA4u);
    ctx->pc = 0x316FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F9Cu;
    // 0x316fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1747A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1747A8u, 0x316F9Cu, 0x316FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316FA4u;
label_316fa4:
    // 0x316fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316FA4u;
    {
        const bool branch_taken_0x316fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FA4u;
        // 0x316fa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316fa4) {
            ctx->pc = 0x316FB4u;
            goto label_316fb4;
        }
    }
    ctx->pc = 0x316FACu;
label_316fac:
    // 0x316fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316fb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316fb4:
    // 0x316fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x316FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316FB8u;
        // 0x316fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316FC0u;
}
