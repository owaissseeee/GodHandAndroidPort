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

// Function: func_0033B878
// Address: 0x33b878 - 0x33b938
void func_0033B878_0x33b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B878_0x33b878");
#endif

    switch (ctx->pc) {
        case 0x33b898u: goto label_33b898;
        case 0x33b8d8u: goto label_33b8d8;
        case 0x33b928u: goto label_33b928;
        default: break;
    }

    ctx->pc = 0x33b878u;

    // 0x33b878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b87c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x33b87cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x33b880: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B880u;
    {
        const bool branch_taken_0x33b880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B880u;
        // 0x33b884: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b880) {
            ctx->pc = 0x33B8A0u;
            goto label_33b8a0;
        }
    }
    ctx->pc = 0x33B888u;
    // 0x33b888: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b88c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x33B88Cu;
    {
        const bool branch_taken_0x33b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B88Cu;
        // 0x33b890: 0x24845ec8  addiu       $a0, $a0, 0x5EC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b88c) {
            ctx->pc = 0x33B920u;
            goto label_33b920;
        }
    }
    ctx->pc = 0x33B894u;
    // 0x33b894: 0x0  nop
    ctx->pc = 0x33b894u;
    // NOP
label_33b898:
    // 0x33b898: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33B898u;
    {
        const bool branch_taken_0x33b898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B898u;
        // 0x33b89c: 0xad070008  sw          $a3, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b898) {
            ctx->pc = 0x33B90Cu;
            goto label_33b90c;
        }
    }
    ctx->pc = 0x33B8A0u;
label_33b8a0:
    // 0x33b8a0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x33b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b8a4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x33b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x33b8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b8ac: 0x246a5ef0  addiu       $t2, $v1, 0x5EF0
    ctx->pc = 0x33b8acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 24304));
    // 0x33b8b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33b8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b8b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33b8b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b8b8: 0x3c040076  lui         $a0, 0x76
    ctx->pc = 0x33b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)118 << 16));
    // 0x33b8bc: 0x24848620  addiu       $a0, $a0, -0x79E0
    ctx->pc = 0x33b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
    // 0x33b8c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33b8c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33b8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b8c8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33B8C8u;
    {
        const bool branch_taken_0x33b8c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8C8u;
        // 0x33b8cc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8c8) {
            ctx->pc = 0x33B8FCu;
            goto label_33b8fc;
        }
    }
    ctx->pc = 0x33B8D0u;
    // 0x33b8d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x33b8d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x33b8d4: 0x0  nop
    ctx->pc = 0x33b8d4u;
    // NOP
label_33b8d8:
    // 0x33b8d8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x33b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x33b8dc: 0x29220006  slti        $v0, $t1, 0x6
    ctx->pc = 0x33b8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x33b8e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B8E0u;
    {
        const bool branch_taken_0x33b8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8E0u;
        // 0x33b8e4: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b8e0) {
            ctx->pc = 0x33B90Cu;
            goto label_33b90c;
        }
    }
    ctx->pc = 0x33B8E8u;
    // 0x33b8e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b8ec: 0x0  nop
    ctx->pc = 0x33b8ecu;
    // NOP
    // 0x33b8f0: 0x0  nop
    ctx->pc = 0x33b8f0u;
    // NOP
    // 0x33b8f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33B8F4u;
    {
        const bool branch_taken_0x33b8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b8f4) {
            ctx->pc = 0x33B8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B8F4u;
            // 0x33b8f8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b8d8;
        }
    }
    ctx->pc = 0x33B8FCu;
label_33b8fc:
    // 0x33b8fc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b900: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x33B900u;
    {
        const bool branch_taken_0x33b900 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B900u;
        // 0x33b904: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b900) {
            ctx->pc = 0x33B898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b898;
        }
    }
    ctx->pc = 0x33B908u;
    // 0x33b908: 0xac8a0008  sw          $t2, 0x8($a0)
    ctx->pc = 0x33b908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 10));
label_33b90c:
    // 0x33b90c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x33b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33b910: 0x55220006  bnel        $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B910u;
    {
        const bool branch_taken_0x33b910 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b910) {
            ctx->pc = 0x33B914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B910u;
            // 0x33b914: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B92Cu;
            goto label_33b92c;
        }
    }
    ctx->pc = 0x33B918u;
    // 0x33b918: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b91c: 0x24845ef8  addiu       $a0, $a0, 0x5EF8
    ctx->pc = 0x33b91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24312));
label_33b920:
    // 0x33b920: 0xc0cede4  jal         func_33B790
    ctx->pc = 0x33B920u;
    SET_GPR_U32(ctx, 31, 0x33B928u);
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33B920u, 0x33B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B928u;
label_33b928:
    // 0x33b928: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33b92c:
    // 0x33b92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b930: 0x3e00008  jr          $ra
    ctx->pc = 0x33B930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B930u;
        // 0x33b934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B938u;
}
