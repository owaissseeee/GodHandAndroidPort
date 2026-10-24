#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: getEmNum__5cR409
// Address: 0x799398 - 0x799448
void getEmNum__5cR409_0x799398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__5cR409_0x799398");
#endif

    switch (ctx->pc) {
        case 0x7993c0u: goto label_7993c0;
        case 0x799414u: goto label_799414;
        default: break;
    }

    ctx->pc = 0x799398u;

    // 0x799398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79939c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7993a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7993a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7993a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7993a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7993a8: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x7993a8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x7993ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7993acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993b0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7993B0u;
    {
        const bool branch_taken_0x7993b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993B0u;
        // 0x7993b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993b0) {
            ctx->pc = 0x79942Cu;
            goto label_79942c;
        }
    }
    ctx->pc = 0x7993B8u;
    // 0x7993b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x7993b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7993bc: 0x0  nop
    ctx->pc = 0x7993bcu;
    // NOP
label_7993c0:
    // 0x7993c0: 0x50800018  beql        $a0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x7993C0u;
    {
        const bool branch_taken_0x7993c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x7993c0) {
            ctx->pc = 0x7993C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7993C0u;
            // 0x7993c4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799424u;
            goto label_799424;
        }
    }
    ctx->pc = 0x7993C8u;
    // 0x7993c8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x7993c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x7993cc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x7993ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x7993d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7993D0u;
    {
        const bool branch_taken_0x7993d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7993D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993D0u;
        // 0x7993d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993d0) {
            ctx->pc = 0x7993E0u;
            goto label_7993e0;
        }
    }
    ctx->pc = 0x7993D8u;
    // 0x7993d8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7993d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7993dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7993e0:
    // 0x7993e0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x7993e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7993e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7993E4u;
    {
        const bool branch_taken_0x7993e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993E4u;
        // 0x7993e8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993e4) {
            ctx->pc = 0x799420u;
            goto label_799420;
        }
    }
    ctx->pc = 0x7993ECu;
    // 0x7993ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7993ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7993f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7993F0u;
    {
        const bool branch_taken_0x7993f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F0u;
        // 0x7993f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f0) {
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x7993F8u;
    // 0x7993f8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7993f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7993fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7993fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799400:
    // 0x799400: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799404: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799404u;
    {
        const bool branch_taken_0x799404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799404) {
            ctx->pc = 0x799408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799404u;
            // 0x799408: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799424u;
            goto label_799424;
        }
    }
    ctx->pc = 0x79940Cu;
    // 0x79940c: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79940Cu;
    SET_GPR_U32(ctx, 31, 0x799414u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79940Cu, 0x799414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799414u;
label_799414:
    // 0x799414: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799418: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79941c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79941cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_799420:
    // 0x799420: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x799420u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799424:
    // 0x799424: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x799424u;
    {
        const bool branch_taken_0x799424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799424) {
            ctx->pc = 0x799428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799424u;
            // 0x799428: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7993C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7993c0;
        }
    }
    ctx->pc = 0x79942Cu;
label_79942c:
    // 0x79942c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79943c: 0x3e00008  jr          $ra
    ctx->pc = 0x79943Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79943Cu;
        // 0x799440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79943Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799444u;
    // 0x799444: 0x0  nop
    ctx->pc = 0x799444u;
    // NOP
    ctx->pc = 0x799448u;
}
} // namespace gh_r409
