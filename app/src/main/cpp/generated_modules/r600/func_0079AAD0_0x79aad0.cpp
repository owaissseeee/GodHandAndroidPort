#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: func_0079AAD0
// Address: 0x79aad0 - 0x79ab58
void func_0079AAD0_0x79aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079AAD0_0x79aad0");
#endif

    switch (ctx->pc) {
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab40u: goto label_79ab40;
        default: break;
    }

    ctx->pc = 0x79aad0u;

    // 0x79aad0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aad4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79aad8: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79aadc: 0x8044b800  lb          $a0, -0x4800($v0)
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79B800u));
    // 0x79aae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79aae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79aae4: 0x2446b800  addiu       $a2, $v0, -0x4800
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948864));
    // 0x79aae8: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79aaec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaf0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79AAF0u;
    {
        const bool branch_taken_0x79aaf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF0u;
        // 0x79aaf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaf0) {
            ctx->pc = 0x79AB28u;
            goto label_79ab28;
        }
    }
    ctx->pc = 0x79AAF8u;
    // 0x79aaf8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79aaf8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79aafc: 0x0  nop
    ctx->pc = 0x79aafcu;
    // NOP
label_79ab00:
    // 0x79ab00: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79ab04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79ab08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79ab0c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79ab10: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79ab10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79ab14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79AB14u;
    {
        const bool branch_taken_0x79ab14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB14u;
        // 0x79ab18: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab14) {
            ctx->pc = 0x79AB28u;
            goto label_79ab28;
        }
    }
    ctx->pc = 0x79AB1Cu;
    // 0x79ab1c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79ab1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79ab20: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79AB20u;
    {
        const bool branch_taken_0x79ab20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ab20) {
            ctx->pc = 0x79AB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB20u;
            // 0x79ab24: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab00;
        }
    }
    ctx->pc = 0x79AB28u;
label_79ab28:
    // 0x79ab28: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79AB28u;
    SET_GPR_U32(ctx, 31, 0x79AB30u);
    ctx->pc = 0x79AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB28u;
    // 0x79ab2c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79AB28u, 0x79AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB30u;
label_79ab30:
    // 0x79ab30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79AB30u;
    {
        const bool branch_taken_0x79ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ab30) {
            ctx->pc = 0x79AB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AB30u;
            // 0x79ab34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB48u;
            goto label_79ab48;
        }
    }
    ctx->pc = 0x79AB38u;
    // 0x79ab38: 0xc05febc  jal         func_17FAF0
    ctx->pc = 0x79AB38u;
    SET_GPR_U32(ctx, 31, 0x79AB40u);
    ctx->pc = 0x79AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB38u;
    // 0x79ab3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FAF0u, 0x79AB38u, 0x79AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB40u;
label_79ab40:
    // 0x79ab40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AB40u;
    {
        const bool branch_taken_0x79ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB40u;
        // 0x79ab44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab40) {
            ctx->pc = 0x79AB4Cu;
            goto label_79ab4c;
        }
    }
    ctx->pc = 0x79AB48u;
label_79ab48:
    // 0x79ab48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79ab4c:
    // 0x79ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB4Cu;
        // 0x79ab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB54u;
    // 0x79ab54: 0x0  nop
    ctx->pc = 0x79ab54u;
    // NOP
    ctx->pc = 0x79ab58u;
}
} // namespace gh_r600
