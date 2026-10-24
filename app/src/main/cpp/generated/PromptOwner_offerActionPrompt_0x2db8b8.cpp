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

// Function: PromptOwner_offerActionPrompt
// Address: 0x2db8b8 - 0x2db978
void PromptOwner_offerActionPrompt_0x2db8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PromptOwner_offerActionPrompt_0x2db8b8");
#endif

    switch (ctx->pc) {
        case 0x2db8ccu: goto label_2db8cc;
        case 0x2db8e4u: goto label_2db8e4;
        case 0x2db90cu: goto label_2db90c;
        case 0x2db938u: goto label_2db938;
        case 0x2db964u: goto label_2db964;
        default: break;
    }

    ctx->pc = 0x2db8b8u;

    // 0x2db8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2db8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2db8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2db8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2db8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db8c4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2DB8C4u;
    SET_GPR_U32(ctx, 31, 0x2DB8CCu);
    ctx->pc = 0x2DB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB8C4u;
    // 0x2db8c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2DB8C4u, 0x2DB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8CCu;
label_2db8cc:
    // 0x2db8cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db8d0: 0x8482054a  lh          $v0, 0x54A($a0)
    ctx->pc = 0x2db8d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1354)));
    // 0x2db8d4: 0x58400024  blezl       $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2DB8D4u;
    {
        const bool branch_taken_0x2db8d4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2db8d4) {
            ctx->pc = 0x2DB8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8D4u;
            // 0x2db8d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB8DCu;
    // 0x2db8dc: 0xc042da6  jal         func_10B698
    ctx->pc = 0x2DB8DCu;
    SET_GPR_U32(ctx, 31, 0x2DB8E4u);
    ctx->pc = 0x10B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B698u, 0x2DB8DCu, 0x2DB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB8E4u;
label_2db8e4:
    // 0x2db8e4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB8E4u;
    {
        const bool branch_taken_0x2db8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db8e4) {
            ctx->pc = 0x2DB8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8E4u;
            // 0x2db8e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB8ECu;
    // 0x2db8ec: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2db8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2db8f0: 0x8c436a04  lw          $v1, 0x6A04($v0)
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586A04u));
    // 0x2db8f4: 0x5c60001c  bgtzl       $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DB8F4u;
    {
        const bool branch_taken_0x2db8f4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2db8f4) {
            ctx->pc = 0x2DB8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8F4u;
            // 0x2db8f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB8FCu;
    // 0x2db8fc: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DB8FCu;
    {
        const bool branch_taken_0x2db8fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db8fc) {
            ctx->pc = 0x2DB900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB8FCu;
            // 0x2db900: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB904u;
    // 0x2db904: 0xc0b6df8  jal         func_2DB7E0
    ctx->pc = 0x2DB904u;
    SET_GPR_U32(ctx, 31, 0x2DB90Cu);
    ctx->pc = 0x2DB908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB904u;
    // 0x2db908: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB7E0u, 0x2DB904u, 0x2DB90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB90Cu;
label_2db90c:
    // 0x2db90c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DB90Cu;
    {
        const bool branch_taken_0x2db90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB90Cu;
        // 0x2db910: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db90c) {
            ctx->pc = 0x2DB940u;
            goto label_2db940;
        }
    }
    ctx->pc = 0x2DB914u;
    // 0x2db914: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2db914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2db918: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2db918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2db91c: 0x2508b978  addiu       $t0, $t0, -0x4688
    ctx->pc = 0x2db91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949240));
    // 0x2db920: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2db920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db924: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2db924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2db928: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2db928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2db92c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db92cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db930: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DB930u;
    SET_GPR_U32(ctx, 31, 0x2DB938u);
    ctx->pc = 0x2DB934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB930u;
    // 0x2db934: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DB930u, 0x2DB938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB938u;
label_2db938:
    // 0x2db938: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DB938u;
    {
        const bool branch_taken_0x2db938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB938u;
        // 0x2db93c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db938) {
            ctx->pc = 0x2DB968u;
            goto label_2db968;
        }
    }
    ctx->pc = 0x2DB940u;
label_2db940:
    // 0x2db940: 0x3c08002e  lui         $t0, 0x2E
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)46 << 16));
    // 0x2db944: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x2db944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x2db948: 0x2508b978  addiu       $t0, $t0, -0x4688
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949240));
    // 0x2db94c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2db94cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db950: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2db950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2db954: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2db954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2db958: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db95c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2DB95Cu;
    SET_GPR_U32(ctx, 31, 0x2DB964u);
    ctx->pc = 0x2DB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB95Cu;
    // 0x2db960: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2DB95Cu, 0x2DB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB964u;
label_2db964:
    // 0x2db964: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db968:
    // 0x2db968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db96c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB96Cu;
        // 0x2db970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB974u;
    // 0x2db974: 0x0  nop
    ctx->pc = 0x2db974u;
    // NOP
    ctx->pc = 0x2db978u;
}
