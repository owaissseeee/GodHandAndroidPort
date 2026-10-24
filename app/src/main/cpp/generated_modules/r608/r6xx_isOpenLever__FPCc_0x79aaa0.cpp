#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79aaa0 - 0x79ab20
void r6xx_isOpenLever__FPCc_0x79aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79aaa0");
#endif

    switch (ctx->pc) {
        case 0x79aac8u: goto label_79aac8;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79ab08u: goto label_79ab08;
        default: break;
    }

    ctx->pc = 0x79aaa0u;

    // 0x79aaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79aaa4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79aaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aaac: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79aab0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aab4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79aab4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79aab8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79AAB8u;
    {
        const bool branch_taken_0x79aab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB8u;
        // 0x79aabc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab8) {
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79AAC0u;
    // 0x79aac0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79aac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aac4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79aac8:
    // 0x79aac8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79aacc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79aaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79aad0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79aad4: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79aad8: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79aad8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79aadc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AADCu;
    {
        const bool branch_taken_0x79aadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AADCu;
        // 0x79aae0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aadc) {
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79AAE4u;
    // 0x79aae4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aae8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AAE8u;
    {
        const bool branch_taken_0x79aae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aae8) {
            ctx->pc = 0x79AAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AAE8u;
            // 0x79aaec: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aac8;
        }
    }
    ctx->pc = 0x79AAF0u;
label_79aaf0:
    // 0x79aaf0: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AAF0u;
    SET_GPR_U32(ctx, 31, 0x79AAF8u);
    ctx->pc = 0x79AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAF0u;
    // 0x79aaf4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AAF0u, 0x79AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF8u;
label_79aaf8:
    // 0x79aaf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AAF8u;
    {
        const bool branch_taken_0x79aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79aaf8) {
            ctx->pc = 0x79AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AAF8u;
            // 0x79aafc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB10u;
            goto label_79ab10;
        }
    }
    ctx->pc = 0x79AB00u;
    // 0x79ab00: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79AB00u;
    SET_GPR_U32(ctx, 31, 0x79AB08u);
    ctx->pc = 0x79AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB00u;
    // 0x79ab04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79AB00u, 0x79AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB08u;
label_79ab08:
    // 0x79ab08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AB08u;
    {
        const bool branch_taken_0x79ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB08u;
        // 0x79ab0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab08) {
            ctx->pc = 0x79AB14u;
            goto label_79ab14;
        }
    }
    ctx->pc = 0x79AB10u;
label_79ab10:
    // 0x79ab10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ab14:
    // 0x79ab14: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB14u;
        // 0x79ab18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB1Cu;
    // 0x79ab1c: 0x0  nop
    ctx->pc = 0x79ab1cu;
    // NOP
    ctx->pc = 0x79ab20u;
}
} // namespace gh_r608
