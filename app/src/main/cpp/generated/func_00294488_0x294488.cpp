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

// Function: func_00294488
// Address: 0x294488 - 0x294898
void func_00294488_0x294488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294488_0x294488");
#endif

    switch (ctx->pc) {
        case 0x2944bcu: goto label_2944bc;
        case 0x2944e8u: goto label_2944e8;
        case 0x294508u: goto label_294508;
        case 0x294548u: goto label_294548;
        case 0x294558u: goto label_294558;
        case 0x2945a8u: goto label_2945a8;
        case 0x294604u: goto label_294604;
        case 0x294614u: goto label_294614;
        case 0x294650u: goto label_294650;
        case 0x294674u: goto label_294674;
        case 0x294684u: goto label_294684;
        case 0x29469cu: goto label_29469c;
        case 0x2946acu: goto label_2946ac;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946d4u: goto label_2946d4;
        case 0x2946ecu: goto label_2946ec;
        case 0x2946fcu: goto label_2946fc;
        case 0x294714u: goto label_294714;
        case 0x294724u: goto label_294724;
        case 0x294728u: goto label_294728;
        default: break;
    }

    ctx->pc = 0x294488u;

    // 0x294488: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x294488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x29448c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x29448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x294490: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x294490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294494: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x294494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x294498: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x294498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x29449c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x29449cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2944a0: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2944a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2944a4: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x2944a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x2944a8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2944a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2944ac: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2944acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2944b0: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2944b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2944b4: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x2944B4u;
    SET_GPR_U32(ctx, 31, 0x2944BCu);
    ctx->pc = 0x2944B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2944B4u;
    // 0x2944b8: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x2944B4u, 0x2944BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2944BCu;
label_2944bc:
    // 0x2944bc: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x2944BCu;
    {
        const bool branch_taken_0x2944bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2944C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944BCu;
        // 0x2944c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944bc) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x2944C4u;
    // 0x2944c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2944c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2944c8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2944c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x2944cc: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2944CCu;
    {
        const bool branch_taken_0x2944cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2944D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944CCu;
        // 0x2944d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944cc) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x2944D4u;
    // 0x2944d4: 0x26140574  addiu       $s4, $s0, 0x574
    ctx->pc = 0x2944d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1396));
    // 0x2944d8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2944d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2944dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2944dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2944e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2944e4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2944e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2944e8:
    // 0x2944e8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2944e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2944ec: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x2944ECu;
    {
        const bool branch_taken_0x2944ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2944ec) {
            ctx->pc = 0x2944F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2944ECu;
            // 0x2944f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294564u;
            goto label_294564;
        }
    }
    ctx->pc = 0x2944F4u;
    // 0x2944f4: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x2944f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x2944f8: 0x5840001a  blezl       $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2944F8u;
    {
        const bool branch_taken_0x2944f8 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2944f8) {
            ctx->pc = 0x2944FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2944F8u;
            // 0x2944fc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294564u;
            goto label_294564;
        }
    }
    ctx->pc = 0x294500u;
    // 0x294500: 0xc09bcc2  jal         func_26F308
    ctx->pc = 0x294500u;
    SET_GPR_U32(ctx, 31, 0x294508u);
    ctx->pc = 0x294504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294500u;
    // 0x294504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F308u, 0x294500u, 0x294508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294508u;
label_294508:
    // 0x294508: 0x144000d9  bnez        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x294508u;
    {
        const bool branch_taken_0x294508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294508u;
        // 0x29450c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294508) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x294510u;
    // 0x294510: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x294510u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x294514: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x294514u;
    {
        const bool branch_taken_0x294514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294514u;
        // 0x294518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294514) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x29451Cu;
    // 0x29451c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x29451cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x294520: 0x3042090c  andi        $v0, $v0, 0x90C
    ctx->pc = 0x294520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2316);
    // 0x294524: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x294524u;
    {
        const bool branch_taken_0x294524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294524u;
        // 0x294528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294524) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x29452Cu;
    // 0x29452c: 0xc600054c  lwc1        $f0, 0x54C($s0)
    ctx->pc = 0x29452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294530: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x294530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x294534: 0x0  nop
    ctx->pc = 0x294534u;
    // NOP
    // 0x294538: 0x450300ce  bc1tl       . + 4 + (0xCE << 2)
    ctx->pc = 0x294538u;
    {
        const bool branch_taken_0x294538 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294538) {
            ctx->pc = 0x29453Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294538u;
            // 0x29453c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294874u;
            goto label_294874;
        }
    }
    ctx->pc = 0x294540u;
    // 0x294540: 0xc09bcc2  jal         func_26F308
    ctx->pc = 0x294540u;
    SET_GPR_U32(ctx, 31, 0x294548u);
    ctx->pc = 0x294544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294540u;
    // 0x294544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F308u, 0x294540u, 0x294548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294548u;
label_294548:
    // 0x294548: 0x144000c9  bnez        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x294548u;
    {
        const bool branch_taken_0x294548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294548u;
        // 0x29454c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294548) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x294550u;
    // 0x294550: 0xc09cfb8  jal         func_273EE0
    ctx->pc = 0x294550u;
    SET_GPR_U32(ctx, 31, 0x294558u);
    ctx->pc = 0x294554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294550u;
    // 0x294554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273EE0u, 0x294550u, 0x294558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294558u;
label_294558:
    // 0x294558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294558u;
    {
        const bool branch_taken_0x294558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294558u;
        // 0x29455c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294558) {
            ctx->pc = 0x29457Cu;
            goto label_29457c;
        }
    }
    ctx->pc = 0x294560u;
    // 0x294560: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294564:
    // 0x294564: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x294564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294568: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x294568u;
    {
        const bool branch_taken_0x294568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294568u;
        // 0x29456c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294568) {
            ctx->pc = 0x2944E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2944e8;
        }
    }
    ctx->pc = 0x294570u;
    // 0x294570: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x294570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x294574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294574u;
    {
        const bool branch_taken_0x294574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294574u;
        // 0x294578: 0x27a20030  addiu       $v0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294574) {
            ctx->pc = 0x294584u;
            goto label_294584;
        }
    }
    ctx->pc = 0x29457Cu;
label_29457c:
    // 0x29457c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x29457Cu;
    {
        const bool branch_taken_0x29457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29457Cu;
        // 0x294580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29457c) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x294584u;
label_294584:
    // 0x294584: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x294584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x294588: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x294588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x29458c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x29458cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x294590: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x294590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x294594: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x294594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x294598: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x294598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x29459c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x29459cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2945a0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2945A0u;
    SET_GPR_U32(ctx, 31, 0x2945A8u);
    ctx->pc = 0x2945A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945A0u;
    // 0x2945a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2945A0u, 0x2945A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945A8u;
label_2945a8:
    // 0x2945a8: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x2945a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2945ac: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2945acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2945b0: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2945B0u;
    {
        const bool branch_taken_0x2945b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2945B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945B0u;
        // 0x2945b4: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945b0) {
            ctx->pc = 0x2945D4u;
            goto label_2945d4;
        }
    }
    ctx->pc = 0x2945B8u;
    // 0x2945b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2945b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945bc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2945bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2945c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2945c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2945c4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2945c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2945c8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2945c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945cc: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2945ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2945d0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x2945d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2945d4:
    // 0x2945d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2945d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2945d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2945d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2945dc: 0x3c0141b8  lui         $at, 0x41B8
    ctx->pc = 0x2945dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16824 << 16));
    // 0x2945e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2945e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2945e4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2945e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2945e8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2945e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2945ec: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2945ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2945f0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2945f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2945f4: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x2945f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2945f8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2945f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2945fc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2945FCu;
    SET_GPR_U32(ctx, 31, 0x294604u);
    ctx->pc = 0x294600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945FCu;
    // 0x294600: 0xe7b40094  swc1        $f20, 0x94($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2945FCu, 0x294604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294604u;
label_294604:
    // 0x294604: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x294608: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x294608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29460c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29460Cu;
    SET_GPR_U32(ctx, 31, 0x294614u);
    ctx->pc = 0x294610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29460Cu;
    // 0x294610: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29460Cu, 0x294614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294614u;
label_294614:
    // 0x294614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29461c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29461cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x294620: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x294624: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x294624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x294628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29462c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29462cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x294630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x294630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294634: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x294634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x294638: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29463c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x29463cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x294640: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x294640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294644: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x294644u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294648: 0xc04c784  jal         func_131E10
    ctx->pc = 0x294648u;
    SET_GPR_U32(ctx, 31, 0x294650u);
    ctx->pc = 0x29464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294648u;
    // 0x29464c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x294648u, 0x294650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294650u;
label_294650:
    // 0x294650: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x294650u;
    {
        const bool branch_taken_0x294650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294650u;
        // 0x294654: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294650) {
            ctx->pc = 0x294870u;
            goto label_294870;
        }
    }
    ctx->pc = 0x294658u;
    // 0x294658: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x294658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x29465c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294660: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x294660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294664: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x294664u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x294668: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x294668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29466c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29466Cu;
    SET_GPR_U32(ctx, 31, 0x294674u);
    ctx->pc = 0x294670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29466Cu;
    // 0x294670: 0xe7b40034  swc1        $f20, 0x34($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29466Cu, 0x294674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294674u;
label_294674:
    // 0x294674: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x294674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x294678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29467c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29467Cu;
    SET_GPR_U32(ctx, 31, 0x294684u);
    ctx->pc = 0x294680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29467Cu;
    // 0x294680: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29467Cu, 0x294684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294684u;
label_294684:
    // 0x294684: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x294688: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29468c: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x29468cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x294690: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x294690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x294694: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x294694u;
    SET_GPR_U32(ctx, 31, 0x29469Cu);
    ctx->pc = 0x294698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294694u;
    // 0x294698: 0xe7b40044  swc1        $f20, 0x44($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x294694u, 0x29469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29469Cu;
label_29469c:
    // 0x29469c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2946a0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2946a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2946a4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2946A4u;
    SET_GPR_U32(ctx, 31, 0x2946ACu);
    ctx->pc = 0x2946A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946A4u;
    // 0x2946a8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2946A4u, 0x2946ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946ACu;
label_2946ac:
    // 0x2946ac: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2946acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2946b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2946b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2946b4: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x2946b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2946b8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2946b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2946bc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2946BCu;
    SET_GPR_U32(ctx, 31, 0x2946C4u);
    ctx->pc = 0x2946C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946BCu;
    // 0x2946c0: 0xe7b40054  swc1        $f20, 0x54($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2946BCu, 0x2946C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946C4u;
label_2946c4:
    // 0x2946c4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2946c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2946c8: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2946c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2946cc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2946CCu;
    SET_GPR_U32(ctx, 31, 0x2946D4u);
    ctx->pc = 0x2946D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946CCu;
    // 0x2946d0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2946CCu, 0x2946D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946D4u;
label_2946d4:
    // 0x2946d4: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x2946d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x2946d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2946d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2946dc: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x2946dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2946e0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2946e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2946e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2946E4u;
    SET_GPR_U32(ctx, 31, 0x2946ECu);
    ctx->pc = 0x2946E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946E4u;
    // 0x2946e8: 0xe7b40064  swc1        $f20, 0x64($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2946E4u, 0x2946ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946ECu;
label_2946ec:
    // 0x2946ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2946ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2946f0: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x2946f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2946f4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2946F4u;
    SET_GPR_U32(ctx, 31, 0x2946FCu);
    ctx->pc = 0x2946F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2946F4u;
    // 0x2946f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2946F4u, 0x2946FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2946FCu;
label_2946fc:
    // 0x2946fc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2946fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x294700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294704: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x294704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x294708: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x294708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29470c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x29470Cu;
    SET_GPR_U32(ctx, 31, 0x294714u);
    ctx->pc = 0x294710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29470Cu;
    // 0x294710: 0xe7a00078  swc1        $f0, 0x78($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x29470Cu, 0x294714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294714u;
label_294714:
    // 0x294714: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x294714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x294718: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x294718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x29471c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x29471Cu;
    SET_GPR_U32(ctx, 31, 0x294724u);
    ctx->pc = 0x294720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29471Cu;
    // 0x294720: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x29471Cu, 0x294724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294724u;
label_294724:
    // 0x294724: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_294728:
    // 0x294728: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x294728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29472c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x29472cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x294730: 0x5200004b  beql        $s0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x294730u;
    {
        const bool branch_taken_0x294730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x294730) {
            ctx->pc = 0x294734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294730u;
            // 0x294734: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294860u;
            goto label_294860;
        }
    }
    ctx->pc = 0x294738u;
    // 0x294738: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x294738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x29473c: 0x58400048  blezl       $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x29473Cu;
    {
        const bool branch_taken_0x29473c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x29473c) {
            ctx->pc = 0x294740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29473Cu;
            // 0x294740: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294860u;
            goto label_294860;
        }
    }
    ctx->pc = 0x294744u;
    // 0x294744: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x294744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x294748: 0x2444fd90  addiu       $a0, $v0, -0x270
    ctx->pc = 0x294748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966672));
    // 0x29474c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x29474cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294750: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x294750u;
    {
        const bool branch_taken_0x294750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x294754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294750u;
        // 0x294754: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294750) {
            ctx->pc = 0x294770u;
            goto label_294770;
        }
    }
    ctx->pc = 0x294758u;
    // 0x294758: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x29475c: 0x2442a830  addiu       $v0, $v0, -0x57D0
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944816));
    // 0x294760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x294760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x294764: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x294768: 0x800008  jr          $a0
    ctx->pc = 0x294768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294770u: goto label_294770;
            case 0x294798u: goto label_294798;
            case 0x2947C0u: goto label_2947c0;
            case 0x2947E8u: goto label_2947e8;
            case 0x294810u: goto label_294810;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294768u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x294770u;
label_294770:
    // 0x294770: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x294770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x294774: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x294774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x294778: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x294778u;
    {
        const bool branch_taken_0x294778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294778u;
        // 0x29477c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294778) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x294780u;
    // 0x294780: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x294780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294784: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x294784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294788: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x294788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29478c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x29478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294790: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x294790u;
    {
        const bool branch_taken_0x294790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294790u;
        // 0x294794: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294790) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x294798u;
label_294798:
    // 0x294798: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x294798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x29479c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x29479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2947a0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2947A0u;
    {
        const bool branch_taken_0x2947a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2947A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947A0u;
        // 0x2947a4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947a0) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x2947A8u;
    // 0x2947a8: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2947a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2947ac: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2947acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2947b0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2947b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2947b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2947b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2947b8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2947B8u;
    {
        const bool branch_taken_0x2947b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947B8u;
        // 0x2947bc: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947b8) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x2947C0u;
label_2947c0:
    // 0x2947c0: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2947c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2947c4: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2947c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2947c8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2947C8u;
    {
        const bool branch_taken_0x2947c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2947CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947C8u;
        // 0x2947cc: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947c8) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x2947D0u;
    // 0x2947d0: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2947d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2947d4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2947d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2947d8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2947d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2947dc: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2947dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2947e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2947E0u;
    {
        const bool branch_taken_0x2947e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2947E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947E0u;
        // 0x2947e4: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947e0) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x2947E8u;
label_2947e8:
    // 0x2947e8: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2947e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2947ec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x2947ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2947f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2947F0u;
    {
        const bool branch_taken_0x2947f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2947F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2947F0u;
        // 0x2947f4: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947f0) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x2947F8u;
    // 0x2947f8: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2947f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2947fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2947fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294800: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x294800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x294804: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x294804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294808: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x294808u;
    {
        const bool branch_taken_0x294808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294808u;
        // 0x29480c: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294808) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x294810u;
label_294810:
    // 0x294810: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x294810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x294814: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x294814u;
    {
        const bool branch_taken_0x294814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x294818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294814u;
        // 0x294818: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294814) {
            ctx->pc = 0x294830u;
            goto label_294830;
        }
    }
    ctx->pc = 0x29481Cu;
    // 0x29481c: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x29481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x294820: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x294820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294824: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x294824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x294828: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x294828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29482c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x29482cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_294830:
    // 0x294830: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x294830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x294834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294838: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29483c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x29483cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x294840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x294840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x294844: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x294844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x294848: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x294848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x29484c: 0xe6001720  swc1        $f0, 0x1720($s0)
    ctx->pc = 0x29484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5920), bits); }
    // 0x294850: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x294850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x294854: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x294854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x294858: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x294858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x29485c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29485cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_294860:
    // 0x294860: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x294860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x294864: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x294864u;
    {
        const bool branch_taken_0x294864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294864u;
        // 0x294868: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294864) {
            ctx->pc = 0x294728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294728;
        }
    }
    ctx->pc = 0x29486Cu;
    // 0x29486c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294870:
    // 0x294870: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x294870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_294874:
    // 0x294874: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x294874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x294878: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x294878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29487c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x29487cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x294880: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x294880u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x294884: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x294884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x294888: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x294888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29488c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x29488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x294890: 0x3e00008  jr          $ra
    ctx->pc = 0x294890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294890u;
        // 0x294894: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294898u;
}
