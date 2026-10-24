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

// Function: func_003AB188
// Address: 0x3ab188 - 0x3ac090
void func_003AB188_0x3ab188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AB188_0x3ab188");
#endif

    switch (ctx->pc) {
        case 0x3ab1d8u: goto label_3ab1d8;
        case 0x3ab1e0u: goto label_3ab1e0;
        case 0x3ab200u: goto label_3ab200;
        case 0x3ab250u: goto label_3ab250;
        case 0x3ab278u: goto label_3ab278;
        case 0x3ab2b4u: goto label_3ab2b4;
        case 0x3ab2fcu: goto label_3ab2fc;
        case 0x3ab300u: goto label_3ab300;
        case 0x3ab304u: goto label_3ab304;
        case 0x3ab3c0u: goto label_3ab3c0;
        case 0x3ab408u: goto label_3ab408;
        case 0x3ab5ccu: goto label_3ab5cc;
        case 0x3ab5f0u: goto label_3ab5f0;
        case 0x3ab718u: goto label_3ab718;
        case 0x3ab768u: goto label_3ab768;
        case 0x3ab770u: goto label_3ab770;
        case 0x3ab78cu: goto label_3ab78c;
        case 0x3ab7c0u: goto label_3ab7c0;
        case 0x3ab804u: goto label_3ab804;
        case 0x3ab834u: goto label_3ab834;
        case 0x3ab8d8u: goto label_3ab8d8;
        case 0x3ab940u: goto label_3ab940;
        case 0x3ab97cu: goto label_3ab97c;
        case 0x3ab9b8u: goto label_3ab9b8;
        case 0x3ab9e0u: goto label_3ab9e0;
        case 0x3aba1cu: goto label_3aba1c;
        case 0x3aba90u: goto label_3aba90;
        case 0x3abb04u: goto label_3abb04;
        case 0x3abb44u: goto label_3abb44;
        case 0x3abb78u: goto label_3abb78;
        case 0x3abbe0u: goto label_3abbe0;
        case 0x3abc14u: goto label_3abc14;
        case 0x3abc50u: goto label_3abc50;
        case 0x3abc78u: goto label_3abc78;
        case 0x3abcb4u: goto label_3abcb4;
        case 0x3abcd8u: goto label_3abcd8;
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd74u: goto label_3abd74;
        case 0x3abdb0u: goto label_3abdb0;
        case 0x3abdd8u: goto label_3abdd8;
        case 0x3abe14u: goto label_3abe14;
        case 0x3abe3cu: goto label_3abe3c;
        case 0x3abe68u: goto label_3abe68;
        case 0x3abea8u: goto label_3abea8;
        case 0x3abed8u: goto label_3abed8;
        case 0x3abf40u: goto label_3abf40;
        case 0x3abf74u: goto label_3abf74;
        case 0x3abfb0u: goto label_3abfb0;
        case 0x3abfd8u: goto label_3abfd8;
        case 0x3ac014u: goto label_3ac014;
        case 0x3ac058u: goto label_3ac058;
        default: break;
    }

    ctx->pc = 0x3ab188u;

    // 0x3ab188: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3ab188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3ab18c: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x3ab18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x3ab190: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x3ab190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3ab194: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3ab194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x3ab198: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3ab198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x3ab19c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1a0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3ab1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x3ab1a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3ab1a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1a8: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3ab1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x3ab1ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3ab1acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1b0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3ab1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x3ab1b4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3ab1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x3ab1b8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3ab1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x3ab1bc: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3ab1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x3ab1c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3ab1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x3ab1c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3ab1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3ab1c8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3ab1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x3ab1cc: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x3ab1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x3ab1d0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3ab1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x3ab1d4: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x3ab1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_3ab1d8:
    // 0x3ab1d8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x3ab1d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1dc: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x3ab1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3ab1e0:
    // 0x3ab1e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3ab1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3ab1e4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3ab1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3ab1e8: 0x8ca4a62c  lw          $a0, -0x59D4($a1)
    ctx->pc = 0x3ab1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA62Cu));
    // 0x3ab1ec: 0x8cc7ae28  lw          $a3, -0x51D8($a2)
    ctx->pc = 0x3ab1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FAE28u));
    // 0x3ab1f0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3ab1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3ab1f4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3ab1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab1f8: 0xc0e9f42  jal         func_3A7D08
    ctx->pc = 0x3AB1F8u;
    SET_GPR_U32(ctx, 31, 0x3AB200u);
    ctx->pc = 0x3AB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB1F8u;
    // 0x3ab1fc: 0x8fa8006c  lw          $t0, 0x6C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D08u, 0x3AB1F8u, 0x3AB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB200u;
label_3ab200:
    // 0x3ab200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ab200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab204: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB204u;
    {
        const bool branch_taken_0x3ab204 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB204u;
        // 0x3ab208: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab204) {
            ctx->pc = 0x3AB218u;
            goto label_3ab218;
        }
    }
    ctx->pc = 0x3AB20Cu;
    // 0x3ab20c: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x3AB20Cu;
    {
        const bool branch_taken_0x3ab20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3AB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB20Cu;
        // 0x3ab210: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab20c) {
            ctx->pc = 0x3AB1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1e0;
        }
    }
    ctx->pc = 0x3AB214u;
    // 0x3ab214: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x3ab214u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_3ab218:
    // 0x3ab218: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x3ab218u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x3ab21c: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x3AB21Cu;
    {
        const bool branch_taken_0x3ab21c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab21c) {
            ctx->pc = 0x3AB2C0u;
            goto label_3ab2c0;
        }
    }
    ctx->pc = 0x3AB224u;
    // 0x3ab224: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ab224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3ab228: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3ab228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3ab22c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AB22Cu;
    {
        const bool branch_taken_0x3ab22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab22c) {
            ctx->pc = 0x3AB230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB22Cu;
            // 0x3ab230: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB290u;
            goto label_3ab290;
        }
    }
    ctx->pc = 0x3AB234u;
    // 0x3ab234: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3ab234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab238: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x3ab238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3ab23c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB23Cu;
    {
        const bool branch_taken_0x3ab23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB23Cu;
        // 0x3ab240: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab23c) {
            ctx->pc = 0x3AB26Cu;
            goto label_3ab26c;
        }
    }
    ctx->pc = 0x3AB244u;
    // 0x3ab244: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ab244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab248: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB248u;
    SET_GPR_U32(ctx, 31, 0x3AB250u);
    ctx->pc = 0x3AB24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB248u;
    // 0x3ab24c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB248u, 0x3AB250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB250u;
label_3ab250:
    // 0x3ab250: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab254: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab258: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ab258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ab25c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3ab25cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ab260: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ab260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ab264: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AB264u;
    {
        const bool branch_taken_0x3ab264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB264u;
        // 0x3ab268: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab264) {
            ctx->pc = 0x3AB2B4u;
            goto label_3ab2b4;
        }
    }
    ctx->pc = 0x3AB26Cu;
label_3ab26c:
    // 0x3ab26c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ab26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab270: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB270u;
    SET_GPR_U32(ctx, 31, 0x3AB278u);
    ctx->pc = 0x3AB274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB270u;
    // 0x3ab274: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB270u, 0x3AB278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB278u;
label_3ab278:
    // 0x3ab278: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab27c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab280: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3ab280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3ab284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ab284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab288: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AB288u;
    {
        const bool branch_taken_0x3ab288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB288u;
        // 0x3ab28c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab288) {
            ctx->pc = 0x3AB2B4u;
            goto label_3ab2b4;
        }
    }
    ctx->pc = 0x3AB290u;
label_3ab290:
    // 0x3ab290: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB290u;
    {
        const bool branch_taken_0x3ab290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab290) {
            ctx->pc = 0x3AB294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB290u;
            // 0x3ab294: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB2A4u;
            goto label_3ab2a4;
        }
    }
    ctx->pc = 0x3AB298u;
    // 0x3ab298: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab29c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3ab29cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ab2a0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3ab2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3ab2a4:
    // 0x3ab2a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ab2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab2a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ab2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab2ac: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3AB2ACu;
    SET_GPR_U32(ctx, 31, 0x3AB2B4u);
    ctx->pc = 0x3AB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB2ACu;
    // 0x3ab2b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3AB2ACu, 0x3AB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB2B4u;
label_3ab2b4:
    // 0x3ab2b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3ab2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab2b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ab2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ab2bc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3ab2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3ab2c0:
    // 0x3ab2c0: 0x5a00035d  blezl       $s0, . + 4 + (0x35D << 2)
    ctx->pc = 0x3AB2C0u;
    {
        const bool branch_taken_0x3ab2c0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x3ab2c0) {
            ctx->pc = 0x3AB2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB2C0u;
            // 0x3ab2c4: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC038u;
            goto label_3ac038;
        }
    }
    ctx->pc = 0x3AB2C8u;
    // 0x3ab2c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab2cc: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB2CCu;
    {
        const bool branch_taken_0x3ab2cc = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3ab2cc) {
            ctx->pc = 0x3AB2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB2CCu;
            // 0x3ab2d0: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB2E8u;
            goto label_3ab2e8;
        }
    }
    ctx->pc = 0x3AB2D4u;
    // 0x3ab2d4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ab2d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3ab2d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3ab2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3ab2dc: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x3AB2DCu;
    {
        const bool branch_taken_0x3ab2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB2DCu;
        // 0x3ab2e0: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab2dc) {
            ctx->pc = 0x3AC05Cu;
            goto label_3ac05c;
        }
    }
    ctx->pc = 0x3AB2E4u;
    // 0x3ab2e4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3ab2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3ab2e8:
    // 0x3ab2e8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3ab2e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x3ab2ec: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x3ab2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x3ab2f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ab2f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab2f4: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3ab2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x3ab2f8: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3ab2f8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ab2fc:
    // 0x3ab2fc: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3ab2fcu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_3ab300:
    // 0x3ab300: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3ab300u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3ab304:
    // 0x3ab304: 0x26a3ffe0  addiu       $v1, $s5, -0x20
    ctx->pc = 0x3ab304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x3ab308: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x3ab308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x3ab30c: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x3AB30Cu;
    {
        const bool branch_taken_0x3ab30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB30Cu;
        // 0x3ab310: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab30c) {
            ctx->pc = 0x3AB84Cu;
            goto label_3ab84c;
        }
    }
    ctx->pc = 0x3AB314u;
    // 0x3ab314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ab314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3ab318: 0x2442fa10  addiu       $v0, $v0, -0x5F0
    ctx->pc = 0x3ab318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
    // 0x3ab31c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ab31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3ab320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3ab324: 0x800008  jr          $a0
    ctx->pc = 0x3AB324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3AB32Cu: goto label_3ab32c;
            case 0x3AB344u: goto label_3ab344;
            case 0x3AB34Cu: goto label_3ab34c;
            case 0x3AB354u: goto label_3ab354;
            case 0x3AB36Cu: goto label_3ab36c;
            case 0x3AB374u: goto label_3ab374;
            case 0x3AB380u: goto label_3ab380;
            case 0x3AB3F4u: goto label_3ab3f4;
            case 0x3AB3FCu: goto label_3ab3fc;
            case 0x3AB430u: goto label_3ab430;
            case 0x3AB438u: goto label_3ab438;
            case 0x3AB44Cu: goto label_3ab44c;
            case 0x3AB454u: goto label_3ab454;
            case 0x3AB480u: goto label_3ab480;
            case 0x3AB484u: goto label_3ab484;
            case 0x3AB4D4u: goto label_3ab4d4;
            case 0x3AB53Cu: goto label_3ab53c;
            case 0x3AB540u: goto label_3ab540;
            case 0x3AB580u: goto label_3ab580;
            case 0x3AB5A4u: goto label_3ab5a4;
            case 0x3AB604u: goto label_3ab604;
            case 0x3AB608u: goto label_3ab608;
            case 0x3AB648u: goto label_3ab648;
            case 0x3AB654u: goto label_3ab654;
            case 0x3AB84Cu: goto label_3ab84c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3AB32Cu;
label_3ab32c:
    // 0x3ab32c: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x3ab32cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab330: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x3AB330u;
    {
        const bool branch_taken_0x3ab330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab330) {
            ctx->pc = 0x3AB334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB330u;
            // 0x3ab334: 0x82f50000  lb          $s5, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab300;
        }
    }
    ctx->pc = 0x3AB338u;
    // 0x3ab338: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ab338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ab33c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3AB33Cu;
    {
        const bool branch_taken_0x3ab33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB33Cu;
        // 0x3ab340: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab33c) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB344u;
label_3ab344:
    // 0x3ab344: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3AB344u;
    {
        const bool branch_taken_0x3ab344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB344u;
        // 0x3ab348: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab344) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB34Cu;
label_3ab34c:
    // 0x3ab34c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3AB34Cu;
    {
        const bool branch_taken_0x3ab34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB34Cu;
        // 0x3ab350: 0x36520200  ori         $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab34c) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB354u;
label_3ab354:
    // 0x3ab354: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab358: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x3ab358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab35c: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3AB35Cu;
    {
        const bool branch_taken_0x3ab35c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3AB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB35Cu;
        // 0x3ab360: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab35c) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB364u;
    // 0x3ab364: 0x31823  negu        $v1, $v1
    ctx->pc = 0x3ab364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3ab368: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x3ab368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_3ab36c:
    // 0x3ab36c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x3AB36Cu;
    {
        const bool branch_taken_0x3ab36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB36Cu;
        // 0x3ab370: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab36c) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB374u;
label_3ab374:
    // 0x3ab374: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3ab374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3ab378: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x3AB378u;
    {
        const bool branch_taken_0x3ab378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB378u;
        // 0x3ab37c: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab378) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB380u;
label_3ab380:
    // 0x3ab380: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3ab380u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ab384: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x3ab384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3ab388: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AB388u;
    {
        const bool branch_taken_0x3ab388 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB388u;
        // 0x3ab38c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab388) {
            ctx->pc = 0x3AB3ACu;
            goto label_3ab3ac;
        }
    }
    ctx->pc = 0x3AB390u;
    // 0x3ab390: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab394: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3ab394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3ab398: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3ab398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab39c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3ab39cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ab3a0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3ab3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ab3a4: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3AB3A4u;
    {
        const bool branch_taken_0x3ab3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3A4u;
        // 0x3ab3a8: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3a4) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB3ACu;
label_3ab3ac:
    // 0x3ab3ac: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3ab3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3ab3b0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3ab3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab3b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3AB3B4u;
    {
        const bool branch_taken_0x3ab3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3B4u;
        // 0x3ab3b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3b4) {
            ctx->pc = 0x3AB3E0u;
            goto label_3ab3e0;
        }
    }
    ctx->pc = 0x3AB3BCu;
    // 0x3ab3bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ab3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3ab3c0:
    // 0x3ab3c0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3ab3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ab3c4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3ab3c8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3ab3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3ab3cc: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3ab3ccu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ab3d0: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3ab3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3ab3d4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3ab3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab3d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AB3D8u;
    {
        const bool branch_taken_0x3ab3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3D8u;
        // 0x3ab3dc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3d8) {
            ctx->pc = 0x3AB3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab3c0;
        }
    }
    ctx->pc = 0x3AB3E0u;
label_3ab3e0:
    // 0x3ab3e0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3ab3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3ab3e4: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3ab3e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ab3e8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3ab3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3ab3ec: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x3AB3ECu;
    {
        const bool branch_taken_0x3ab3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3ECu;
        // 0x3ab3f0: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3ec) {
            ctx->pc = 0x3AB304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab304;
        }
    }
    ctx->pc = 0x3AB3F4u;
label_3ab3f4:
    // 0x3ab3f4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x3AB3F4u;
    {
        const bool branch_taken_0x3ab3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB3F4u;
        // 0x3ab3f8: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab3f4) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB3FCu;
label_3ab3fc:
    // 0x3ab3fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ab3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab400: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3ab400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ab404: 0x0  nop
    ctx->pc = 0x3ab404u;
    // NOP
label_3ab408:
    // 0x3ab408: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x3ab408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3ab40c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3ab40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3ab410: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x3ab410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3ab414: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x3ab414u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ab418: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x3ab418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x3ab41c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3ab41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab420: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3AB420u;
    {
        const bool branch_taken_0x3ab420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB420u;
        // 0x3ab424: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab420) {
            ctx->pc = 0x3AB408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab408;
        }
    }
    ctx->pc = 0x3AB428u;
    // 0x3ab428: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x3AB428u;
    {
        const bool branch_taken_0x3ab428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB428u;
        // 0x3ab42c: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab428) {
            ctx->pc = 0x3AB304u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab304;
        }
    }
    ctx->pc = 0x3AB430u;
label_3ab430:
    // 0x3ab430: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x3AB430u;
    {
        const bool branch_taken_0x3ab430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB430u;
        // 0x3ab434: 0x36520040  ori         $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab430) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB438u;
label_3ab438:
    // 0x3ab438: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x3ab438u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3ab43c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x3ab43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x3ab440: 0x5462ffae  bnel        $v1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x3AB440u;
    {
        const bool branch_taken_0x3ab440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ab440) {
            ctx->pc = 0x3AB444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB440u;
            // 0x3ab444: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB448u;
    // 0x3ab448: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3ab448u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3ab44c:
    // 0x3ab44c: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x3AB44Cu;
    {
        const bool branch_taken_0x3ab44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB44Cu;
        // 0x3ab450: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab44c) {
            ctx->pc = 0x3AB2FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab2fc;
        }
    }
    ctx->pc = 0x3AB454u;
label_3ab454:
    // 0x3ab454: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab45c: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x3ab45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab460: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x3ab460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab464: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3ab464u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab468: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3ab468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3ab46c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab46cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab470: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x3ab470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ab474: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3ab474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3ab478: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3AB478u;
    {
        const bool branch_taken_0x3ab478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB478u;
        // 0x3ab47c: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab478) {
            ctx->pc = 0x3AB870u;
            goto label_3ab870;
        }
    }
    ctx->pc = 0x3AB480u;
label_3ab480:
    // 0x3ab480: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3ab480u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3ab484:
    // 0x3ab484: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3ab484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3ab488: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB488u;
    {
        const bool branch_taken_0x3ab488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab488) {
            ctx->pc = 0x3AB48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB488u;
            // 0x3ab48c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB4A0u;
            goto label_3ab4a0;
        }
    }
    ctx->pc = 0x3AB490u;
    // 0x3ab490: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3ab490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3ab494: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB494u;
    {
        const bool branch_taken_0x3ab494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB494u;
        // 0x3ab498: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab494) {
            ctx->pc = 0x3AB4A8u;
            goto label_3ab4a8;
        }
    }
    ctx->pc = 0x3AB49Cu;
    // 0x3ab49c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab49cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3ab4a0:
    // 0x3ab4a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB4A0u;
    {
        const bool branch_taken_0x3ab4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4A0u;
        // 0x3ab4a4: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4a0) {
            ctx->pc = 0x3AB4BCu;
            goto label_3ab4bc;
        }
    }
    ctx->pc = 0x3AB4A8u;
label_3ab4a8:
    // 0x3ab4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB4A8u;
    {
        const bool branch_taken_0x3ab4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4A8u;
        // 0x3ab4ac: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4a8) {
            ctx->pc = 0x3AB4B8u;
            goto label_3ab4b8;
        }
    }
    ctx->pc = 0x3AB4B0u;
    // 0x3ab4b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB4B0u;
    {
        const bool branch_taken_0x3ab4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4B0u;
        // 0x3ab4b4: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4b0) {
            ctx->pc = 0x3AB4BCu;
            goto label_3ab4bc;
        }
    }
    ctx->pc = 0x3AB4B8u;
label_3ab4b8:
    // 0x3ab4b8: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x3ab4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3ab4bc:
    // 0x3ab4bc: 0x601007c  bgez        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3AB4BCu;
    {
        const bool branch_taken_0x3ab4bc = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3AB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4BCu;
        // 0x3ab4c0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4bc) {
            ctx->pc = 0x3AB6B0u;
            goto label_3ab6b0;
        }
    }
    ctx->pc = 0x3AB4C4u;
    // 0x3ab4c4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3ab4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3ab4c8: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x3ab4c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x3ab4cc: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x3AB4CCu;
    {
        const bool branch_taken_0x3ab4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4CCu;
        // 0x3ab4d0: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4cc) {
            ctx->pc = 0x3AB6B0u;
            goto label_3ab6b0;
        }
    }
    ctx->pc = 0x3AB4D4u;
label_3ab4d4:
    // 0x3ab4d4: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3ab4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3ab4d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB4D8u;
    {
        const bool branch_taken_0x3ab4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4D8u;
        // 0x3ab4dc: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4d8) {
            ctx->pc = 0x3AB4F0u;
            goto label_3ab4f0;
        }
    }
    ctx->pc = 0x3AB4E0u;
    // 0x3ab4e0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab4e4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3ab4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab4e8: 0x1000ff3b  b           . + 4 + (-0xC5 << 2)
    ctx->pc = 0x3AB4E8u;
    {
        const bool branch_taken_0x3ab4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4E8u;
        // 0x3ab4ec: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4e8) {
            ctx->pc = 0x3AB1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1d8;
        }
    }
    ctx->pc = 0x3AB4F0u;
label_3ab4f0:
    // 0x3ab4f0: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3ab4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3ab4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB4F4u;
    {
        const bool branch_taken_0x3ab4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB4F4u;
        // 0x3ab4f8: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab4f4) {
            ctx->pc = 0x3AB50Cu;
            goto label_3ab50c;
        }
    }
    ctx->pc = 0x3AB4FCu;
    // 0x3ab4fc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab4fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab500: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3ab500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab504: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x3AB504u;
    {
        const bool branch_taken_0x3ab504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB504u;
        // 0x3ab508: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab504) {
            ctx->pc = 0x3AB1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1d8;
        }
    }
    ctx->pc = 0x3AB50Cu;
label_3ab50c:
    // 0x3ab50c: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x3ab50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x3ab510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB510u;
    {
        const bool branch_taken_0x3ab510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB510u;
        // 0x3ab514: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab510) {
            ctx->pc = 0x3AB528u;
            goto label_3ab528;
        }
    }
    ctx->pc = 0x3AB518u;
    // 0x3ab518: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab51c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3ab51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab520: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x3AB520u;
    {
        const bool branch_taken_0x3ab520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB520u;
        // 0x3ab524: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab520) {
            ctx->pc = 0x3AB1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1d8;
        }
    }
    ctx->pc = 0x3AB528u;
label_3ab528:
    // 0x3ab528: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab52c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3ab52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ab530: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x3ab530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab534: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x3AB534u;
    {
        const bool branch_taken_0x3ab534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB534u;
        // 0x3ab538: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab534) {
            ctx->pc = 0x3AB1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1d8;
        }
    }
    ctx->pc = 0x3AB53Cu;
label_3ab53c:
    // 0x3ab53c: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3ab53cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3ab540:
    // 0x3ab540: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3ab540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3ab544: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB544u;
    {
        const bool branch_taken_0x3ab544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab544) {
            ctx->pc = 0x3AB548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB544u;
            // 0x3ab548: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB55Cu;
            goto label_3ab55c;
        }
    }
    ctx->pc = 0x3AB54Cu;
    // 0x3ab54c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3ab54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3ab550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB550u;
    {
        const bool branch_taken_0x3ab550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB550u;
        // 0x3ab554: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab550) {
            ctx->pc = 0x3AB564u;
            goto label_3ab564;
        }
    }
    ctx->pc = 0x3AB558u;
    // 0x3ab558: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3ab55c:
    // 0x3ab55c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB55Cu;
    {
        const bool branch_taken_0x3ab55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB55Cu;
        // 0x3ab560: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab55c) {
            ctx->pc = 0x3AB578u;
            goto label_3ab578;
        }
    }
    ctx->pc = 0x3AB564u;
label_3ab564:
    // 0x3ab564: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB564u;
    {
        const bool branch_taken_0x3ab564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB564u;
        // 0x3ab568: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab564) {
            ctx->pc = 0x3AB574u;
            goto label_3ab574;
        }
    }
    ctx->pc = 0x3AB56Cu;
    // 0x3ab56c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB56Cu;
    {
        const bool branch_taken_0x3ab56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB56Cu;
        // 0x3ab570: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab56c) {
            ctx->pc = 0x3AB578u;
            goto label_3ab578;
        }
    }
    ctx->pc = 0x3AB574u;
label_3ab574:
    // 0x3ab574: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3ab574u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3ab578:
    // 0x3ab578: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3AB578u;
    {
        const bool branch_taken_0x3ab578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB578u;
        // 0x3ab57c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab578) {
            ctx->pc = 0x3AB6ACu;
            goto label_3ab6ac;
        }
    }
    ctx->pc = 0x3AB580u;
label_3ab580:
    // 0x3ab580: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ab580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ab584: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab584u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab588: 0x2442f9b0  addiu       $v0, $v0, -0x650
    ctx->pc = 0x3ab588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965680));
    // 0x3ab58c: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x3ab58cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ab590: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3ab590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3ab594: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x3ab594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x3ab598: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x3ab598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3ab59c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3AB59Cu;
    {
        const bool branch_taken_0x3ab59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB59Cu;
        // 0x3ab5a0: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab59c) {
            ctx->pc = 0x3AB6ACu;
            goto label_3ab6ac;
        }
    }
    ctx->pc = 0x3AB5A4u;
label_3ab5a4:
    // 0x3ab5a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x3ab5a8: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x3ab5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x3ab5ac: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB5ACu;
    {
        const bool branch_taken_0x3ab5ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5ACu;
        // 0x3ab5b0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5ac) {
            ctx->pc = 0x3AB5B8u;
            goto label_3ab5b8;
        }
    }
    ctx->pc = 0x3AB5B4u;
    // 0x3ab5b4: 0x2454f9c8  addiu       $s4, $v0, -0x638
    ctx->pc = 0x3ab5b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965704));
label_3ab5b8:
    // 0x3ab5b8: 0x7c0000b  bltz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB5B8u;
    {
        const bool branch_taken_0x3ab5b8 = (GPR_S64(ctx, 30) < 0);
        ctx->pc = 0x3AB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5B8u;
        // 0x3ab5bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5b8) {
            ctx->pc = 0x3AB5E8u;
            goto label_3ab5e8;
        }
    }
    ctx->pc = 0x3AB5C0u;
    // 0x3ab5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ab5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab5c4: 0xc0e93f2  jal         func_3A4FC8
    ctx->pc = 0x3AB5C4u;
    SET_GPR_U32(ctx, 31, 0x3AB5CCu);
    ctx->pc = 0x3AB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5C4u;
    // 0x3ab5c8: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FC8u, 0x3AB5C4u, 0x3AB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5CCu;
label_3ab5cc:
    // 0x3ab5cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB5CCu;
    {
        const bool branch_taken_0x3ab5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5CCu;
        // 0x3ab5d0: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5cc) {
            ctx->pc = 0x3AB5E0u;
            goto label_3ab5e0;
        }
    }
    ctx->pc = 0x3AB5D4u;
    // 0x3ab5d4: 0x3c2182a  slt         $v1, $fp, $v0
    ctx->pc = 0x3ab5d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ab5d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB5D8u;
    {
        const bool branch_taken_0x3ab5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5D8u;
        // 0x3ab5dc: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5d8) {
            ctx->pc = 0x3AB5F4u;
            goto label_3ab5f4;
        }
    }
    ctx->pc = 0x3AB5E0u;
label_3ab5e0:
    // 0x3ab5e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB5E0u;
    {
        const bool branch_taken_0x3ab5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5E0u;
        // 0x3ab5e4: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5e0) {
            ctx->pc = 0x3AB5F4u;
            goto label_3ab5f4;
        }
    }
    ctx->pc = 0x3AB5E8u;
label_3ab5e8:
    // 0x3ab5e8: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3AB5E8u;
    SET_GPR_U32(ctx, 31, 0x3AB5F0u);
    ctx->pc = 0x3AB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB5E8u;
    // 0x3ab5ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3AB5E8u, 0x3AB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB5F0u;
label_3ab5f0:
    // 0x3ab5f0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3ab5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3ab5f4:
    // 0x3ab5f4: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x3ab5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab5f8: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3ab5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ab5fc: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x3AB5FCu;
    {
        const bool branch_taken_0x3ab5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB5FCu;
        // 0x3ab600: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab5fc) {
            ctx->pc = 0x3AB86Cu;
            goto label_3ab86c;
        }
    }
    ctx->pc = 0x3AB604u;
label_3ab604:
    // 0x3ab604: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x3ab604u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_3ab608:
    // 0x3ab608: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3ab608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3ab60c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB60Cu;
    {
        const bool branch_taken_0x3ab60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab60c) {
            ctx->pc = 0x3AB610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB60Cu;
            // 0x3ab610: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB624u;
            goto label_3ab624;
        }
    }
    ctx->pc = 0x3AB614u;
    // 0x3ab614: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3ab614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3ab618: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB618u;
    {
        const bool branch_taken_0x3ab618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB618u;
        // 0x3ab61c: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab618) {
            ctx->pc = 0x3AB62Cu;
            goto label_3ab62c;
        }
    }
    ctx->pc = 0x3AB620u;
    // 0x3ab620: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab620u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3ab624:
    // 0x3ab624: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB624u;
    {
        const bool branch_taken_0x3ab624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB624u;
        // 0x3ab628: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab624) {
            ctx->pc = 0x3AB640u;
            goto label_3ab640;
        }
    }
    ctx->pc = 0x3AB62Cu;
label_3ab62c:
    // 0x3ab62c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB62Cu;
    {
        const bool branch_taken_0x3ab62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB62Cu;
        // 0x3ab630: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab62c) {
            ctx->pc = 0x3AB63Cu;
            goto label_3ab63c;
        }
    }
    ctx->pc = 0x3AB634u;
    // 0x3ab634: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB634u;
    {
        const bool branch_taken_0x3ab634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB634u;
        // 0x3ab638: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab634) {
            ctx->pc = 0x3AB640u;
            goto label_3ab640;
        }
    }
    ctx->pc = 0x3AB63Cu;
label_3ab63c:
    // 0x3ab63c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3ab63cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3ab640:
    // 0x3ab640: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3AB640u;
    {
        const bool branch_taken_0x3ab640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB640u;
        // 0x3ab644: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab640) {
            ctx->pc = 0x3AB6ACu;
            goto label_3ab6ac;
        }
    }
    ctx->pc = 0x3AB648u;
label_3ab648:
    // 0x3ab648: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ab648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ab64c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB64Cu;
    {
        const bool branch_taken_0x3ab64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB64Cu;
        // 0x3ab650: 0x2442f9d0  addiu       $v0, $v0, -0x630 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab64c) {
            ctx->pc = 0x3AB65Cu;
            goto label_3ab65c;
        }
    }
    ctx->pc = 0x3AB654u;
label_3ab654:
    // 0x3ab654: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ab654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ab658: 0x2442f9b0  addiu       $v0, $v0, -0x650
    ctx->pc = 0x3ab658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965680));
label_3ab65c:
    // 0x3ab65c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x3ab65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x3ab660: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x3ab660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x3ab664: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB664u;
    {
        const bool branch_taken_0x3ab664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab664) {
            ctx->pc = 0x3AB668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB664u;
            // 0x3ab668: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB67Cu;
            goto label_3ab67c;
        }
    }
    ctx->pc = 0x3AB66Cu;
    // 0x3ab66c: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x3ab66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x3ab670: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB670u;
    {
        const bool branch_taken_0x3ab670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB670u;
        // 0x3ab674: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab670) {
            ctx->pc = 0x3AB684u;
            goto label_3ab684;
        }
    }
    ctx->pc = 0x3AB678u;
    // 0x3ab678: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x3ab678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3ab67c:
    // 0x3ab67c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB67Cu;
    {
        const bool branch_taken_0x3ab67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB67Cu;
        // 0x3ab680: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab67c) {
            ctx->pc = 0x3AB698u;
            goto label_3ab698;
        }
    }
    ctx->pc = 0x3AB684u;
label_3ab684:
    // 0x3ab684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB684u;
    {
        const bool branch_taken_0x3ab684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB684u;
        // 0x3ab688: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab684) {
            ctx->pc = 0x3AB694u;
            goto label_3ab694;
        }
    }
    ctx->pc = 0x3AB68Cu;
    // 0x3ab68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3AB68Cu;
    {
        const bool branch_taken_0x3ab68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB68Cu;
        // 0x3ab690: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab68c) {
            ctx->pc = 0x3AB698u;
            goto label_3ab698;
        }
    }
    ctx->pc = 0x3AB694u;
label_3ab694:
    // 0x3ab694: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x3ab694u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_3ab698:
    // 0x3ab698: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3ab698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3ab69c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB69Cu;
    {
        const bool branch_taken_0x3ab69c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB69Cu;
        // 0x3ab6a0: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab69c) {
            ctx->pc = 0x3AB6ACu;
            goto label_3ab6ac;
        }
    }
    ctx->pc = 0x3AB6A4u;
    // 0x3ab6a4: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x3ab6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x3ab6a8: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x3ab6a8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_3ab6ac:
    // 0x3ab6ac: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3ab6acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3ab6b0:
    // 0x3ab6b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3ab6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab6b4: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AB6B4u;
    {
        const bool branch_taken_0x3ab6b4 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x3AB6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6B4u;
        // 0x3ab6b8: 0xafbe0058  sw          $fp, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6b4) {
            ctx->pc = 0x3AB6C4u;
            goto label_3ab6c4;
        }
    }
    ctx->pc = 0x3AB6BCu;
    // 0x3ab6bc: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x3ab6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3ab6c0: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3ab6c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3ab6c4:
    // 0x3ab6c4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AB6C4u;
    {
        const bool branch_taken_0x3ab6c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6C4u;
        // 0x3ab6c8: 0x27b40028  addiu       $s4, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6c4) {
            ctx->pc = 0x3AB6E0u;
            goto label_3ab6e0;
        }
    }
    ctx->pc = 0x3AB6CCu;
    // 0x3ab6cc: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x3ab6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab6d0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3ab6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3ab6d4: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab6d4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab6d8: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3AB6D8u;
    {
        const bool branch_taken_0x3ab6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6D8u;
        // 0x3ab6dc: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6d8) {
            ctx->pc = 0x3AB80Cu;
            goto label_3ab80c;
        }
    }
    ctx->pc = 0x3AB6E0u;
label_3ab6e0:
    // 0x3ab6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab6e4: 0x12c2001a  beq         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3AB6E4u;
    {
        const bool branch_taken_0x3ab6e4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6E4u;
        // 0x3ab6e8: 0x32450004  andi        $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6e4) {
            ctx->pc = 0x3AB750u;
            goto label_3ab750;
        }
    }
    ctx->pc = 0x3AB6ECu;
    // 0x3ab6ec: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB6ECu;
    {
        const bool branch_taken_0x3ab6ec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6ECu;
        // 0x3ab6f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6ec) {
            ctx->pc = 0x3AB704u;
            goto label_3ab704;
        }
    }
    ctx->pc = 0x3AB6F4u;
    // 0x3ab6f4: 0x12c2002e  beq         $s6, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3AB6F4u;
    {
        const bool branch_taken_0x3ab6f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AB6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6F4u;
        // 0x3ab6f8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6f4) {
            ctx->pc = 0x3AB7B0u;
            goto label_3ab7b0;
        }
    }
    ctx->pc = 0x3AB6FCu;
    // 0x3ab6fc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x3AB6FCu;
    {
        const bool branch_taken_0x3ab6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB6FCu;
        // 0x3ab700: 0x32440004  andi        $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab6fc) {
            ctx->pc = 0x3AB7F0u;
            goto label_3ab7f0;
        }
    }
    ctx->pc = 0x3AB704u;
label_3ab704:
    // 0x3ab704: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x3ab704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab708: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3ab708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3ab70c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3ab70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3ab710: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab710u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab714: 0x0  nop
    ctx->pc = 0x3ab714u;
    // NOP
label_3ab718:
    // 0x3ab718: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x3ab718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x3ab71c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ab71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ab720: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3ab720u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3ab724: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x3ab724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x3ab728: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ab728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab72c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AB72Cu;
    {
        const bool branch_taken_0x3ab72c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB72Cu;
        // 0x3ab730: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab72c) {
            ctx->pc = 0x3AB718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab718;
        }
    }
    ctx->pc = 0x3AB734u;
    // 0x3ab734: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3AB734u;
    {
        const bool branch_taken_0x3ab734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB734u;
        // 0x3ab738: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab734) {
            ctx->pc = 0x3AB80Cu;
            goto label_3ab80c;
        }
    }
    ctx->pc = 0x3AB73Cu;
    // 0x3ab73c: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3AB73Cu;
    {
        const bool branch_taken_0x3ab73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB73Cu;
        // 0x3ab740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab73c) {
            ctx->pc = 0x3AB810u;
            goto label_3ab810;
        }
    }
    ctx->pc = 0x3AB744u;
    // 0x3ab744: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ab744u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ab748: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3AB748u;
    {
        const bool branch_taken_0x3ab748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB748u;
        // 0x3ab74c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab748) {
            ctx->pc = 0x3AB810u;
            goto label_3ab810;
        }
    }
    ctx->pc = 0x3AB750u;
label_3ab750:
    // 0x3ab750: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3ab750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab754: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab754u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab758: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3AB758u;
    {
        const bool branch_taken_0x3ab758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB758u;
        // 0x3ab75c: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab758) {
            ctx->pc = 0x3AB79Cu;
            goto label_3ab79c;
        }
    }
    ctx->pc = 0x3AB760u;
    // 0x3ab760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab764: 0x0  nop
    ctx->pc = 0x3ab764u;
    // NOP
label_3ab768:
    // 0x3ab768: 0xc0ee516  jal         func_3B9458
    ctx->pc = 0x3AB768u;
    SET_GPR_U32(ctx, 31, 0x3AB770u);
    ctx->pc = 0x3AB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB768u;
    // 0x3ab76c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9458u, 0x3AB768u, 0x3AB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB770u;
label_3ab770:
    // 0x3ab770: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ab770u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ab774: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3ab774u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x3ab778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab77c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ab77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab780: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3ab780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3ab784: 0xc0ee3a2  jal         func_3B8E88
    ctx->pc = 0x3AB784u;
    SET_GPR_U32(ctx, 31, 0x3AB78Cu);
    ctx->pc = 0x3AB788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB784u;
    // 0x3ab788: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E88u, 0x3AB784u, 0x3AB78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB78Cu;
label_3ab78c:
    // 0x3ab78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ab78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab790: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x3ab790u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3ab794: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3AB794u;
    {
        const bool branch_taken_0x3ab794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB794u;
        // 0x3ab798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab794) {
            ctx->pc = 0x3AB768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab768;
        }
    }
    ctx->pc = 0x3AB79Cu;
label_3ab79c:
    // 0x3ab79c: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x3ab79cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x3ab7a0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ab7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ab7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ab7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ab7a8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3AB7A8u;
    {
        const bool branch_taken_0x3ab7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7A8u;
        // 0x3ab7ac: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7a8) {
            ctx->pc = 0x3AB80Cu;
            goto label_3ab80c;
        }
    }
    ctx->pc = 0x3AB7B0u;
label_3ab7b0:
    // 0x3ab7b0: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x3ab7b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab7b4: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab7b4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab7b8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x3ab7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x3ab7bc: 0x0  nop
    ctx->pc = 0x3ab7bcu;
    // NOP
label_3ab7c0:
    // 0x3ab7c0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x3ab7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ab7c4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x3ab7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3ab7c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3ab7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ab7cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ab7ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ab7d0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ab7d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ab7d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ab7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab7d8: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x3ab7d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x3ab7dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3ab7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ab7e0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3AB7E0u;
    {
        const bool branch_taken_0x3ab7e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7E0u;
        // 0x3ab7e4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7e0) {
            ctx->pc = 0x3AB7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab7c0;
        }
    }
    ctx->pc = 0x3AB7E8u;
    // 0x3ab7e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3AB7E8u;
    {
        const bool branch_taken_0x3ab7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB7E8u;
        // 0x3ab7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab7e8) {
            ctx->pc = 0x3AB810u;
            goto label_3ab810;
        }
    }
    ctx->pc = 0x3AB7F0u;
label_3ab7f0:
    // 0x3ab7f0: 0x2454f9e8  addiu       $s4, $v0, -0x618
    ctx->pc = 0x3ab7f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965736));
    // 0x3ab7f4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x3ab7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x3ab7f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ab7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab7fc: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3AB7FCu;
    SET_GPR_U32(ctx, 31, 0x3AB804u);
    ctx->pc = 0x3AB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB7FCu;
    // 0x3ab800: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3AB7FCu, 0x3AB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB804u;
label_3ab804:
    // 0x3ab804: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3AB804u;
    {
        const bool branch_taken_0x3ab804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB804u;
        // 0x3ab808: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab804) {
            ctx->pc = 0x3AB870u;
            goto label_3ab870;
        }
    }
    ctx->pc = 0x3AB80Cu;
label_3ab80c:
    // 0x3ab80c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ab80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ab810:
    // 0x3ab810: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB810u;
    {
        const bool branch_taken_0x3ab810 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AB814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB810u;
        // 0x3ab814: 0x2682ffd8  addiu       $v0, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab810) {
            ctx->pc = 0x3AB840u;
            goto label_3ab840;
        }
    }
    ctx->pc = 0x3AB818u;
    // 0x3ab818: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x3ab818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x3ab81c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AB81Cu;
    {
        const bool branch_taken_0x3ab81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB81Cu;
        // 0x3ab820: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab81c) {
            ctx->pc = 0x3AB83Cu;
            goto label_3ab83c;
        }
    }
    ctx->pc = 0x3AB824u;
    // 0x3ab824: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x3ab824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x3ab828: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ab828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab82c: 0xc0eaba8  jal         func_3AAEA0
    ctx->pc = 0x3AB82Cu;
    SET_GPR_U32(ctx, 31, 0x3AB834u);
    ctx->pc = 0x3AB830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB82Cu;
    // 0x3ab830: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAEA0u, 0x3AB82Cu, 0x3AB834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB834u;
label_3ab834:
    // 0x3ab834: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3AB834u;
    {
        const bool branch_taken_0x3ab834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB834u;
        // 0x3ab838: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab834) {
            ctx->pc = 0x3AB870u;
            goto label_3ab870;
        }
    }
    ctx->pc = 0x3AB83Cu;
label_3ab83c:
    // 0x3ab83c: 0x2682ffd8  addiu       $v0, $s4, -0x28
    ctx->pc = 0x3ab83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_3ab840:
    // 0x3ab840: 0x3a21823  subu        $v1, $sp, $v0
    ctx->pc = 0x3ab840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3ab844: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AB844u;
    {
        const bool branch_taken_0x3ab844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB844u;
        // 0x3ab848: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab844) {
            ctx->pc = 0x3AB870u;
            goto label_3ab870;
        }
    }
    ctx->pc = 0x3AB84Cu;
label_3ab84c:
    // 0x3ab84c: 0x12a001f9  beqz        $s5, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x3AB84Cu;
    {
        const bool branch_taken_0x3ab84c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB84Cu;
        // 0x3ab850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab84c) {
            ctx->pc = 0x3AC034u;
            goto label_3ac034;
        }
    }
    ctx->pc = 0x3AB854u;
    // 0x3ab854: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x3ab854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x3ab858: 0xa3b50000  sb          $s5, 0x0($sp)
    ctx->pc = 0x3ab858u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x3ab85c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3ab85cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab860: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x3ab860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x3ab864: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x3ab864u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x3ab868: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x3ab868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_3ab86c:
    // 0x3ab86c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x3ab86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_3ab870:
    // 0x3ab870: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x3ab870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3ab874: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3ab874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3ab878: 0x83a30040  lb          $v1, 0x40($sp)
    ctx->pc = 0x3ab878u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ab87c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x3ab87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3ab880: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x3ab880u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x3ab884: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB884u;
    {
        const bool branch_taken_0x3ab884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB884u;
        // 0x3ab888: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab884) {
            ctx->pc = 0x3AB898u;
            goto label_3ab898;
        }
    }
    ctx->pc = 0x3AB88Cu;
    // 0x3ab88c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ab88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ab890: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3AB890u;
    {
        const bool branch_taken_0x3ab890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB890u;
        // 0x3ab894: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab890) {
            ctx->pc = 0x3AB8A8u;
            goto label_3ab8a8;
        }
    }
    ctx->pc = 0x3AB898u;
label_3ab898:
    // 0x3ab898: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3ab898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3ab89c: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3ab89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3ab8a0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3ab8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3ab8a4: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x3ab8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_3ab8a8:
    // 0x3ab8a8: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3ab8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3ab8ac: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3ab8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3ab8b0: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x3ab8b0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3ab8b4: 0x17c00059  bnez        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x3AB8B4u;
    {
        const bool branch_taken_0x3ab8b4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8B4u;
        // 0x3ab8b8: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab8b4) {
            ctx->pc = 0x3ABA1Cu;
            goto label_3aba1c;
        }
    }
    ctx->pc = 0x3AB8BCu;
    // 0x3ab8bc: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x3ab8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3ab8c0: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x3ab8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ab8c4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3AB8C4u;
    {
        const bool branch_taken_0x3ab8c4 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3AB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8C4u;
        // 0x3ab8c8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab8c4) {
            ctx->pc = 0x3ABA1Cu;
            goto label_3aba1c;
        }
    }
    ctx->pc = 0x3AB8CCu;
    // 0x3ab8cc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3AB8CCu;
    {
        const bool branch_taken_0x3ab8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB8CCu;
        // 0x3ab8d0: 0x3c160046  lui         $s6, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab8cc) {
            ctx->pc = 0x3AB98Cu;
            goto label_3ab98c;
        }
    }
    ctx->pc = 0x3AB8D4u;
    // 0x3ab8d4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ab8d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ab8d8:
    // 0x3ab8d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3ab8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3ab8dc: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AB8DCu;
    {
        const bool branch_taken_0x3ab8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab8dc) {
            ctx->pc = 0x3AB8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB8DCu;
            // 0x3ab8e0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB958u;
            goto label_3ab958;
        }
    }
    ctx->pc = 0x3AB8E4u;
    // 0x3ab8e4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3ab8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab8e8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3ab8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3ab8ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3AB8ECu;
    {
        const bool branch_taken_0x3ab8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab8ec) {
            ctx->pc = 0x3AB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB8ECu;
            // 0x3ab8f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB938u;
            goto label_3ab938;
        }
    }
    ctx->pc = 0x3AB8F4u;
    // 0x3ab8f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ab8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab8f8: 0x26c3f990  addiu       $v1, $s6, -0x670
    ctx->pc = 0x3ab8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3ab8fc: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3ab8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3ab900: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3ab900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3ab904: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3ab904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3ab908: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3ab908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3ab90c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3ab90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ab910: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3ab910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ab914: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3ab914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ab918: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3ab918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ab91c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab920: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab924: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3ab924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3ab928: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3ab928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3ab92c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ab92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ab930: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3AB930u;
    {
        const bool branch_taken_0x3ab930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB930u;
        // 0x3ab934: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab930) {
            ctx->pc = 0x3AB97Cu;
            goto label_3ab97c;
        }
    }
    ctx->pc = 0x3AB938u;
label_3ab938:
    // 0x3ab938: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB938u;
    SET_GPR_U32(ctx, 31, 0x3AB940u);
    ctx->pc = 0x3AB93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB938u;
    // 0x3ab93c: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB938u, 0x3AB940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB940u;
label_3ab940:
    // 0x3ab940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab944: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab948: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3ab948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3ab94c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ab94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab950: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AB950u;
    {
        const bool branch_taken_0x3ab950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB950u;
        // 0x3ab954: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab950) {
            ctx->pc = 0x3AB97Cu;
            goto label_3ab97c;
        }
    }
    ctx->pc = 0x3AB958u;
label_3ab958:
    // 0x3ab958: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB958u;
    {
        const bool branch_taken_0x3ab958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab958) {
            ctx->pc = 0x3AB95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB958u;
            // 0x3ab95c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB96Cu;
            goto label_3ab96c;
        }
    }
    ctx->pc = 0x3AB960u;
    // 0x3ab960: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ab960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ab964: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x3ab964u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ab968: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3ab968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3ab96c:
    // 0x3ab96c: 0x26c5f990  addiu       $a1, $s6, -0x670
    ctx->pc = 0x3ab96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3ab970: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3ab970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ab974: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3AB974u;
    SET_GPR_U32(ctx, 31, 0x3AB97Cu);
    ctx->pc = 0x3AB978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB974u;
    // 0x3ab978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3AB974u, 0x3AB97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB97Cu;
label_3ab97c:
    // 0x3ab97c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3ab97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3ab980: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3ab980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3ab984: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x3AB984u;
    {
        const bool branch_taken_0x3ab984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab984) {
            ctx->pc = 0x3AB988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB984u;
            // 0x3ab988: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab8d8;
        }
    }
    ctx->pc = 0x3AB98Cu;
label_3ab98c:
    // 0x3ab98c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ab98cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3ab990: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3ab990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3ab994: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AB994u;
    {
        const bool branch_taken_0x3ab994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ab994) {
            ctx->pc = 0x3AB998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB994u;
            // 0x3ab998: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AB9F8u;
            goto label_3ab9f8;
        }
    }
    ctx->pc = 0x3AB99Cu;
    // 0x3ab99c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3ab99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab9a0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3ab9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3ab9a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AB9A4u;
    {
        const bool branch_taken_0x3ab9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9A4u;
        // 0x3ab9a8: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab9a4) {
            ctx->pc = 0x3AB9D4u;
            goto label_3ab9d4;
        }
    }
    ctx->pc = 0x3AB9ACu;
    // 0x3ab9ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ab9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab9b0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB9B0u;
    SET_GPR_U32(ctx, 31, 0x3AB9B8u);
    ctx->pc = 0x3AB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9B0u;
    // 0x3ab9b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB9B0u, 0x3AB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9B8u;
label_3ab9b8:
    // 0x3ab9b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab9bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab9c0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3ab9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3ab9c4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3ab9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3ab9c8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ab9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ab9cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3AB9CCu;
    {
        const bool branch_taken_0x3ab9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9CCu;
        // 0x3ab9d0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab9cc) {
            ctx->pc = 0x3ABA1Cu;
            goto label_3aba1c;
        }
    }
    ctx->pc = 0x3AB9D4u;
label_3ab9d4:
    // 0x3ab9d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ab9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab9d8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3AB9D8u;
    SET_GPR_U32(ctx, 31, 0x3AB9E0u);
    ctx->pc = 0x3AB9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9D8u;
    // 0x3ab9dc: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3AB9D8u, 0x3AB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9E0u;
label_3ab9e0:
    // 0x3ab9e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ab9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ab9e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ab9e8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3ab9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3ab9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ab9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3ab9f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3AB9F0u;
    {
        const bool branch_taken_0x3ab9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB9F0u;
        // 0x3ab9f4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ab9f0) {
            ctx->pc = 0x3ABA1Cu;
            goto label_3aba1c;
        }
    }
    ctx->pc = 0x3AB9F8u;
label_3ab9f8:
    // 0x3ab9f8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AB9F8u;
    {
        const bool branch_taken_0x3ab9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ab9f8) {
            ctx->pc = 0x3AB9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AB9F8u;
            // 0x3ab9fc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABA0Cu;
            goto label_3aba0c;
        }
    }
    ctx->pc = 0x3ABA00u;
    // 0x3aba00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aba04: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aba04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aba08: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aba08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aba0c:
    // 0x3aba0c: 0x26c5f990  addiu       $a1, $s6, -0x670
    ctx->pc = 0x3aba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3aba10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3aba10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aba14: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABA14u;
    SET_GPR_U32(ctx, 31, 0x3ABA1Cu);
    ctx->pc = 0x3ABA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA14u;
    // 0x3aba18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABA14u, 0x3ABA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA1Cu;
label_3aba1c:
    // 0x3aba1c: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x3aba1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3aba20: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3ABA20u;
    {
        const bool branch_taken_0x3aba20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA20u;
        // 0x3aba24: 0x93a30040  lbu         $v1, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba20) {
            ctx->pc = 0x3ABA98u;
            goto label_3aba98;
        }
    }
    ctx->pc = 0x3ABA28u;
    // 0x3aba28: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3aba28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3aba2c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3aba2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3aba30: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3ABA30u;
    {
        const bool branch_taken_0x3aba30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aba30) {
            ctx->pc = 0x3ABA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABA30u;
            // 0x3aba34: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABA6Cu;
            goto label_3aba6c;
        }
    }
    ctx->pc = 0x3ABA38u;
    // 0x3aba38: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3aba38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aba3c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x3aba3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3aba40: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABA40u;
    {
        const bool branch_taken_0x3aba40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aba40) {
            ctx->pc = 0x3ABA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABA40u;
            // 0x3aba44: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABA64u;
            goto label_3aba64;
        }
    }
    ctx->pc = 0x3ABA48u;
    // 0x3aba48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3aba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aba4c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3aba4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aba50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3aba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3aba54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3aba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3aba58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aba5c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3ABA5Cu;
    {
        const bool branch_taken_0x3aba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA5Cu;
        // 0x3aba60: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba5c) {
            ctx->pc = 0x3ABAECu;
            goto label_3abaec;
        }
    }
    ctx->pc = 0x3ABA64u;
label_3aba64:
    // 0x3aba64: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3ABA64u;
    {
        const bool branch_taken_0x3aba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA64u;
        // 0x3aba68: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba64) {
            ctx->pc = 0x3ABAFCu;
            goto label_3abafc;
        }
    }
    ctx->pc = 0x3ABA6Cu;
label_3aba6c:
    // 0x3aba6c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABA6Cu;
    {
        const bool branch_taken_0x3aba6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aba6c) {
            ctx->pc = 0x3ABA70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABA6Cu;
            // 0x3aba70: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABA80u;
            goto label_3aba80;
        }
    }
    ctx->pc = 0x3ABA74u;
    // 0x3aba74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aba74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aba78: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3aba78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aba7c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3aba7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3aba80:
    // 0x3aba80: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3aba80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3aba84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3aba84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aba88: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABA88u;
    SET_GPR_U32(ctx, 31, 0x3ABA90u);
    ctx->pc = 0x3ABA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA88u;
    // 0x3aba8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABA88u, 0x3ABA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABA90u;
label_3aba90:
    // 0x3aba90: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3ABA90u;
    {
        const bool branch_taken_0x3aba90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA90u;
        // 0x3aba94: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba90) {
            ctx->pc = 0x3ABB48u;
            goto label_3abb48;
        }
    }
    ctx->pc = 0x3ABA98u;
label_3aba98:
    // 0x3aba98: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x3aba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x3aba9c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3ABA9Cu;
    {
        const bool branch_taken_0x3aba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA9Cu;
        // 0x3abaa0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba9c) {
            ctx->pc = 0x3ABB44u;
            goto label_3abb44;
        }
    }
    ctx->pc = 0x3ABAA4u;
    // 0x3abaa4: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x3abaa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abaa8: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x3abaa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x3abaac: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3abaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3abab0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3ABAB0u;
    {
        const bool branch_taken_0x3abab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAB0u;
        // 0x3abab4: 0xa3b50031  sb          $s5, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abab0) {
            ctx->pc = 0x3ABB1Cu;
            goto label_3abb1c;
        }
    }
    ctx->pc = 0x3ABAB8u;
    // 0x3abab8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ababc: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x3ababcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3abac0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3ABAC0u;
    {
        const bool branch_taken_0x3abac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abac0) {
            ctx->pc = 0x3ABAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABAC0u;
            // 0x3abac4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABAF8u;
            goto label_3abaf8;
        }
    }
    ctx->pc = 0x3ABAC8u;
    // 0x3abac8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3abac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abacc: 0x83a50030  lb          $a1, 0x30($sp)
    ctx->pc = 0x3abaccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3abad0: 0x83a60031  lb          $a2, 0x31($sp)
    ctx->pc = 0x3abad0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x3abad4: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x3abad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x3abad8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3abad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3abadc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abae0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abae4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3abae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3abae8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3abae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3abaec:
    // 0x3abaec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abaf0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3ABAF0u;
    {
        const bool branch_taken_0x3abaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAF0u;
        // 0x3abaf4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abaf0) {
            ctx->pc = 0x3ABB44u;
            goto label_3abb44;
        }
    }
    ctx->pc = 0x3ABAF8u;
label_3abaf8:
    // 0x3abaf8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3abaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3abafc:
    // 0x3abafc: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABAFCu;
    SET_GPR_U32(ctx, 31, 0x3ABB04u);
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABAFCu, 0x3ABB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB04u;
label_3abb04:
    // 0x3abb04: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abb08: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abb0c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abb10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abb14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3ABB14u;
    {
        const bool branch_taken_0x3abb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB14u;
        // 0x3abb18: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb14) {
            ctx->pc = 0x3ABB44u;
            goto label_3abb44;
        }
    }
    ctx->pc = 0x3ABB1Cu;
label_3abb1c:
    // 0x3abb1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3abb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abb20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABB20u;
    {
        const bool branch_taken_0x3abb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abb20) {
            ctx->pc = 0x3ABB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB20u;
            // 0x3abb24: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB34u;
            goto label_3abb34;
        }
    }
    ctx->pc = 0x3ABB28u;
    // 0x3abb28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abb2c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3abb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abb30: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abb30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3abb34:
    // 0x3abb34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3abb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3abb38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3abb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3abb3c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABB3Cu;
    SET_GPR_U32(ctx, 31, 0x3ABB44u);
    ctx->pc = 0x3ABB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB3Cu;
    // 0x3abb40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABB3Cu, 0x3ABB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB44u;
label_3abb44:
    // 0x3abb44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3abb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3abb48:
    // 0x3abb48: 0x17c2005b  bne         $fp, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x3ABB48u;
    {
        const bool branch_taken_0x3abb48 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x3ABB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB48u;
        // 0x3abb4c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb48) {
            ctx->pc = 0x3ABCB8u;
            goto label_3abcb8;
        }
    }
    ctx->pc = 0x3ABB50u;
    // 0x3abb50: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3abb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3abb54: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3abb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3abb58: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3abb58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3abb5c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3ABB5Cu;
    {
        const bool branch_taken_0x3abb5c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3ABB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB5Cu;
        // 0x3abb60: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb5c) {
            ctx->pc = 0x3ABCB4u;
            goto label_3abcb4;
        }
    }
    ctx->pc = 0x3ABB64u;
    // 0x3abb64: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3ABB64u;
    {
        const bool branch_taken_0x3abb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB64u;
        // 0x3abb68: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb64) {
            ctx->pc = 0x3ABC24u;
            goto label_3abc24;
        }
    }
    ctx->pc = 0x3ABB6Cu;
    // 0x3abb6c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3abb6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abb70: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abb74: 0x0  nop
    ctx->pc = 0x3abb74u;
    // NOP
label_3abb78:
    // 0x3abb78: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abb7c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3ABB7Cu;
    {
        const bool branch_taken_0x3abb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abb7c) {
            ctx->pc = 0x3ABB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB7Cu;
            // 0x3abb80: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABBF8u;
            goto label_3abbf8;
        }
    }
    ctx->pc = 0x3ABB84u;
    // 0x3abb84: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abb88: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3abb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abb8c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ABB8Cu;
    {
        const bool branch_taken_0x3abb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abb8c) {
            ctx->pc = 0x3ABB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABB8Cu;
            // 0x3abb90: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABBD8u;
            goto label_3abbd8;
        }
    }
    ctx->pc = 0x3ABB94u;
    // 0x3abb94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3abb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abb98: 0x2646f9a0  addiu       $a2, $s2, -0x660
    ctx->pc = 0x3abb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abb9c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3abb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3abba0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3abba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3abba4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3abba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3abba8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3abba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3abbac: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3abbacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abbb0: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3abbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abbb4: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3abbb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abbb8: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3abbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abbbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abbc0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abbc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3abbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3abbc8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3abbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3abbcc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abbccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abbd0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ABBD0u;
    {
        const bool branch_taken_0x3abbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBD0u;
        // 0x3abbd4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbd0) {
            ctx->pc = 0x3ABC14u;
            goto label_3abc14;
        }
    }
    ctx->pc = 0x3ABBD8u;
label_3abbd8:
    // 0x3abbd8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABBD8u;
    SET_GPR_U32(ctx, 31, 0x3ABBE0u);
    ctx->pc = 0x3ABBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABBD8u;
    // 0x3abbdc: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABBD8u, 0x3ABBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABBE0u;
label_3abbe0:
    // 0x3abbe0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abbe4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abbe8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abbec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abbf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABBF0u;
    {
        const bool branch_taken_0x3abbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABBF0u;
        // 0x3abbf4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abbf0) {
            ctx->pc = 0x3ABC14u;
            goto label_3abc14;
        }
    }
    ctx->pc = 0x3ABBF8u;
label_3abbf8:
    // 0x3abbf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ABBF8u;
    {
        const bool branch_taken_0x3abbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abbf8) {
            ctx->pc = 0x3ABBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABBF8u;
            // 0x3abbfc: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABC00u;
            goto label_3abc00;
        }
    }
    ctx->pc = 0x3ABC00u;
label_3abc00:
    // 0x3abc00: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abc00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3abc04: 0x2645f9a0  addiu       $a1, $s2, -0x660
    ctx->pc = 0x3abc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abc08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3abc08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3abc0c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABC0Cu;
    SET_GPR_U32(ctx, 31, 0x3ABC14u);
    ctx->pc = 0x3ABC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC0Cu;
    // 0x3abc10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABC0Cu, 0x3ABC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC14u;
label_3abc14:
    // 0x3abc14: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3abc14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3abc18: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3abc18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abc1c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3ABC1Cu;
    {
        const bool branch_taken_0x3abc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abc1c) {
            ctx->pc = 0x3ABC20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABC1Cu;
            // 0x3abc20: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABB78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abb78;
        }
    }
    ctx->pc = 0x3ABC24u;
label_3abc24:
    // 0x3abc24: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abc24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abc28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abc2c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3ABC2Cu;
    {
        const bool branch_taken_0x3abc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abc2c) {
            ctx->pc = 0x3ABC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABC2Cu;
            // 0x3abc30: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABC90u;
            goto label_3abc90;
        }
    }
    ctx->pc = 0x3ABC34u;
    // 0x3abc34: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abc38: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3abc38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3abc3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ABC3Cu;
    {
        const bool branch_taken_0x3abc3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC3Cu;
        // 0x3abc40: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc3c) {
            ctx->pc = 0x3ABC6Cu;
            goto label_3abc6c;
        }
    }
    ctx->pc = 0x3ABC44u;
    // 0x3abc44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abc48: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABC48u;
    SET_GPR_U32(ctx, 31, 0x3ABC50u);
    ctx->pc = 0x3ABC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC48u;
    // 0x3abc4c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABC48u, 0x3ABC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC50u;
label_3abc50:
    // 0x3abc50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abc54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abc58: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3abc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3abc5c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3abc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3abc60: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abc60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abc64: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3ABC64u;
    {
        const bool branch_taken_0x3abc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC64u;
        // 0x3abc68: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc64) {
            ctx->pc = 0x3ABCB4u;
            goto label_3abcb4;
        }
    }
    ctx->pc = 0x3ABC6Cu;
label_3abc6c:
    // 0x3abc6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abc70: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABC70u;
    SET_GPR_U32(ctx, 31, 0x3ABC78u);
    ctx->pc = 0x3ABC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABC70u;
    // 0x3abc74: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABC70u, 0x3ABC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABC78u;
label_3abc78:
    // 0x3abc78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abc7c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abc80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abc80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abc84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abc88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3ABC88u;
    {
        const bool branch_taken_0x3abc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC88u;
        // 0x3abc8c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc88) {
            ctx->pc = 0x3ABCB4u;
            goto label_3abcb4;
        }
    }
    ctx->pc = 0x3ABC90u;
label_3abc90:
    // 0x3abc90: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABC90u;
    {
        const bool branch_taken_0x3abc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abc90) {
            ctx->pc = 0x3ABC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABC90u;
            // 0x3abc94: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABCA4u;
            goto label_3abca4;
        }
    }
    ctx->pc = 0x3ABC98u;
    // 0x3abc98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abc9c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3abc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abca0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3abca4:
    // 0x3abca4: 0x2645f9a0  addiu       $a1, $s2, -0x660
    ctx->pc = 0x3abca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abca8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3abca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abcac: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABCACu;
    SET_GPR_U32(ctx, 31, 0x3ABCB4u);
    ctx->pc = 0x3ABCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCACu;
    // 0x3abcb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABCACu, 0x3ABCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCB4u;
label_3abcb4:
    // 0x3abcb4: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3abcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3abcb8:
    // 0x3abcb8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3abcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3abcbc: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x3abcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abcc0: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x3ABCC0u;
    {
        const bool branch_taken_0x3abcc0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3ABCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCC0u;
        // 0x3abcc4: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcc0) {
            ctx->pc = 0x3ABE14u;
            goto label_3abe14;
        }
    }
    ctx->pc = 0x3ABCC8u;
    // 0x3abcc8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3ABCC8u;
    {
        const bool branch_taken_0x3abcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCC8u;
        // 0x3abccc: 0x3c120046  lui         $s2, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcc8) {
            ctx->pc = 0x3ABD84u;
            goto label_3abd84;
        }
    }
    ctx->pc = 0x3ABCD0u;
    // 0x3abcd0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3abcd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abcd4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abcd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3abcd8:
    // 0x3abcd8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abcd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abcdc: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3ABCDCu;
    {
        const bool branch_taken_0x3abcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abcdc) {
            ctx->pc = 0x3ABCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABCDCu;
            // 0x3abce0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABD58u;
            goto label_3abd58;
        }
    }
    ctx->pc = 0x3ABCE4u;
    // 0x3abce4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abce8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3abce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abcec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ABCECu;
    {
        const bool branch_taken_0x3abcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abcec) {
            ctx->pc = 0x3ABCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABCECu;
            // 0x3abcf0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABD38u;
            goto label_3abd38;
        }
    }
    ctx->pc = 0x3ABCF4u;
    // 0x3abcf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3abcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abcf8: 0x2643f9a0  addiu       $v1, $s2, -0x660
    ctx->pc = 0x3abcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abcfc: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3abcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3abd00: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3abd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3abd04: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3abd04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3abd08: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3abd08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3abd0c: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x3abd0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abd10: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x3abd10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abd14: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x3abd14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abd18: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x3abd18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abd1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abd20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abd24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3abd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3abd28: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3abd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3abd2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abd30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ABD30u;
    {
        const bool branch_taken_0x3abd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD30u;
        // 0x3abd34: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd30) {
            ctx->pc = 0x3ABD74u;
            goto label_3abd74;
        }
    }
    ctx->pc = 0x3ABD38u;
label_3abd38:
    // 0x3abd38: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABD38u;
    SET_GPR_U32(ctx, 31, 0x3ABD40u);
    ctx->pc = 0x3ABD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD38u;
    // 0x3abd3c: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABD38u, 0x3ABD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD40u;
label_3abd40:
    // 0x3abd40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abd44: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abd48: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abd48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abd4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abd50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABD50u;
    {
        const bool branch_taken_0x3abd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD50u;
        // 0x3abd54: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd50) {
            ctx->pc = 0x3ABD74u;
            goto label_3abd74;
        }
    }
    ctx->pc = 0x3ABD58u;
label_3abd58:
    // 0x3abd58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ABD58u;
    {
        const bool branch_taken_0x3abd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abd58) {
            ctx->pc = 0x3ABD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABD58u;
            // 0x3abd5c: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABD60u;
            goto label_3abd60;
        }
    }
    ctx->pc = 0x3ABD60u;
label_3abd60:
    // 0x3abd60: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abd60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3abd64: 0x2645f9a0  addiu       $a1, $s2, -0x660
    ctx->pc = 0x3abd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abd68: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3abd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3abd6c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABD6Cu;
    SET_GPR_U32(ctx, 31, 0x3ABD74u);
    ctx->pc = 0x3ABD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD6Cu;
    // 0x3abd70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABD6Cu, 0x3ABD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD74u;
label_3abd74:
    // 0x3abd74: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3abd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3abd78: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3abd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abd7c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3ABD7Cu;
    {
        const bool branch_taken_0x3abd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abd7c) {
            ctx->pc = 0x3ABD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABD7Cu;
            // 0x3abd80: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abcd8;
        }
    }
    ctx->pc = 0x3ABD84u;
label_3abd84:
    // 0x3abd84: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abd88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abd8c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3ABD8Cu;
    {
        const bool branch_taken_0x3abd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abd8c) {
            ctx->pc = 0x3ABD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABD8Cu;
            // 0x3abd90: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABDF0u;
            goto label_3abdf0;
        }
    }
    ctx->pc = 0x3ABD94u;
    // 0x3abd94: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abd98: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3abd98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3abd9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ABD9Cu;
    {
        const bool branch_taken_0x3abd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD9Cu;
        // 0x3abda0: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd9c) {
            ctx->pc = 0x3ABDCCu;
            goto label_3abdcc;
        }
    }
    ctx->pc = 0x3ABDA4u;
    // 0x3abda4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abda8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABDA8u;
    SET_GPR_U32(ctx, 31, 0x3ABDB0u);
    ctx->pc = 0x3ABDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDA8u;
    // 0x3abdac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABDA8u, 0x3ABDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDB0u;
label_3abdb0:
    // 0x3abdb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abdb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abdb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3abdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3abdbc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3abdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3abdc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abdc4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3ABDC4u;
    {
        const bool branch_taken_0x3abdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDC4u;
        // 0x3abdc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdc4) {
            ctx->pc = 0x3ABE14u;
            goto label_3abe14;
        }
    }
    ctx->pc = 0x3ABDCCu;
label_3abdcc:
    // 0x3abdcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abdd0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABDD0u;
    SET_GPR_U32(ctx, 31, 0x3ABDD8u);
    ctx->pc = 0x3ABDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABDD0u;
    // 0x3abdd4: 0x2645f9a0  addiu       $a1, $s2, -0x660 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABDD0u, 0x3ABDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABDD8u;
label_3abdd8:
    // 0x3abdd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abddc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abde0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abde4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abde8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3ABDE8u;
    {
        const bool branch_taken_0x3abde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDE8u;
        // 0x3abdec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abde8) {
            ctx->pc = 0x3ABE14u;
            goto label_3abe14;
        }
    }
    ctx->pc = 0x3ABDF0u;
label_3abdf0:
    // 0x3abdf0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABDF0u;
    {
        const bool branch_taken_0x3abdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abdf0) {
            ctx->pc = 0x3ABDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABDF0u;
            // 0x3abdf4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABE04u;
            goto label_3abe04;
        }
    }
    ctx->pc = 0x3ABDF8u;
    // 0x3abdf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abdfc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3abdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abe00: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abe00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3abe04:
    // 0x3abe04: 0x2645f9a0  addiu       $a1, $s2, -0x660
    ctx->pc = 0x3abe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965664));
    // 0x3abe08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3abe08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abe0c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABE0Cu;
    SET_GPR_U32(ctx, 31, 0x3ABE14u);
    ctx->pc = 0x3ABE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE0Cu;
    // 0x3abe10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABE0Cu, 0x3ABE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE14u;
label_3abe14:
    // 0x3abe14: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abe14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abe18: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abe1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3ABE1Cu;
    {
        const bool branch_taken_0x3abe1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE1Cu;
        // 0x3abe20: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe1c) {
            ctx->pc = 0x3ABE80u;
            goto label_3abe80;
        }
    }
    ctx->pc = 0x3ABE24u;
    // 0x3abe24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3abe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abe28: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x3abe28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3abe2c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ABE2Cu;
    {
        const bool branch_taken_0x3abe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE2Cu;
        // 0x3abe30: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe2c) {
            ctx->pc = 0x3ABE5Cu;
            goto label_3abe5c;
        }
    }
    ctx->pc = 0x3ABE34u;
    // 0x3abe34: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABE34u;
    SET_GPR_U32(ctx, 31, 0x3ABE3Cu);
    ctx->pc = 0x3ABE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE34u;
    // 0x3abe38: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABE34u, 0x3ABE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE3Cu;
label_3abe3c:
    // 0x3abe3c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3abe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3abe40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abe40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abe44: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abe48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3abe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3abe4c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3abe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3abe50: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abe50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abe54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3ABE54u;
    {
        const bool branch_taken_0x3abe54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE54u;
        // 0x3abe58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe54) {
            ctx->pc = 0x3ABEA8u;
            goto label_3abea8;
        }
    }
    ctx->pc = 0x3ABE5Cu;
label_3abe5c:
    // 0x3abe5c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3abe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abe60: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABE60u;
    SET_GPR_U32(ctx, 31, 0x3ABE68u);
    ctx->pc = 0x3ABE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABE60u;
    // 0x3abe64: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABE60u, 0x3ABE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABE68u;
label_3abe68:
    // 0x3abe68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abe68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abe6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abe70: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abe70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abe74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abe78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3ABE78u;
    {
        const bool branch_taken_0x3abe78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABE78u;
        // 0x3abe7c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abe78) {
            ctx->pc = 0x3ABEA8u;
            goto label_3abea8;
        }
    }
    ctx->pc = 0x3ABE80u;
label_3abe80:
    // 0x3abe80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3abe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abe84: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABE84u;
    {
        const bool branch_taken_0x3abe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abe84) {
            ctx->pc = 0x3ABE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABE84u;
            // 0x3abe88: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABE98u;
            goto label_3abe98;
        }
    }
    ctx->pc = 0x3ABE8Cu;
    // 0x3abe8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abe90: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3abe90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3abe94: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abe94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3abe98:
    // 0x3abe98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3abe98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abe9c: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x3abe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3abea0: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABEA0u;
    SET_GPR_U32(ctx, 31, 0x3ABEA8u);
    ctx->pc = 0x3ABEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABEA0u;
    // 0x3abea4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABEA0u, 0x3ABEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABEA8u;
label_3abea8:
    // 0x3abea8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3abea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3abeac: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x3ABEACu;
    {
        const bool branch_taken_0x3abeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEACu;
        // 0x3abeb0: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abeac) {
            ctx->pc = 0x3AC014u;
            goto label_3ac014;
        }
    }
    ctx->pc = 0x3ABEB4u;
    // 0x3abeb4: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x3abeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3abeb8: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x3abeb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3abebc: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x3ABEBCu;
    {
        const bool branch_taken_0x3abebc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3ABEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEBCu;
        // 0x3abec0: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abebc) {
            ctx->pc = 0x3AC014u;
            goto label_3ac014;
        }
    }
    ctx->pc = 0x3ABEC4u;
    // 0x3abec4: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3ABEC4u;
    {
        const bool branch_taken_0x3abec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABEC4u;
        // 0x3abec8: 0x3c160046  lui         $s6, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abec4) {
            ctx->pc = 0x3ABF84u;
            goto label_3abf84;
        }
    }
    ctx->pc = 0x3ABECCu;
    // 0x3abecc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3abeccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abed0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abed4: 0x0  nop
    ctx->pc = 0x3abed4u;
    // NOP
label_3abed8:
    // 0x3abed8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abedc: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x3ABEDCu;
    {
        const bool branch_taken_0x3abedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abedc) {
            ctx->pc = 0x3ABEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABEDCu;
            // 0x3abee0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF58u;
            goto label_3abf58;
        }
    }
    ctx->pc = 0x3ABEE4u;
    // 0x3abee4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abee8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x3abee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abeec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3ABEECu;
    {
        const bool branch_taken_0x3abeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abeec) {
            ctx->pc = 0x3ABEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABEECu;
            // 0x3abef0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF38u;
            goto label_3abf38;
        }
    }
    ctx->pc = 0x3ABEF4u;
    // 0x3abef4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3abef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abef8: 0x26c6f990  addiu       $a2, $s6, -0x670
    ctx->pc = 0x3abef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3abefc: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x3abefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3abf00: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x3abf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3abf04: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x3abf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3abf08: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x3abf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3abf0c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3abf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abf10: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3abf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abf14: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x3abf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abf18: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x3abf18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3abf1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abf20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abf24: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3abf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3abf28: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3abf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3abf2c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abf30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ABF30u;
    {
        const bool branch_taken_0x3abf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF30u;
        // 0x3abf34: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf30) {
            ctx->pc = 0x3ABF74u;
            goto label_3abf74;
        }
    }
    ctx->pc = 0x3ABF38u;
label_3abf38:
    // 0x3abf38: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABF38u;
    SET_GPR_U32(ctx, 31, 0x3ABF40u);
    ctx->pc = 0x3ABF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF38u;
    // 0x3abf3c: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABF38u, 0x3ABF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF40u;
label_3abf40:
    // 0x3abf40: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abf44: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abf48: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abf48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abf4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abf50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABF50u;
    {
        const bool branch_taken_0x3abf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF50u;
        // 0x3abf54: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf50) {
            ctx->pc = 0x3ABF74u;
            goto label_3abf74;
        }
    }
    ctx->pc = 0x3ABF58u;
label_3abf58:
    // 0x3abf58: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ABF58u;
    {
        const bool branch_taken_0x3abf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abf58) {
            ctx->pc = 0x3ABF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF58u;
            // 0x3abf5c: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABF60u;
            goto label_3abf60;
        }
    }
    ctx->pc = 0x3ABF60u;
label_3abf60:
    // 0x3abf60: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3abf60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3abf64: 0x26c5f990  addiu       $a1, $s6, -0x670
    ctx->pc = 0x3abf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3abf68: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3abf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3abf6c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3ABF6Cu;
    SET_GPR_U32(ctx, 31, 0x3ABF74u);
    ctx->pc = 0x3ABF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABF6Cu;
    // 0x3abf70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3ABF6Cu, 0x3ABF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABF74u;
label_3abf74:
    // 0x3abf74: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x3abf74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x3abf78: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x3abf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3abf7c: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3ABF7Cu;
    {
        const bool branch_taken_0x3abf7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abf7c) {
            ctx->pc = 0x3ABF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF7Cu;
            // 0x3abf80: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abed8;
        }
    }
    ctx->pc = 0x3ABF84u;
label_3abf84:
    // 0x3abf84: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3abf84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3abf88: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3abf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3abf8c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3ABF8Cu;
    {
        const bool branch_taken_0x3abf8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abf8c) {
            ctx->pc = 0x3ABF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABF8Cu;
            // 0x3abf90: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABFF0u;
            goto label_3abff0;
        }
    }
    ctx->pc = 0x3ABF94u;
    // 0x3abf94: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3abf94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abf98: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3abf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3abf9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3ABF9Cu;
    {
        const bool branch_taken_0x3abf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABF9Cu;
        // 0x3abfa0: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abf9c) {
            ctx->pc = 0x3ABFCCu;
            goto label_3abfcc;
        }
    }
    ctx->pc = 0x3ABFA4u;
    // 0x3abfa4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abfa8: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABFA8u;
    SET_GPR_U32(ctx, 31, 0x3ABFB0u);
    ctx->pc = 0x3ABFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABFA8u;
    // 0x3abfac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABFA8u, 0x3ABFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABFB0u;
label_3abfb0:
    // 0x3abfb0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abfb4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abfb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3abfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3abfbc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3abfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3abfc0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3abfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3abfc4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3ABFC4u;
    {
        const bool branch_taken_0x3abfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFC4u;
        // 0x3abfc8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfc4) {
            ctx->pc = 0x3AC014u;
            goto label_3ac014;
        }
    }
    ctx->pc = 0x3ABFCCu;
label_3abfcc:
    // 0x3abfcc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3abfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abfd0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3ABFD0u;
    SET_GPR_U32(ctx, 31, 0x3ABFD8u);
    ctx->pc = 0x3ABFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABFD0u;
    // 0x3abfd4: 0x26c5f990  addiu       $a1, $s6, -0x670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3ABFD0u, 0x3ABFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABFD8u;
label_3abfd8:
    // 0x3abfd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3abfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3abfdc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3abfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3abfe0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3abfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3abfe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3abfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3abfe8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3ABFE8u;
    {
        const bool branch_taken_0x3abfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABFE8u;
        // 0x3abfec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abfe8) {
            ctx->pc = 0x3AC014u;
            goto label_3ac014;
        }
    }
    ctx->pc = 0x3ABFF0u;
label_3abff0:
    // 0x3abff0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ABFF0u;
    {
        const bool branch_taken_0x3abff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abff0) {
            ctx->pc = 0x3ABFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABFF0u;
            // 0x3abff4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC004u;
            goto label_3ac004;
        }
    }
    ctx->pc = 0x3ABFF8u;
    // 0x3abff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3abffc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3abffcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ac000: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3ac000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_3ac004:
    // 0x3ac004: 0x26c5f990  addiu       $a1, $s6, -0x670
    ctx->pc = 0x3ac004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965648));
    // 0x3ac008: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ac008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac00c: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3AC00Cu;
    SET_GPR_U32(ctx, 31, 0x3AC014u);
    ctx->pc = 0x3AC010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC00Cu;
    // 0x3ac010: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3AC00Cu, 0x3AC014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC014u;
label_3ac014:
    // 0x3ac014: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3ac014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3ac018: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x3ac018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3ac01c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x3ac01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3ac020: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3ac020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ac024: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x3ac024u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x3ac028: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ac028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3ac02c: 0x1000fc6a  b           . + 4 + (-0x396 << 2)
    ctx->pc = 0x3AC02Cu;
    {
        const bool branch_taken_0x3ac02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC02Cu;
        // 0x3ac030: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac02c) {
            ctx->pc = 0x3AB1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ab1d8;
        }
    }
    ctx->pc = 0x3AC034u;
label_3ac034:
    // 0x3ac034: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3ac034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3ac038:
    // 0x3ac038: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3ac038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3ac03c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AC03Cu;
    {
        const bool branch_taken_0x3ac03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC03Cu;
        // 0x3ac040: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac03c) {
            ctx->pc = 0x3AC05Cu;
            goto label_3ac05c;
        }
    }
    ctx->pc = 0x3AC044u;
    // 0x3ac044: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x3ac044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3ac048: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac04c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ac04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac050: 0xc0eac14  jal         func_3AB050
    ctx->pc = 0x3AC050u;
    SET_GPR_U32(ctx, 31, 0x3AC058u);
    ctx->pc = 0x3AC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC050u;
    // 0x3ac054: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB050u, 0x3AC050u, 0x3AC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC058u;
label_3ac058:
    // 0x3ac058: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x3ac058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac05c:
    // 0x3ac05c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3ac05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3ac060: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3ac060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3ac064: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3ac064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3ac068: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3ac068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3ac06c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3ac06cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3ac070: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3ac070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3ac074: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3ac074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ac078: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3ac078u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ac07c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3ac07cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ac080: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ac080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ac084: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC084u;
        // 0x3ac088: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC08Cu;
    // 0x3ac08c: 0x0  nop
    ctx->pc = 0x3ac08cu;
    // NOP
    ctx->pc = 0x3ac090u;
}
