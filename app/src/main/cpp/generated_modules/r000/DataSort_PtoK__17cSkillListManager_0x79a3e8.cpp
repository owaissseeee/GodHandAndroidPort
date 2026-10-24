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
// Function: DataSort_PtoK__17cSkillListManager
// Address: 0x79a3e8 - 0x79a538
void DataSort_PtoK__17cSkillListManager_0x79a3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_PtoK__17cSkillListManager_0x79a3e8");
#endif

    switch (ctx->pc) {
        case 0x79a3fcu: goto label_79a3fc;
        case 0x79a418u: goto label_79a418;
        case 0x79a438u: goto label_79a438;
        case 0x79a4c0u: goto label_79a4c0;
        default: break;
    }

    ctx->pc = 0x79a3e8u;

    // 0x79a3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a3ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a3f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a3f4: 0xc1e6772  jal         func_799DC8
    ctx->pc = 0x79A3F4u;
    SET_GPR_U32(ctx, 31, 0x79A3FCu);
    ctx->pc = 0x79A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3F4u;
    // 0x79a3f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799DC8u, 0x79A3F4u, 0x79A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A3FCu;
label_79a3fc:
    // 0x79a3fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a400: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x79A400u;
    {
        const bool branch_taken_0x79a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a400) {
            ctx->pc = 0x79A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A400u;
            // 0x79a404: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A528u;
            goto label_79a528;
        }
    }
    ctx->pc = 0x79A408u;
    // 0x79a408: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a40c: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A40Cu;
    {
        const bool branch_taken_0x79a40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a40c) {
            ctx->pc = 0x79A410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A40Cu;
            // 0x79a410: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A528u;
            goto label_79a528;
        }
    }
    ctx->pc = 0x79A414u;
    // 0x79a414: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a418:
    // 0x79a418: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a418u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a41c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a420: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A420u;
    {
        const bool branch_taken_0x79a420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A420u;
        // 0x79a424: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a420) {
            ctx->pc = 0x79A4A0u;
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A428u;
    // 0x79a428: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a42c: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a42cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a430: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a434: 0x0  nop
    ctx->pc = 0x79a434u;
    // NOP
label_79a438:
    // 0x79a438: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a43c: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a43cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a440: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x79a440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a444: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a444u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a448: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a44c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a450: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a454: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x79A454u;
    {
        const bool branch_taken_0x79a454 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a454) {
            ctx->pc = 0x79A458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A454u;
            // 0x79a458: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A48Cu;
            goto label_79a48c;
        }
    }
    ctx->pc = 0x79A45Cu;
    // 0x79a45c: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x79a45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x79a460: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a460u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a464: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a468: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a46c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a470: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a474: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A474u;
    {
        const bool branch_taken_0x79a474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A474u;
        // 0x79a478: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a474) {
            ctx->pc = 0x79A488u;
            goto label_79a488;
        }
    }
    ctx->pc = 0x79A47Cu;
    // 0x79a47c: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a47cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a480: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a484: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a484u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a488:
    // 0x79a488: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a48c:
    // 0x79a48c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a494: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x79a494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a498: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A498u;
    {
        const bool branch_taken_0x79a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A498u;
        // 0x79a49c: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a498) {
            ctx->pc = 0x79A438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a438;
        }
    }
    ctx->pc = 0x79A4A0u;
label_79a4a0:
    // 0x79a4a0: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x79A4A0u;
    {
        const bool branch_taken_0x79a4a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4A0u;
        // 0x79a4a4: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4a0) {
            ctx->pc = 0x79A524u;
            goto label_79a524;
        }
    }
    ctx->pc = 0x79A4A8u;
    // 0x79a4a8: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A4A8u;
    {
        const bool branch_taken_0x79a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4a8) {
            ctx->pc = 0x79A51Cu;
            goto label_79a51c;
        }
    }
    ctx->pc = 0x79A4B0u;
    // 0x79a4b0: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a4b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a4b4: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a4b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a4b8: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a4bc: 0x0  nop
    ctx->pc = 0x79a4bcu;
    // NOP
label_79a4c0:
    // 0x79a4c0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a4c4: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a4c4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a4c8: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x79a4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79a4cc: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a4d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a4d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a4d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a4dc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A4DCu;
    {
        const bool branch_taken_0x79a4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4DCu;
        // 0x79a4e0: 0x1492021  addu        $a0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4dc) {
            ctx->pc = 0x79A50Cu;
            goto label_79a50c;
        }
    }
    ctx->pc = 0x79A4E4u;
    // 0x79a4e4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a4e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a4e8: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a4e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a4ec: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a4f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a4f4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a4f8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A4F8u;
    {
        const bool branch_taken_0x79a4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4F8u;
        // 0x79a4fc: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4f8) {
            ctx->pc = 0x79A50Cu;
            goto label_79a50c;
        }
    }
    ctx->pc = 0x79A500u;
    // 0x79a500: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a500u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a504: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a508: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a50c:
    // 0x79a50c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a510: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a514: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A514u;
    {
        const bool branch_taken_0x79a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A514u;
        // 0x79a518: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a514) {
            ctx->pc = 0x79A4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4c0;
        }
    }
    ctx->pc = 0x79A51Cu;
label_79a51c:
    // 0x79a51c: 0x5560ffbe  bnel        $t3, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x79A51Cu;
    {
        const bool branch_taken_0x79a51c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a51c) {
            ctx->pc = 0x79A520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A51Cu;
            // 0x79a520: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a418;
        }
    }
    ctx->pc = 0x79A524u;
label_79a524:
    // 0x79a524: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a528:
    // 0x79a528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A52Cu;
        // 0x79a530: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A534u;
    // 0x79a534: 0x0  nop
    ctx->pc = 0x79a534u;
    // NOP
    ctx->pc = 0x79a538u;
}
} // namespace gh_r000
