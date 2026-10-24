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
// Function: DataSort_Price__17cSkillListManager
// Address: 0x79a538 - 0x79a658
void DataSort_Price__17cSkillListManager_0x79a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_Price__17cSkillListManager_0x79a538");
#endif

    switch (ctx->pc) {
        case 0x79a558u: goto label_79a558;
        case 0x79a578u: goto label_79a578;
        case 0x79a5f0u: goto label_79a5f0;
        default: break;
    }

    ctx->pc = 0x79a538u;

    // 0x79a538: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x79a538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a53c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x79a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x79a540: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x79A540u;
    {
        const bool branch_taken_0x79a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a540) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A548u;
    // 0x79a548: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x79a54c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x79A54Cu;
    {
        const bool branch_taken_0x79a54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a54c) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A554u;
    // 0x79a554: 0x0  nop
    ctx->pc = 0x79a554u;
    // NOP
label_79a558:
    // 0x79a558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a55c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a560: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A560u;
    {
        const bool branch_taken_0x79a560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A560u;
        // 0x79a564: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a560) {
            ctx->pc = 0x79A5D4u;
            goto label_79a5d4;
        }
    }
    ctx->pc = 0x79A568u;
    // 0x79a568: 0x254c0014  addiu       $t4, $t2, 0x14
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x79a56c: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x79a56cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a570: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x79a570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a574: 0x0  nop
    ctx->pc = 0x79a574u;
    // NOP
label_79a578:
    // 0x79a578: 0x1833821  addu        $a3, $t4, $v1
    ctx->pc = 0x79a578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x79a57c: 0x1893021  addu        $a2, $t4, $t1
    ctx->pc = 0x79a57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x79a580: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a580u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a584: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x79a584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a588: 0x10e1818  mult        $v1, $t0, $t6
    ctx->pc = 0x79a588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a58c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x79a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x79a590: 0x8e2818  mult        $a1, $a0, $t6
    ctx->pc = 0x79a590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x79a594: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a598: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x79a598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x79a59c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x79a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a5a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a5a4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79a5a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79a5a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A5A8u;
    {
        const bool branch_taken_0x79a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5A8u;
        // 0x79a5ac: 0x90cb0000  lbu         $t3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5a8) {
            ctx->pc = 0x79A5BCu;
            goto label_79a5bc;
        }
    }
    ctx->pc = 0x79A5B0u;
    // 0x79a5b0: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x79a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x79a5b4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x79a5b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a5b8: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x79a5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a5bc:
    // 0x79a5bc: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x79a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x79a5c0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a5c8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x79a5c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a5cc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A5CCu;
    {
        const bool branch_taken_0x79a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5CCu;
        // 0x79a5d0: 0x24690001  addiu       $t1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5cc) {
            ctx->pc = 0x79A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a578;
        }
    }
    ctx->pc = 0x79A5D4u;
label_79a5d4:
    // 0x79a5d4: 0x11a0001d  beqz        $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A5D4u;
    {
        const bool branch_taken_0x79a5d4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5D4u;
        // 0x79a5d8: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5d4) {
            ctx->pc = 0x79A64Cu;
            goto label_79a64c;
        }
    }
    ctx->pc = 0x79A5DCu;
    // 0x79a5dc: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79A5DCu;
    {
        const bool branch_taken_0x79a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5DCu;
        // 0x79a5e0: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a5dc) {
            ctx->pc = 0x79A644u;
            goto label_79a644;
        }
    }
    ctx->pc = 0x79A5E4u;
    // 0x79a5e4: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x79a5e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x79a5e8: 0x240e0024  addiu       $t6, $zero, 0x24
    ctx->pc = 0x79a5e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a5ec: 0x0  nop
    ctx->pc = 0x79a5ecu;
    // NOP
label_79a5f0:
    // 0x79a5f0: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x79a5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x79a5f4: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x79a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x79a5f8: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a5f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a5fc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x79a5fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a600: 0x10e2018  mult        $a0, $t0, $t6
    ctx->pc = 0x79a600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x79a604: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x79a604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x79a608: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x79a608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a60c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x79a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x79a610: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x79a610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79a614: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x79a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a618: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79a61c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x79a61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79a620: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A620u;
    {
        const bool branch_taken_0x79a620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A620u;
        // 0x79a624: 0x90cc0000  lbu         $t4, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a620) {
            ctx->pc = 0x79A634u;
            goto label_79a634;
        }
    }
    ctx->pc = 0x79A628u;
    // 0x79a628: 0xa0ec0000  sb          $t4, 0x0($a3)
    ctx->pc = 0x79a628u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x79a62c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x79a62cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a630: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x79a630u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a634:
    // 0x79a634: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a634u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a638: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a63c: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x79A63Cu;
    {
        const bool branch_taken_0x79a63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A63Cu;
        // 0x79a640: 0x2469ffff  addiu       $t1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a63c) {
            ctx->pc = 0x79A5F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a5f0;
        }
    }
    ctx->pc = 0x79A644u;
label_79a644:
    // 0x79a644: 0x55a0ffc4  bnel        $t5, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x79A644u;
    {
        const bool branch_taken_0x79a644 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a644) {
            ctx->pc = 0x79A648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A644u;
            // 0x79a648: 0x8d420010  lw          $v0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a558;
        }
    }
    ctx->pc = 0x79A64Cu;
label_79a64c:
    // 0x79a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A654u;
    // 0x79a654: 0x0  nop
    ctx->pc = 0x79a654u;
    // NOP
    ctx->pc = 0x79a658u;
}
} // namespace gh_r000
