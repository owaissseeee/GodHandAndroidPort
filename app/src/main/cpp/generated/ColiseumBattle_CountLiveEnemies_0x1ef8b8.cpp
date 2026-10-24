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

// Function: ColiseumBattle_CountLiveEnemies
// Address: 0x1ef8b8 - 0x1ef978
void ColiseumBattle_CountLiveEnemies_0x1ef8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_CountLiveEnemies_0x1ef8b8");
#endif

    switch (ctx->pc) {
        case 0x1ef8e8u: goto label_1ef8e8;
        case 0x1ef938u: goto label_1ef938;
        default: break;
    }

    ctx->pc = 0x1ef8b8u;

    // 0x1ef8b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef8bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x1ef8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x1ef8c0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ef8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ef8c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef8c8: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x1ef8cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ef8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ef8d4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ef8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ef8d8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EF8D8u;
    {
        const bool branch_taken_0x1ef8d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8D8u;
        // 0x1ef8dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8d8) {
            ctx->pc = 0x1EF958u;
            goto label_1ef958;
        }
    }
    ctx->pc = 0x1EF8E0u;
    // 0x1ef8e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ef8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef8e4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ef8e8:
    // 0x1ef8e8: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF8E8u;
    {
        const bool branch_taken_0x1ef8e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8e8) {
            ctx->pc = 0x1EF8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF8E8u;
            // 0x1ef8ec: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF950u;
            goto label_1ef950;
        }
    }
    ctx->pc = 0x1EF8F0u;
    // 0x1ef8f0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x1ef8f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x1ef8f4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x1ef8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x1ef8f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF8F8u;
    {
        const bool branch_taken_0x1ef8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8F8u;
        // 0x1ef8fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8f8) {
            ctx->pc = 0x1EF908u;
            goto label_1ef908;
        }
    }
    ctx->pc = 0x1EF900u;
    // 0x1ef900: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1ef900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1ef904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef908:
    // 0x1ef908: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ef908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ef90c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF90Cu;
    {
        const bool branch_taken_0x1ef90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF90Cu;
        // 0x1ef910: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef90c) {
            ctx->pc = 0x1EF94Cu;
            goto label_1ef94c;
        }
    }
    ctx->pc = 0x1EF914u;
    // 0x1ef914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF914u;
    {
        const bool branch_taken_0x1ef914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF914u;
        // 0x1ef918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef914) {
            ctx->pc = 0x1EF924u;
            goto label_1ef924;
        }
    }
    ctx->pc = 0x1EF91Cu;
    // 0x1ef91c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x1ef91cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x1ef920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ef924:
    // 0x1ef924: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x1ef924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ef928: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF928u;
    {
        const bool branch_taken_0x1ef928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef928) {
            ctx->pc = 0x1EF92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF928u;
            // 0x1ef92c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF950u;
            goto label_1ef950;
        }
    }
    ctx->pc = 0x1EF930u;
    // 0x1ef930: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x1EF930u;
    SET_GPR_U32(ctx, 31, 0x1EF938u);
    ctx->pc = 0x1EF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF930u;
    // 0x1ef934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x1EF930u, 0x1EF938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF938u;
label_1ef938:
    // 0x1ef938: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF938u;
    {
        const bool branch_taken_0x1ef938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x1ef938) {
            ctx->pc = 0x1EF93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF938u;
            // 0x1ef93c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF950u;
            goto label_1ef950;
        }
    }
    ctx->pc = 0x1EF940u;
    // 0x1ef940: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x1ef940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x1ef944: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x1ef944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ef948: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x1ef948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ef94c:
    // 0x1ef94c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1ef950:
    // 0x1ef950: 0x5620ffe5  bnel        $s1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1EF950u;
    {
        const bool branch_taken_0x1ef950 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef950) {
            ctx->pc = 0x1EF954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF950u;
            // 0x1ef954: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef8e8;
        }
    }
    ctx->pc = 0x1EF958u;
label_1ef958:
    // 0x1ef958: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ef958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef95c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ef95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef960: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ef960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef964: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef968: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ef968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef970: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF970u;
        // 0x1ef974: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF978u;
}
