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

// Function: cEm00_stepMotionByEmNo
// Address: 0x214298 - 0x2147d0
void cEm00_stepMotionByEmNo_0x214298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepMotionByEmNo_0x214298");
#endif

    switch (ctx->pc) {
        case 0x2142d8u: goto label_2142d8;
        case 0x2142f8u: goto label_2142f8;
        case 0x2144d0u: goto label_2144d0;
        case 0x21467cu: goto label_21467c;
        case 0x2146c8u: goto label_2146c8;
        case 0x2146e8u: goto label_2146e8;
        case 0x2146f8u: goto label_2146f8;
        case 0x214708u: goto label_214708;
        case 0x214714u: goto label_214714;
        case 0x214724u: goto label_214724;
        case 0x214740u: goto label_214740;
        case 0x2147b4u: goto label_2147b4;
        default: break;
    }

    ctx->pc = 0x214298u;

    // 0x214298: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21429c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21429cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2142a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2142a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2142a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2142a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2142a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2142a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2142ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2142acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2142b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2142b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2142b4: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x2142b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2142b8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2142B8u;
    {
        const bool branch_taken_0x2142b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142B8u;
        // 0x2142bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142b8) {
            ctx->pc = 0x2142D0u;
            goto label_2142d0;
        }
    }
    ctx->pc = 0x2142C0u;
    // 0x2142c0: 0x50620105  beql        $v1, $v0, . + 4 + (0x105 << 2)
    ctx->pc = 0x2142C0u;
    {
        const bool branch_taken_0x2142c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2142c0) {
            ctx->pc = 0x2142C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2142C0u;
            // 0x2142c4: 0x8e4216d4  lw          $v0, 0x16D4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2146D8u;
            goto label_2146d8;
        }
    }
    ctx->pc = 0x2142C8u;
    // 0x2142c8: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x2142C8u;
    {
        const bool branch_taken_0x2142c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142C8u;
        // 0x2142cc: 0x924202f7  lbu         $v0, 0x2F7($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142c8) {
            ctx->pc = 0x214728u;
            goto label_214728;
        }
    }
    ctx->pc = 0x2142D0u;
label_2142d0:
    // 0x2142d0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2142D0u;
    SET_GPR_U32(ctx, 31, 0x2142D8u);
    ctx->pc = 0x2142D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142D0u;
    // 0x2142d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2142D0u, 0x2142D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142D8u;
label_2142d8:
    // 0x2142d8: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x2142d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2142dc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2142dcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2142e0: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2142e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2142e4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2142e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2142e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2142e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2142ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2142ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2142f0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2142F0u;
    SET_GPR_U32(ctx, 31, 0x2142F8u);
    ctx->pc = 0x2142F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142F0u;
    // 0x2142f4: 0x264516a0  addiu       $a1, $s2, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2142F0u, 0x2142F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142F8u;
label_2142f8:
    // 0x2142f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2142f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2142fc: 0x0  nop
    ctx->pc = 0x2142fcu;
    // NOP
    // 0x214300: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x214300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214304: 0x0  nop
    ctx->pc = 0x214304u;
    // NOP
    // 0x214308: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214308u;
        // 0x21430c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214308) {
            ctx->pc = 0x214314u;
            goto label_214314;
        }
    }
    ctx->pc = 0x214310u;
    // 0x214310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214314:
    // 0x214314: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x214314u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x214318: 0x924317c3  lbu         $v1, 0x17C3($s2)
    ctx->pc = 0x214318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6083)));
    // 0x21431c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x21431cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214320: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x214320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x214324: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x214324u;
    {
        const bool branch_taken_0x214324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214324u;
        // 0x214328: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214324) {
            ctx->pc = 0x214330u;
            goto label_214330;
        }
    }
    ctx->pc = 0x21432Cu;
    // 0x21432c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x21432cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_214330:
    // 0x214330: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x214334: 0x3421f983  ori         $at, $at, 0xF983
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63875);
    // 0x214338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21433c: 0x0  nop
    ctx->pc = 0x21433cu;
    // NOP
    // 0x214340: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x214340u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x214344: 0x1080006c  beqz        $a0, . + 4 + (0x6C << 2)
    ctx->pc = 0x214344u;
    {
        const bool branch_taken_0x214344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x214348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214344u;
        // 0x214348: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214344) {
            ctx->pc = 0x2144F8u;
            goto label_2144f8;
        }
    }
    ctx->pc = 0x21434Cu;
    // 0x21434c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x21434cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x214350: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x214350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x214354: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x214354u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x214358: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x214358u;
    {
        const bool branch_taken_0x214358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214358u;
        // 0x21435c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214358) {
            ctx->pc = 0x214378u;
            goto label_214378;
        }
    }
    ctx->pc = 0x214360u;
    // 0x214360: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x214360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x214364: 0x24425940  addiu       $v0, $v0, 0x5940
    ctx->pc = 0x214364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22848));
    // 0x214368: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21436c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214370: 0x800008  jr          $a0
    ctx->pc = 0x214370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214378u: goto label_214378;
            case 0x214388u: goto label_214388;
            case 0x214398u: goto label_214398;
            case 0x2143A8u: goto label_2143a8;
            case 0x2143B8u: goto label_2143b8;
            case 0x2143C8u: goto label_2143c8;
            case 0x2143D8u: goto label_2143d8;
            case 0x2143E8u: goto label_2143e8;
            case 0x2143F8u: goto label_2143f8;
            case 0x214408u: goto label_214408;
            case 0x214418u: goto label_214418;
            case 0x214428u: goto label_214428;
            case 0x21444Cu: goto label_21444c;
            case 0x21445Cu: goto label_21445c;
            case 0x21446Cu: goto label_21446c;
            case 0x21447Cu: goto label_21447c;
            case 0x21448Cu: goto label_21448c;
            case 0x2144D8u: goto label_2144d8;
            case 0x2144E8u: goto label_2144e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214370u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214378u;
label_214378:
    // 0x214378: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21437c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x21437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x214380: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x214380u;
    {
        const bool branch_taken_0x214380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214380u;
        // 0x214384: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214380) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214388u;
label_214388:
    // 0x214388: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21438c: 0x8c430684  lw          $v1, 0x684($v0)
    ctx->pc = 0x21438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1668)));
    // 0x214390: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x214390u;
    {
        const bool branch_taken_0x214390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214390u;
        // 0x214394: 0x8c440688  lw          $a0, 0x688($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214390) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214398u;
label_214398:
    // 0x214398: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21439c: 0x8c4325a4  lw          $v1, 0x25A4($v0)
    ctx->pc = 0x21439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9636)));
    // 0x2143a0: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2143A0u;
    {
        const bool branch_taken_0x2143a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143A0u;
        // 0x2143a4: 0x8c4425a8  lw          $a0, 0x25A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143a0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143A8u;
label_2143a8:
    // 0x2143a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143ac: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2143acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x2143b0: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2143B0u;
    {
        const bool branch_taken_0x2143b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143B0u;
        // 0x2143b4: 0x8c4400e8  lw          $a0, 0xE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143b0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143B8u;
label_2143b8:
    // 0x2143b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143bc: 0x8c4310d4  lw          $v1, 0x10D4($v0)
    ctx->pc = 0x2143bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4308)));
    // 0x2143c0: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x2143C0u;
    {
        const bool branch_taken_0x2143c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143C0u;
        // 0x2143c4: 0x8c4410d8  lw          $a0, 0x10D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143c0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143C8u;
label_2143c8:
    // 0x2143c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143cc: 0x8c433cc0  lw          $v1, 0x3CC0($v0)
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15552)));
    // 0x2143d0: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x2143D0u;
    {
        const bool branch_taken_0x2143d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143D0u;
        // 0x2143d4: 0x8c443cc4  lw          $a0, 0x3CC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143d0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143D8u;
label_2143d8:
    // 0x2143d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143dc: 0x8c430864  lw          $v1, 0x864($v0)
    ctx->pc = 0x2143dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2148)));
    // 0x2143e0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2143E0u;
    {
        const bool branch_taken_0x2143e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143E0u;
        // 0x2143e4: 0x8c440868  lw          $a0, 0x868($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143e0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143E8u;
label_2143e8:
    // 0x2143e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143ec: 0x8c431fec  lw          $v1, 0x1FEC($v0)
    ctx->pc = 0x2143ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8172)));
    // 0x2143f0: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x2143F0u;
    {
        const bool branch_taken_0x2143f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F0u;
        // 0x2143f4: 0x8c441ff0  lw          $a0, 0x1FF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143f0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2143F8u;
label_2143f8:
    // 0x2143f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2143fc: 0x8c43159c  lw          $v1, 0x159C($v0)
    ctx->pc = 0x2143fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5532)));
    // 0x214400: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x214400u;
    {
        const bool branch_taken_0x214400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214400u;
        // 0x214404: 0x8c4415a0  lw          $a0, 0x15A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214400) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214408u;
label_214408:
    // 0x214408: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21440c: 0x8c433a38  lw          $v1, 0x3A38($v0)
    ctx->pc = 0x21440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14904)));
    // 0x214410: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x214410u;
    {
        const bool branch_taken_0x214410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214410u;
        // 0x214414: 0x8c443a3c  lw          $a0, 0x3A3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214410) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214418u;
label_214418:
    // 0x214418: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21441c: 0x8c43344c  lw          $v1, 0x344C($v0)
    ctx->pc = 0x21441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13388)));
    // 0x214420: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x214420u;
    {
        const bool branch_taken_0x214420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214420u;
        // 0x214424: 0x8c443450  lw          $a0, 0x3450($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214420) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214428u;
label_214428:
    // 0x214428: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x214428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x21442c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21442Cu;
    {
        const bool branch_taken_0x21442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21442Cu;
        // 0x214430: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21442c) {
            ctx->pc = 0x214440u;
            goto label_214440;
        }
    }
    ctx->pc = 0x214434u;
    // 0x214434: 0x8c430d48  lw          $v1, 0xD48($v0)
    ctx->pc = 0x214434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3400)));
    // 0x214438: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x214438u;
    {
        const bool branch_taken_0x214438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214438u;
        // 0x21443c: 0x8c440d4c  lw          $a0, 0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214438) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214440u;
label_214440:
    // 0x214440: 0x8c430d30  lw          $v1, 0xD30($v0)
    ctx->pc = 0x214440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3376)));
    // 0x214444: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x214444u;
    {
        const bool branch_taken_0x214444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214444u;
        // 0x214448: 0x8c440d34  lw          $a0, 0xD34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214444) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x21444Cu;
label_21444c:
    // 0x21444c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214450: 0x8c430d48  lw          $v1, 0xD48($v0)
    ctx->pc = 0x214450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3400)));
    // 0x214454: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x214454u;
    {
        const bool branch_taken_0x214454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214454u;
        // 0x214458: 0x8c440d4c  lw          $a0, 0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214454) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x21445Cu;
label_21445c:
    // 0x21445c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214460: 0x8c43192c  lw          $v1, 0x192C($v0)
    ctx->pc = 0x214460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6444)));
    // 0x214464: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x214464u;
    {
        const bool branch_taken_0x214464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214464u;
        // 0x214468: 0x8c441930  lw          $a0, 0x1930($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214464) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x21446Cu;
label_21446c:
    // 0x21446c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21446cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214470: 0x8c433070  lw          $v1, 0x3070($v0)
    ctx->pc = 0x214470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12400)));
    // 0x214474: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x214474u;
    {
        const bool branch_taken_0x214474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214474u;
        // 0x214478: 0x8c443074  lw          $a0, 0x3074($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214474) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x21447Cu;
label_21447c:
    // 0x21447c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214480: 0x8c433284  lw          $v1, 0x3284($v0)
    ctx->pc = 0x214480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12932)));
    // 0x214484: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x214484u;
    {
        const bool branch_taken_0x214484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214484u;
        // 0x214488: 0x8c443288  lw          $a0, 0x3288($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214484) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x21448Cu;
label_21448c:
    // 0x21448c: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x214490: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x214490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x214494: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214498u;
    {
        const bool branch_taken_0x214498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214498u;
        // 0x21449c: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214498) {
            ctx->pc = 0x2144ACu;
            goto label_2144ac;
        }
    }
    ctx->pc = 0x2144A0u;
    // 0x2144a0: 0x8c4338d8  lw          $v1, 0x38D8($v0)
    ctx->pc = 0x2144a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14552)));
    // 0x2144a4: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2144A4u;
    {
        const bool branch_taken_0x2144a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144A4u;
        // 0x2144a8: 0x8c4438dc  lw          $a0, 0x38DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144a4) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2144ACu;
label_2144ac:
    // 0x2144ac: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2144acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2144b0: 0x8c433750  lw          $v1, 0x3750($v0)
    ctx->pc = 0x2144b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14160)));
    // 0x2144b4: 0x8c443754  lw          $a0, 0x3754($v0)
    ctx->pc = 0x2144b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14164)));
    // 0x2144b8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2144b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2144bc: 0x10e0007a  beqz        $a3, . + 4 + (0x7A << 2)
    ctx->pc = 0x2144BCu;
    {
        const bool branch_taken_0x2144bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144BCu;
        // 0x2144c0: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144bc) {
            ctx->pc = 0x2146A8u;
            goto label_2146a8;
        }
    }
    ctx->pc = 0x2144C4u;
    // 0x2144c4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2144c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144c8: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x2144C8u;
    SET_GPR_U32(ctx, 31, 0x2144D0u);
    ctx->pc = 0x2144CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2144C8u;
    // 0x2144cc: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x2144C8u, 0x2144D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2144D0u;
label_2144d0:
    // 0x2144d0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2144D0u;
    {
        const bool branch_taken_0x2144d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2144d0) {
            ctx->pc = 0x2146A8u;
            goto label_2146a8;
        }
    }
    ctx->pc = 0x2144D8u;
label_2144d8:
    // 0x2144d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2144d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2144dc: 0x8c4322ac  lw          $v1, 0x22AC($v0)
    ctx->pc = 0x2144dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8876)));
    // 0x2144e0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2144E0u;
    {
        const bool branch_taken_0x2144e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144E0u;
        // 0x2144e4: 0x8c4422b0  lw          $a0, 0x22B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144e0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2144E8u;
label_2144e8:
    // 0x2144e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2144ec: 0x8c432d64  lw          $v1, 0x2D64($v0)
    ctx->pc = 0x2144ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11620)));
    // 0x2144f0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2144F0u;
    {
        const bool branch_taken_0x2144f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144F0u;
        // 0x2144f4: 0x8c442d68  lw          $a0, 0x2D68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144f0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2144F8u;
label_2144f8:
    // 0x2144f8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2144f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2144fc: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x2144fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x214500: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x214500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x214504: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x214504u;
    {
        const bool branch_taken_0x214504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x214508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214504u;
        // 0x214508: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214504) {
            ctx->pc = 0x214524u;
            goto label_214524;
        }
    }
    ctx->pc = 0x21450Cu;
    // 0x21450c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21450cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x214510: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x214510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x214514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214518: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21451c: 0x800008  jr          $a0
    ctx->pc = 0x21451Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214524u: goto label_214524;
            case 0x214534u: goto label_214534;
            case 0x214544u: goto label_214544;
            case 0x214554u: goto label_214554;
            case 0x214564u: goto label_214564;
            case 0x214574u: goto label_214574;
            case 0x214584u: goto label_214584;
            case 0x214594u: goto label_214594;
            case 0x2145A4u: goto label_2145a4;
            case 0x2145B4u: goto label_2145b4;
            case 0x2145C4u: goto label_2145c4;
            case 0x2145D4u: goto label_2145d4;
            case 0x2145F8u: goto label_2145f8;
            case 0x214608u: goto label_214608;
            case 0x214618u: goto label_214618;
            case 0x214628u: goto label_214628;
            case 0x214638u: goto label_214638;
            case 0x214684u: goto label_214684;
            case 0x214694u: goto label_214694;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21451Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214524u;
label_214524:
    // 0x214524: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214528: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x21452c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x21452Cu;
    {
        const bool branch_taken_0x21452c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21452Cu;
        // 0x214530: 0x8c4400e0  lw          $a0, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21452c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214534u;
label_214534:
    // 0x214534: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214538: 0x8c43067c  lw          $v1, 0x67C($v0)
    ctx->pc = 0x214538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1660)));
    // 0x21453c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21453Cu;
    {
        const bool branch_taken_0x21453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21453Cu;
        // 0x214540: 0x8c440680  lw          $a0, 0x680($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21453c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214544u;
label_214544:
    // 0x214544: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214548: 0x8c43259c  lw          $v1, 0x259C($v0)
    ctx->pc = 0x214548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9628)));
    // 0x21454c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x21454Cu;
    {
        const bool branch_taken_0x21454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21454Cu;
        // 0x214550: 0x8c4425a0  lw          $a0, 0x25A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21454c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214554u;
label_214554:
    // 0x214554: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214558: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x214558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x21455c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x21455Cu;
    {
        const bool branch_taken_0x21455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21455Cu;
        // 0x214560: 0x8c4400e0  lw          $a0, 0xE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21455c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214564u;
label_214564:
    // 0x214564: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214568: 0x8c4310cc  lw          $v1, 0x10CC($v0)
    ctx->pc = 0x214568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4300)));
    // 0x21456c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21456Cu;
    {
        const bool branch_taken_0x21456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21456Cu;
        // 0x214570: 0x8c4410d0  lw          $a0, 0x10D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21456c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214574u;
label_214574:
    // 0x214574: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214578: 0x8c433cb8  lw          $v1, 0x3CB8($v0)
    ctx->pc = 0x214578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15544)));
    // 0x21457c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x21457Cu;
    {
        const bool branch_taken_0x21457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21457Cu;
        // 0x214580: 0x8c443cbc  lw          $a0, 0x3CBC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21457c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214584u;
label_214584:
    // 0x214584: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214588: 0x8c43085c  lw          $v1, 0x85C($v0)
    ctx->pc = 0x214588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2140)));
    // 0x21458c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x21458Cu;
    {
        const bool branch_taken_0x21458c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21458Cu;
        // 0x214590: 0x8c440860  lw          $a0, 0x860($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21458c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214594u;
label_214594:
    // 0x214594: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214598: 0x8c431fe4  lw          $v1, 0x1FE4($v0)
    ctx->pc = 0x214598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8164)));
    // 0x21459c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x21459Cu;
    {
        const bool branch_taken_0x21459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21459Cu;
        // 0x2145a0: 0x8c441fe8  lw          $a0, 0x1FE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21459c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145A4u;
label_2145a4:
    // 0x2145a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2145a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2145a8: 0x8c431594  lw          $v1, 0x1594($v0)
    ctx->pc = 0x2145a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5524)));
    // 0x2145ac: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2145ACu;
    {
        const bool branch_taken_0x2145ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145ACu;
        // 0x2145b0: 0x8c441598  lw          $a0, 0x1598($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145ac) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145B4u;
label_2145b4:
    // 0x2145b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2145b8: 0x8c433a30  lw          $v1, 0x3A30($v0)
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14896)));
    // 0x2145bc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2145BCu;
    {
        const bool branch_taken_0x2145bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145BCu;
        // 0x2145c0: 0x8c443a34  lw          $a0, 0x3A34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145bc) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145C4u;
label_2145c4:
    // 0x2145c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2145c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2145c8: 0x8c433454  lw          $v1, 0x3454($v0)
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13396)));
    // 0x2145cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2145CCu;
    {
        const bool branch_taken_0x2145cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145CCu;
        // 0x2145d0: 0x8c443458  lw          $a0, 0x3458($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145cc) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145D4u;
label_2145d4:
    // 0x2145d4: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x2145d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x2145d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2145D8u;
    {
        const bool branch_taken_0x2145d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145D8u;
        // 0x2145dc: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145d8) {
            ctx->pc = 0x2145ECu;
            goto label_2145ec;
        }
    }
    ctx->pc = 0x2145E0u;
    // 0x2145e0: 0x8c430d40  lw          $v1, 0xD40($v0)
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3392)));
    // 0x2145e4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2145E4u;
    {
        const bool branch_taken_0x2145e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145E4u;
        // 0x2145e8: 0x8c440d44  lw          $a0, 0xD44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145e4) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145ECu;
label_2145ec:
    // 0x2145ec: 0x8c430d28  lw          $v1, 0xD28($v0)
    ctx->pc = 0x2145ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3368)));
    // 0x2145f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2145F0u;
    {
        const bool branch_taken_0x2145f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145F0u;
        // 0x2145f4: 0x8c440d2c  lw          $a0, 0xD2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145f0) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x2145F8u;
label_2145f8:
    // 0x2145f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2145fc: 0x8c430d40  lw          $v1, 0xD40($v0)
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3392)));
    // 0x214600: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x214600u;
    {
        const bool branch_taken_0x214600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214600u;
        // 0x214604: 0x8c440d44  lw          $a0, 0xD44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214600) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214608u;
label_214608:
    // 0x214608: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21460c: 0x8c431924  lw          $v1, 0x1924($v0)
    ctx->pc = 0x21460cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6436)));
    // 0x214610: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x214610u;
    {
        const bool branch_taken_0x214610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214610u;
        // 0x214614: 0x8c441928  lw          $a0, 0x1928($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214610) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214618u;
label_214618:
    // 0x214618: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21461c: 0x8c433068  lw          $v1, 0x3068($v0)
    ctx->pc = 0x21461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12392)));
    // 0x214620: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x214620u;
    {
        const bool branch_taken_0x214620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214620u;
        // 0x214624: 0x8c44306c  lw          $a0, 0x306C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214620) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214628u;
label_214628:
    // 0x214628: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21462c: 0x8c43327c  lw          $v1, 0x327C($v0)
    ctx->pc = 0x21462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12924)));
    // 0x214630: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x214630u;
    {
        const bool branch_taken_0x214630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214630u;
        // 0x214634: 0x8c443280  lw          $a0, 0x3280($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214630) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214638u;
label_214638:
    // 0x214638: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x214638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x21463c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x21463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x214640: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214644u;
    {
        const bool branch_taken_0x214644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214644u;
        // 0x214648: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214644) {
            ctx->pc = 0x214658u;
            goto label_214658;
        }
    }
    ctx->pc = 0x21464Cu;
    // 0x21464c: 0x8c4338d0  lw          $v1, 0x38D0($v0)
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14544)));
    // 0x214650: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x214650u;
    {
        const bool branch_taken_0x214650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214650u;
        // 0x214654: 0x8c4438d4  lw          $a0, 0x38D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214650) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214658u;
label_214658:
    // 0x214658: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x214658u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x21465c: 0x8c433748  lw          $v1, 0x3748($v0)
    ctx->pc = 0x21465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14152)));
    // 0x214660: 0x8c44374c  lw          $a0, 0x374C($v0)
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14156)));
    // 0x214664: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x214664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x214668: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x214668u;
    {
        const bool branch_taken_0x214668 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x21466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214668u;
        // 0x21466c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214668) {
            ctx->pc = 0x2146A8u;
            goto label_2146a8;
        }
    }
    ctx->pc = 0x214670u;
    // 0x214670: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x214670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214674: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x214674u;
    SET_GPR_U32(ctx, 31, 0x21467Cu);
    ctx->pc = 0x214678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214674u;
    // 0x214678: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x214674u, 0x21467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21467Cu;
label_21467c:
    // 0x21467c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21467Cu;
    {
        const bool branch_taken_0x21467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21467c) {
            ctx->pc = 0x2146A8u;
            goto label_2146a8;
        }
    }
    ctx->pc = 0x214684u;
label_214684:
    // 0x214684: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214688: 0x8c4322a4  lw          $v1, 0x22A4($v0)
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8868)));
    // 0x21468c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21468Cu;
    {
        const bool branch_taken_0x21468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21468Cu;
        // 0x214690: 0x8c4422a8  lw          $a0, 0x22A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21468c) {
            ctx->pc = 0x2146A0u;
            goto label_2146a0;
        }
    }
    ctx->pc = 0x214694u;
label_214694:
    // 0x214694: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x214694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x214698: 0x8c432d5c  lw          $v1, 0x2D5C($v0)
    ctx->pc = 0x214698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11612)));
    // 0x21469c: 0x8c442d60  lw          $a0, 0x2D60($v0)
    ctx->pc = 0x21469cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11616)));
label_2146a0:
    // 0x2146a0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2146a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2146a4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2146a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2146a8:
    // 0x2146a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2146a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2146ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2146acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2146b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2146b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2146b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146bc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2146bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2146c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2146C0u;
    SET_GPR_U32(ctx, 31, 0x2146C8u);
    ctx->pc = 0x2146C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146C0u;
    // 0x2146c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2146C0u, 0x2146C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146C8u;
label_2146c8:
    // 0x2146c8: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x2146c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2146cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2146ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2146d0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2146d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2146d4: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x2146d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
label_2146d8:
    // 0x2146d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2146d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2146dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2146e0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2146E0u;
    SET_GPR_U32(ctx, 31, 0x2146E8u);
    ctx->pc = 0x2146E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146E0u;
    // 0x2146e4: 0xae4216d4  sw          $v0, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2146E0u, 0x2146E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146E8u;
label_2146e8:
    // 0x2146e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2146E8u;
    {
        const bool branch_taken_0x2146e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2146e8) {
            ctx->pc = 0x2146ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2146E8u;
            // 0x2146ec: 0xc64c0600  lwc1        $f12, 0x600($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x21470Cu;
            goto label_21470c;
        }
    }
    ctx->pc = 0x2146F0u;
    // 0x2146f0: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2146F0u;
    SET_GPR_U32(ctx, 31, 0x2146F8u);
    ctx->pc = 0x2146F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2146F0u;
    // 0x2146f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2146F0u, 0x2146F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2146F8u;
label_2146f8:
    // 0x2146f8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2146F8u;
    {
        const bool branch_taken_0x2146f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2146FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146F8u;
        // 0x2146fc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146f8) {
            ctx->pc = 0x2147B8u;
            goto label_2147b8;
        }
    }
    ctx->pc = 0x214700u;
    // 0x214700: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x214700u;
    SET_GPR_U32(ctx, 31, 0x214708u);
    ctx->pc = 0x214704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214700u;
    // 0x214704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x214700u, 0x214708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214708u;
label_214708:
    // 0x214708: 0xc64c0600  lwc1        $f12, 0x600($s2)
    ctx->pc = 0x214708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21470c:
    // 0x21470c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x21470Cu;
    SET_GPR_U32(ctx, 31, 0x214714u);
    ctx->pc = 0x214710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21470Cu;
    // 0x214710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x21470Cu, 0x214714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214714u;
label_214714:
    // 0x214714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x214714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21471c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x21471Cu;
    SET_GPR_U32(ctx, 31, 0x214724u);
    ctx->pc = 0x214720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21471Cu;
    // 0x214720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x21471Cu, 0x214724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214724u;
label_214724:
    // 0x214724: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x214724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
label_214728:
    // 0x214728: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x214728u;
    {
        const bool branch_taken_0x214728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214728u;
        // 0x21472c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214728) {
            ctx->pc = 0x2147B8u;
            goto label_2147b8;
        }
    }
    ctx->pc = 0x214730u;
    // 0x214730: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x214730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x214734: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x214734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214738: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x214738u;
    SET_GPR_U32(ctx, 31, 0x214740u);
    ctx->pc = 0x21473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214738u;
    // 0x21473c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x214738u, 0x214740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214740u;
label_214740:
    // 0x214740: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x214744: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x214744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x214748: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214748u;
    {
        const bool branch_taken_0x214748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214748u;
        // 0x21474c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214748) {
            ctx->pc = 0x214768u;
            goto label_214768;
        }
    }
    ctx->pc = 0x214750u;
    // 0x214750: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x214750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x214754: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x214754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x214758: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x214758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21475c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214760: 0x800008  jr          $a0
    ctx->pc = 0x214760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214768u: goto label_214768;
            case 0x214774u: goto label_214774;
            case 0x214780u: goto label_214780;
            case 0x21478Cu: goto label_21478c;
            case 0x214798u: goto label_214798;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214760u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x214768u;
label_214768:
    // 0x214768: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x214768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
    // 0x21476c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x21476Cu;
    {
        const bool branch_taken_0x21476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21476Cu;
        // 0x214770: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21476c) {
            ctx->pc = 0x2147A4u;
            goto label_2147a4;
        }
    }
    ctx->pc = 0x214774u;
label_214774:
    // 0x214774: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x214774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
    // 0x214778: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x214778u;
    {
        const bool branch_taken_0x214778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214778u;
        // 0x21477c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214778) {
            ctx->pc = 0x2147A0u;
            goto label_2147a0;
        }
    }
    ctx->pc = 0x214780u;
label_214780:
    // 0x214780: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
    // 0x214784: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x214784u;
    {
        const bool branch_taken_0x214784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214784u;
        // 0x214788: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214784) {
            ctx->pc = 0x2147A0u;
            goto label_2147a0;
        }
    }
    ctx->pc = 0x21478Cu;
label_21478c:
    // 0x21478c: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x21478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
    // 0x214790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x214790u;
    {
        const bool branch_taken_0x214790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214790u;
        // 0x214794: 0x2c420003  sltiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214790) {
            ctx->pc = 0x2147A0u;
            goto label_2147a0;
        }
    }
    ctx->pc = 0x214798u;
label_214798:
    // 0x214798: 0x8e4216d8  lw          $v0, 0x16D8($s2)
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5848)));
    // 0x21479c: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x21479cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
label_2147a0:
    // 0x2147a0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2147a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2147a4:
    // 0x2147a4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2147A4u;
    {
        const bool branch_taken_0x2147a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2147A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147A4u;
        // 0x2147a8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147a4) {
            ctx->pc = 0x2147B8u;
            goto label_2147b8;
        }
    }
    ctx->pc = 0x2147ACu;
    // 0x2147ac: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2147ACu;
    SET_GPR_U32(ctx, 31, 0x2147B4u);
    ctx->pc = 0x2147B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147ACu;
    // 0x2147b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2147ACu, 0x2147B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147B4u;
label_2147b4:
    // 0x2147b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2147b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2147b8:
    // 0x2147b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2147b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2147bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2147bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2147c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2147c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2147c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2147c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2147c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2147C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2147CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147C8u;
        // 0x2147cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2147C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2147D0u;
}
