#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: DataSort_SortNo__17cSkillListManager
// Address: 0x799dc8 - 0x799ee8
void DataSort_SortNo__17cSkillListManager_0x799dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_SortNo__17cSkillListManager_0x799dc8");
#endif

    switch (ctx->pc) {
        case 0x799de8u: goto label_799de8;
        case 0x799e08u: goto label_799e08;
        case 0x799e80u: goto label_799e80;
        default: break;
    }

    ctx->pc = 0x799dc8u;

    // 0x799dc8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x799dc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dcc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799dd0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x799DD0u;
    {
        const bool branch_taken_0x799dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799dd0) {
            ctx->pc = 0x799EDCu;
            goto label_799edc;
        }
    }
    ctx->pc = 0x799DD8u;
    // 0x799dd8: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799ddc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x799DDCu;
    {
        const bool branch_taken_0x799ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ddc) {
            ctx->pc = 0x799EDCu;
            goto label_799edc;
        }
    }
    ctx->pc = 0x799DE4u;
    // 0x799de4: 0x0  nop
    ctx->pc = 0x799de4u;
    // NOP
label_799de8:
    // 0x799de8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799de8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799dec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799df0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x799DF0u;
    {
        const bool branch_taken_0x799df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF0u;
        // 0x799df4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df0) {
            ctx->pc = 0x799E64u;
            goto label_799e64;
        }
    }
    ctx->pc = 0x799DF8u;
    // 0x799df8: 0x254c0014  addiu       $t4, $t2, 0x14
    ctx->pc = 0x799df8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799dfc: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799e00: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x799e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799e04: 0x0  nop
    ctx->pc = 0x799e04u;
    // NOP
label_799e08:
    // 0x799e08: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x799e0c: 0x1893021  addu        $a2, $t4, $t1
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x799e10: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799e14: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e18: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x799e18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799e1c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799e20: 0x8e2818  mult        $a1, $a0, $t6
    ctx->pc = 0x799e20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x799e24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799e28: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x799e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x799e2c: 0x84650014  lh          $a1, 0x14($v1)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x799e30: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x799e30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x799e34: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x799e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x799e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799E38u;
    {
        const bool branch_taken_0x799e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E38u;
        // 0x799e3c: 0x90cb0000  lbu         $t3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e38) {
            ctx->pc = 0x799E4Cu;
            goto label_799e4c;
        }
    }
    ctx->pc = 0x799E40u;
    // 0x799e40: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x799e40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x799e44: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e48: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799e48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799e4c:
    // 0x799e4c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799e50: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799e58: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799e5c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x799E5Cu;
    {
        const bool branch_taken_0x799e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E5Cu;
        // 0x799e60: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e5c) {
            ctx->pc = 0x799E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e08;
        }
    }
    ctx->pc = 0x799E64u;
label_799e64:
    // 0x799e64: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x799E64u;
    {
        const bool branch_taken_0x799e64 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e64) {
            ctx->pc = 0x799EDCu;
            goto label_799edc;
        }
    }
    ctx->pc = 0x799E6Cu;
    // 0x799e6c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x799E6Cu;
    {
        const bool branch_taken_0x799e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e6c) {
            ctx->pc = 0x799ED4u;
            goto label_799ed4;
        }
    }
    ctx->pc = 0x799E74u;
    // 0x799e74: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x799e74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799e78: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799e78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799e7c: 0x0  nop
    ctx->pc = 0x799e7cu;
    // NOP
label_799e80:
    // 0x799e80: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x799e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x799e84: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x799e88: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799e88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799e8c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799e90: 0x10e2018  mult        $a0, $t0, $t6
    ctx->pc = 0x799e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799e94: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799e98: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x799e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799e9c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x799ea0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x799ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x799ea4: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x799ea8: 0x84a30014  lh          $v1, 0x14($a1)
    ctx->pc = 0x799ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x799eac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799eb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799EB0u;
    {
        const bool branch_taken_0x799eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB0u;
        // 0x799eb4: 0x90cc0000  lbu         $t4, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb0) {
            ctx->pc = 0x799EC4u;
            goto label_799ec4;
        }
    }
    ctx->pc = 0x799EB8u;
    // 0x799eb8: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x799eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x799ebc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799ebcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ec0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799ec4:
    // 0x799ec4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ec8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799ecc: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x799ECCu;
    {
        const bool branch_taken_0x799ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799ECCu;
        // 0x799ed0: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ecc) {
            ctx->pc = 0x799E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799e80;
        }
    }
    ctx->pc = 0x799ED4u;
label_799ed4:
    // 0x799ed4: 0x55a0ffc4  bnel        $t5, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x799ED4u;
    {
        const bool branch_taken_0x799ed4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ed4) {
            ctx->pc = 0x799ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799ED4u;
            // 0x799ed8: 0x8d420010  lw          $v0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799de8;
        }
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x3e00008  jr          $ra
    ctx->pc = 0x799EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799EE4u;
    // 0x799ee4: 0x0  nop
    ctx->pc = 0x799ee4u;
    // NOP
    ctx->pc = 0x799ee8u;
}
} // namespace gh_r000
