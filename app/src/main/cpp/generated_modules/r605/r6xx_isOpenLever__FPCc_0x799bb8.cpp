#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x799bb8 - 0x799c38
void r6xx_isOpenLever__FPCc_0x799bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x799bb8");
#endif

    switch (ctx->pc) {
        case 0x799be0u: goto label_799be0;
        case 0x799c10u: goto label_799c10;
        case 0x799c20u: goto label_799c20;
        default: break;
    }

    ctx->pc = 0x799bb8u;

    // 0x799bb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799bbc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799bc4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bcc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x799bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x799bd0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799C08u;
            goto label_799c08;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x799bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799bdc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799be0:
    // 0x799be0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799be0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799be4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799be8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799bec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799bf0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799bf4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799BF4u;
    {
        const bool branch_taken_0x799bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BF4u;
        // 0x799bf8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bf4) {
            ctx->pc = 0x799C08u;
            goto label_799c08;
        }
    }
    ctx->pc = 0x799BFCu;
    // 0x799bfc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799c00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799C00u;
    {
        const bool branch_taken_0x799c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799c00) {
            ctx->pc = 0x799C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C00u;
            // 0x799c04: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799be0;
        }
    }
    ctx->pc = 0x799C08u;
label_799c08:
    // 0x799c08: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799C08u;
    SET_GPR_U32(ctx, 31, 0x799C10u);
    ctx->pc = 0x799C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C08u;
    // 0x799c0c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799C08u, 0x799C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C10u;
label_799c10:
    // 0x799c10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799C10u;
    {
        const bool branch_taken_0x799c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c10) {
            ctx->pc = 0x799C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C10u;
            // 0x799c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C28u;
            goto label_799c28;
        }
    }
    ctx->pc = 0x799C18u;
    // 0x799c18: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x799C18u;
    SET_GPR_U32(ctx, 31, 0x799C20u);
    ctx->pc = 0x799C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C18u;
    // 0x799c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x799C18u, 0x799C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C20u;
label_799c20:
    // 0x799c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799C20u;
    {
        const bool branch_taken_0x799c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C20u;
        // 0x799c24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c20) {
            ctx->pc = 0x799C2Cu;
            goto label_799c2c;
        }
    }
    ctx->pc = 0x799C28u;
label_799c28:
    // 0x799c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799c2c:
    // 0x799c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x799C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C2Cu;
        // 0x799c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799C34u;
    // 0x799c34: 0x0  nop
    ctx->pc = 0x799c34u;
    // NOP
    ctx->pc = 0x799c38u;
}
} // namespace gh_r605
