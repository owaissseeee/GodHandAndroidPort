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

// Function: BlackJack_PickResult
// Address: 0x1d3430 - 0x1d3508
void BlackJack_PickResult_0x1d3430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_PickResult_0x1d3430");
#endif

    switch (ctx->pc) {
        case 0x1d344cu: goto label_1d344c;
        case 0x1d3458u: goto label_1d3458;
        case 0x1d3464u: goto label_1d3464;
        case 0x1d3474u: goto label_1d3474;
        case 0x1d348cu: goto label_1d348c;
        case 0x1d34a8u: goto label_1d34a8;
        default: break;
    }

    ctx->pc = 0x1d3430u;

    // 0x1d3430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d3430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3434: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d3434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d3438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d3438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d343c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d3440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3444: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D3444u;
    SET_GPR_U32(ctx, 31, 0x1D344Cu);
    ctx->pc = 0x1D3448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3444u;
    // 0x1d3448: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D3444u, 0x1D344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D344Cu;
label_1d344c:
    // 0x1d344c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d344cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3450: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D3450u;
    SET_GPR_U32(ctx, 31, 0x1D3458u);
    ctx->pc = 0x1D3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3450u;
    // 0x1d3454: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D3450u, 0x1D3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3458u;
label_1d3458:
    // 0x1d3458: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d3458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d345c: 0xc07522c  jal         func_1D48B0
    ctx->pc = 0x1D345Cu;
    SET_GPR_U32(ctx, 31, 0x1D3464u);
    ctx->pc = 0x1D3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D345Cu;
    // 0x1d3460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D48B0u, 0x1D345Cu, 0x1D3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3464u;
label_1d3464:
    // 0x1d3464: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3464u;
    {
        const bool branch_taken_0x1d3464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3464) {
            ctx->pc = 0x1D3484u;
            goto label_1d3484;
        }
    }
    ctx->pc = 0x1D346Cu;
    // 0x1d346c: 0xc075246  jal         func_1D4918
    ctx->pc = 0x1D346Cu;
    SET_GPR_U32(ctx, 31, 0x1D3474u);
    ctx->pc = 0x1D3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D346Cu;
    // 0x1d3470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4918u, 0x1D346Cu, 0x1D3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3474u;
label_1d3474:
    // 0x1d3474: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D3474u;
    {
        const bool branch_taken_0x1d3474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3474u;
        // 0x1d3478: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3474) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D347Cu;
    // 0x1d347c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D347Cu;
    {
        const bool branch_taken_0x1d347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D347Cu;
        // 0x1d3480: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d347c) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D3484u;
label_1d3484:
    // 0x1d3484: 0xc07526c  jal         func_1D49B0
    ctx->pc = 0x1D3484u;
    SET_GPR_U32(ctx, 31, 0x1D348Cu);
    ctx->pc = 0x1D3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3484u;
    // 0x1d3488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D49B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D49B0u, 0x1D3484u, 0x1D348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D348Cu;
label_1d348c:
    // 0x1d348c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D348Cu;
    {
        const bool branch_taken_0x1d348c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D348Cu;
        // 0x1d3490: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d348c) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D3494u;
    // 0x1d3494: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1d3498: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3498u;
    {
        const bool branch_taken_0x1d3498 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3498u;
        // 0x1d349c: 0x2a220015  slti        $v0, $s1, 0x15 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)21) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3498) {
            ctx->pc = 0x1D34C0u;
            goto label_1d34c0;
        }
    }
    ctx->pc = 0x1D34A0u;
    // 0x1d34a0: 0xc075246  jal         func_1D4918
    ctx->pc = 0x1D34A0u;
    SET_GPR_U32(ctx, 31, 0x1D34A8u);
    ctx->pc = 0x1D34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34A0u;
    // 0x1d34a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4918u, 0x1D34A0u, 0x1D34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34A8u;
label_1d34a8:
    // 0x1d34a8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D34A8u;
    {
        const bool branch_taken_0x1d34a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34A8u;
        // 0x1d34ac: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34a8) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34B0u;
    // 0x1d34b0: 0x1251000d  beq         $s2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D34B0u;
    {
        const bool branch_taken_0x1d34b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x1D34B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B0u;
        // 0x1d34b4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34b0) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34B8u;
    // 0x1d34b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D34B8u;
    {
        const bool branch_taken_0x1d34b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B8u;
        // 0x1d34bc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34b8) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34C0u;
label_1d34c0:
    // 0x1d34c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D34C0u;
    {
        const bool branch_taken_0x1d34c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34C0u;
        // 0x1d34c4: 0x251102a  slt         $v0, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34c0) {
            ctx->pc = 0x1D34F0u;
            goto label_1d34f0;
        }
    }
    ctx->pc = 0x1D34C8u;
    // 0x1d34c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D34C8u;
    {
        const bool branch_taken_0x1d34c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34C8u;
        // 0x1d34cc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34c8) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34D0u;
    // 0x1d34d0: 0x2a420016  slti        $v0, $s2, 0x16
    ctx->pc = 0x1d34d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d34d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D34D4u;
    {
        const bool branch_taken_0x1d34d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D34D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34D4u;
        // 0x1d34d8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34d4) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34DCu;
    // 0x1d34dc: 0x12320002  beq         $s1, $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D34DCu;
    {
        const bool branch_taken_0x1d34dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x1D34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34DCu;
        // 0x1d34e0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34dc) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34E4u;
    // 0x1d34e4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d34e8:
    // 0x1d34e8: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d34e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d34ec: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d34ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d34f0:
    // 0x1d34f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d34f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d34f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d34f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d34f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d34f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d34fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3500: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3500u;
        // 0x1d3504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3508u;
}
