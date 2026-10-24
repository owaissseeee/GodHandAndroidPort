#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r604_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r604
{
// Function: func_0079A6E8
// Address: 0x79a6e8 - 0x79a770
void func_0079A6E8_0x79a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A6E8_0x79a6e8");
#endif

    switch (ctx->pc) {
        case 0x79a718u: goto label_79a718;
        case 0x79a748u: goto label_79a748;
        case 0x79a758u: goto label_79a758;
        default: break;
    }

    ctx->pc = 0x79a6e8u;

    // 0x79a6e8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a6ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79a6ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79a6f0: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x79a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x79a6f4: 0x8044b498  lb          $a0, -0x4B68($v0)
    ctx->pc = 0x79a6f4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x79B498u));
    // 0x79a6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a6fc: 0x2446b498  addiu       $a2, $v0, -0x4B68
    ctx->pc = 0x79a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x79a700: 0x24684c58  addiu       $t0, $v1, 0x4C58
    ctx->pc = 0x79a700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 19544));
    // 0x79a704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a708: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A708u;
    {
        const bool branch_taken_0x79a708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A708u;
        // 0x79a70c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a708) {
            ctx->pc = 0x79A740u;
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A710u;
    // 0x79a710: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a714: 0x0  nop
    ctx->pc = 0x79a714u;
    // NOP
label_79a718:
    // 0x79a718: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a71c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a720: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a724: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a728: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a72c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A72Cu;
    {
        const bool branch_taken_0x79a72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A72Cu;
        // 0x79a730: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a72c) {
            ctx->pc = 0x79A740u;
            goto label_79a740;
        }
    }
    ctx->pc = 0x79A734u;
    // 0x79a734: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a734u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a738: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A738u;
    {
        const bool branch_taken_0x79a738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a738) {
            ctx->pc = 0x79A73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A738u;
            // 0x79a73c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a718;
        }
    }
    ctx->pc = 0x79A740u;
label_79a740:
    // 0x79a740: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A740u;
    SET_GPR_U32(ctx, 31, 0x79A748u);
    ctx->pc = 0x79A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A740u;
    // 0x79a744: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A740u, 0x79A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A748u;
label_79a748:
    // 0x79a748: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79A748u;
    {
        const bool branch_taken_0x79a748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a748) {
            ctx->pc = 0x79A74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A748u;
            // 0x79a74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A760u;
            goto label_79a760;
        }
    }
    ctx->pc = 0x79A750u;
    // 0x79a750: 0xc0601a4  jal         func_180690
    ctx->pc = 0x79A750u;
    SET_GPR_U32(ctx, 31, 0x79A758u);
    ctx->pc = 0x79A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A750u;
    // 0x79a754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180690u, 0x79A750u, 0x79A758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A758u;
label_79a758:
    // 0x79a758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A758u;
    {
        const bool branch_taken_0x79a758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A758u;
        // 0x79a75c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a758) {
            ctx->pc = 0x79A764u;
            goto label_79a764;
        }
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79a764:
    // 0x79a764: 0x3e00008  jr          $ra
    ctx->pc = 0x79A764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A764u;
        // 0x79a768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A76Cu;
    // 0x79a76c: 0x0  nop
    ctx->pc = 0x79a76cu;
    // NOP
    ctx->pc = 0x79a770u;
}
} // namespace gh_r604
