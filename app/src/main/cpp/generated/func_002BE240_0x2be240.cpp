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

// Function: func_002BE240
// Address: 0x2be240 - 0x2be458
void func_002BE240_0x2be240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BE240_0x2be240");
#endif

    switch (ctx->pc) {
        case 0x2be28cu: goto label_2be28c;
        case 0x2be2a4u: goto label_2be2a4;
        case 0x2be2b8u: goto label_2be2b8;
        case 0x2be2c4u: goto label_2be2c4;
        case 0x2be2e8u: goto label_2be2e8;
        case 0x2be310u: goto label_2be310;
        case 0x2be360u: goto label_2be360;
        case 0x2be394u: goto label_2be394;
        case 0x2be3acu: goto label_2be3ac;
        case 0x2be3d4u: goto label_2be3d4;
        case 0x2be3d8u: goto label_2be3d8;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be3fcu: goto label_2be3fc;
        case 0x2be428u: goto label_2be428;
        default: break;
    }

    ctx->pc = 0x2be240u;

    // 0x2be240: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2be240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2be244: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2be244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2be248: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2be248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2be24c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2be24cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be250: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2be250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2be254: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2be254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be258: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2be258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2be25c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2be25cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be260: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2be260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2be264: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2be264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2be268: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2be268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2be26c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2be26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2be270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2be270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2be274: 0x8e6204c0  lw          $v0, 0x4C0($s3)
    ctx->pc = 0x2be274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1216)));
    // 0x2be278: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2BE278u;
    {
        const bool branch_taken_0x2be278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE278u;
        // 0x2be27c: 0xe0b82d  daddu       $s7, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be278) {
            ctx->pc = 0x2BE418u;
            goto label_2be418;
        }
    }
    ctx->pc = 0x2BE280u;
    // 0x2be280: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be284: 0xc0ea4ea  jal         func_3A93A8
    ctx->pc = 0x2BE284u;
    SET_GPR_U32(ctx, 31, 0x2BE28Cu);
    ctx->pc = 0x2BE288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE284u;
    // 0x2be288: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A93A8u, 0x2BE284u, 0x2BE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE28Cu;
label_2be28c:
    // 0x2be28c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be28cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be290: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2BE2CCu;
            goto label_2be2cc;
        }
    }
    ctx->pc = 0x2BE298u;
    // 0x2be298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be29c: 0xc0ea4ea  jal         func_3A93A8
    ctx->pc = 0x2BE29Cu;
    SET_GPR_U32(ctx, 31, 0x2BE2A4u);
    ctx->pc = 0x2BE2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE29Cu;
    // 0x2be2a0: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A93A8u, 0x2BE29Cu, 0x2BE2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2A4u;
label_2be2a4:
    // 0x2be2a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2a8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BE2A8u;
    {
        const bool branch_taken_0x2be2a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2A8u;
        // 0x2be2ac: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2a8) {
            ctx->pc = 0x2BE2CCu;
            goto label_2be2cc;
        }
    }
    ctx->pc = 0x2BE2B0u;
    // 0x2be2b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE2B0u;
    {
        const bool branch_taken_0x2be2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2B0u;
        // 0x2be2b4: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2b0) {
            ctx->pc = 0x2BE2CCu;
            goto label_2be2cc;
        }
    }
    ctx->pc = 0x2BE2B8u;
label_2be2b8:
    // 0x2be2b8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2be2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2be2bc: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x2BE2BCu;
    SET_GPR_U32(ctx, 31, 0x2BE2C4u);
    ctx->pc = 0x2BE2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2BCu;
    // 0x2be2c0: 0x2484c088  addiu       $a0, $a0, -0x3F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x2BE2BCu, 0x2BE2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2C4u;
label_2be2c4:
    // 0x2be2c4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2BE2C4u;
    {
        const bool branch_taken_0x2be2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C4u;
        // 0x2be2c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2c4) {
            ctx->pc = 0x2BE41Cu;
            goto label_2be41c;
        }
    }
    ctx->pc = 0x2BE2CCu;
label_2be2cc:
    // 0x2be2cc: 0x8e6204c0  lw          $v0, 0x4C0($s3)
    ctx->pc = 0x2be2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1216)));
    // 0x2be2d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2be2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be2d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2be2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2be2d8: 0x1860004f  blez        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2BE2D8u;
    {
        const bool branch_taken_0x2be2d8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2D8u;
        // 0x2be2dc: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2d8) {
            ctx->pc = 0x2BE418u;
            goto label_2be418;
        }
    }
    ctx->pc = 0x2BE2E0u;
    // 0x2be2e0: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x2be2e4: 0x0  nop
    ctx->pc = 0x2be2e4u;
    // NOP
label_2be2e8:
    // 0x2be2e8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2be2e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2be2ec: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2BE2ECu;
    {
        const bool branch_taken_0x2be2ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2ECu;
        // 0x2be2f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2ec) {
            ctx->pc = 0x2BE340u;
            goto label_2be340;
        }
    }
    ctx->pc = 0x2BE2F4u;
    // 0x2be2f4: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x2be2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2be2f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2BE2F8u;
    {
        const bool branch_taken_0x2be2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2F8u;
        // 0x2be2fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2f8) {
            ctx->pc = 0x2BE340u;
            goto label_2be340;
        }
    }
    ctx->pc = 0x2BE300u;
    // 0x2be300: 0x26a9f039  addiu       $t1, $s5, -0xFC7
    ctx->pc = 0x2be300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963257));
    // 0x2be304: 0x2408003b  addiu       $t0, $zero, 0x3B
    ctx->pc = 0x2be304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2be308: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x2be308u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2be30c: 0x0  nop
    ctx->pc = 0x2be30cu;
    // NOP
label_2be310:
    // 0x2be310: 0x892821  addu        $a1, $a0, $t1
    ctx->pc = 0x2be310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2be314: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2be314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2be318: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2be318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be31c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be320: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2be320u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2be324: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2be324u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be328: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2be32c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2be32cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2be330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BE330u;
    {
        const bool branch_taken_0x2be330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE330u;
        // 0x2be334: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be330) {
            ctx->pc = 0x2BE340u;
            goto label_2be340;
        }
    }
    ctx->pc = 0x2BE338u;
    // 0x2be338: 0x5448fff5  bnel        $v0, $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2BE338u;
    {
        const bool branch_taken_0x2be338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x2be338) {
            ctx->pc = 0x2BE33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE338u;
            // 0x2be33c: 0x80c40000  lb          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BE340u;
label_2be340:
    // 0x2be340: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x2be340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2be344: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2be344u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2be348: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x2be348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2be34c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2BE34Cu;
    {
        const bool branch_taken_0x2be34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE34Cu;
        // 0x2be350: 0x26a7f039  addiu       $a3, $s5, -0xFC7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be34c) {
            ctx->pc = 0x2BE388u;
            goto label_2be388;
        }
    }
    ctx->pc = 0x2BE354u;
    // 0x2be354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2be354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be358: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2be35c: 0x0  nop
    ctx->pc = 0x2be35cu;
    // NOP
label_2be360:
    // 0x2be360: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x2be360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2be364: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2be364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2be368: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2be368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2be36c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2be36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2be370: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2be370u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2be374: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2be374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2be378: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2be378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2be37c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2be37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2be380: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2BE380u;
    {
        const bool branch_taken_0x2be380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2be380) {
            ctx->pc = 0x2BE384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE380u;
            // 0x2be384: 0x80c40000  lb          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be360;
        }
    }
    ctx->pc = 0x2BE388u;
label_2be388:
    // 0x2be388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2be388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be38c: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2BE38Cu;
    SET_GPR_U32(ctx, 31, 0x2BE394u);
    ctx->pc = 0x2BE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE38Cu;
    // 0x2be390: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2BE38Cu, 0x2BE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE394u;
label_2be394:
    // 0x2be394: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2BE394u;
    {
        const bool branch_taken_0x2be394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE394u;
        // 0x2be398: 0x8e6304c0  lw          $v1, 0x4C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be394) {
            ctx->pc = 0x2BE404u;
            goto label_2be404;
        }
    }
    ctx->pc = 0x2BE39Cu;
    // 0x2be39c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2be39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2be3a0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2be3a4: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x2BE3A4u;
    SET_GPR_U32(ctx, 31, 0x2BE3ACu);
    ctx->pc = 0x2BE3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3A4u;
    // 0x2be3a8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x2BE3A4u, 0x2BE3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3ACu;
label_2be3ac:
    // 0x2be3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2be3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3b0: 0x1220ffc1  beqz        $s1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2BE3B0u;
    {
        const bool branch_taken_0x2be3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3B0u;
        // 0x2be3b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3b0) {
            ctx->pc = 0x2BE2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be2b8;
        }
    }
    ctx->pc = 0x2BE3B8u;
    // 0x2be3b8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2be3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2be3bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2be3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3c0: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x2be3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
    // 0x2be3c4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2be3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2be3c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2be3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2be3cc: 0xc0ec852  jal         func_3B2148
    ctx->pc = 0x2BE3CCu;
    SET_GPR_U32(ctx, 31, 0x2BE3D4u);
    ctx->pc = 0x2BE3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3CCu;
    // 0x2be3d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2148u, 0x2BE3CCu, 0x2BE3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3D4u;
label_2be3d4:
    // 0x2be3d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2be3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2be3d8:
    // 0x2be3d8: 0xc0ec010  jal         func_3B0040
    ctx->pc = 0x2BE3D8u;
    SET_GPR_U32(ctx, 31, 0x2BE3E0u);
    ctx->pc = 0x2BE3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3D8u;
    // 0x2be3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x2BE3D8u, 0x2BE3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3E0u;
label_2be3e0:
    // 0x2be3e0: 0x0  nop
    ctx->pc = 0x2be3e0u;
    // NOP
    // 0x2be3e4: 0x0  nop
    ctx->pc = 0x2be3e4u;
    // NOP
    // 0x2be3e8: 0x440fffb  bltz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BE3E8u;
    {
        const bool branch_taken_0x2be3e8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3E8u;
        // 0x2be3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3e8) {
            ctx->pc = 0x2BE3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be3d8;
        }
    }
    ctx->pc = 0x2BE3F0u;
    // 0x2be3f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2be3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be3f4: 0xc0ed794  jal         func_3B5E50
    ctx->pc = 0x2BE3F4u;
    SET_GPR_U32(ctx, 31, 0x2BE3FCu);
    ctx->pc = 0x2BE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3F4u;
    // 0x2be3f8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5E50u, 0x2BE3F4u, 0x2BE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3FCu;
label_2be3fc:
    // 0x2be3fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BE3FCu;
    {
        const bool branch_taken_0x2be3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3FCu;
        // 0x2be400: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3fc) {
            ctx->pc = 0x2BE42Cu;
            goto label_2be42c;
        }
    }
    ctx->pc = 0x2BE404u;
label_2be404:
    // 0x2be404: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2be404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2be408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2be408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2be40c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2be40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2be410: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2BE410u;
    {
        const bool branch_taken_0x2be410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE410u;
        // 0x2be414: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be410) {
            ctx->pc = 0x2BE2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be2e8;
        }
    }
    ctx->pc = 0x2BE418u;
label_2be418:
    // 0x2be418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2be418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2be41c:
    // 0x2be41c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2be41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be420: 0xc0ed828  jal         func_3B60A0
    ctx->pc = 0x2BE420u;
    SET_GPR_U32(ctx, 31, 0x2BE428u);
    ctx->pc = 0x2BE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE420u;
    // 0x2be424: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B60A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B60A0u, 0x2BE420u, 0x2BE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE428u;
label_2be428:
    // 0x2be428: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2be428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2be42c:
    // 0x2be42c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2be42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2be430: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2be430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2be434: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2be434u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2be438: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2be438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2be43c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2be43cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2be440: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2be440u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2be444: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2be444u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2be448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2be448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE44Cu;
        // 0x2be450: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE454u;
    // 0x2be454: 0x0  nop
    ctx->pc = 0x2be454u;
    // NOP
    ctx->pc = 0x2be458u;
}
