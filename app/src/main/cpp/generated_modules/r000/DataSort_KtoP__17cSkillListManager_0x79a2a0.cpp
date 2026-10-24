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
// Function: DataSort_KtoP__17cSkillListManager
// Address: 0x79a2a0 - 0x79a3e8
void DataSort_KtoP__17cSkillListManager_0x79a2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_KtoP__17cSkillListManager_0x79a2a0");
#endif

    switch (ctx->pc) {
        case 0x79a2b4u: goto label_79a2b4;
        case 0x79a2d0u: goto label_79a2d0;
        case 0x79a2f0u: goto label_79a2f0;
        case 0x79a370u: goto label_79a370;
        default: break;
    }

    ctx->pc = 0x79a2a0u;

    // 0x79a2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a2a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a2ac: 0xc1e6772  jal         func_799DC8
    ctx->pc = 0x79A2ACu;
    SET_GPR_U32(ctx, 31, 0x79A2B4u);
    ctx->pc = 0x79A2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2ACu;
    // 0x79a2b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799DC8u, 0x79A2ACu, 0x79A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2B4u;
label_79a2b4:
    // 0x79a2b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a2b8: 0x50400048  beql        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x79A2B8u;
    {
        const bool branch_taken_0x79a2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2b8) {
            ctx->pc = 0x79A2BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2B8u;
            // 0x79a2bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3DCu;
            goto label_79a3dc;
        }
    }
    ctx->pc = 0x79A2C0u;
    // 0x79a2c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a2c4: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x79A2C4u;
    {
        const bool branch_taken_0x79a2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a2c4) {
            ctx->pc = 0x79A2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A2C4u;
            // 0x79a2c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3DCu;
            goto label_79a3dc;
        }
    }
    ctx->pc = 0x79A2CCu;
    // 0x79a2cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a2d0:
    // 0x79a2d0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a2d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x79A2D8u;
    {
        const bool branch_taken_0x79a2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2D8u;
        // 0x79a2dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a2d8) {
            ctx->pc = 0x79A354u;
            goto label_79a354;
        }
    }
    ctx->pc = 0x79A2E0u;
    // 0x79a2e0: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a2e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a2e4: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a2e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a2e8: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a2ec: 0x0  nop
    ctx->pc = 0x79a2ecu;
    // NOP
label_79a2f0:
    // 0x79a2f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a2f4: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a2f4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a2f8: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x79a2f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a2fc: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a304: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a308: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a30c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A30Cu;
    {
        const bool branch_taken_0x79a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A30Cu;
        // 0x79a310: 0x1492021  addu        $a0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a30c) {
            ctx->pc = 0x79A33Cu;
            goto label_79a33c;
        }
    }
    ctx->pc = 0x79A314u;
    // 0x79a314: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a318: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a31c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a320: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a324: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a328: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A328u;
    {
        const bool branch_taken_0x79a328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A328u;
        // 0x79a32c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a328) {
            ctx->pc = 0x79A33Cu;
            goto label_79a33c;
        }
    }
    ctx->pc = 0x79A330u;
    // 0x79a330: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a330u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a334: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a338: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a338u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a33c:
    // 0x79a33c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a340: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a348: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x79a348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a34c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x79A34Cu;
    {
        const bool branch_taken_0x79a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A34Cu;
        // 0x79a350: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a34c) {
            ctx->pc = 0x79A2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2f0;
        }
    }
    ctx->pc = 0x79A354u;
label_79a354:
    // 0x79a354: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x79A354u;
    {
        const bool branch_taken_0x79a354 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A354u;
        // 0x79a358: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a354) {
            ctx->pc = 0x79A3D8u;
            goto label_79a3d8;
        }
    }
    ctx->pc = 0x79A35Cu;
    // 0x79a35c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A35Cu;
    {
        const bool branch_taken_0x79a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a35c) {
            ctx->pc = 0x79A3D0u;
            goto label_79a3d0;
        }
    }
    ctx->pc = 0x79A364u;
    // 0x79a364: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a364u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a368: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a36c: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_79a370:
    // 0x79a370: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a374: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a374u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a378: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x79a378u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79a37c: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a380: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a384: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a388: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a38c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79A38Cu;
    {
        const bool branch_taken_0x79a38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A38Cu;
        // 0x79a390: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a38c) {
            ctx->pc = 0x79A3C4u;
            goto label_79a3c4;
        }
    }
    ctx->pc = 0x79A394u;
    // 0x79a394: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x79a394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x79a398: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a39c: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a3a0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a3a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a3a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x79a3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x79a3ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A3ACu;
    {
        const bool branch_taken_0x79a3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ACu;
        // 0x79a3b0: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3ac) {
            ctx->pc = 0x79A3C0u;
            goto label_79a3c0;
        }
    }
    ctx->pc = 0x79A3B4u;
    // 0x79a3b4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a3b8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a3b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a3bc: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a3c0:
    // 0x79a3c0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79a3c4:
    // 0x79a3c4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a3c8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a370;
        }
    }
    ctx->pc = 0x79A3D0u;
label_79a3d0:
    // 0x79a3d0: 0x5560ffbf  bnel        $t3, $zero, . + 4 + (-0x41 << 2)
    ctx->pc = 0x79A3D0u;
    {
        const bool branch_taken_0x79a3d0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a3d0) {
            ctx->pc = 0x79A3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3D0u;
            // 0x79a3d4: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a2d0;
        }
    }
    ctx->pc = 0x79A3D8u;
label_79a3d8:
    // 0x79a3d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a3d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a3dc:
    // 0x79a3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3E0u;
        // 0x79a3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A3E8u;
}
} // namespace gh_r000
