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

// Function: func_0020D140
// Address: 0x20d140 - 0x20d398
void func_0020D140_0x20d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020D140_0x20d140");
#endif

    switch (ctx->pc) {
        case 0x20d158u: goto label_20d158;
        case 0x20d160u: goto label_20d160;
        case 0x20d208u: goto label_20d208;
        case 0x20d234u: goto label_20d234;
        case 0x20d264u: goto label_20d264;
        case 0x20d278u: goto label_20d278;
        case 0x20d28cu: goto label_20d28c;
        case 0x20d2a0u: goto label_20d2a0;
        case 0x20d314u: goto label_20d314;
        case 0x20d350u: goto label_20d350;
        case 0x20d360u: goto label_20d360;
        default: break;
    }

    ctx->pc = 0x20d140u;

    // 0x20d140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d144: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20d148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d150: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x20D150u;
    SET_GPR_U32(ctx, 31, 0x20D158u);
    ctx->pc = 0x20D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D150u;
    // 0x20d154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x20D150u, 0x20D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D158u;
label_20d158:
    // 0x20d158: 0xc04b1d2  jal         func_12C748
    ctx->pc = 0x20D158u;
    SET_GPR_U32(ctx, 31, 0x20D160u);
    ctx->pc = 0x20D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D158u;
    // 0x20d15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C748u, 0x20D158u, 0x20D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D160u;
label_20d160:
    // 0x20d160: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x20D160u;
    {
        const bool branch_taken_0x20d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D160u;
        // 0x20d164: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d160) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D168u;
    // 0x20d168: 0xc6011740  lwc1        $f1, 0x1740($s0)
    ctx->pc = 0x20d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d16c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d170: 0x0  nop
    ctx->pc = 0x20d170u;
    // NOP
    // 0x20d174: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d178: 0x0  nop
    ctx->pc = 0x20d178u;
    // NOP
    // 0x20d17c: 0x45030082  bc1tl       . + 4 + (0x82 << 2)
    ctx->pc = 0x20D17Cu;
    {
        const bool branch_taken_0x20d17c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d17c) {
            ctx->pc = 0x20D180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D17Cu;
            // 0x20d180: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D388u;
            goto label_20d388;
        }
    }
    ctx->pc = 0x20D184u;
    // 0x20d184: 0x960303ac  lhu         $v1, 0x3AC($s0)
    ctx->pc = 0x20d184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20d188: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x20d188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x20d18c: 0x1440007d  bnez        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x20D18Cu;
    {
        const bool branch_taken_0x20d18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D18Cu;
        // 0x20d190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d18c) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D194u;
    // 0x20d194: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x20d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x20d198: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x20D198u;
    {
        const bool branch_taken_0x20d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D198u;
        // 0x20d19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d198) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D1A0u;
    // 0x20d1a0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x20d1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x20d1a4: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x20D1A4u;
    {
        const bool branch_taken_0x20d1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1A4u;
        // 0x20d1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1a4) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D1ACu;
    // 0x20d1ac: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x20d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x20d1b0: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x20d1b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x20d1b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x20d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20d1b8: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x20d1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x20d1bc: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x20D1BCu;
    {
        const bool branch_taken_0x20d1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1BCu;
        // 0x20d1c0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1bc) {
            ctx->pc = 0x20D380u;
            goto label_20d380;
        }
    }
    ctx->pc = 0x20D1C4u;
    // 0x20d1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d1c8: 0x24422140  addiu       $v0, $v0, 0x2140
    ctx->pc = 0x20d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8512));
    // 0x20d1cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20d1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d1d4: 0x800008  jr          $a0
    ctx->pc = 0x20D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D1DCu: goto label_20d1dc;
            case 0x20D380u: goto label_20d380;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D1D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20D1DCu;
label_20d1dc:
    // 0x20d1dc: 0x920317bb  lbu         $v1, 0x17BB($s0)
    ctx->pc = 0x20d1dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6075)));
    // 0x20d1e0: 0x10600067  beqz        $v1, . + 4 + (0x67 << 2)
    ctx->pc = 0x20D1E0u;
    {
        const bool branch_taken_0x20d1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1E0u;
        // 0x20d1e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1e0) {
            ctx->pc = 0x20D380u;
            goto label_20d380;
        }
    }
    ctx->pc = 0x20D1E8u;
    // 0x20d1e8: 0x14620066  bne         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x20D1E8u;
    {
        const bool branch_taken_0x20d1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1E8u;
        // 0x20d1ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1e8) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D1F0u;
    // 0x20d1f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x20d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x20d1f4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x20d1f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x20d1f8: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x20D1F8u;
    {
        const bool branch_taken_0x20d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1F8u;
        // 0x20d1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1f8) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D200u;
    // 0x20d200: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x20D200u;
    SET_GPR_U32(ctx, 31, 0x20D208u);
    ctx->pc = 0x20D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D200u;
    // 0x20d204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x20D200u, 0x20D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D208u;
label_20d208:
    // 0x20d208: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x20D208u;
    {
        const bool branch_taken_0x20d208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D208u;
        // 0x20d20c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d208) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D210u;
    // 0x20d210: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x20d210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x20d214: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x20d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x20d218: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x20D218u;
    {
        const bool branch_taken_0x20d218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D218u;
        // 0x20d21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d218) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D220u;
    // 0x20d220: 0x8e0217ac  lw          $v0, 0x17AC($s0)
    ctx->pc = 0x20d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d224: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x20D224u;
    {
        const bool branch_taken_0x20d224 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D224u;
        // 0x20d228: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d224) {
            ctx->pc = 0x20D380u;
            goto label_20d380;
        }
    }
    ctx->pc = 0x20D22Cu;
    // 0x20d22c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x20D22Cu;
    SET_GPR_U32(ctx, 31, 0x20D234u);
    ctx->pc = 0x20D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D22Cu;
    // 0x20d230: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x20D22Cu, 0x20D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D234u;
label_20d234:
    // 0x20d234: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x20d234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20d238: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20d238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x20d23c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20D23Cu;
    {
        const bool branch_taken_0x20d23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D23Cu;
        // 0x20d240: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d23c) {
            ctx->pc = 0x20D25Cu;
            goto label_20d25c;
        }
    }
    ctx->pc = 0x20D244u;
    // 0x20d244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20d244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20d248: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x20d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x20d24c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d250: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20d250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d254: 0x800008  jr          $a0
    ctx->pc = 0x20D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20D25Cu: goto label_20d25c;
            case 0x20D270u: goto label_20d270;
            case 0x20D284u: goto label_20d284;
            case 0x20D298u: goto label_20d298;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D254u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20D25Cu;
label_20d25c:
    // 0x20d25c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D25Cu;
    SET_GPR_U32(ctx, 31, 0x20D264u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D25Cu, 0x20D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D264u;
label_20d264:
    // 0x20d264: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d268: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20D268u;
    {
        const bool branch_taken_0x20d268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D268u;
        // 0x20d26c: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d268) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20D270u;
label_20d270:
    // 0x20d270: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D270u;
    SET_GPR_U32(ctx, 31, 0x20D278u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D270u, 0x20D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D278u;
label_20d278:
    // 0x20d278: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d27c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20D27Cu;
    {
        const bool branch_taken_0x20d27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D27Cu;
        // 0x20d280: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d27c) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20D284u;
label_20d284:
    // 0x20d284: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D284u;
    SET_GPR_U32(ctx, 31, 0x20D28Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D284u, 0x20D28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D28Cu;
label_20d28c:
    // 0x20d28c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20D290u;
    {
        const bool branch_taken_0x20d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D290u;
        // 0x20d294: 0x24460003  addiu       $a2, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d290) {
            ctx->pc = 0x20D2A8u;
            goto label_20d2a8;
        }
    }
    ctx->pc = 0x20D298u;
label_20d298:
    // 0x20d298: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D298u;
    SET_GPR_U32(ctx, 31, 0x20D2A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D298u, 0x20D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D2A0u;
label_20d2a0:
    // 0x20d2a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d2a4: 0x24460002  addiu       $a2, $v0, 0x2
    ctx->pc = 0x20d2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_20d2a8:
    // 0x20d2a8: 0x920317bf  lbu         $v1, 0x17BF($s0)
    ctx->pc = 0x20d2a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6079)));
    // 0x20d2ac: 0x24c5fffe  addiu       $a1, $a2, -0x2
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x20d2b0: 0x920417c1  lbu         $a0, 0x17C1($s0)
    ctx->pc = 0x20d2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6081)));
    // 0x20d2b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d2b8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x20d2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x20d2bc: 0xa4300b  movn        $a2, $a1, $a0
    ctx->pc = 0x20d2bcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
    // 0x20d2c0: 0x2c420065  sltiu       $v0, $v0, 0x65
    ctx->pc = 0x20d2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x20d2c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D2C4u;
    {
        const bool branch_taken_0x20d2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2C4u;
        // 0x20d2c8: 0xa20317bf  sb          $v1, 0x17BF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6079), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2c4) {
            ctx->pc = 0x20D2D4u;
            goto label_20d2d4;
        }
    }
    ctx->pc = 0x20D2CCu;
    // 0x20d2cc: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x20d2d0: 0xa20217bf  sb          $v0, 0x17BF($s0)
    ctx->pc = 0x20d2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6079), (uint8_t)GPR_U32(ctx, 2));
label_20d2d4:
    // 0x20d2d4: 0x920217bf  lbu         $v0, 0x17BF($s0)
    ctx->pc = 0x20d2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6079)));
    // 0x20d2d8: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x20d2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20d2dc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x20D2DCu;
    {
        const bool branch_taken_0x20d2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2DCu;
        // 0x20d2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2dc) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D2E4u;
    // 0x20d2e4: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x20d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d2e8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x20d2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x20d2ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x20d2ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x20d2f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20d2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d2f4: 0x0  nop
    ctx->pc = 0x20d2f4u;
    // NOP
    // 0x20d2f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20d2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d2fc: 0x0  nop
    ctx->pc = 0x20d2fcu;
    // NOP
    // 0x20d300: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20D300u;
    {
        const bool branch_taken_0x20d300 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D300u;
        // 0x20d304: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d300) {
            ctx->pc = 0x20D30Cu;
            goto label_20d30c;
        }
    }
    ctx->pc = 0x20D308u;
    // 0x20d308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20d308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d30c:
    // 0x20d30c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D30Cu;
    SET_GPR_U32(ctx, 31, 0x20D314u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D30Cu, 0x20D314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D314u;
label_20d314:
    // 0x20d314: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x20d318: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x20d318u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x20d31c: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x20D31Cu;
    {
        const bool branch_taken_0x20d31c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D31Cu;
        // 0x20d320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d31c) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D324u;
    // 0x20d324: 0x8e0317ac  lw          $v1, 0x17AC($s0)
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6060)));
    // 0x20d328: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x20d32c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x20d32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d330: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20D330u;
    {
        const bool branch_taken_0x20d330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D330u;
        // 0x20d334: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d330) {
            ctx->pc = 0x20D340u;
            goto label_20d340;
        }
    }
    ctx->pc = 0x20D338u;
    // 0x20d338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D338u;
    {
        const bool branch_taken_0x20d338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D338u;
        // 0x20d33c: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d338) {
            ctx->pc = 0x20D344u;
            goto label_20d344;
        }
    }
    ctx->pc = 0x20D340u;
label_20d340:
    // 0x20d340: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x20d340u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_20d344:
    // 0x20d344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d348: 0xc09d08e  jal         func_274238
    ctx->pc = 0x20D348u;
    SET_GPR_U32(ctx, 31, 0x20D350u);
    ctx->pc = 0x20D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D348u;
    // 0x20d34c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x20D348u, 0x20D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D350u;
label_20d350:
    // 0x20d350: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20d350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20d354: 0xa60017c8  sh          $zero, 0x17C8($s0)
    ctx->pc = 0x20d354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6088), (uint16_t)GPR_U32(ctx, 0));
    // 0x20d358: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x20D358u;
    SET_GPR_U32(ctx, 31, 0x20D360u);
    ctx->pc = 0x20D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D358u;
    // 0x20d35c: 0xae0217c4  sw          $v0, 0x17C4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6084), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x20D358u, 0x20D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D360u;
label_20d360:
    // 0x20d360: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20d364: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x20d364u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20d368: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20D368u;
    {
        const bool branch_taken_0x20d368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d368) {
            ctx->pc = 0x20D36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D368u;
            // 0x20d36c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D370u;
            goto label_20d370;
        }
    }
    ctx->pc = 0x20D370u;
label_20d370:
    // 0x20d370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20d370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d374: 0x2010  mfhi        $a0
    ctx->pc = 0x20d374u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20d378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20D378u;
    {
        const bool branch_taken_0x20d378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D378u;
        // 0x20d37c: 0xa20417bf  sb          $a0, 0x17BF($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6079), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d378) {
            ctx->pc = 0x20D384u;
            goto label_20d384;
        }
    }
    ctx->pc = 0x20D380u;
label_20d380:
    // 0x20d380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20d380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20d384:
    // 0x20d384: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20d384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20d388:
    // 0x20d388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d390: 0x3e00008  jr          $ra
    ctx->pc = 0x20D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D390u;
        // 0x20d394: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D398u;
}
