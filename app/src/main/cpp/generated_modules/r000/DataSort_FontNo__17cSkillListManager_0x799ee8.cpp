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
// Function: DataSort_FontNo__17cSkillListManager
// Address: 0x799ee8 - 0x79a008
void DataSort_FontNo__17cSkillListManager_0x799ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_FontNo__17cSkillListManager_0x799ee8");
#endif

    switch (ctx->pc) {
        case 0x799f08u: goto label_799f08;
        case 0x799f28u: goto label_799f28;
        case 0x799fa0u: goto label_799fa0;
        default: break;
    }

    ctx->pc = 0x799ee8u;

    // 0x799ee8: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x799ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eec: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799ef0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x799EF0u;
    {
        const bool branch_taken_0x799ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ef0) {
            ctx->pc = 0x799FFCu;
            goto label_799ffc;
        }
    }
    ctx->pc = 0x799EF8u;
    // 0x799ef8: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799efc: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x799EFCu;
    {
        const bool branch_taken_0x799efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799efc) {
            ctx->pc = 0x799FFCu;
            goto label_799ffc;
        }
    }
    ctx->pc = 0x799F04u;
    // 0x799f04: 0x0  nop
    ctx->pc = 0x799f04u;
    // NOP
label_799f08:
    // 0x799f08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x799f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799f10: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x799F10u;
    {
        const bool branch_taken_0x799f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F10u;
        // 0x799f14: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f10) {
            ctx->pc = 0x799F84u;
            goto label_799f84;
        }
    }
    ctx->pc = 0x799F18u;
    // 0x799f18: 0x254c0014  addiu       $t4, $t2, 0x14
    ctx->pc = 0x799f18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799f1c: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799f20: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x799f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799f24: 0x0  nop
    ctx->pc = 0x799f24u;
    // NOP
label_799f28:
    // 0x799f28: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x799f2c: 0x1893021  addu        $a2, $t4, $t1
    ctx->pc = 0x799f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x799f30: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799f34: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f38: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x799f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799f3c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799f40: 0x8e2818  mult        $a1, $a0, $t6
    ctx->pc = 0x799f40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x799f44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799f48: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x799f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x799f4c: 0x84650010  lh          $a1, 0x10($v1)
    ctx->pc = 0x799f4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x799f50: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x799f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x799f54: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x799f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x799f58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x90cb0000  lbu         $t3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f58) {
            ctx->pc = 0x799F6Cu;
            goto label_799f6c;
        }
    }
    ctx->pc = 0x799F60u;
    // 0x799f60: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x799f60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x799f64: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799f64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f68: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799f68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799f6c:
    // 0x799f6c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x799f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x799f70: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799f70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x799f78: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x799f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x799f7c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x799F7Cu;
    {
        const bool branch_taken_0x799f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f7c) {
            ctx->pc = 0x799F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f28;
        }
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x799F84u;
    {
        const bool branch_taken_0x799f84 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F84u;
        // 0x799f88: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f84) {
            ctx->pc = 0x799FFCu;
            goto label_799ffc;
        }
    }
    ctx->pc = 0x799F8Cu;
    // 0x799f8c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x799F8Cu;
    {
        const bool branch_taken_0x799f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F8Cu;
        // 0x799f90: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f8c) {
            ctx->pc = 0x799FF4u;
            goto label_799ff4;
        }
    }
    ctx->pc = 0x799F94u;
    // 0x799f94: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x799f94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x799f98: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x799f9c: 0x0  nop
    ctx->pc = 0x799f9cu;
    // NOP
label_799fa0:
    // 0x799fa0: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x799fa4: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x799fa8: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x799fac: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799fb0: 0x10e2018  mult        $a0, $t0, $t6
    ctx->pc = 0x799fb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799fb4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x799fb8: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x799fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x799fbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x799fc0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x799fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x799fc4: 0x84820010  lh          $v0, 0x10($a0)
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x799fc8: 0x84a30010  lh          $v1, 0x10($a1)
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x799fcc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799fd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x799FD0u;
    {
        const bool branch_taken_0x799fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD0u;
        // 0x799fd4: 0x90cc0000  lbu         $t4, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fd0) {
            ctx->pc = 0x799FE4u;
            goto label_799fe4;
        }
    }
    ctx->pc = 0x799FD8u;
    // 0x799fd8: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x799fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x799fdc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fe0: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x799fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_799fe4:
    // 0x799fe4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x799fec: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x799FECu;
    {
        const bool branch_taken_0x799fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799fec) {
            ctx->pc = 0x799FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799fa0;
        }
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x55a0ffc4  bnel        $t5, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x799FF4u;
    {
        const bool branch_taken_0x799ff4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ff4) {
            ctx->pc = 0x799FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FF4u;
            // 0x799ff8: 0x8d420010  lw          $v0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f08;
        }
    }
    ctx->pc = 0x799FFCu;
label_799ffc:
    // 0x799ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x799FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A004u;
    // 0x79a004: 0x0  nop
    ctx->pc = 0x79a004u;
    // NOP
    ctx->pc = 0x79a008u;
}
} // namespace gh_r000
