#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: r6xx_isActiveLever__FPCc
// Address: 0x7999b8 - 0x799a38
void r6xx_isActiveLever__FPCc_0x7999b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isActiveLever__FPCc_0x7999b8");
#endif

    switch (ctx->pc) {
        case 0x7999e0u: goto label_7999e0;
        case 0x799a10u: goto label_799a10;
        case 0x799a20u: goto label_799a20;
        default: break;
    }

    ctx->pc = 0x7999b8u;

    // 0x7999b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7999bc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7999c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7999c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7999c4: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x7999c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7999c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7999c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999cc: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x7999ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7999d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x7999D0u;
    {
        const bool branch_taken_0x7999d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D0u;
        // 0x7999d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999d0) {
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x7999D8u;
    // 0x7999d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7999d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7999dc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7999e0:
    // 0x7999e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7999e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x7999e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x7999ec: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x7999ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x7999f0: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x7999f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x7999f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x7999FCu;
    // 0x7999fc: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799a00: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799A00u;
    {
        const bool branch_taken_0x799a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a00) {
            ctx->pc = 0x799A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A00u;
            // 0x799a04: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999e0;
        }
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799A08u;
    SET_GPR_U32(ctx, 31, 0x799A10u);
    ctx->pc = 0x799A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A08u;
    // 0x799a0c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799A08u, 0x799A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x799A10u;
    {
        const bool branch_taken_0x799a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a10) {
            ctx->pc = 0x799A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A10u;
            // 0x799a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A18u;
    // 0x799a18: 0xc0693c6  jal         func_1A4F18
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F18u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x799A20u;
    {
        const bool branch_taken_0x799a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A20u;
        // 0x799a24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a20) {
            ctx->pc = 0x799A2Cu;
            goto label_799a2c;
        }
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799a2c:
    // 0x799a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x799A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A34u;
    // 0x799a34: 0x0  nop
    ctx->pc = 0x799a34u;
    // NOP
    ctx->pc = 0x799a38u;
}
} // namespace gh_r602
