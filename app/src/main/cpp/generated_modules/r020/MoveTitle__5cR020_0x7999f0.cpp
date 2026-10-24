#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: MoveTitle__5cR020
// Address: 0x7999f0 - 0x799a98
void MoveTitle__5cR020_0x7999f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveTitle__5cR020_0x7999f0");
#endif

    switch (ctx->pc) {
        case 0x799a30u: goto label_799a30;
        case 0x799a40u: goto label_799a40;
        case 0x799a50u: goto label_799a50;
        case 0x799a60u: goto label_799a60;
        case 0x799a70u: goto label_799a70;
        case 0x799a80u: goto label_799a80;
        case 0x799a88u: goto label_799a88;
        default: break;
    }

    ctx->pc = 0x7999f0u;

    // 0x7999f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7999f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7999f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7999f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7999f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7999fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a00: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x799a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x799a04: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x799a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x799a08: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799A08u;
    {
        const bool branch_taken_0x799a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A08u;
        // 0x799a0c: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a08) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A10u;
    // 0x799a10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799a14: 0x2442cb50  addiu       $v0, $v0, -0x34B0
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x799a18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799a1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799a20: 0x800008  jr          $a0
    ctx->pc = 0x799A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799A28u: goto label_799a28;
            case 0x799A38u: goto label_799a38;
            case 0x799A48u: goto label_799a48;
            case 0x799A58u: goto label_799a58;
            case 0x799A68u: goto label_799a68;
            case 0x799A78u: goto label_799a78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0xc1e6790  jal         func_799E40
    ctx->pc = 0x799A28u;
    SET_GPR_U32(ctx, 31, 0x799A30u);
    ctx->pc = 0x799A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A28u;
    // 0x799a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799E40u, 0x799A28u, 0x799A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A30u;
label_799a30:
    // 0x799a30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x799A30u;
    {
        const bool branch_taken_0x799a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a30) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A38u;
label_799a38:
    // 0x799a38: 0xc1e6814  jal         func_79A050
    ctx->pc = 0x799A38u;
    SET_GPR_U32(ctx, 31, 0x799A40u);
    ctx->pc = 0x799A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A38u;
    // 0x799a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A050u, 0x799A38u, 0x799A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A40u;
label_799a40:
    // 0x799a40: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x799A40u;
    {
        const bool branch_taken_0x799a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a40) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A48u;
label_799a48:
    // 0x799a48: 0xc1e6926  jal         func_79A498
    ctx->pc = 0x799A48u;
    SET_GPR_U32(ctx, 31, 0x799A50u);
    ctx->pc = 0x799A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A48u;
    // 0x799a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A498u, 0x799A48u, 0x799A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A50u;
label_799a50:
    // 0x799a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x799A50u;
    {
        const bool branch_taken_0x799a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a50) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A58u;
label_799a58:
    // 0x799a58: 0xc1e6c38  jal         func_79B0E0
    ctx->pc = 0x799A58u;
    SET_GPR_U32(ctx, 31, 0x799A60u);
    ctx->pc = 0x799A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A58u;
    // 0x799a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B0E0u, 0x799A58u, 0x799A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A60u;
label_799a60:
    // 0x799a60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799A60u;
    {
        const bool branch_taken_0x799a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a60) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A68u;
label_799a68:
    // 0x799a68: 0xc1e6e7a  jal         func_79B9E8
    ctx->pc = 0x799A68u;
    SET_GPR_U32(ctx, 31, 0x799A70u);
    ctx->pc = 0x799A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A68u;
    // 0x799a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9E8u, 0x799A68u, 0x799A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A70u;
label_799a70:
    // 0x799a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x799A70u;
    {
        const bool branch_taken_0x799a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a70) {
            ctx->pc = 0x799A80u;
            goto label_799a80;
        }
    }
    ctx->pc = 0x799A78u;
label_799a78:
    // 0x799a78: 0xc1e6f70  jal         func_79BDC0
    ctx->pc = 0x799A78u;
    SET_GPR_U32(ctx, 31, 0x799A80u);
    ctx->pc = 0x799A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A78u;
    // 0x799a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BDC0u, 0x799A78u, 0x799A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A80u;
label_799a80:
    // 0x799a80: 0xc1e66a6  jal         func_799A98
    ctx->pc = 0x799A80u;
    SET_GPR_U32(ctx, 31, 0x799A88u);
    ctx->pc = 0x799A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A80u;
    // 0x799a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799A98u, 0x799A80u, 0x799A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A88u;
label_799a88:
    // 0x799a88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a90: 0x3e00008  jr          $ra
    ctx->pc = 0x799A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A90u;
        // 0x799a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A98u;
}
} // namespace gh_r020
