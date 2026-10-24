#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: func_0079A948
// Address: 0x79a948 - 0x79aa08
void func_0079A948_0x79a948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A948_0x79a948");
#endif

    switch (ctx->pc) {
        case 0x79a978u: goto label_79a978;
        case 0x79a9c8u: goto label_79a9c8;
        default: break;
    }

    ctx->pc = 0x79a948u;

    // 0x79a948: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a94c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a950: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a954: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a958: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79a958u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a95c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a95cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a960: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a964: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a968: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A968u;
    {
        const bool branch_taken_0x79a968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A968u;
        // 0x79a96c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a968) {
            ctx->pc = 0x79A9E8u;
            goto label_79a9e8;
        }
    }
    ctx->pc = 0x79A970u;
    // 0x79a970: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x79a970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a974: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79a974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79a978:
    // 0x79a978: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A978u;
    {
        const bool branch_taken_0x79a978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a978) {
            ctx->pc = 0x79A97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A978u;
            // 0x79a97c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9E0u;
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79A980u;
    // 0x79a980: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a984: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A988u;
    {
        const bool branch_taken_0x79a988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A988u;
        // 0x79a98c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a988) {
            ctx->pc = 0x79A998u;
            goto label_79a998;
        }
    }
    ctx->pc = 0x79A990u;
    // 0x79a990: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a998:
    // 0x79a998: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a99c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79A99Cu;
    {
        const bool branch_taken_0x79a99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A99Cu;
        // 0x79a9a0: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a99c) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A9A4u;
    // 0x79a9a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A9A4u;
    {
        const bool branch_taken_0x79a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9A4u;
        // 0x79a9a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9a4) {
            ctx->pc = 0x79A9B4u;
            goto label_79a9b4;
        }
    }
    ctx->pc = 0x79A9ACu;
    // 0x79a9ac: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a9b4:
    // 0x79a9b4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a9b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x79A9B8u;
    {
        const bool branch_taken_0x79a9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9b8) {
            ctx->pc = 0x79A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9B8u;
            // 0x79a9bc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A9E0u;
            goto label_79a9e0;
        }
    }
    ctx->pc = 0x79A9C0u;
    // 0x79a9c0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A9C0u;
    SET_GPR_U32(ctx, 31, 0x79A9C8u);
    ctx->pc = 0x79A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C0u;
    // 0x79a9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A9C0u, 0x79A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C8u;
label_79a9c8:
    // 0x79a9c8: 0x10530004  beq         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A9C8u;
    {
        const bool branch_taken_0x79a9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x79A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9C8u;
        // 0x79a9cc: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9c8) {
            ctx->pc = 0x79A9DCu;
            goto label_79a9dc;
        }
    }
    ctx->pc = 0x79A9D0u;
    // 0x79a9d0: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x79a9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x79a9d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a9d8: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x79a9d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_79a9dc:
    // 0x79a9dc: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79a9dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79a9e0:
    // 0x79a9e0: 0x5620ffe5  bnel        $s1, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x79A9E0u;
    {
        const bool branch_taken_0x79a9e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a9e0) {
            ctx->pc = 0x79A9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A9E0u;
            // 0x79a9e4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a978;
        }
    }
    ctx->pc = 0x79A9E8u;
label_79a9e8:
    // 0x79a9e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79a9e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a9f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a9f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a9f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a9f8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a9f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x79AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA00u;
        // 0x79aa04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AA08u;
}
} // namespace gh_r300
