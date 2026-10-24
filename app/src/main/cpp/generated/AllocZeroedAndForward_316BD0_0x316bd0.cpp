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

// Function: AllocZeroedAndForward_316BD0
// Address: 0x316bd0 - 0x316c40
void AllocZeroedAndForward_316BD0_0x316bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_316BD0_0x316bd0");
#endif

    switch (ctx->pc) {
        case 0x316c04u: goto label_316c04;
        case 0x316c1cu: goto label_316c1c;
        case 0x316c24u: goto label_316c24;
        default: break;
    }

    ctx->pc = 0x316bd0u;

    // 0x316bd0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316bd4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316bd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316bd8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x316bdc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x316bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316be0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316be4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316be8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316BE8u;
    {
        const bool branch_taken_0x316be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x316BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316BE8u;
        // 0x316bec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316be8) {
            ctx->pc = 0x316C2Cu;
            goto label_316c2c;
        }
    }
    ctx->pc = 0x316BF0u;
    // 0x316bf0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316bf4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x316bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x316bf8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x316bfc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x316BFCu;
    SET_GPR_U32(ctx, 31, 0x316C04u);
    ctx->pc = 0x316C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316BFCu;
    // 0x316c00: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x316BFCu, 0x316C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C04u;
label_316c04:
    // 0x316c04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c08: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316C08u;
    {
        const bool branch_taken_0x316c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C08u;
        // 0x316c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c08) {
            ctx->pc = 0x316C2Cu;
            goto label_316c2c;
        }
    }
    ctx->pc = 0x316C10u;
    // 0x316c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316C14u;
    SET_GPR_U32(ctx, 31, 0x316C1Cu);
    ctx->pc = 0x316C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C14u;
    // 0x316c18: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316C14u, 0x316C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C1Cu;
label_316c1c:
    // 0x316c1c: 0xc05c1f2  jal         func_1707C8
    ctx->pc = 0x316C1Cu;
    SET_GPR_U32(ctx, 31, 0x316C24u);
    ctx->pc = 0x316C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316C1Cu;
    // 0x316c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1707C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1707C8u, 0x316C1Cu, 0x316C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316C24u;
label_316c24:
    // 0x316c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316C24u;
    {
        const bool branch_taken_0x316c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C24u;
        // 0x316c28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316c24) {
            ctx->pc = 0x316C34u;
            goto label_316c34;
        }
    }
    ctx->pc = 0x316C2Cu;
label_316c2c:
    // 0x316c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316c34:
    // 0x316c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316c38: 0x3e00008  jr          $ra
    ctx->pc = 0x316C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316C38u;
        // 0x316c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316C40u;
}
