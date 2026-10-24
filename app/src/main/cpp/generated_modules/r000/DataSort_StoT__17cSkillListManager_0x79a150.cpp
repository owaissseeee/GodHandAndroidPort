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
// Function: DataSort_StoT__17cSkillListManager
// Address: 0x79a150 - 0x79a2a0
void DataSort_StoT__17cSkillListManager_0x79a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DataSort_StoT__17cSkillListManager_0x79a150");
#endif

    switch (ctx->pc) {
        case 0x79a164u: goto label_79a164;
        case 0x79a180u: goto label_79a180;
        case 0x79a1a0u: goto label_79a1a0;
        case 0x79a228u: goto label_79a228;
        default: break;
    }

    ctx->pc = 0x79a150u;

    // 0x79a150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a154: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a15c: 0xc1e672a  jal         func_799CA8
    ctx->pc = 0x79A15Cu;
    SET_GPR_U32(ctx, 31, 0x79A164u);
    ctx->pc = 0x79A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A15Cu;
    // 0x79a160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799CA8u, 0x79A15Cu, 0x79A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a168: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x79A168u;
    {
        const bool branch_taken_0x79a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a168) {
            ctx->pc = 0x79A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A168u;
            // 0x79a16c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A290u;
            goto label_79a290;
        }
    }
    ctx->pc = 0x79A170u;
    // 0x79a170: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x79a174: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A174u;
    {
        const bool branch_taken_0x79a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a174) {
            ctx->pc = 0x79A178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A174u;
            // 0x79a178: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A290u;
            goto label_79a290;
        }
    }
    ctx->pc = 0x79A17Cu;
    // 0x79a17c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a180:
    // 0x79a180: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a188: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x79A188u;
    {
        const bool branch_taken_0x79a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A188u;
        // 0x79a18c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a188) {
            ctx->pc = 0x79A208u;
            goto label_79a208;
        }
    }
    ctx->pc = 0x79A190u;
    // 0x79a190: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a194: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a198: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a19c: 0x0  nop
    ctx->pc = 0x79a19cu;
    // NOP
label_79a1a0:
    // 0x79a1a0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a1a4: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a1a8: 0x24690001  addiu       $t1, $v1, 0x1
    ctx->pc = 0x79a1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79a1ac: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a1acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a1b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a1b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a1b8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a1bc: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x79A1BCu;
    {
        const bool branch_taken_0x79a1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a1bc) {
            ctx->pc = 0x79A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A1BCu;
            // 0x79a1c0: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F4u;
            goto label_79a1f4;
        }
    }
    ctx->pc = 0x79A1C4u;
    // 0x79a1c4: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x79a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x79a1c8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a1cc: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a1d0: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a1d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a1d8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a1dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A1DCu;
    {
        const bool branch_taken_0x79a1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1DCu;
        // 0x79a1e0: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1dc) {
            ctx->pc = 0x79A1F0u;
            goto label_79a1f0;
        }
    }
    ctx->pc = 0x79A1E4u;
    // 0x79a1e4: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a1e8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1ec: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a1f0:
    // 0x79a1f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_79a1f4:
    // 0x79a1f4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x79a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79a1fc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79a200: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A200u;
    {
        const bool branch_taken_0x79a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a200) {
            ctx->pc = 0x79A1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1a0;
        }
    }
    ctx->pc = 0x79A208u;
label_79a208:
    // 0x79a208: 0x11600020  beqz        $t3, . + 4 + (0x20 << 2)
    ctx->pc = 0x79A208u;
    {
        const bool branch_taken_0x79a208 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a208) {
            ctx->pc = 0x79A28Cu;
            goto label_79a28c;
        }
    }
    ctx->pc = 0x79A210u;
    // 0x79a210: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x79A210u;
    {
        const bool branch_taken_0x79a210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a210) {
            ctx->pc = 0x79A284u;
            goto label_79a284;
        }
    }
    ctx->pc = 0x79A218u;
    // 0x79a218: 0x260a0014  addiu       $t2, $s0, 0x14
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x79a21c: 0x240c0024  addiu       $t4, $zero, 0x24
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x79a220: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x79a224: 0x0  nop
    ctx->pc = 0x79a224u;
    // NOP
label_79a228:
    // 0x79a228: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x79a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a22c: 0x80e80000  lb          $t0, 0x0($a3)
    ctx->pc = 0x79a22cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x79a230: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x79a230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x79a234: 0x10c1018  mult        $v0, $t0, $t4
    ctx->pc = 0x79a234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x79a238: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x79a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x79a23c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a240: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a244: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x79A244u;
    {
        const bool branch_taken_0x79a244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A244u;
        // 0x79a248: 0x1492021  addu        $a0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a244) {
            ctx->pc = 0x79A274u;
            goto label_79a274;
        }
    }
    ctx->pc = 0x79A24Cu;
    // 0x79a24c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x79a24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79a250: 0x4c1818  mult        $v1, $v0, $t4
    ctx->pc = 0x79a250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x79a254: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x79a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79a258: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x79a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x79a25c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x79a25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x79a260: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A260u;
    {
        const bool branch_taken_0x79a260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A260u;
        // 0x79a264: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a260) {
            ctx->pc = 0x79A274u;
            goto label_79a274;
        }
    }
    ctx->pc = 0x79A268u;
    // 0x79a268: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x79a268u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x79a26c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a270: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x79a270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_79a274:
    // 0x79a274: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x79a274u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a278: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79a278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79a27c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79A27Cu;
    {
        const bool branch_taken_0x79a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A27Cu;
        // 0x79a280: 0x1433821  addu        $a3, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a27c) {
            ctx->pc = 0x79A228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a228;
        }
    }
    ctx->pc = 0x79A284u;
label_79a284:
    // 0x79a284: 0x5560ffbe  bnel        $t3, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x79A284u;
    {
        const bool branch_taken_0x79a284 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a284) {
            ctx->pc = 0x79A288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A284u;
            // 0x79a288: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a180;
        }
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a290:
    // 0x79a290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a294: 0x3e00008  jr          $ra
    ctx->pc = 0x79A294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A294u;
        // 0x79a298: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A29Cu;
    // 0x79a29c: 0x0  nop
    ctx->pc = 0x79a29cu;
    // NOP
    ctx->pc = 0x79a2a0u;
}
} // namespace gh_r000
