#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079BAD0
// Address: 0x79bad0 - 0x79bb80
void func_0079BAD0_0x79bad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079BAD0_0x79bad0");
#endif

    switch (ctx->pc) {
        case 0x79baf8u: goto label_79baf8;
        case 0x79bb4cu: goto label_79bb4c;
        default: break;
    }

    ctx->pc = 0x79bad0u;

    // 0x79bad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bad4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79bad8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79badc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bae0: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79bae4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79bae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bae8: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79BAE8u;
    {
        const bool branch_taken_0x79bae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAE8u;
        // 0x79baec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bae8) {
            ctx->pc = 0x79BB64u;
            goto label_79bb64;
        }
    }
    ctx->pc = 0x79BAF0u;
    // 0x79baf0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79baf4: 0x0  nop
    ctx->pc = 0x79baf4u;
    // NOP
label_79baf8:
    // 0x79baf8: 0x50800018  beql        $a0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x79BAF8u;
    {
        const bool branch_taken_0x79baf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79baf8) {
            ctx->pc = 0x79BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAF8u;
            // 0x79bafc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB5Cu;
            goto label_79bb5c;
        }
    }
    ctx->pc = 0x79BB00u;
    // 0x79bb00: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79bb00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79bb04: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79bb04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79bb08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BB08u;
    {
        const bool branch_taken_0x79bb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB08u;
        // 0x79bb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb08) {
            ctx->pc = 0x79BB18u;
            goto label_79bb18;
        }
    }
    ctx->pc = 0x79BB10u;
    // 0x79bb10: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bb10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bb14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bb14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bb18:
    // 0x79bb18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79bb1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x79BB1Cu;
    {
        const bool branch_taken_0x79bb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB1Cu;
        // 0x79bb20: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb1c) {
            ctx->pc = 0x79BB58u;
            goto label_79bb58;
        }
    }
    ctx->pc = 0x79BB24u;
    // 0x79bb24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79bb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79bb28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BB28u;
    {
        const bool branch_taken_0x79bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB28u;
        // 0x79bb2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb28) {
            ctx->pc = 0x79BB38u;
            goto label_79bb38;
        }
    }
    ctx->pc = 0x79BB30u;
    // 0x79bb30: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bb30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bb34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bb38:
    // 0x79bb38: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79bb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79bb3c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BB3Cu;
    {
        const bool branch_taken_0x79bb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bb3c) {
            ctx->pc = 0x79BB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB3Cu;
            // 0x79bb40: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB5Cu;
            goto label_79bb5c;
        }
    }
    ctx->pc = 0x79BB44u;
    // 0x79bb44: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79BB44u;
    SET_GPR_U32(ctx, 31, 0x79BB4Cu);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79BB44u, 0x79BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB4Cu;
label_79bb4c:
    // 0x79bb4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79bb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79bb50: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79bb54: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79bb54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79bb58:
    // 0x79bb58: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79bb58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79bb5c:
    // 0x79bb5c: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x79BB5Cu;
    {
        const bool branch_taken_0x79bb5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bb5c) {
            ctx->pc = 0x79BB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB5Cu;
            // 0x79bb60: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79baf8;
        }
    }
    ctx->pc = 0x79BB64u;
label_79bb64:
    // 0x79bb64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79bb64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bb6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79bb6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bb70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bb74: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB74u;
        // 0x79bb78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB7Cu;
    // 0x79bb7c: 0x0  nop
    ctx->pc = 0x79bb7cu;
    // NOP
    ctx->pc = 0x79bb80u;
}
} // namespace gh_r102
