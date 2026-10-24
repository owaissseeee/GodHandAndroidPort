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

// Function: SetCustomIDDispOneOrAll_1F29C0
// Address: 0x1f29c0 - 0x1f2a88
void SetCustomIDDispOneOrAll_1F29C0_0x1f29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCustomIDDispOneOrAll_1F29C0_0x1f29c0");
#endif

    switch (ctx->pc) {
        case 0x1f29f0u: goto label_1f29f0;
        case 0x1f29fcu: goto label_1f29fc;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a40u: goto label_1f2a40;
        case 0x1f2a4cu: goto label_1f2a4c;
        case 0x1f2a74u: goto label_1f2a74;
        default: break;
    }

    ctx->pc = 0x1f29c0u;

    // 0x1f29c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f29c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f29c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1f29c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f29c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f29cc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f29ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f29d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f29d4: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F29D4u;
    {
        const bool branch_taken_0x1f29d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29D4u;
        // 0x1f29d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29d4) {
            ctx->pc = 0x1F2A2Cu;
            goto label_1f2a2c;
        }
    }
    ctx->pc = 0x1F29DCu;
    // 0x1f29dc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f29e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F29E0u;
    {
        const bool branch_taken_0x1f29e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F29E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29E0u;
        // 0x1f29e4: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29e0) {
            ctx->pc = 0x1F2A10u;
            goto label_1f2a10;
        }
    }
    ctx->pc = 0x1F29E8u;
    // 0x1f29e8: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1f29e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1f29ec: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f29f0:
    // 0x1f29f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f29f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f29f4: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F29F4u;
    SET_GPR_U32(ctx, 31, 0x1F29FCu);
    ctx->pc = 0x1F29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F29F4u;
    // 0x1f29f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F29F4u, 0x1F29FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F29FCu;
label_1f29fc:
    // 0x1f29fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f29fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f2a00: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2A00u;
    {
        const bool branch_taken_0x1f2a00 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A00u;
        // 0x1f2a04: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a00) {
            ctx->pc = 0x1F29F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f29f0;
        }
    }
    ctx->pc = 0x1F2A08u;
    // 0x1f2a08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F2A08u;
    {
        const bool branch_taken_0x1f2a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A08u;
        // 0x1f2a0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a08) {
            ctx->pc = 0x1F2A78u;
            goto label_1f2a78;
        }
    }
    ctx->pc = 0x1F2A10u;
label_1f2a10:
    // 0x1f2a10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2a14: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1f2a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f2a18: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1f2a1c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A24u);
    ctx->pc = 0x1F2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A1Cu;
    // 0x1f2a20: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F2A1Cu, 0x1F2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A24u;
label_1f2a24:
    // 0x1f2a24: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F2A24u;
    {
        const bool branch_taken_0x1f2a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A24u;
        // 0x1f2a28: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a24) {
            ctx->pc = 0x1F2A78u;
            goto label_1f2a78;
        }
    }
    ctx->pc = 0x1F2A2Cu;
label_1f2a2c:
    // 0x1f2a2c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1f2a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f2a30: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F2A30u;
    {
        const bool branch_taken_0x1f2a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A30u;
        // 0x1f2a34: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a30) {
            ctx->pc = 0x1F2A60u;
            goto label_1f2a60;
        }
    }
    ctx->pc = 0x1F2A38u;
    // 0x1f2a38: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x1f2a3c: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f2a40:
    // 0x1f2a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a44: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F2A44u;
    SET_GPR_U32(ctx, 31, 0x1F2A4Cu);
    ctx->pc = 0x1F2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A44u;
    // 0x1f2a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F2A44u, 0x1F2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A4Cu;
label_1f2a4c:
    // 0x1f2a4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1f2a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1f2a50: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2A50u;
    {
        const bool branch_taken_0x1f2a50 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1F2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A50u;
        // 0x1f2a54: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a50) {
            ctx->pc = 0x1F2A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2a40;
        }
    }
    ctx->pc = 0x1F2A58u;
    // 0x1f2a58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2A58u;
    {
        const bool branch_taken_0x1f2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A58u;
        // 0x1f2a5c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a58) {
            ctx->pc = 0x1F2A78u;
            goto label_1f2a78;
        }
    }
    ctx->pc = 0x1F2A60u;
label_1f2a60:
    // 0x1f2a60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a64: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1f2a64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f2a68: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x1f2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1f2a6c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1F2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A74u);
    ctx->pc = 0x1F2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A6Cu;
    // 0x1f2a70: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1F2A6Cu, 0x1F2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A74u;
label_1f2a74:
    // 0x1f2a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f2a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2a78:
    // 0x1f2a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f2a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f2a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2a80: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A80u;
        // 0x1f2a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2A88u;
}
