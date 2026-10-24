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
// Function: DataSort_TtoS__17cSkillListManager
// Address: 0x79a008 - 0x79a150
void DataSort_TtoS__17cSkillListManager_0x79a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_TtoS__17cSkillListManager_0x79a008");
#endif

    switch (ctx->pc) {
        case 0x79a01cu: goto label_79a01c;
        case 0x79a038u: goto label_79a038;
        case 0x79a058u: goto label_79a058;
        case 0x79a0d8u: goto label_79a0d8;
        default: break;
    }

    ctx->pc = 0x79a008u;

    // 0x79a008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a00c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a014: 0xc1e672a  jal         func_799CA8
    ctx->pc = 0x79A014u;
    SET_GPR_U32(ctx, 31, 0x79A01Cu);
    ctx->pc = 0x79A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A014u;
    // 0x79a018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799CA8u, 0x79A014u, 0x79A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A01Cu;
label_79a01c:
    // 0x79a01c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a020: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x79A020u;
    {
        const bool branch_taken_0x79a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a020) {
            ctx->pc = 0x79A024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A020u;
            // 0x79a024: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A144u;
            goto label_79a144;
        }
    }
    ctx->pc = 0x79A028u;
    // 0x79a028: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a02c: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x79A02Cu;
    {
        const bool branch_taken_0x79a02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a02c) {
            ctx->pc = 0x79A030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A02Cu;
            // 0x79a030: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A144u;
            goto label_79a144;
        }
    }
    ctx->pc = 0x79A034u;
    // 0x79a034: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a038:
    // 0x79a038: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a03c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a040: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A040u;
    {
        const bool branch_taken_0x79a040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A040u;
        // 0x79a044: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a040) {
            ctx->pc = 0x79A0BCu;
            goto label_79a0bc;
        }
    }
    ctx->pc = 0x79A048u;
    // 0x79a048: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a04c: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a04cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a050: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a054: 0x0  nop
    ctx->pc = 0x79a054u;
    // NOP
label_79a058:
    // 0x79a058: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a05c: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a05cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a060: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a064: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a068: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a06c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a070: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a074: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A074u;
    {
        const bool branch_taken_0x79a074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A074u;
        // 0x79a078: 0x1492021  addu        $a0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a074) {
            ctx->pc = 0x79A0A4u;
            goto label_79a0a4;
        }
    }
    ctx->pc = 0x79A07Cu;
    // 0x79a07c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a080: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a084: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a088: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a08c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a090: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A090u;
    {
        const bool branch_taken_0x79a090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A090u;
        // 0x79a094: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a090) {
            ctx->pc = 0x79A0A4u;
            goto label_79a0a4;
        }
    }
    ctx->pc = 0x79A098u;
    // 0x79a098: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a098u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a09c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a09cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a0a0: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a0a4:
    // 0x79a0a4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a0a8: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a0a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a0b0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x79a0b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a0b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x79A0B4u;
    {
        const bool branch_taken_0x79a0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0B4u;
        // 0x79a0b8: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0b4) {
            ctx->pc = 0x79A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a058;
        }
    }
    ctx->pc = 0x79A0BCu;
label_79a0bc:
    // 0x79a0bc: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x79A0BCu;
    {
        const bool branch_taken_0x79a0bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0BCu;
        // 0x79a0c0: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0bc) {
            ctx->pc = 0x79A140u;
            goto label_79a140;
        }
    }
    ctx->pc = 0x79A0C4u;
    // 0x79a0c4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A0C4u;
    {
        const bool branch_taken_0x79a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a0c4) {
            ctx->pc = 0x79A138u;
            goto label_79a138;
        }
    }
    ctx->pc = 0x79A0CCu;
    // 0x79a0cc: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a0ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a0d0: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a0d4: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_79a0d8:
    // 0x79a0d8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a0dc: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a0e0: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x79a0e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79a0e4: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a0e8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a0ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a0f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a0f4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A0F4u;
    {
        const bool branch_taken_0x79a0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F4u;
        // 0x79a0f8: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f4) {
            ctx->pc = 0x79A12Cu;
            goto label_79a12c;
        }
    }
    ctx->pc = 0x79A0FCu;
    // 0x79a0fc: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x79a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x79a100: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a104: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a108: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a10c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a110: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a114: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A114u;
    {
        const bool branch_taken_0x79a114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A114u;
        // 0x79a118: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a114) {
            ctx->pc = 0x79A128u;
            goto label_79a128;
        }
    }
    ctx->pc = 0x79A11Cu;
    // 0x79a11c: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a120: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a120u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a124: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a124u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a128:
    // 0x79a128: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79a12c:
    // 0x79a12c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a130: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79A130u;
    {
        const bool branch_taken_0x79a130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A130u;
        // 0x79a134: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a130) {
            ctx->pc = 0x79A0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0x5560ffbf  bnel        $t3, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x79A138u;
    {
        const bool branch_taken_0x79a138 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a138) {
            ctx->pc = 0x79A13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A138u;
            // 0x79a13c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a038;
        }
    }
    ctx->pc = 0x79A140u;
label_79a140:
    // 0x79a140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a144:
    // 0x79a144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a148: 0x3e00008  jr          $ra
    ctx->pc = 0x79A148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A148u;
        // 0x79a14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A150u;
}
} // namespace gh_r000
