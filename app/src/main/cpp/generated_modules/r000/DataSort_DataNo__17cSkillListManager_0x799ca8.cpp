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
// Function: DataSort_DataNo__17cSkillListManager
// Address: 0x799ca8 - 0x799dc8
void DataSort_DataNo__17cSkillListManager_0x799ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_DataNo__17cSkillListManager_0x799ca8");
#endif

    switch (ctx->pc) {
        case 0x799cc8u: goto label_799cc8;
        case 0x799ce8u: goto label_799ce8;
        case 0x799d60u: goto label_799d60;
        default: break;
    }

    ctx->pc = 0x799ca8u;

    // 0x799ca8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799cac: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799cb0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x799CB0u;
    {
        const bool branch_taken_0x799cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799cb0) {
            ctx->pc = 0x799DBCu;
            goto label_799dbc;
        }
    }
    ctx->pc = 0x799CB8u;
    // 0x799cb8: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799cbc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x799CBCu;
    {
        const bool branch_taken_0x799cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799cbc) {
            ctx->pc = 0x799DBCu;
            goto label_799dbc;
        }
    }
    ctx->pc = 0x799CC4u;
    // 0x799cc4: 0x0  nop
    ctx->pc = 0x799cc4u;
    // NOP
label_799cc8:
    // 0x799cc8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799cc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ccc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799cd0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x799CD0u;
    {
        const bool branch_taken_0x799cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CD0u;
        // 0x799cd4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cd0) {
            ctx->pc = 0x799D44u;
            goto label_799d44;
        }
    }
    ctx->pc = 0x799CD8u;
    // 0x799cd8: 0x254c0014  addiu       $t4, $t2, 0x14
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799cdc: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799cdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799ce0: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x799ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799ce4: 0x0  nop
    ctx->pc = 0x799ce4u;
    // NOP
label_799ce8:
    // 0x799ce8: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x799cec: 0x1893021  addu        $a2, $t4, $t1
    ctx->pc = 0x799cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x799cf0: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799cf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799cf4: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x799cf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799cf8: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x799cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799cfc: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799d00: 0x8e2818  mult        $a1, $a0, $t6
    ctx->pc = 0x799d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x799d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799d08: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x799d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x799d0c: 0x84650018  lh          $a1, 0x18($v1)
    ctx->pc = 0x799d0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x799d10: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x799d14: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x799d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x799d18: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D18u;
    {
        const bool branch_taken_0x799d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D18u;
        // 0x799d1c: 0x90cb0000  lbu         $t3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d18) {
            ctx->pc = 0x799D2Cu;
            goto label_799d2c;
        }
    }
    ctx->pc = 0x799D20u;
    // 0x799d20: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x799d20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x799d24: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799d24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d28: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799d28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799d2c:
    // 0x799d2c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799d30: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799d30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799d38: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799d3c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x799D3Cu;
    {
        const bool branch_taken_0x799d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D3Cu;
        // 0x799d40: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d3c) {
            ctx->pc = 0x799CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799ce8;
        }
    }
    ctx->pc = 0x799D44u;
label_799d44:
    // 0x799d44: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x799D44u;
    {
        const bool branch_taken_0x799d44 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D44u;
        // 0x799d48: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d44) {
            ctx->pc = 0x799DBCu;
            goto label_799dbc;
        }
    }
    ctx->pc = 0x799D4Cu;
    // 0x799d4c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x799D4Cu;
    {
        const bool branch_taken_0x799d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D4Cu;
        // 0x799d50: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d4c) {
            ctx->pc = 0x799DB4u;
            goto label_799db4;
        }
    }
    ctx->pc = 0x799D54u;
    // 0x799d54: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799d58: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799d5c: 0x0  nop
    ctx->pc = 0x799d5cu;
    // NOP
label_799d60:
    // 0x799d60: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x799d64: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x799d68: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799d68u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799d6c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799d70: 0x10e2018  mult        $a0, $t0, $t6
    ctx->pc = 0x799d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799d74: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799d78: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x799d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799d7c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x799d80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x799d84: 0x84820018  lh          $v0, 0x18($a0)
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x799d88: 0x84a30018  lh          $v1, 0x18($a1)
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x799d8c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799D90u;
    {
        const bool branch_taken_0x799d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D90u;
        // 0x799d94: 0x90cc0000  lbu         $t4, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d90) {
            ctx->pc = 0x799DA4u;
            goto label_799da4;
        }
    }
    ctx->pc = 0x799D98u;
    // 0x799d98: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x799d98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x799d9c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799da0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799da0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799da4:
    // 0x799da4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799da8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x799da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799dac: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x799DACu;
    {
        const bool branch_taken_0x799dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DACu;
        // 0x799db0: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dac) {
            ctx->pc = 0x799D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799d60;
        }
    }
    ctx->pc = 0x799DB4u;
label_799db4:
    // 0x799db4: 0x55a0ffc4  bnel        $t5, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x799DB4u;
    {
        const bool branch_taken_0x799db4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x799db4) {
            ctx->pc = 0x799DB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799DB4u;
            // 0x799db8: 0x8d420010  lw          $v0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cc8;
        }
    }
    ctx->pc = 0x799DBCu;
label_799dbc:
    // 0x799dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x799DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DC4u;
    // 0x799dc4: 0x0  nop
    ctx->pc = 0x799dc4u;
    // NOP
    ctx->pc = 0x799dc8u;
}
} // namespace gh_r000
