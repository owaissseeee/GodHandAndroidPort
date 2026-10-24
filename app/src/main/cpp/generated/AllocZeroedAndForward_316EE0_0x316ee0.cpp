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

// Function: AllocZeroedAndForward_316EE0
// Address: 0x316ee0 - 0x316f50
void AllocZeroedAndForward_316EE0_0x316ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316EE0_0x316ee0");
#endif

    switch (ctx->pc) {
        case 0x316f14u: goto label_316f14;
        case 0x316f2cu: goto label_316f2c;
        case 0x316f34u: goto label_316f34;
        default: break;
    }

    ctx->pc = 0x316ee0u;

    // 0x316ee0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316ee4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316ee8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316eec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316ef4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316ef8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316EF8u;
    {
        const bool branch_taken_0x316ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EF8u;
        // 0x316efc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ef8) {
            ctx->pc = 0x316F3Cu;
            goto label_316f3c;
        }
    }
    ctx->pc = 0x316F00u;
    // 0x316f00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316f04: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x316f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x316f08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316f0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316F0Cu;
    SET_GPR_U32(ctx, 31, 0x316F14u);
    ctx->pc = 0x316F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F0Cu;
    // 0x316f10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316F0Cu, 0x316F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F14u;
label_316f14:
    // 0x316f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316F18u;
    {
        const bool branch_taken_0x316f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F18u;
        // 0x316f1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f18) {
            ctx->pc = 0x316F3Cu;
            goto label_316f3c;
        }
    }
    ctx->pc = 0x316F20u;
    // 0x316f20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316F24u;
    SET_GPR_U32(ctx, 31, 0x316F2Cu);
    ctx->pc = 0x316F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F24u;
    // 0x316f28: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316F24u, 0x316F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F2Cu;
label_316f2c:
    // 0x316f2c: 0xc05ce7c  jal         func_1739F0
    ctx->pc = 0x316F2Cu;
    SET_GPR_U32(ctx, 31, 0x316F34u);
    ctx->pc = 0x316F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316F2Cu;
    // 0x316f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739F0u, 0x316F2Cu, 0x316F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316F34u;
label_316f34:
    // 0x316f34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316F34u;
    {
        const bool branch_taken_0x316f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F34u;
        // 0x316f38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f34) {
            ctx->pc = 0x316F44u;
            goto label_316f44;
        }
    }
    ctx->pc = 0x316F3Cu;
label_316f3c:
    // 0x316f3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316f40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316f44:
    // 0x316f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316f48: 0x3e00008  jr          $ra
    ctx->pc = 0x316F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316F48u;
        // 0x316f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316F50u;
}
