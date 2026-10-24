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

// Function: func_002EC398
// Address: 0x2ec398 - 0x2edea0
void func_002EC398_0x2ec398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EC398_0x2ec398");
#endif

    switch (ctx->pc) {
        case 0x2ec428u: goto label_2ec428;
        case 0x2ec484u: goto label_2ec484;
        case 0x2ec58cu: goto label_2ec58c;
        case 0x2ec5c0u: goto label_2ec5c0;
        case 0x2ec5d0u: goto label_2ec5d0;
        case 0x2ec8e4u: goto label_2ec8e4;
        case 0x2ec974u: goto label_2ec974;
        case 0x2eca4cu: goto label_2eca4c;
        case 0x2ecaecu: goto label_2ecaec;
        case 0x2ecb48u: goto label_2ecb48;
        case 0x2ecc94u: goto label_2ecc94;
        case 0x2ecca0u: goto label_2ecca0;
        case 0x2eccb0u: goto label_2eccb0;
        case 0x2eccf0u: goto label_2eccf0;
        case 0x2ecd00u: goto label_2ecd00;
        case 0x2ecd0cu: goto label_2ecd0c;
        case 0x2ece74u: goto label_2ece74;
        case 0x2ece84u: goto label_2ece84;
        case 0x2ece90u: goto label_2ece90;
        case 0x2ecfb4u: goto label_2ecfb4;
        case 0x2ed098u: goto label_2ed098;
        case 0x2ed170u: goto label_2ed170;
        case 0x2ed234u: goto label_2ed234;
        case 0x2ed268u: goto label_2ed268;
        case 0x2ed278u: goto label_2ed278;
        case 0x2ed5a0u: goto label_2ed5a0;
        case 0x2ed630u: goto label_2ed630;
        case 0x2ed708u: goto label_2ed708;
        case 0x2ed7a8u: goto label_2ed7a8;
        case 0x2ed808u: goto label_2ed808;
        case 0x2ed954u: goto label_2ed954;
        case 0x2ed960u: goto label_2ed960;
        case 0x2ed970u: goto label_2ed970;
        case 0x2ed9b0u: goto label_2ed9b0;
        case 0x2ed9c0u: goto label_2ed9c0;
        case 0x2ed9ccu: goto label_2ed9cc;
        case 0x2edb3cu: goto label_2edb3c;
        case 0x2edb4cu: goto label_2edb4c;
        case 0x2edb58u: goto label_2edb58;
        case 0x2edc84u: goto label_2edc84;
        case 0x2edd68u: goto label_2edd68;
        case 0x2ede60u: goto label_2ede60;
        default: break;
    }

    ctx->pc = 0x2ec398u;

    // 0x2ec398: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2ec398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2ec39c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2ec39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2ec3a0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x2ec3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x2ec3a4: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x2ec3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x2ec3a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ec3a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec3ac: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x2ec3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x2ec3b0: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x2ec3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x2ec3b4: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x2ec3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x2ec3b8: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x2ec3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x2ec3bc: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x2ec3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x2ec3c0: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x2ec3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x2ec3c4: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x2ec3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x2ec3c8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2ec3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2ec3cc: 0xe7b601e0  swc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2ec3ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x2ec3d0: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2ec3d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x2ec3d4: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2ec3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2ec3d8: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2ec3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ec3dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ec3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ec3e0: 0x144006a0  bnez        $v0, . + 4 + (0x6A0 << 2)
    ctx->pc = 0x2EC3E0u;
    {
        const bool branch_taken_0x2ec3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3E0u;
        // 0x2ec3e4: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3e0) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EC3E8u;
    // 0x2ec3e8: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2ec3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2ec3ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC3ECu;
    {
        const bool branch_taken_0x2ec3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec3ec) {
            ctx->pc = 0x2EC3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC3ECu;
            // 0x2ec3f0: 0x8e3002e4  lw          $s0, 0x2E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC414u;
            goto label_2ec414;
        }
    }
    ctx->pc = 0x2EC3F4u;
    // 0x2ec3f4: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2ec3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2ec3f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ec3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ec3fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC3FCu;
    {
        const bool branch_taken_0x2ec3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC3FCu;
        // 0x2ec400: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec3fc) {
            ctx->pc = 0x2EC410u;
            goto label_2ec410;
        }
    }
    ctx->pc = 0x2EC404u;
    // 0x2ec404: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec408: 0x50400697  beql        $v0, $zero, . + 4 + (0x697 << 2)
    ctx->pc = 0x2EC408u;
    {
        const bool branch_taken_0x2ec408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec408) {
            ctx->pc = 0x2EC40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC408u;
            // 0x2ec40c: 0x7bb101b0  lq          $s1, 0x1B0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDE68u;
            goto label_2ede68;
        }
    }
    ctx->pc = 0x2EC410u;
label_2ec410:
    // 0x2ec410: 0x8e3002e4  lw          $s0, 0x2E4($s1)
    ctx->pc = 0x2ec410u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_2ec414:
    // 0x2ec414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec418: 0x52020005  beql        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC418u;
    {
        const bool branch_taken_0x2ec418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec418) {
            ctx->pc = 0x2EC41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC418u;
            // 0x2ec41c: 0x9222024c  lbu         $v0, 0x24C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC430u;
            goto label_2ec430;
        }
    }
    ctx->pc = 0x2EC420u;
    // 0x2ec420: 0xc0bb7dc  jal         func_2EDF70
    ctx->pc = 0x2EC420u;
    SET_GPR_U32(ctx, 31, 0x2EC428u);
    ctx->pc = 0x2EC424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC420u;
    // 0x2ec424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF70u, 0x2EC420u, 0x2EC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC428u;
label_2ec428:
    // 0x2ec428: 0x1000068e  b           . + 4 + (0x68E << 2)
    ctx->pc = 0x2EC428u;
    {
        const bool branch_taken_0x2ec428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC428u;
        // 0x2ec42c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec428) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2EC430u;
label_2ec430:
    // 0x2ec430: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec434: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ec434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2ec438: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EC438u;
    {
        const bool branch_taken_0x2ec438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC438u;
        // 0x2ec43c: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec438) {
            ctx->pc = 0x2EC464u;
            goto label_2ec464;
        }
    }
    ctx->pc = 0x2EC440u;
    // 0x2ec440: 0x9223024d  lbu         $v1, 0x24D($s1)
    ctx->pc = 0x2ec440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 589)));
    // 0x2ec444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ec444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec448: 0x0  nop
    ctx->pc = 0x2ec448u;
    // NOP
    // 0x2ec44c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec450: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ec450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec458: 0x0  nop
    ctx->pc = 0x2ec458u;
    // NOP
    // 0x2ec45c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec460: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2ec460u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2ec464:
    // 0x2ec464: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EC464u;
    {
        const bool branch_taken_0x2ec464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC464u;
        // 0x2ec468: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec464) {
            ctx->pc = 0x2EC498u;
            goto label_2ec498;
        }
    }
    ctx->pc = 0x2EC46Cu;
    // 0x2ec46c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2ec46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ec470: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2ec470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2ec474: 0x4620007  bltzl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC474u;
    {
        const bool branch_taken_0x2ec474 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2ec474) {
            ctx->pc = 0x2EC478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC474u;
            // 0x2ec478: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC494u;
            goto label_2ec494;
        }
    }
    ctx->pc = 0x2EC47Cu;
    // 0x2ec47c: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2EC47Cu;
    SET_GPR_U32(ctx, 31, 0x2EC484u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2EC47Cu, 0x2EC484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC484u;
label_2ec484:
    // 0x2ec484: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC484u;
    {
        const bool branch_taken_0x2ec484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2EC488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC484u;
        // 0x2ec488: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec484) {
            ctx->pc = 0x2EC498u;
            goto label_2ec498;
        }
    }
    ctx->pc = 0x2EC48Cu;
    // 0x2ec48c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC48Cu;
    {
        const bool branch_taken_0x2ec48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC48Cu;
        // 0x2ec490: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec48c) {
            ctx->pc = 0x2EC498u;
            goto label_2ec498;
        }
    }
    ctx->pc = 0x2EC494u;
label_2ec494:
    // 0x2ec494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ec494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec498:
    // 0x2ec498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec49c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC49Cu;
    {
        const bool branch_taken_0x2ec49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ec49c) {
            ctx->pc = 0x2EC4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC49Cu;
            // 0x2ec4a0: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC4C4u;
            goto label_2ec4c4;
        }
    }
    ctx->pc = 0x2EC4A4u;
    // 0x2ec4a4: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2ec4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2ec4a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2ec4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ec4ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ec4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ec4b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ec4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ec4b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC4B4u;
    {
        const bool branch_taken_0x2ec4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4B4u;
        // 0x2ec4b8: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4b4) {
            ctx->pc = 0x2EC4C4u;
            goto label_2ec4c4;
        }
    }
    ctx->pc = 0x2EC4BCu;
    // 0x2ec4bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ec4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec4c0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2ec4c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2ec4c4:
    // 0x2ec4c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2ec4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2ec4c8: 0x1040032b  beqz        $v0, . + 4 + (0x32B << 2)
    ctx->pc = 0x2EC4C8u;
    {
        const bool branch_taken_0x2ec4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4C8u;
        // 0x2ec4cc: 0x24030060  addiu       $v1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4c8) {
            ctx->pc = 0x2ED178u;
            goto label_2ed178;
        }
    }
    ctx->pc = 0x2EC4D0u;
    // 0x2ec4d0: 0x82240249  lb          $a0, 0x249($s1)
    ctx->pc = 0x2ec4d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ec4d4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2ec4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2ec4d8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2ec4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ec4dc: 0x24a274a0  addiu       $v0, $a1, 0x74A0
    ctx->pc = 0x2ec4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x2ec4e0: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x2ec4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2ec4e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ec4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ec4e8: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x2ec4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2ec4ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC4ECu;
    {
        const bool branch_taken_0x2ec4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4ECu;
        // 0x2ec4f0: 0x24930030  addiu       $s3, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4ec) {
            ctx->pc = 0x2EC4FCu;
            goto label_2ec4fc;
        }
    }
    ctx->pc = 0x2EC4F4u;
    // 0x2ec4f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC4F4u;
    {
        const bool branch_taken_0x2ec4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC4F4u;
        // 0x2ec4f8: 0x8e3e02cc  lw          $fp, 0x2CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec4f4) {
            ctx->pc = 0x2EC500u;
            goto label_2ec500;
        }
    }
    ctx->pc = 0x2EC4FCu;
label_2ec4fc:
    // 0x2ec4fc: 0x8e3e02d0  lw          $fp, 0x2D0($s1)
    ctx->pc = 0x2ec4fcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
label_2ec500:
    // 0x2ec500: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2ec500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2ec504: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2ec504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2ec508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ec508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ec50c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ec50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ec510: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ec510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ec514: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x2ec514u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x2ec518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ec518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ec51c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ec51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ec520: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ec520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ec524: 0x34048172  ori         $a0, $zero, 0x8172
    ctx->pc = 0x2ec524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x2ec528: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2ec528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2ec52c: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2ec52cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2ec530: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x2ec530u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x2ec534: 0x27d20010  addiu       $s2, $fp, 0x10
    ctx->pc = 0x2ec534u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2ec538: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x2ec538u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2ec53c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ec53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ec540: 0xffc40010  sd          $a0, 0x10($fp)
    ctx->pc = 0x2ec540u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 4));
    // 0x2ec544: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ec544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ec548: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2ec548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2ec54c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ec550: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ec550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ec554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC554u;
    {
        const bool branch_taken_0x2ec554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec554) {
            ctx->pc = 0x2EC56Cu;
            goto label_2ec56c;
        }
    }
    ctx->pc = 0x2EC55Cu;
    // 0x2ec55c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ec560: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ec560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ec564: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EC564u;
    {
        const bool branch_taken_0x2ec564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC564u;
        // 0x2ec568: 0xfe420010  sd          $v0, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec564) {
            ctx->pc = 0x2EC578u;
            goto label_2ec578;
        }
    }
    ctx->pc = 0x2EC56Cu;
label_2ec56c:
    // 0x2ec56c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2ec56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2ec570: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ec570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ec574: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2ec574u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_2ec578:
    // 0x2ec578: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ec57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec580: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x2ec580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x2ec584: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2EC584u;
    SET_GPR_U32(ctx, 31, 0x2EC58Cu);
    ctx->pc = 0x2EC588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC584u;
    // 0x2ec588: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2EC584u, 0x2EC58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC58Cu;
label_2ec58c:
    // 0x2ec58c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ec590: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x2ec590u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
    // 0x2ec594: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x2ec594u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x2ec598: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2ec598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2ec59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ec59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec5a0: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2ec5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2ec5a4: 0x82220101  lb          $v0, 0x101($s1)
    ctx->pc = 0x2ec5a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
    // 0x2ec5a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ec5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec5ac: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x2ec5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2ec5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5b4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ec5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ec5b8: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2EC5B8u;
    SET_GPR_U32(ctx, 31, 0x2EC5C0u);
    ctx->pc = 0x2EC5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5B8u;
    // 0x2ec5bc: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2EC5B8u, 0x2EC5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5C0u;
label_2ec5c0:
    // 0x2ec5c0: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2ec5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x2ec5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec5c8: 0xc0544da  jal         func_151368
    ctx->pc = 0x2EC5C8u;
    SET_GPR_U32(ctx, 31, 0x2EC5D0u);
    ctx->pc = 0x2EC5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC5C8u;
    // 0x2ec5cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2EC5C8u, 0x2EC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC5D0u;
label_2ec5d0:
    // 0x2ec5d0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ec5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ec5d4: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2ec5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x2ec5d8: 0xfe440048  sd          $a0, 0x48($s2)
    ctx->pc = 0x2ec5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 4));
    // 0x2ec5dc: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2ec5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2ec5e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ec5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ec5e4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ec5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ec5e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC5E8u;
    {
        const bool branch_taken_0x2ec5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5E8u;
        // 0x2ec5ec: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5e8) {
            ctx->pc = 0x2EC600u;
            goto label_2ec600;
        }
    }
    ctx->pc = 0x2EC5F0u;
    // 0x2ec5f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ec5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ec5f4: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ec5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ec5f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC5F8u;
    {
        const bool branch_taken_0x2ec5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC5F8u;
        // 0x2ec5fc: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec5f8) {
            ctx->pc = 0x2EC614u;
            goto label_2ec614;
        }
    }
    ctx->pc = 0x2EC600u;
label_2ec600:
    // 0x2ec600: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ec600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ec604: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ec604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ec608: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2ec608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ec60c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ec60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ec610: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2ec610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2ec614:
    // 0x2ec614: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2ec614u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ec618: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ec618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ec61c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2ec61cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ec620: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ec620u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ec624: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ec624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ec628: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ec628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ec62c: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x2ec62cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x2ec630: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ec630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ec634: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2ec634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2ec638: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ec638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ec63c: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x2ec63cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
    // 0x2ec640: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2ec640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ec644: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2ec644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ec648: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2ec648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ec64c: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2ec64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ec650: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2ec650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec654: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2ec654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec658: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2ec658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec65c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2ec65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec660: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2ec660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ec664: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2ec664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec668: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2ec668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec66c: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2ec66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec670: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2ec670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2ec674: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2ec674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec678: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ec678u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ec67c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ec67cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ec680: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ec680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ec684: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2ec684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ec688: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ec688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ec68c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2ec68cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ec690: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2ec690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ec694: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2ec694u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ec698: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2ec698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ec69c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2ec69cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ec6a0: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2ec6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ec6a4: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x2ec6a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ec6a8: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x2ec6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ec6ac: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2ec6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec6b0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2ec6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec6b4: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2ec6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec6b8: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2ec6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ec6bc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6c0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ec6c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec6c4: 0x0  nop
    ctx->pc = 0x2ec6c4u;
    // NOP
    // 0x2ec6c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC6C8u;
    {
        const bool branch_taken_0x2ec6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec6c8) {
            ctx->pc = 0x2EC6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC6C8u;
            // 0x2ec6cc: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC6D0u;
            goto label_2ec6d0;
        }
    }
    ctx->pc = 0x2EC6D0u;
label_2ec6d0:
    // 0x2ec6d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ec6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6d4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ec6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec6d8: 0x0  nop
    ctx->pc = 0x2ec6d8u;
    // NOP
    // 0x2ec6dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC6DCu;
    {
        const bool branch_taken_0x2ec6dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec6dc) {
            ctx->pc = 0x2EC6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC6DCu;
            // 0x2ec6e0: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC6E4u;
            goto label_2ec6e4;
        }
    }
    ctx->pc = 0x2EC6E4u;
label_2ec6e4:
    // 0x2ec6e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ec6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6e8: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ec6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec6ec: 0x0  nop
    ctx->pc = 0x2ec6ecu;
    // NOP
    // 0x2ec6f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC6F0u;
    {
        const bool branch_taken_0x2ec6f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec6f0) {
            ctx->pc = 0x2EC6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC6F0u;
            // 0x2ec6f4: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC6F8u;
            goto label_2ec6f8;
        }
    }
    ctx->pc = 0x2EC6F8u;
label_2ec6f8:
    // 0x2ec6f8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ec6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec6fc: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2ec6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec700: 0x0  nop
    ctx->pc = 0x2ec700u;
    // NOP
    // 0x2ec704: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC704u;
    {
        const bool branch_taken_0x2ec704 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec704) {
            ctx->pc = 0x2EC708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC704u;
            // 0x2ec708: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC70Cu;
            goto label_2ec70c;
        }
    }
    ctx->pc = 0x2EC70Cu;
label_2ec70c:
    // 0x2ec70c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ec70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec710: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ec710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec714: 0x0  nop
    ctx->pc = 0x2ec714u;
    // NOP
    // 0x2ec718: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC718u;
    {
        const bool branch_taken_0x2ec718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec718) {
            ctx->pc = 0x2EC71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC718u;
            // 0x2ec71c: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC720u;
            goto label_2ec720;
        }
    }
    ctx->pc = 0x2EC720u;
label_2ec720:
    // 0x2ec720: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ec720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec724: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ec724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec728: 0x0  nop
    ctx->pc = 0x2ec728u;
    // NOP
    // 0x2ec72c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC72Cu;
    {
        const bool branch_taken_0x2ec72c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec72c) {
            ctx->pc = 0x2EC730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC72Cu;
            // 0x2ec730: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC734u;
            goto label_2ec734;
        }
    }
    ctx->pc = 0x2EC734u;
label_2ec734:
    // 0x2ec734: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ec734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec738: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ec738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec73c: 0x0  nop
    ctx->pc = 0x2ec73cu;
    // NOP
    // 0x2ec740: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC740u;
    {
        const bool branch_taken_0x2ec740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec740) {
            ctx->pc = 0x2EC744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC740u;
            // 0x2ec744: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC748u;
            goto label_2ec748;
        }
    }
    ctx->pc = 0x2EC748u;
label_2ec748:
    // 0x2ec748: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ec748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec74c: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2ec74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ec750: 0x0  nop
    ctx->pc = 0x2ec750u;
    // NOP
    // 0x2ec754: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC754u;
    {
        const bool branch_taken_0x2ec754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ec754) {
            ctx->pc = 0x2EC758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC754u;
            // 0x2ec758: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC75Cu;
            goto label_2ec75c;
        }
    }
    ctx->pc = 0x2EC75Cu;
label_2ec75c:
    // 0x2ec75c: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x2ec75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2ec760: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EC760u;
    {
        const bool branch_taken_0x2ec760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC760u;
        // 0x2ec764: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec760) {
            ctx->pc = 0x2EC7DCu;
            goto label_2ec7dc;
        }
    }
    ctx->pc = 0x2EC768u;
    // 0x2ec768: 0x9222011c  lbu         $v0, 0x11C($s1)
    ctx->pc = 0x2ec768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ec76c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2ec76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2ec770: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2EC770u;
    {
        const bool branch_taken_0x2ec770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec770) {
            ctx->pc = 0x2EC774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC770u;
            // 0x2ec774: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC7E0u;
            goto label_2ec7e0;
        }
    }
    ctx->pc = 0x2EC778u;
    // 0x2ec778: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2ec778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2ec77c: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2ec77cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2ec780: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2ec780u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ec784: 0x0  nop
    ctx->pc = 0x2ec784u;
    // NOP
    // 0x2ec788: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2ec788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2ec78c: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2ec78cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2ec790: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ec790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ec794: 0x0  nop
    ctx->pc = 0x2ec794u;
    // NOP
    // 0x2ec798: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ec798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ec79c: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2ec79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec7a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ec7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec7a4: 0x0  nop
    ctx->pc = 0x2ec7a4u;
    // NOP
    // 0x2ec7a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec7ac: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ec7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec7b0: 0x0  nop
    ctx->pc = 0x2ec7b0u;
    // NOP
    // 0x2ec7b4: 0x0  nop
    ctx->pc = 0x2ec7b4u;
    // NOP
    // 0x2ec7b8: 0x46062103  div.s       $f4, $f4, $f6
    ctx->pc = 0x2ec7b8u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[6]);
    // 0x2ec7bc: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x2ec7bcu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[6]);
    // 0x2ec7c0: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x2ec7c0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[6]);
    // 0x2ec7c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ec7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ec7c8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ec7c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ec7cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ec7ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ec7d0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ec7d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ec7d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC7D4u;
    {
        const bool branch_taken_0x2ec7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC7D4u;
        // 0x2ec7d8: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec7d4) {
            ctx->pc = 0x2EC7E4u;
            goto label_2ec7e4;
        }
    }
    ctx->pc = 0x2EC7DCu;
label_2ec7dc:
    // 0x2ec7dc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ec7dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ec7e0:
    // 0x2ec7e0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ec7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ec7e4:
    // 0x2ec7e4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ec7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ec7e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ec7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec7ec: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2ec7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ec7f0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2ec7f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2ec7f4: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2ec7f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2ec7f8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ec7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec7fc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec7fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ec800: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ec800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ec804: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2ec804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec808: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ec80c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ec80cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ec810: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x2ec810u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x2ec814: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ec818: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2ec818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ec81c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ec81cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ec820: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ec820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ec824: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ec824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ec828: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ec828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ec82c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ec82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ec830: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ec830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ec834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ec834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ec838: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ec838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ec83c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ec83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ec840: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ec840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ec844: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2ec844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2ec848: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ec848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ec84c: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x2ec84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2ec850: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ec850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ec854: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ec854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2ec858: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x2ec858u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    // 0x2ec85c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ec85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ec860: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ec860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ec864: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x2ec864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x2ec868: 0x34e700f8  ori         $a3, $a3, 0xF8
    ctx->pc = 0x2ec868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
    // 0x2ec86c: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ec86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ec870: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ec870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ec874: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2ec874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ec878: 0x34058172  ori         $a1, $zero, 0x8172
    ctx->pc = 0x2ec878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x2ec87c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2ec87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2ec880: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ec880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ec884: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ec884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ec888: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ec88c: 0xfe440068  sd          $a0, 0x68($s2)
    ctx->pc = 0x2ec88cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
    // 0x2ec890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ec890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ec894: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ec894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ec898: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ec898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ec89c: 0x27d70090  addiu       $s7, $fp, 0x90
    ctx->pc = 0x2ec89cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2ec8a0: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x2ec8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x2ec8a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ec8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ec8a8: 0xffc30090  sd          $v1, 0x90($fp)
    ctx->pc = 0x2ec8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 144), GPR_U64(ctx, 3));
    // 0x2ec8ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2ec8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2ec8b0: 0xaee40008  sw          $a0, 0x8($s7)
    ctx->pc = 0x2ec8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 4));
    // 0x2ec8b4: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x2ec8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x2ec8b8: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ec8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ec8bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ec8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ec8c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ec8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ec8c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC8C4u;
    {
        const bool branch_taken_0x2ec8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8C4u;
        // 0x2ec8c8: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8c4) {
            ctx->pc = 0x2EC8ECu;
            goto label_2ec8ec;
        }
    }
    ctx->pc = 0x2EC8CCu;
    // 0x2ec8cc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x2ec8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x2ec8d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2ec8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ec8d4: 0x8c65aff0  lw          $a1, -0x5010($v1)
    ctx->pc = 0x2ec8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ec8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ec8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec8dc: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EC8DCu;
    SET_GPR_U32(ctx, 31, 0x2EC8E4u);
    ctx->pc = 0x2EC8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC8DCu;
    // 0x2ec8e0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EC8DCu, 0x2EC8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC8E4u;
label_2ec8e4:
    // 0x2ec8e4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EC8E4u;
    {
        const bool branch_taken_0x2ec8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC8E4u;
        // 0x2ec8e8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec8e4) {
            ctx->pc = 0x2EC96Cu;
            goto label_2ec96c;
        }
    }
    ctx->pc = 0x2EC8ECu;
label_2ec8ec:
    // 0x2ec8ec: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2ec8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ec8f0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2ec8f0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ec8f4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2ec8f4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ec8f8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2ec8f8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ec8fc: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2ec8fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ec900: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x2ec900u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ec904: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x2ec904u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ec908: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x2ec908u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ec90c: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x2ec90cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ec910: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ec910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ec914: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ec914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ec918: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2ec918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ec91c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2ec91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ec920: 0x8c83118c  lw          $v1, 0x118C($a0)
    ctx->pc = 0x2ec920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ec924: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2ec924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2ec928: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2ec928u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ec92c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2ec92cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2ec930: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ec930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ec934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ec938: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ec938u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ec93c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ec940: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2ec940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2ec944: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ec944u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ec948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ec948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec94c: 0x0  nop
    ctx->pc = 0x2ec94cu;
    // NOP
    // 0x2ec950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ec950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ec954: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ec954u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec958: 0x0  nop
    ctx->pc = 0x2ec958u;
    // NOP
    // 0x2ec95c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec960: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2ec960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ec964: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x2ec964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2ec968: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2ec968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2ec96c:
    // 0x2ec96c: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2EC96Cu;
    SET_GPR_U32(ctx, 31, 0x2EC974u);
    ctx->pc = 0x2EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC96Cu;
    // 0x2ec970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2EC96Cu, 0x2EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC974u;
label_2ec974:
    // 0x2ec974: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ec974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ec978: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ec978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ec97c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ec97cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec980: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2ec980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ec984: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2ec984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ec988: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2ec988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ec98c: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2ec98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ec990: 0xc7b40014  lwc1        $f20, 0x14($sp)
    ctx->pc = 0x2ec990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ec994: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2ec994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec998: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2ec998u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ec99c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ec99cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ec9a0: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ec9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ec9a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ec9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ec9a8: 0x0  nop
    ctx->pc = 0x2ec9a8u;
    // NOP
    // 0x2ec9ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ec9acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ec9b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ec9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ec9b4: 0x0  nop
    ctx->pc = 0x2ec9b4u;
    // NOP
    // 0x2ec9b8: 0x0  nop
    ctx->pc = 0x2ec9b8u;
    // NOP
    // 0x2ec9bc: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2ec9bcu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ec9c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EC9C0u;
    {
        const bool branch_taken_0x2ec9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9c0) {
            ctx->pc = 0x2EC9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9C0u;
            // 0x2ec9c4: 0x4615ad40  add.s       $f21, $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC9C8u;
label_2ec9c8:
    // 0x2ec9c8: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x2ec9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x2ec9cc: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC9CCu;
    {
        const bool branch_taken_0x2ec9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec9cc) {
            ctx->pc = 0x2EC9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC9CCu;
            // 0x2ec9d0: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9ECu;
            goto label_2ec9ec;
        }
    }
    ctx->pc = 0x2EC9D4u;
    // 0x2ec9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ec9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ec9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ec9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec9dc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2ec9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2ec9e0: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ec9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ec9e4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2ec9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2ec9e8: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ec9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2ec9ec:
    // 0x2ec9ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ec9ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ec9f0: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ec9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ec9f4: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ec9f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ec9f8: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2ec9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ec9fc: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ec9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eca00: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2eca00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eca04: 0x0  nop
    ctx->pc = 0x2eca04u;
    // NOP
    // 0x2eca08: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x2ECA08u;
    {
        const bool branch_taken_0x2eca08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA08u;
        // 0x2eca0c: 0x27b200b0  addiu       $s2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca08) {
            ctx->pc = 0x2ECADCu;
            goto label_2ecadc;
        }
    }
    ctx->pc = 0x2ECA10u;
    // 0x2eca10: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2eca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2eca14: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2eca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eca18: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2eca18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2eca1c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2eca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2eca20: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2eca20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2eca24: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2eca24u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eca28: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2eca28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2eca2c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2eca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2eca30: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2eca30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2eca34: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2eca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2eca38: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2eca38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2eca3c: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2eca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2eca40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2eca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eca44: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2ECA44u;
    SET_GPR_U32(ctx, 31, 0x2ECA4Cu);
    ctx->pc = 0x2ECA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECA44u;
    // 0x2eca48: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2ECA44u, 0x2ECA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECA4Cu;
label_2eca4c:
    // 0x2eca4c: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2eca4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eca50: 0x0  nop
    ctx->pc = 0x2eca50u;
    // NOP
    // 0x2eca54: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2ECA54u;
    {
        const bool branch_taken_0x2eca54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ECA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECA54u;
        // 0x2eca58: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eca54) {
            ctx->pc = 0x2ECA98u;
            goto label_2eca98;
        }
    }
    ctx->pc = 0x2ECA5Cu;
    // 0x2eca5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eca5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eca60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eca60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eca64: 0x0  nop
    ctx->pc = 0x2eca64u;
    // NOP
    // 0x2eca68: 0x0  nop
    ctx->pc = 0x2eca68u;
    // NOP
    // 0x2eca6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2eca6cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2eca70: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x2eca70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eca74: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2eca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eca78: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2eca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eca7c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2eca7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2eca80: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2eca80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2eca84: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2eca84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2eca88: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2eca88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2eca8c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2eca8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2eca90: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2eca90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2eca94: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2eca94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2eca98:
    // 0x2eca98: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2eca9c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2eca9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecaa0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ecaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecaa4: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ecaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecaa8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ecaa8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ecaac: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ecaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecab0: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ecab0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ecab4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ecab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ecab8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ecab8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ecabc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ecabcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ecac0: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ecac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecac4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ecac4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecac8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ecac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecacc: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ecaccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ecad0: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2ecad0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ecad4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ecad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ecad8: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ecad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ecadc:
    // 0x2ecadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ecadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecae0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ecae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ecae4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2ECAE4u;
    SET_GPR_U32(ctx, 31, 0x2ECAECu);
    ctx->pc = 0x2ECAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECAE4u;
    // 0x2ecae8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2ECAE4u, 0x2ECAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAECu;
label_2ecaec:
    // 0x2ecaec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ecaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ecaf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ecaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecaf4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ecaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecaf8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ecaf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecafc: 0x0  nop
    ctx->pc = 0x2ecafcu;
    // NOP
    // 0x2ecb00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ECB00u;
    {
        const bool branch_taken_0x2ecb00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecb00) {
            ctx->pc = 0x2ECB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECB00u;
            // 0x2ecb04: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECB08u;
            goto label_2ecb08;
        }
    }
    ctx->pc = 0x2ECB08u;
label_2ecb08:
    // 0x2ecb08: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ecb08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ecb0c: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x2ecb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2ecb10: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ecb14: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb18: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2ecb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2ecb1c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ecb20: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ecb24: 0x18400112  blez        $v0, . + 4 + (0x112 << 2)
    ctx->pc = 0x2ECB24u;
    {
        const bool branch_taken_0x2ecb24 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ECB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB24u;
        // 0x2ecb28: 0xafa30108  sw          $v1, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb24) {
            ctx->pc = 0x2ECF70u;
            goto label_2ecf70;
        }
    }
    ctx->pc = 0x2ECB2Cu;
    // 0x2ecb2c: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ecb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ecb34: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ecb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ecb38: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2ecb38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb3c: 0xafa4010c  sw          $a0, 0x10C($sp)
    ctx->pc = 0x2ecb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 4));
    // 0x2ecb40: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ecb40u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecb44: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x2ecb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
label_2ecb48:
    // 0x2ecb48: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x2ecb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ecb4c: 0x2e41821  addu        $v1, $s7, $a0
    ctx->pc = 0x2ecb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2ecb50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ecb50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecb54: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ecb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecb58: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x2ecb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ecb5c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2ecb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2ecb60: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2ECB60u;
    {
        const bool branch_taken_0x2ecb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB60u;
        // 0x2ecb64: 0x27b300c0  addiu       $s3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb60) {
            ctx->pc = 0x2ECCE0u;
            goto label_2ecce0;
        }
    }
    ctx->pc = 0x2ECB68u;
    // 0x2ecb68: 0x16c00012  bnez        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ECB68u;
    {
        const bool branch_taken_0x2ecb68 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECB68u;
        // 0x2ecb6c: 0x2462fff0  addiu       $v0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecb68) {
            ctx->pc = 0x2ECBB4u;
            goto label_2ecbb4;
        }
    }
    ctx->pc = 0x2ECB70u;
    // 0x2ecb70: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2ecb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2ecb74: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ecb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ecb78: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ecb78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecb7c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2ecb7cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ecb80: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ecb80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ecb84: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ecb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecb88: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x2ecb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2ecb8c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2ecb8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ecb90: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ecb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecb94: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2ecb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecb98: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2ecb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecb9c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2ecb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecba0: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2ecba0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ecba4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2ecba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ecba8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2ecba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ecbac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2ECBACu;
    {
        const bool branch_taken_0x2ecbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBACu;
        // 0x2ecbb0: 0xc7b40014  lwc1        $f20, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbac) {
            ctx->pc = 0x2ECC40u;
            goto label_2ecc40;
        }
    }
    ctx->pc = 0x2ECBB4u;
label_2ecbb4:
    // 0x2ecbb4: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ecbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ecbb8: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ecbb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecbbc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ecbbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecbc0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ecbc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ecbc4: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ecbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecbc8: 0x8fa7010c  lw          $a3, 0x10C($sp)
    ctx->pc = 0x2ecbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x2ecbcc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2ecbccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ecbd0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ecbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecbd4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2ecbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecbd8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2ecbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2ecbdc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ecbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecbe0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2ecbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecbe4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2ecbe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ecbe8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2ecbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ecbec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECBECu;
    {
        const bool branch_taken_0x2ecbec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECBECu;
        // 0x2ecbf0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecbec) {
            ctx->pc = 0x2ECC3Cu;
            goto label_2ecc3c;
        }
    }
    ctx->pc = 0x2ECBF4u;
    // 0x2ecbf4: 0x92220249  lbu         $v0, 0x249($s1)
    ctx->pc = 0x2ecbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ecbf8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ecbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ecbfc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ecbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ecc00: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ecc00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ecc04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ecc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ecc08: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ecc08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ecc0c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2ecc0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ecc10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2ECC10u;
    {
        const bool branch_taken_0x2ecc10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc10) {
            ctx->pc = 0x2ECC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC10u;
            // 0x2ecc14: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC40u;
            goto label_2ecc40;
        }
    }
    ctx->pc = 0x2ECC18u;
    // 0x2ecc18: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2ecc18u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2ecc1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ecc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecc20: 0x0  nop
    ctx->pc = 0x2ecc20u;
    // NOP
    // 0x2ecc24: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ecc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ecc28: 0x0  nop
    ctx->pc = 0x2ecc28u;
    // NOP
    // 0x2ecc2c: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECC2Cu;
    {
        const bool branch_taken_0x2ecc2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ecc2c) {
            ctx->pc = 0x2ECC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC2Cu;
            // 0x2ecc30: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC40u;
            goto label_2ecc40;
        }
    }
    ctx->pc = 0x2ECC34u;
    // 0x2ecc34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECC34u;
    {
        const bool branch_taken_0x2ecc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECC34u;
        // 0x2ecc38: 0x8faa0104  lw          $t2, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecc34) {
            ctx->pc = 0x2ECC44u;
            goto label_2ecc44;
        }
    }
    ctx->pc = 0x2ECC3Cu;
label_2ecc3c:
    // 0x2ecc3c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2ecc3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2ecc40:
    // 0x2ecc40: 0x8faa0104  lw          $t2, 0x104($sp)
    ctx->pc = 0x2ecc40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2ecc44:
    // 0x2ecc44: 0x51400010  beql        $t2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ECC44u;
    {
        const bool branch_taken_0x2ecc44 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecc44) {
            ctx->pc = 0x2ECC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECC44u;
            // 0x2ecc48: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECC88u;
            goto label_2ecc88;
        }
    }
    ctx->pc = 0x2ECC4Cu;
    // 0x2ecc4c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ecc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ecc50: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2ecc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2ecc54: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ecc54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ecc58: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ecc58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ecc5c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ecc5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ecc60: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ecc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecc64: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2ecc64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ecc68: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ecc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ecc6c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2ecc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecc70: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ecc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecc74: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ecc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecc78: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ecc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ecc7c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2ecc7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ecc80: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2ecc80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ecc84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ecc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ecc88:
    // 0x2ecc88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ecc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ecc8c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x2ECC8Cu;
    SET_GPR_U32(ctx, 31, 0x2ECC94u);
    ctx->pc = 0x2ECC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC8Cu;
    // 0x2ecc90: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x2ECC8Cu, 0x2ECC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECC94u;
label_2ecc94:
    // 0x2ecc94: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ecc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ecc98: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x2ECC98u;
    SET_GPR_U32(ctx, 31, 0x2ECCA0u);
    ctx->pc = 0x2ECC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECC98u;
    // 0x2ecc9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x2ECC98u, 0x2ECCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCA0u;
label_2ecca0:
    // 0x2ecca0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ecca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ecca4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ecca4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ecca8: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2ECCA8u;
    SET_GPR_U32(ctx, 31, 0x2ECCB0u);
    ctx->pc = 0x2ECCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCA8u;
    // 0x2eccac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2ECCA8u, 0x2ECCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCB0u;
label_2eccb0:
    // 0x2eccb0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eccb4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2eccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eccb8: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2eccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eccbc: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2eccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eccc0: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2eccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2eccc4: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2eccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2eccc8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2eccc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ecccc: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2eccccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2eccd0: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2eccd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2eccd4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2eccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2eccd8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2eccd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eccdc: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2eccdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ecce0:
    // 0x2ecce0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ecce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ecce4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ecce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecce8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2ECCE8u;
    SET_GPR_U32(ctx, 31, 0x2ECCF0u);
    ctx->pc = 0x2ECCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCE8u;
    // 0x2eccec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2ECCE8u, 0x2ECCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECCF0u;
label_2eccf0:
    // 0x2eccf0: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2eccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eccf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2eccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eccf8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2ECCF8u;
    SET_GPR_U32(ctx, 31, 0x2ECD00u);
    ctx->pc = 0x2ECCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECCF8u;
    // 0x2eccfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2ECCF8u, 0x2ECD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD00u;
label_2ecd00:
    // 0x2ecd00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ecd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecd04: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2ECD04u;
    SET_GPR_U32(ctx, 31, 0x2ECD0Cu);
    ctx->pc = 0x2ECD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECD04u;
    // 0x2ecd08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2ECD04u, 0x2ECD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECD0Cu;
label_2ecd0c:
    // 0x2ecd0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ecd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ecd10: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECD10u;
    {
        const bool branch_taken_0x2ecd10 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2ECD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD10u;
        // 0x2ecd14: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd10) {
            ctx->pc = 0x2ECD90u;
            goto label_2ecd90;
        }
    }
    ctx->pc = 0x2ECD18u;
    // 0x2ecd18: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ecd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ecd1c: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2ecd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2ecd20: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2ecd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ecd24: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ecd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ecd28: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2ecd28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2ecd2c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ecd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecd30: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ecd30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ecd34: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2ecd34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ecd38: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2ecd38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ecd3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ecd3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ecd40: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECD40u;
    {
        const bool branch_taken_0x2ecd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD40u;
        // 0x2ecd44: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd40) {
            ctx->pc = 0x2ECD90u;
            goto label_2ecd90;
        }
    }
    ctx->pc = 0x2ECD48u;
    // 0x2ecd48: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2ecd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2ecd4c: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2ecd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2ecd50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2ecd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ecd54: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECD54u;
    {
        const bool branch_taken_0x2ecd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd54) {
            ctx->pc = 0x2ECD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD54u;
            // 0x2ecd58: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD94u;
            goto label_2ecd94;
        }
    }
    ctx->pc = 0x2ECD5Cu;
    // 0x2ecd5c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2ecd5cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x2ecd60: 0x8d436b80  lw          $v1, 0x6B80($t2)
    ctx->pc = 0x2ecd60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2ecd64: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2ecd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2ecd68: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ecd68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ecd6c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECD6Cu;
    {
        const bool branch_taken_0x2ecd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecd6c) {
            ctx->pc = 0x2ECD70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECD6Cu;
            // 0x2ecd70: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECD94u;
            goto label_2ecd94;
        }
    }
    ctx->pc = 0x2ECD74u;
    // 0x2ecd74: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2ecd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2ecd78: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2ecd78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ecd7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ecd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecd80: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ecd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ecd84: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ecd84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ecd88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECD88u;
    {
        const bool branch_taken_0x2ecd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECD88u;
        // 0x2ecd8c: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecd88) {
            ctx->pc = 0x2ECD98u;
            goto label_2ecd98;
        }
    }
    ctx->pc = 0x2ECD90u;
label_2ecd90:
    // 0x2ecd90: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2ecd90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2ecd94:
    // 0x2ecd94: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ecd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2ecd98:
    // 0x2ecd98: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2ecd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2ecd9c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ecd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ecda0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ecda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ecda4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ecda4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ecda8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ecda8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ecdac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ecdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ecdb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecdb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecdb8: 0xfe430030  sd          $v1, 0x30($s2)
    ctx->pc = 0x2ecdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 3));
    // 0x2ecdbc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECDBCu;
    {
        const bool branch_taken_0x2ecdbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDBCu;
        // 0x2ecdc0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdbc) {
            ctx->pc = 0x2ECDC8u;
            goto label_2ecdc8;
        }
    }
    ctx->pc = 0x2ECDC4u;
    // 0x2ecdc4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ecdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ecdc8:
    // 0x2ecdc8: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x2ecdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x2ecdcc: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x2ecdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ecdd0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ecdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ecdd4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2ecdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2ecdd8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2ECDD8u;
    {
        const bool branch_taken_0x2ecdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECDD8u;
        // 0x2ecddc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecdd8) {
            ctx->pc = 0x2ECE0Cu;
            goto label_2ece0c;
        }
    }
    ctx->pc = 0x2ECDE0u;
    // 0x2ecde0: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2ecde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2ecde4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2ecde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ecde8: 0x5282001f  beql        $s4, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECDE8u;
    {
        const bool branch_taken_0x2ecde8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecde8) {
            ctx->pc = 0x2ECDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECDE8u;
            // 0x2ecdec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECE68u;
            goto label_2ece68;
        }
    }
    ctx->pc = 0x2ECDF0u;
    // 0x2ecdf0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ecdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ecdf4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ecdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ecdf8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ecdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ecdfc: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ecdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ece00: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ece00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ece04: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2ECE04u;
    {
        const bool branch_taken_0x2ece04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE04u;
        // 0x2ece08: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece04) {
            ctx->pc = 0x2ECE64u;
            goto label_2ece64;
        }
    }
    ctx->pc = 0x2ECE0Cu;
label_2ece0c:
    // 0x2ece0c: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ece0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ece10: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2ece10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ece14: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ECE14u;
    {
        const bool branch_taken_0x2ece14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ECE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE14u;
        // 0x2ece18: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece14) {
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECE1Cu;
    // 0x2ece1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ece1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ece20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ece20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ece24: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ece24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ece28: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ece28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ece2c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ece2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ece30: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2ece30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2ece34: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ece34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ece38:
    // 0x2ece38: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ece38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ece3c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ece3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ece40: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2ece40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ece44: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2ece44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ece48: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2ece48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ece4c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ece4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ece50: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2ece50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2ece54: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2ece54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2ece58: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ece58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ece5c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ece5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ece60: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ece60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ece64:
    // 0x2ece64: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2ece64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ece68:
    // 0x2ece68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ece68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece6c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2ECE6Cu;
    SET_GPR_U32(ctx, 31, 0x2ECE74u);
    ctx->pc = 0x2ECE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE6Cu;
    // 0x2ece70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2ECE6Cu, 0x2ECE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE74u;
label_2ece74:
    // 0x2ece74: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ece74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ece78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ece78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece7c: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2ECE7Cu;
    SET_GPR_U32(ctx, 31, 0x2ECE84u);
    ctx->pc = 0x2ECE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE7Cu;
    // 0x2ece80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2ECE7Cu, 0x2ECE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE84u;
label_2ece84:
    // 0x2ece84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ece84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece88: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2ECE88u;
    SET_GPR_U32(ctx, 31, 0x2ECE90u);
    ctx->pc = 0x2ECE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECE88u;
    // 0x2ece8c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2ECE88u, 0x2ECE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECE90u;
label_2ece90:
    // 0x2ece90: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ece90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ece94: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ECE94u;
    {
        const bool branch_taken_0x2ece94 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2ECE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECE94u;
        // 0x2ece98: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ece94) {
            ctx->pc = 0x2ECF14u;
            goto label_2ecf14;
        }
    }
    ctx->pc = 0x2ECE9Cu;
    // 0x2ece9c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ece9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ecea0: 0x8ce61180  lw          $a2, 0x1180($a3)
    ctx->pc = 0x2ecea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2ecea4: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2ecea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ecea8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ecea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2eceac: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2eceacu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2eceb0: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eceb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2eceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eceb8: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2eceb8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ecebc: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x2ecebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2ecec0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ecec4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ECEC4u;
    {
        const bool branch_taken_0x2ecec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEC4u;
        // 0x2ecec8: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecec4) {
            ctx->pc = 0x2ECF14u;
            goto label_2ecf14;
        }
    }
    ctx->pc = 0x2ECECCu;
    // 0x2ececc: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2ececcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2eced0: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2eced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2eced4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2eced4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eced8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECED8u;
    {
        const bool branch_taken_0x2eced8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eced8) {
            ctx->pc = 0x2ECEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECED8u;
            // 0x2ecedc: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF18u;
            goto label_2ecf18;
        }
    }
    ctx->pc = 0x2ECEE0u;
    // 0x2ecee0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2ecee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2ecee4: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2ecee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2ecee8: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2ecee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2eceec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2eceecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ecef0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ECEF0u;
    {
        const bool branch_taken_0x2ecef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecef0) {
            ctx->pc = 0x2ECEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECEF0u;
            // 0x2ecef4: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECF18u;
            goto label_2ecf18;
        }
    }
    ctx->pc = 0x2ECEF8u;
    // 0x2ecef8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2ecef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2ecefc: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2ecefcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ecf00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ecf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecf04: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2ecf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2ecf08: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2ecf08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2ecf0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ECF0Cu;
    {
        const bool branch_taken_0x2ecf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF0Cu;
        // 0x2ecf10: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf0c) {
            ctx->pc = 0x2ECF1Cu;
            goto label_2ecf1c;
        }
    }
    ctx->pc = 0x2ECF14u;
label_2ecf14:
    // 0x2ecf14: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2ecf14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2ecf18:
    // 0x2ecf18: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ecf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2ecf1c:
    // 0x2ecf1c: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2ecf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2ecf20: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ecf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ecf24: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ecf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ecf28: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ecf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ecf2c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2ecf2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2ecf30: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ecf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ecf34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ecf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecf38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ecf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ecf3c: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x2ecf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
    // 0x2ecf40: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2ECF40u;
    {
        const bool branch_taken_0x2ecf40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF40u;
        // 0x2ecf44: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf40) {
            ctx->pc = 0x2ECF4Cu;
            goto label_2ecf4c;
        }
    }
    ctx->pc = 0x2ECF48u;
    // 0x2ecf48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ecf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2ecf4c:
    // 0x2ecf4c: 0xfe420068  sd          $v0, 0x68($s2)
    ctx->pc = 0x2ecf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 2));
    // 0x2ecf50: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2ecf50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ecf54: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2ecf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2ecf58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ecf58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2ecf5c: 0x305000fe  andi        $s0, $v0, 0xFE
    ctx->pc = 0x2ecf5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2ecf60: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2ecf60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ecf64: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x2ecf64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2ecf68: 0x1460fef7  bnez        $v1, . + 4 + (-0x109 << 2)
    ctx->pc = 0x2ECF68u;
    {
        const bool branch_taken_0x2ecf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF68u;
        // 0x2ecf6c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf68) {
            ctx->pc = 0x2ECB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ecb48;
        }
    }
    ctx->pc = 0x2ECF70u;
label_2ecf70:
    // 0x2ecf70: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ecf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ecf74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ecf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ecf78: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2ECF78u;
    {
        const bool branch_taken_0x2ecf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ECF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECF78u;
        // 0x2ecf7c: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ecf78) {
            ctx->pc = 0x2ED100u;
            goto label_2ed100;
        }
    }
    ctx->pc = 0x2ECF80u;
    // 0x2ecf80: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x2ecf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2ecf84: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x2ecf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x2ecf88: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2ecf88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2ecf8c: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x2ecf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2ecf90: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2ecf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2ecf94: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2ecf94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2ecf98: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ecf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ecf9c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2ecf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ecfa0: 0x27a600f4  addiu       $a2, $sp, 0xF4
    ctx->pc = 0x2ecfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x2ecfa4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2ecfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ecfa8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2ecfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ecfac: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2ECFACu;
    SET_GPR_U32(ctx, 31, 0x2ECFB4u);
    ctx->pc = 0x2ECFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECFACu;
    // 0x2ecfb0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2ECFACu, 0x2ECFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECFB4u;
label_2ecfb4:
    // 0x2ecfb4: 0x92240245  lbu         $a0, 0x245($s1)
    ctx->pc = 0x2ecfb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x2ecfb8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2ecfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2ecfbc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2ecfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ecfc0: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ECFC0u;
    {
        const bool branch_taken_0x2ecfc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecfc0) {
            ctx->pc = 0x2ECFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECFC0u;
            // 0x2ecfc4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECFC8u;
            goto label_2ecfc8;
        }
    }
    ctx->pc = 0x2ECFC8u;
label_2ecfc8:
    // 0x2ecfc8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2ecfc8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ecfcc: 0x92250246  lbu         $a1, 0x246($s1)
    ctx->pc = 0x2ecfccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x2ecfd0: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x2ecfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x2ecfd4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2ecfd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ecfd8: 0x0  nop
    ctx->pc = 0x2ecfd8u;
    // NOP
    // 0x2ecfdc: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2ecfdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2ecfe0: 0x82220244  lb          $v0, 0x244($s1)
    ctx->pc = 0x2ecfe0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2ecfe4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ecfe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ecfe8: 0x0  nop
    ctx->pc = 0x2ecfe8u;
    // NOP
    // 0x2ecfec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2ecfecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2ecff0: 0x8e28011c  lw          $t0, 0x11C($s1)
    ctx->pc = 0x2ecff0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ecff4: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x2ecff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ecff8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2ecff8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2ecffc: 0x3812  mflo        $a3
    ctx->pc = 0x2ecffcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2ed000: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2ed000u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ed004: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2ed004u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed008: 0x0  nop
    ctx->pc = 0x2ed008u;
    // NOP
    // 0x2ed00c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed00cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ed010: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x2ed010u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2ed014: 0x2812  mflo        $a1
    ctx->pc = 0x2ed014u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ed018: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2ed018u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ed01c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ed01cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed020: 0x0  nop
    ctx->pc = 0x2ed020u;
    // NOP
    // 0x2ed024: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed028: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x2ed028u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2ed02c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ed02cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ed030: 0x1810  mfhi        $v1
    ctx->pc = 0x2ed030u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2ed034: 0x1012  mflo        $v0
    ctx->pc = 0x2ed034u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2ed038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ed038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed03c: 0x0  nop
    ctx->pc = 0x2ed03cu;
    // NOP
    // 0x2ed040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ed044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed048: 0x0  nop
    ctx->pc = 0x2ed048u;
    // NOP
    // 0x2ed04c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed04cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed050: 0x46040142  mul.s       $f5, $f0, $f4
    ctx->pc = 0x2ed050u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ed054: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED054u;
    {
        const bool branch_taken_0x2ed054 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED054u;
        // 0x2ed058: 0x46030802  mul.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed054) {
            ctx->pc = 0x2ED064u;
            goto label_2ed064;
        }
    }
    ctx->pc = 0x2ED05Cu;
    // 0x2ed05c: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x2ed05cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ed060: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2ed060u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2ed064:
    // 0x2ed064: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2ed064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2ed068: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2ed068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2ed06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED06Cu;
    {
        const bool branch_taken_0x2ed06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED06Cu;
        // 0x2ed070: 0x82220249  lb          $v0, 0x249($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed06c) {
            ctx->pc = 0x2ED07Cu;
            goto label_2ed07c;
        }
    }
    ctx->pc = 0x2ED074u;
    // 0x2ed074: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ed074u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ed078: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2ed078u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2ed07c:
    // 0x2ed07c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ED07Cu;
    {
        const bool branch_taken_0x2ed07c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ED080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED07Cu;
        // 0x2ed080: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed07c) {
            ctx->pc = 0x2ED100u;
            goto label_2ed100;
        }
    }
    ctx->pc = 0x2ED084u;
    // 0x2ed084: 0x46001180  add.s       $f6, $f2, $f0
    ctx->pc = 0x2ed084u;
    ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2ed088: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed08c: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2ed08cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x2ed090: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2ed090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed094: 0x0  nop
    ctx->pc = 0x2ed094u;
    // NOP
label_2ed098:
    // 0x2ed098: 0xe46500a0  swc1        $f5, 0xA0($v1)
    ctx->pc = 0x2ed098u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2ed09c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2ed09cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed0a0: 0x0  nop
    ctx->pc = 0x2ed0a0u;
    // NOP
    // 0x2ed0a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ed0a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ed0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ed0ac: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ed0acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed0b0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ed0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ed0b4: 0xc62202d4  lwc1        $f2, 0x2D4($s1)
    ctx->pc = 0x2ed0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed0b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ed0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ed0bc: 0xfc6500a8  sd          $a1, 0xA8($v1)
    ctx->pc = 0x2ed0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 5));
    // 0x2ed0c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed0c4: 0x0  nop
    ctx->pc = 0x2ed0c4u;
    // NOP
    // 0x2ed0c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed0c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed0cc: 0xe46400d0  swc1        $f4, 0xD0($v1)
    ctx->pc = 0x2ed0ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x2ed0d0: 0xfc6500d8  sd          $a1, 0xD8($v1)
    ctx->pc = 0x2ed0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 216), GPR_U64(ctx, 5));
    // 0x2ed0d4: 0x0  nop
    ctx->pc = 0x2ed0d4u;
    // NOP
    // 0x2ed0d8: 0x0  nop
    ctx->pc = 0x2ed0d8u;
    // NOP
    // 0x2ed0dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ed0dcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ed0e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ed0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ed0e4: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2ed0e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2ed0e8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2ed0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2ed0ec: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2ed0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2ed0f0: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ed0f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed0f4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ed0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ed0f8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2ED0F8u;
    {
        const bool branch_taken_0x2ed0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED0F8u;
        // 0x2ed0fc: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed0f8) {
            ctx->pc = 0x2ED098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed098;
        }
    }
    ctx->pc = 0x2ED100u;
label_2ed100:
    // 0x2ed100: 0x82280249  lb          $t0, 0x249($s1)
    ctx->pc = 0x2ed100u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed104: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2ed104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2ed108: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2ed108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2ed10c: 0x3c030a00  lui         $v1, 0xA00
    ctx->pc = 0x2ed10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2560 << 16));
    // 0x2ed110: 0x346300f8  ori         $v1, $v1, 0xF8
    ctx->pc = 0x2ed110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)248);
    // 0x2ed114: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x2ed114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2ed118: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x2ed118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ed11c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ed11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ed120: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ed120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed124: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2ed124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ed128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed12c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ed12cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed130: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ed130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed134: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2ed134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2ed138: 0x3c84021  addu        $t0, $fp, $t0
    ctx->pc = 0x2ed138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x2ed13c: 0xfd0a0008  sd          $t2, 0x8($t0)
    ctx->pc = 0x2ed13cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 10));
    // 0x2ed140: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x2ed140u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x2ed144: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2ed144u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2ed148: 0x8d431180  lw          $v1, 0x1180($t2)
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ed14c: 0xfd020018  sd          $v0, 0x18($t0)
    ctx->pc = 0x2ed14cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 2));
    // 0x2ed150: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2ed150u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed154: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ed154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ed158: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2ed158u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ed15c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ed15cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ed160: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed164: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2ed164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2ed168: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2ED168u;
    SET_GPR_U32(ctx, 31, 0x2ED170u);
    ctx->pc = 0x2ED16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED168u;
    // 0x2ed16c: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2ED168u, 0x2ED170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED170u;
label_2ed170:
    // 0x2ed170: 0x1000033c  b           . + 4 + (0x33C << 2)
    ctx->pc = 0x2ED170u;
    {
        const bool branch_taken_0x2ed170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED170u;
        // 0x2ed174: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed170) {
            ctx->pc = 0x2EDE64u;
            goto label_2ede64;
        }
    }
    ctx->pc = 0x2ED178u;
label_2ed178:
    // 0x2ed178: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2ed178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2ed17c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ed17cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed180: 0x248574a0  addiu       $a1, $a0, 0x74A0
    ctx->pc = 0x2ed180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x2ed184: 0x8ca30210  lw          $v1, 0x210($a1)
    ctx->pc = 0x2ed184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2ed188: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2ed188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ed18c: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2ed18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2ed190: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2ed190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2ed194: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED194u;
    {
        const bool branch_taken_0x2ed194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED194u;
        // 0x2ed198: 0x24530030  addiu       $s3, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed194) {
            ctx->pc = 0x2ED1A4u;
            goto label_2ed1a4;
        }
    }
    ctx->pc = 0x2ED19Cu;
    // 0x2ed19c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2ED19Cu;
    {
        const bool branch_taken_0x2ed19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED19Cu;
        // 0x2ed1a0: 0x8e3e02c4  lw          $fp, 0x2C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed19c) {
            ctx->pc = 0x2ED1A8u;
            goto label_2ed1a8;
        }
    }
    ctx->pc = 0x2ED1A4u;
label_2ed1a4:
    // 0x2ed1a4: 0x8e3e02c8  lw          $fp, 0x2C8($s1)
    ctx->pc = 0x2ed1a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_2ed1a8:
    // 0x2ed1a8: 0x41902  srl         $v1, $a0, 4
    ctx->pc = 0x2ed1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2ed1ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ed1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ed1b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ed1b4: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2ed1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2ed1b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2ed1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2ed1bc: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x2ed1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x2ed1c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed1c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ed1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ed1c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2ed1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2ed1cc: 0x34048152  ori         $a0, $zero, 0x8152
    ctx->pc = 0x2ed1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2ed1d0: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x2ed1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x2ed1d4: 0x34848007  ori         $a0, $a0, 0x8007
    ctx->pc = 0x2ed1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32775);
    // 0x2ed1d8: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x2ed1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x2ed1dc: 0x27d20010  addiu       $s2, $fp, 0x10
    ctx->pc = 0x2ed1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2ed1e0: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x2ed1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x2ed1e4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2ed1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ed1e8: 0xffc40010  sd          $a0, 0x10($fp)
    ctx->pc = 0x2ed1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 4));
    // 0x2ed1ec: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2ed1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x2ed1f0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2ed1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x2ed1f4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ed1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ed1f8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ed1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ed1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED1FCu;
    {
        const bool branch_taken_0x2ed1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1fc) {
            ctx->pc = 0x2ED214u;
            goto label_2ed214;
        }
    }
    ctx->pc = 0x2ED204u;
    // 0x2ed204: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2ed204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2ed208: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ed208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ed20c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED20Cu;
    {
        const bool branch_taken_0x2ed20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED20Cu;
        // 0x2ed210: 0xfe420010  sd          $v0, 0x10($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed20c) {
            ctx->pc = 0x2ED220u;
            goto label_2ed220;
        }
    }
    ctx->pc = 0x2ED214u;
label_2ed214:
    // 0x2ed214: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2ed214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2ed218: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2ed218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2ed21c: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2ed21cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
label_2ed220:
    // 0x2ed220: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2ed220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ed224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ed224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed228: 0xfe420018  sd          $v0, 0x18($s2)
    ctx->pc = 0x2ed228u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 2));
    // 0x2ed22c: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2ED22Cu;
    SET_GPR_U32(ctx, 31, 0x2ED234u);
    ctx->pc = 0x2ED230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED22Cu;
    // 0x2ed230: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2ED22Cu, 0x2ED234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED234u;
label_2ed234:
    // 0x2ed234: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2ed234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ed238: 0xfe400030  sd          $zero, 0x30($s2)
    ctx->pc = 0x2ed238u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 0));
    // 0x2ed23c: 0xfe420038  sd          $v0, 0x38($s2)
    ctx->pc = 0x2ed23cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 2));
    // 0x2ed240: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2ed240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2ed244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed248: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2ed248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2ed24c: 0x82220101  lb          $v0, 0x101($s1)
    ctx->pc = 0x2ed24cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
    // 0x2ed250: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ed250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed254: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x2ed254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2ed258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed25c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ed25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ed260: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2ED260u;
    SET_GPR_U32(ctx, 31, 0x2ED268u);
    ctx->pc = 0x2ED264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED260u;
    // 0x2ed264: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2ED260u, 0x2ED268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED268u;
label_2ed268:
    // 0x2ed268: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x2ed268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x2ed26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ed26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed270: 0xc0544da  jal         func_151368
    ctx->pc = 0x2ED270u;
    SET_GPR_U32(ctx, 31, 0x2ED278u);
    ctx->pc = 0x2ED274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED270u;
    // 0x2ed274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2ED270u, 0x2ED278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED278u;
label_2ed278:
    // 0x2ed278: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ed278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ed27c: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x2ed27cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
    // 0x2ed280: 0xfe440048  sd          $a0, 0x48($s2)
    ctx->pc = 0x2ed280u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 4));
    // 0x2ed284: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2ed284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2ed288: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2ed288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ed28c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2ed28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2ed290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED290u;
    {
        const bool branch_taken_0x2ed290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED290u;
        // 0x2ed294: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed290) {
            ctx->pc = 0x2ED2A8u;
            goto label_2ed2a8;
        }
    }
    ctx->pc = 0x2ED298u;
    // 0x2ed298: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ed298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed29c: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ed29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ed2a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED2A0u;
    {
        const bool branch_taken_0x2ed2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED2A0u;
        // 0x2ed2a4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed2a0) {
            ctx->pc = 0x2ED2BCu;
            goto label_2ed2bc;
        }
    }
    ctx->pc = 0x2ED2A8u;
label_2ed2a8:
    // 0x2ed2a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ed2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed2ac: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ed2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2ed2b0: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2ed2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2ed2b4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2ed2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ed2b8: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2ed2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2ed2bc:
    // 0x2ed2bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2ed2bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ed2c0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ed2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ed2c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2ed2c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ed2c8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ed2c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ed2cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ed2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ed2d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ed2d4: 0xfe420070  sd          $v0, 0x70($s2)
    ctx->pc = 0x2ed2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 2));
    // 0x2ed2d8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2ed2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ed2dc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2ed2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2ed2e0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ed2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ed2e4: 0xfe420078  sd          $v0, 0x78($s2)
    ctx->pc = 0x2ed2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 2));
    // 0x2ed2e8: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2ed2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2ed2ec: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2ed2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2ed2f0: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2ed2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ed2f4: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2ed2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ed2f8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2ed2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed2fc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2ed2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed300: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2ed300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed304: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2ed304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed308: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2ed308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2ed30c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2ed30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed310: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2ed310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed314: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x2ed314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed318: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2ed318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2ed31c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2ed31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed320: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2ed320u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2ed324: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ed324u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ed328: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ed328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ed32c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2ed32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ed330: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2ed330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2ed334: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2ed334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2ed338: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2ed338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2ed33c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2ed33cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2ed340: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2ed340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2ed344: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2ed344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ed348: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2ed348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ed34c: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x2ed34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ed350: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x2ed350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ed354: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2ed354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed358: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2ed358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed35c: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x2ed35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed360: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x2ed360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed364: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed368: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2ed368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed36c: 0x0  nop
    ctx->pc = 0x2ed36cu;
    // NOP
    // 0x2ed370: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED370u;
    {
        const bool branch_taken_0x2ed370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed370) {
            ctx->pc = 0x2ED374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED370u;
            // 0x2ed374: 0xe7a60000  swc1        $f6, 0x0($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED378u;
            goto label_2ed378;
        }
    }
    ctx->pc = 0x2ED378u;
label_2ed378:
    // 0x2ed378: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ed378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed37c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2ed37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed380: 0x0  nop
    ctx->pc = 0x2ed380u;
    // NOP
    // 0x2ed384: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED384u;
    {
        const bool branch_taken_0x2ed384 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed384) {
            ctx->pc = 0x2ED388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED384u;
            // 0x2ed388: 0xe7a60004  swc1        $f6, 0x4($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED38Cu;
            goto label_2ed38c;
        }
    }
    ctx->pc = 0x2ED38Cu;
label_2ed38c:
    // 0x2ed38c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ed38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed390: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2ed390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed394: 0x0  nop
    ctx->pc = 0x2ed394u;
    // NOP
    // 0x2ed398: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED398u;
    {
        const bool branch_taken_0x2ed398 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed398) {
            ctx->pc = 0x2ED39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED398u;
            // 0x2ed39c: 0xe7a60008  swc1        $f6, 0x8($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3A0u;
            goto label_2ed3a0;
        }
    }
    ctx->pc = 0x2ED3A0u;
label_2ed3a0:
    // 0x2ed3a0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ed3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed3a4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2ed3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed3a8: 0x0  nop
    ctx->pc = 0x2ed3a8u;
    // NOP
    // 0x2ed3ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED3ACu;
    {
        const bool branch_taken_0x2ed3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed3ac) {
            ctx->pc = 0x2ED3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3ACu;
            // 0x2ed3b0: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3B4u;
            goto label_2ed3b4;
        }
    }
    ctx->pc = 0x2ED3B4u;
label_2ed3b4:
    // 0x2ed3b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2ed3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed3b8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ed3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed3bc: 0x0  nop
    ctx->pc = 0x2ed3bcu;
    // NOP
    // 0x2ed3c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED3C0u;
    {
        const bool branch_taken_0x2ed3c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed3c0) {
            ctx->pc = 0x2ED3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3C0u;
            // 0x2ed3c4: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3C8u;
            goto label_2ed3c8;
        }
    }
    ctx->pc = 0x2ED3C8u;
label_2ed3c8:
    // 0x2ed3c8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2ed3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed3cc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ed3ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed3d0: 0x0  nop
    ctx->pc = 0x2ed3d0u;
    // NOP
    // 0x2ed3d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED3D4u;
    {
        const bool branch_taken_0x2ed3d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed3d4) {
            ctx->pc = 0x2ED3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3D4u;
            // 0x2ed3d8: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3DCu;
            goto label_2ed3dc;
        }
    }
    ctx->pc = 0x2ED3DCu;
label_2ed3dc:
    // 0x2ed3dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ed3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed3e0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ed3e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed3e4: 0x0  nop
    ctx->pc = 0x2ed3e4u;
    // NOP
    // 0x2ed3e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED3E8u;
    {
        const bool branch_taken_0x2ed3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed3e8) {
            ctx->pc = 0x2ED3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3E8u;
            // 0x2ed3ec: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED3F0u;
            goto label_2ed3f0;
        }
    }
    ctx->pc = 0x2ED3F0u;
label_2ed3f0:
    // 0x2ed3f0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2ed3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed3f4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ed3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed3f8: 0x0  nop
    ctx->pc = 0x2ed3f8u;
    // NOP
    // 0x2ed3fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED3FCu;
    {
        const bool branch_taken_0x2ed3fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed3fc) {
            ctx->pc = 0x2ED400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3FCu;
            // 0x2ed400: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED404u;
            goto label_2ed404;
        }
    }
    ctx->pc = 0x2ED404u;
label_2ed404:
    // 0x2ed404: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x2ed404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2ed408: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2ED408u;
    {
        const bool branch_taken_0x2ed408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED408u;
        // 0x2ed40c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed408) {
            ctx->pc = 0x2ED498u;
            goto label_2ed498;
        }
    }
    ctx->pc = 0x2ED410u;
    // 0x2ed410: 0x9222011c  lbu         $v0, 0x11C($s1)
    ctx->pc = 0x2ed410u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ed414: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2ed414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2ed418: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2ED418u;
    {
        const bool branch_taken_0x2ed418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed418) {
            ctx->pc = 0x2ED41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED418u;
            // 0x2ed41c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED49Cu;
            goto label_2ed49c;
        }
    }
    ctx->pc = 0x2ED420u;
    // 0x2ed420: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2ed420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2ed424: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ed424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ed428: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED428u;
    {
        const bool branch_taken_0x2ed428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed428) {
            ctx->pc = 0x2ED42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED428u;
            // 0x2ed42c: 0x908202b6  lbu         $v0, 0x2B6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 694)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED438u;
            goto label_2ed438;
        }
    }
    ctx->pc = 0x2ED430u;
    // 0x2ed430: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2ED430u;
    {
        const bool branch_taken_0x2ed430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED430u;
        // 0x2ed434: 0xe7a6000c  swc1        $f6, 0xC($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed430) {
            ctx->pc = 0x2ED4A0u;
            goto label_2ed4a0;
        }
    }
    ctx->pc = 0x2ED438u;
label_2ed438:
    // 0x2ed438: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2ed438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2ed43c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ed43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ed440: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x2ed440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2ed444: 0x0  nop
    ctx->pc = 0x2ed444u;
    // NOP
    // 0x2ed448: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2ed448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2ed44c: 0x908302b7  lbu         $v1, 0x2B7($a0)
    ctx->pc = 0x2ed44cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 695)));
    // 0x2ed450: 0x908202bc  lbu         $v0, 0x2BC($a0)
    ctx->pc = 0x2ed450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 700)));
    // 0x2ed454: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ed454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ed458: 0x0  nop
    ctx->pc = 0x2ed458u;
    // NOP
    // 0x2ed45c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ed45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ed460: 0xc480024c  lwc1        $f0, 0x24C($a0)
    ctx->pc = 0x2ed460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed464: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x2ed464u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[4]);
    // 0x2ed468: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2ed468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ed46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed470: 0x0  nop
    ctx->pc = 0x2ed470u;
    // NOP
    // 0x2ed474: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed474u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed478: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2ed478u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2ed47c: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x2ed47cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2ed480: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2ed480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2ed484: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ed484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ed488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ed488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ed48c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2ed48cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2ed490: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED490u;
    {
        const bool branch_taken_0x2ed490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED490u;
        // 0x2ed494: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed490) {
            ctx->pc = 0x2ED4A0u;
            goto label_2ed4a0;
        }
    }
    ctx->pc = 0x2ED498u;
label_2ed498:
    // 0x2ed498: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2ed498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2ed49c:
    // 0x2ed49c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2ed49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2ed4a0:
    // 0x2ed4a0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2ed4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed4a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ed4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed4a8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2ed4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed4ac: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x2ed4acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x2ed4b0: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x2ed4b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x2ed4b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ed4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed4b8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed4b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ed4bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2ed4bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ed4c0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2ed4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed4c4: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed4c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ed4c8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ed4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ed4cc: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x2ed4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
    // 0x2ed4d0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ed4d4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x2ed4d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2ed4d8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed4d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ed4dc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2ed4dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2ed4e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed4e4: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2ed4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2ed4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ed4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ed4ec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ed4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ed4f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ed4f4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2ed4f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2ed4f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2ed4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ed4fc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ed4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ed500: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2ed500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2ed504: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ed504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ed508: 0x131902  srl         $v1, $s3, 4
    ctx->pc = 0x2ed508u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x2ed50c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ed50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ed510: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2ed510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2ed514: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x2ed514u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    // 0x2ed518: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ed518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ed51c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2ed51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2ed520: 0x3c070a00  lui         $a3, 0xA00
    ctx->pc = 0x2ed520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2560 << 16));
    // 0x2ed524: 0x34e700f8  ori         $a3, $a3, 0xF8
    ctx->pc = 0x2ed524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)248);
    // 0x2ed528: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ed528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ed52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2ed52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ed530: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ed534: 0x34058152  ori         $a1, $zero, 0x8152
    ctx->pc = 0x2ed534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x2ed538: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2ed538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2ed53c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ed53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ed540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ed540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ed544: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ed544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ed548: 0xfe440068  sd          $a0, 0x68($s2)
    ctx->pc = 0x2ed548u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 4));
    // 0x2ed54c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ed54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ed550: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2ed550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2ed554: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ed554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2ed558: 0x27d70090  addiu       $s7, $fp, 0x90
    ctx->pc = 0x2ed558u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2ed55c: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x2ed55cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x2ed560: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2ed560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2ed564: 0xffc30090  sd          $v1, 0x90($fp)
    ctx->pc = 0x2ed564u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 144), GPR_U64(ctx, 3));
    // 0x2ed568: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2ed568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2ed56c: 0xaee40008  sw          $a0, 0x8($s7)
    ctx->pc = 0x2ed56cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 4));
    // 0x2ed570: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x2ed570u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x2ed574: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2ed574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2ed578: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ed578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ed57c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ed57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ed580: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED580u;
    {
        const bool branch_taken_0x2ed580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED580u;
        // 0x2ed584: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed580) {
            ctx->pc = 0x2ED5A8u;
            goto label_2ed5a8;
        }
    }
    ctx->pc = 0x2ED588u;
    // 0x2ed588: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2ed588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2ed58c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2ed58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed590: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2ed594: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ed594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed598: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2ED598u;
    SET_GPR_U32(ctx, 31, 0x2ED5A0u);
    ctx->pc = 0x2ED59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED598u;
    // 0x2ed59c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2ED598u, 0x2ED5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED5A0u;
label_2ed5a0:
    // 0x2ed5a0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2ED5A0u;
    {
        const bool branch_taken_0x2ed5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5A0u;
        // 0x2ed5a4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5a0) {
            ctx->pc = 0x2ED628u;
            goto label_2ed628;
        }
    }
    ctx->pc = 0x2ED5A8u;
label_2ed5a8:
    // 0x2ed5a8: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x2ed5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed5ac: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x2ed5acu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2ed5b0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x2ed5b0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ed5b4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x2ed5b4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2ed5b8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x2ed5b8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2ed5bc: 0xf8e40030  sqc2        $vf4, 0x30($a3)
    ctx->pc = 0x2ed5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed5c0: 0xf8e50020  sqc2        $vf5, 0x20($a3)
    ctx->pc = 0x2ed5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ed5c4: 0xf8e60010  sqc2        $vf6, 0x10($a3)
    ctx->pc = 0x2ed5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2ed5c8: 0xf8e70000  sqc2        $vf7, 0x0($a3)
    ctx->pc = 0x2ed5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2ed5cc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ed5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ed5d0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ed5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ed5d4: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x2ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ed5d8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ed5dc: 0x8c83118c  lw          $v1, 0x118C($a0)
    ctx->pc = 0x2ed5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2ed5e0: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x2ed5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x2ed5e4: 0x237c2  srl         $a2, $v0, 31
    ctx->pc = 0x2ed5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ed5e8: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2ed5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2ed5ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ed5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ed5f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ed5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ed5f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ed5f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ed5f8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x2ed5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ed5fc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2ed5fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2ed600: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2ed600u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ed604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed608: 0x0  nop
    ctx->pc = 0x2ed608u;
    // NOP
    // 0x2ed60c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed60cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ed610: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ed610u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed614: 0x0  nop
    ctx->pc = 0x2ed614u;
    // NOP
    // 0x2ed618: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed61c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2ed61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2ed620: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2ed620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2ed624: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2ed624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ed628:
    // 0x2ed628: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2ED628u;
    SET_GPR_U32(ctx, 31, 0x2ED630u);
    ctx->pc = 0x2ED62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED628u;
    // 0x2ed62c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2ED628u, 0x2ED630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED630u;
label_2ed630:
    // 0x2ed630: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ed634: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ed634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ed638: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ed638u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed63c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2ed63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed640: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x2ed640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed644: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x2ed644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed648: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x2ed648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed64c: 0xc7b40054  lwc1        $f20, 0x54($sp)
    ctx->pc = 0x2ed64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ed650: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2ed650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed654: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2ed654u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed658: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2ed658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2ed65c: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ed660: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ed660u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed664: 0x0  nop
    ctx->pc = 0x2ed664u;
    // NOP
    // 0x2ed668: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ed668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ed66c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2ed670: 0x0  nop
    ctx->pc = 0x2ed670u;
    // NOP
    // 0x2ed674: 0x0  nop
    ctx->pc = 0x2ed674u;
    // NOP
    // 0x2ed678: 0x46010543  div.s       $f21, $f0, $f1
    ctx->pc = 0x2ed678u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2ed67c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED67Cu;
    {
        const bool branch_taken_0x2ed67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed67c) {
            ctx->pc = 0x2ED680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED67Cu;
            // 0x2ed680: 0x4615ad40  add.s       $f21, $f21, $f21 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED684u;
            goto label_2ed684;
        }
    }
    ctx->pc = 0x2ED684u;
label_2ed684:
    // 0x2ed684: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2ed684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2ed688: 0x54800007  bnel        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED688u;
    {
        const bool branch_taken_0x2ed688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed688) {
            ctx->pc = 0x2ED68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED688u;
            // 0x2ed68c: 0x8e2202bc  lw          $v0, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED6A8u;
            goto label_2ed6a8;
        }
    }
    ctx->pc = 0x2ED690u;
    // 0x2ed690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed694: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ed694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed698: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2ed698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2ed69c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2ed69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ed6a0: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2ed6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x2ed6a4: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2ed6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_2ed6a8:
    // 0x2ed6a8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ed6a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed6ac: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ed6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed6b0: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x2ed6b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ed6b4: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x2ed6b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ed6b8: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ed6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed6bc: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x2ed6bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed6c0: 0x0  nop
    ctx->pc = 0x2ed6c0u;
    // NOP
    // 0x2ed6c4: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x2ED6C4u;
    {
        const bool branch_taken_0x2ed6c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C4u;
        // 0x2ed6c8: 0x27b200b0  addiu       $s2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6c4) {
            ctx->pc = 0x2ED798u;
            goto label_2ed798;
        }
    }
    ctx->pc = 0x2ED6CCu;
    // 0x2ed6cc: 0x8e02aff0  lw          $v0, -0x5010($s0)
    ctx->pc = 0x2ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294946800)));
    // 0x2ed6d0: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2ed6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ed6d4: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x2ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2ed6d8: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ed6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed6dc: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ed6dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed6e0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ed6e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed6e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ed6e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed6e8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ed6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed6ec: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ed6ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed6f0: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ed6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed6f4: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2ed6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ed6f8: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x2ed6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed700: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2ED700u;
    SET_GPR_U32(ctx, 31, 0x2ED708u);
    ctx->pc = 0x2ED704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED700u;
    // 0x2ed704: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2ED700u, 0x2ED708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED708u;
label_2ed708:
    // 0x2ed708: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2ed708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed70c: 0x0  nop
    ctx->pc = 0x2ed70cu;
    // NOP
    // 0x2ed710: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED710u;
    {
        const bool branch_taken_0x2ed710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ED714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED710u;
        // 0x2ed714: 0xc7a400b0  lwc1        $f4, 0xB0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed710) {
            ctx->pc = 0x2ED754u;
            goto label_2ed754;
        }
    }
    ctx->pc = 0x2ED718u;
    // 0x2ed718: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed71c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ed71cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed720: 0x0  nop
    ctx->pc = 0x2ed720u;
    // NOP
    // 0x2ed724: 0x0  nop
    ctx->pc = 0x2ed724u;
    // NOP
    // 0x2ed728: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2ed728u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2ed72c: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x2ed72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed730: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ed730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed734: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ed734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed738: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2ed738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2ed73c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2ed73cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2ed740: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x2ed740u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2ed744: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x2ed744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2ed748: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x2ed748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2ed74c: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x2ed74cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2ed750: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x2ed750u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_2ed754:
    // 0x2ed754: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2ed754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2ed758: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ed758u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed75c: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x2ed75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed760: 0xc6200254  lwc1        $f0, 0x254($s1)
    ctx->pc = 0x2ed760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed764: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2ed764u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ed768: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ed768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed76c: 0xdba400e0  lqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ed76cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2ed770: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2ed770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2ed774: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2ed774u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2ed778: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2ed778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed77c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x2ed77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed780: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ed780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed784: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ed784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed788: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ed788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed78c: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x2ed78cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ed790: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ed790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed794: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ed794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_2ed798:
    // 0x2ed798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed79c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ed79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed7a0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2ED7A0u;
    SET_GPR_U32(ctx, 31, 0x2ED7A8u);
    ctx->pc = 0x2ED7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7A0u;
    // 0x2ed7a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2ED7A0u, 0x2ED7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7A8u;
label_2ed7a8:
    // 0x2ed7a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ed7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ed7ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ed7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ed7b0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2ed7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed7b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ed7b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed7b8: 0x0  nop
    ctx->pc = 0x2ed7b8u;
    // NOP
    // 0x2ed7bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2ED7BCu;
    {
        const bool branch_taken_0x2ed7bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed7bc) {
            ctx->pc = 0x2ED7C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED7BCu;
            // 0x2ed7c0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7C4u;
            goto label_2ed7c4;
        }
    }
    ctx->pc = 0x2ED7C4u;
label_2ed7c4:
    // 0x2ed7c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ed7c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ed7c8: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x2ed7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2ed7cc: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x2ed7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ed7d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ed7d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7d4: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2ed7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2ed7d8: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2ed7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed7dc: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x2ed7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x2ed7e0: 0x18400117  blez        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x2ED7E0u;
    {
        const bool branch_taken_0x2ed7e0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2ED7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7E0u;
        // 0x2ed7e4: 0xafa3011c  sw          $v1, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7e0) {
            ctx->pc = 0x2EDC40u;
            goto label_2edc40;
        }
    }
    ctx->pc = 0x2ED7E8u;
    // 0x2ed7e8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x2ed7e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7ec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2ed7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2ed7f0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2ed7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ed7f4: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2ed7f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7f8: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2ed7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x2ed7fc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ed7fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed800: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x2ed800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x2ed804: 0x0  nop
    ctx->pc = 0x2ed804u;
    // NOP
label_2ed808:
    // 0x2ed808: 0x8e2402bc  lw          $a0, 0x2BC($s1)
    ctx->pc = 0x2ed808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2ed80c: 0x2e41821  addu        $v1, $s7, $a0
    ctx->pc = 0x2ed80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2ed810: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ed810u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed814: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x2ed814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed818: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x2ed818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2ed81c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x2ed81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x2ed820: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2ED820u;
    {
        const bool branch_taken_0x2ed820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED820u;
        // 0x2ed824: 0x27b300c0  addiu       $s3, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed820) {
            ctx->pc = 0x2ED9A0u;
            goto label_2ed9a0;
        }
    }
    ctx->pc = 0x2ED828u;
    // 0x2ed828: 0x16c00012  bnez        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED828u;
    {
        const bool branch_taken_0x2ed828 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED828u;
        // 0x2ed82c: 0x2462fff0  addiu       $v0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed828) {
            ctx->pc = 0x2ED874u;
            goto label_2ed874;
        }
    }
    ctx->pc = 0x2ED830u;
    // 0x2ed830: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2ed830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2ed834: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ed834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed838: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2ed838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed83c: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2ed83cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed840: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ed840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed844: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ed844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed848: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x2ed848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ed84c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x2ed84cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ed850: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ed850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed854: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2ed854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed858: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2ed858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed85c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x2ed85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed860: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2ed860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ed864: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2ed864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ed868: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x2ed868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2ed86c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2ED86Cu;
    {
        const bool branch_taken_0x2ed86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED86Cu;
        // 0x2ed870: 0xc7b40054  lwc1        $f20, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed86c) {
            ctx->pc = 0x2ED900u;
            goto label_2ed900;
        }
    }
    ctx->pc = 0x2ED874u;
label_2ed874:
    // 0x2ed874: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ed874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed878: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ed878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed87c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ed87cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed880: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ed880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed884: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ed884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed888: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x2ed888u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2ed88c: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2ed88cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ed890: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ed890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed894: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2ed894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed898: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2ed898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2ed89c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ed89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed8a0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2ed8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed8a4: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x2ed8a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2ed8a8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2ed8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2ed8ac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2ED8ACu;
    {
        const bool branch_taken_0x2ed8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8ACu;
        // 0x2ed8b0: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8ac) {
            ctx->pc = 0x2ED8FCu;
            goto label_2ed8fc;
        }
    }
    ctx->pc = 0x2ED8B4u;
    // 0x2ed8b4: 0x92220249  lbu         $v0, 0x249($s1)
    ctx->pc = 0x2ed8b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2ed8b8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ed8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2ed8bc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ed8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ed8c0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ed8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2ed8c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ed8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ed8c8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ed8c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ed8cc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2ed8ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ed8d0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED8D0u;
    {
        const bool branch_taken_0x2ed8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed8d0) {
            ctx->pc = 0x2ED8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED8D0u;
            // 0x2ed8d4: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED900u;
            goto label_2ed900;
        }
    }
    ctx->pc = 0x2ED8D8u;
    // 0x2ed8d8: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2ed8d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2ed8dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ed8dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ed8e0: 0x0  nop
    ctx->pc = 0x2ed8e0u;
    // NOP
    // 0x2ed8e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ed8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ed8e8: 0x0  nop
    ctx->pc = 0x2ed8e8u;
    // NOP
    // 0x2ed8ec: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED8ECu;
    {
        const bool branch_taken_0x2ed8ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ed8ec) {
            ctx->pc = 0x2ED8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED8ECu;
            // 0x2ed8f0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED900u;
            goto label_2ed900;
        }
    }
    ctx->pc = 0x2ED8F4u;
    // 0x2ed8f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED8F4u;
    {
        const bool branch_taken_0x2ed8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED8F4u;
        // 0x2ed8f8: 0x8faa0118  lw          $t2, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed8f4) {
            ctx->pc = 0x2ED904u;
            goto label_2ed904;
        }
    }
    ctx->pc = 0x2ED8FCu;
label_2ed8fc:
    // 0x2ed8fc: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2ed8fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_2ed900:
    // 0x2ed900: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x2ed900u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2ed904:
    // 0x2ed904: 0x51400010  beql        $t2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED904u;
    {
        const bool branch_taken_0x2ed904 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed904) {
            ctx->pc = 0x2ED908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED904u;
            // 0x2ed908: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED948u;
            goto label_2ed948;
        }
    }
    ctx->pc = 0x2ED90Cu;
    // 0x2ed90c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x2ed90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ed910: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2ed910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x2ed914: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2ed914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2ed918: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2ed918u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ed91c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ed91cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ed920: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x2ed920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed924: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2ed924u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ed928: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x2ed928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ed92c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2ed92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed930: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2ed930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed934: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2ed934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed938: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2ed938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2ed93c: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2ed93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2ed940: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x2ed940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2ed944: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ed944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2ed948:
    // 0x2ed948: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ed948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ed94c: 0xc0c28ca  jal         func_30A328
    ctx->pc = 0x2ED94Cu;
    SET_GPR_U32(ctx, 31, 0x2ED954u);
    ctx->pc = 0x2ED950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED94Cu;
    // 0x2ed950: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A328u, 0x2ED94Cu, 0x2ED954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED954u;
label_2ed954:
    // 0x2ed954: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ed954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ed958: 0xc0c28dc  jal         func_30A370
    ctx->pc = 0x2ED958u;
    SET_GPR_U32(ctx, 31, 0x2ED960u);
    ctx->pc = 0x2ED95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED958u;
    // 0x2ed95c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A370u, 0x2ED958u, 0x2ED960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED960u;
label_2ed960:
    // 0x2ed960: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2ed960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ed964: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ed964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2ed968: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2ED968u;
    SET_GPR_U32(ctx, 31, 0x2ED970u);
    ctx->pc = 0x2ED96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED968u;
    // 0x2ed96c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2ED968u, 0x2ED970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED970u;
label_2ed970:
    // 0x2ed970: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ed970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ed974: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ed974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ed978: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ed978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ed97c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2ed97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ed980: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2ed980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ed984: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2ed984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2ed988: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2ed988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2ed98c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2ed98cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2ed990: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2ed990u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2ed994: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2ed994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2ed998: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2ed998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2ed99c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2ed99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2ed9a0:
    // 0x2ed9a0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2ed9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed9a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ed9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9a8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2ED9A8u;
    SET_GPR_U32(ctx, 31, 0x2ED9B0u);
    ctx->pc = 0x2ED9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9A8u;
    // 0x2ed9ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2ED9A8u, 0x2ED9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9B0u;
label_2ed9b0:
    // 0x2ed9b0: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2ed9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed9b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9b8: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2ED9B8u;
    SET_GPR_U32(ctx, 31, 0x2ED9C0u);
    ctx->pc = 0x2ED9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9B8u;
    // 0x2ed9bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2ED9B8u, 0x2ED9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9C0u;
label_2ed9c0:
    // 0x2ed9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ed9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed9c4: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2ED9C4u;
    SET_GPR_U32(ctx, 31, 0x2ED9CCu);
    ctx->pc = 0x2ED9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED9C4u;
    // 0x2ed9c8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2ED9C4u, 0x2ED9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED9CCu;
label_2ed9cc:
    // 0x2ed9cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2ed9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2ed9d0: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2ED9D0u;
    {
        const bool branch_taken_0x2ed9d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2ED9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED9D0u;
        // 0x2ed9d4: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed9d0) {
            ctx->pc = 0x2EDA50u;
            goto label_2eda50;
        }
    }
    ctx->pc = 0x2ED9D8u;
    // 0x2ed9d8: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2ed9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2ed9dc: 0x8c661180  lw          $a2, 0x1180($v1)
    ctx->pc = 0x2ed9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4480)));
    // 0x2ed9e0: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2ed9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ed9e4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2ed9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ed9e8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2ed9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2ed9ec: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ed9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ed9f0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2ed9f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2ed9f4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2ed9f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ed9f8: 0xe51023  subu        $v0, $a3, $a1
    ctx->pc = 0x2ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2ed9fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2ed9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eda00: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EDA00u;
    {
        const bool branch_taken_0x2eda00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA00u;
        // 0x2eda04: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda00) {
            ctx->pc = 0x2EDA50u;
            goto label_2eda50;
        }
    }
    ctx->pc = 0x2EDA08u;
    // 0x2eda08: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2eda08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2eda0c: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2eda0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2eda10: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2eda10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eda14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EDA14u;
    {
        const bool branch_taken_0x2eda14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda14) {
            ctx->pc = 0x2EDA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA14u;
            // 0x2eda18: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA54u;
            goto label_2eda54;
        }
    }
    ctx->pc = 0x2EDA1Cu;
    // 0x2eda1c: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x2eda1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
    // 0x2eda20: 0x8d436b80  lw          $v1, 0x6B80($t2)
    ctx->pc = 0x2eda20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2eda24: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2eda24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2eda28: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2eda28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eda2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDA2Cu;
    {
        const bool branch_taken_0x2eda2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eda2c) {
            ctx->pc = 0x2EDA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDA2Cu;
            // 0x2eda30: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDA54u;
            goto label_2eda54;
        }
    }
    ctx->pc = 0x2EDA34u;
    // 0x2eda34: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2eda34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2eda38: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2eda38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2eda3c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eda3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eda40: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2eda40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2eda44: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2eda44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eda48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDA48u;
    {
        const bool branch_taken_0x2eda48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA48u;
        // 0x2eda4c: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda48) {
            ctx->pc = 0x2EDA58u;
            goto label_2eda58;
        }
    }
    ctx->pc = 0x2EDA50u;
label_2eda50:
    // 0x2eda50: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2eda50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2eda54:
    // 0x2eda54: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2eda54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2eda58:
    // 0x2eda58: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2eda58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2eda5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2eda5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2eda60: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2eda60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2eda64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2eda64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2eda68: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2eda68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2eda6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2eda6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2eda70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2eda70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2eda74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2eda74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2eda78: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDA78u;
    {
        const bool branch_taken_0x2eda78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA78u;
        // 0x2eda7c: 0xfe430020  sd          $v1, 0x20($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda78) {
            ctx->pc = 0x2EDA8Cu;
            goto label_2eda8c;
        }
    }
    ctx->pc = 0x2EDA80u;
    // 0x2eda80: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2eda80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2eda84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDA84u;
    {
        const bool branch_taken_0x2eda84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDA84u;
        // 0x2eda88: 0xfe460028  sd          $a2, 0x28($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eda84) {
            ctx->pc = 0x2EDA94u;
            goto label_2eda94;
        }
    }
    ctx->pc = 0x2EDA8Cu;
label_2eda8c:
    // 0x2eda8c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2eda8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eda90: 0xfe420028  sd          $v0, 0x28($s2)
    ctx->pc = 0x2eda90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 2));
label_2eda94:
    // 0x2eda94: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x2eda94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2eda98: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2eda98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2eda9c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2eda9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2edaa0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2EDAA0u;
    {
        const bool branch_taken_0x2edaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDAA0u;
        // 0x2edaa4: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edaa0) {
            ctx->pc = 0x2EDAD4u;
            goto label_2edad4;
        }
    }
    ctx->pc = 0x2EDAA8u;
    // 0x2edaa8: 0x8e2202c0  lw          $v0, 0x2C0($s1)
    ctx->pc = 0x2edaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2edaac: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2edaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2edab0: 0x5282001f  beql        $s4, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EDAB0u;
    {
        const bool branch_taken_0x2edab0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2edab0) {
            ctx->pc = 0x2EDAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDAB0u;
            // 0x2edab4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDB30u;
            goto label_2edb30;
        }
    }
    ctx->pc = 0x2EDAB8u;
    // 0x2edab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2edab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edabc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2edabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2edac0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2edac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2edac4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2edac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2edac8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2edac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edacc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2EDACCu;
    {
        const bool branch_taken_0x2edacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDACCu;
        // 0x2edad0: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edacc) {
            ctx->pc = 0x2EDB2Cu;
            goto label_2edb2c;
        }
    }
    ctx->pc = 0x2EDAD4u;
label_2edad4:
    // 0x2edad4: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x2edad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x2edad8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2edad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2edadc: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EDADCu;
    {
        const bool branch_taken_0x2edadc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EDAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDADCu;
        // 0x2edae0: 0xc7a000a0  lwc1        $f0, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edadc) {
            ctx->pc = 0x2EDB00u;
            goto label_2edb00;
        }
    }
    ctx->pc = 0x2EDAE4u;
    // 0x2edae4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2edae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edae8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2edae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2edaec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2edaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2edaf0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2edaf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2edaf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2edaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2edaf8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2edaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2edafc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2edafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2edb00:
    // 0x2edb00: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2edb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2edb04: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x2edb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2edb08: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x2edb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2edb0c: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x2edb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2edb10: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x2edb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2edb14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2edb14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2edb18: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2edb18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2edb1c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2edb1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2edb20: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2edb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2edb24: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2edb24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2edb28: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2edb28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2edb2c:
    // 0x2edb2c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2edb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2edb30:
    // 0x2edb30: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2edb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb34: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EDB34u;
    SET_GPR_U32(ctx, 31, 0x2EDB3Cu);
    ctx->pc = 0x2EDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB34u;
    // 0x2edb38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EDB34u, 0x2EDB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB3Cu;
label_2edb3c:
    // 0x2edb3c: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2edb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2edb40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2edb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb44: 0xc0c291a  jal         func_30A468
    ctx->pc = 0x2EDB44u;
    SET_GPR_U32(ctx, 31, 0x2EDB4Cu);
    ctx->pc = 0x2EDB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB44u;
    // 0x2edb48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A468u, 0x2EDB44u, 0x2EDB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB4Cu;
label_2edb4c:
    // 0x2edb4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2edb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edb50: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EDB50u;
    SET_GPR_U32(ctx, 31, 0x2EDB58u);
    ctx->pc = 0x2EDB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDB50u;
    // 0x2edb54: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EDB50u, 0x2EDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDB58u;
label_2edb58:
    // 0x2edb58: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2edb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2edb5c: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2EDB5Cu;
    {
        const bool branch_taken_0x2edb5c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2EDB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB5Cu;
        // 0x2edb60: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb5c) {
            ctx->pc = 0x2EDBDCu;
            goto label_2edbdc;
        }
    }
    ctx->pc = 0x2EDB64u;
    // 0x2edb64: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2edb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2edb68: 0x8ce61180  lw          $a2, 0x1180($a3)
    ctx->pc = 0x2edb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4480)));
    // 0x2edb6c: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x2edb6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2edb70: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2edb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2edb74: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2edb74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2edb78: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2edb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2edb7c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2edb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2edb80: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x2edb80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2edb84: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x2edb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2edb88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2edb88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2edb8c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EDB8Cu;
    {
        const bool branch_taken_0x2edb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDB8Cu;
        // 0x2edb90: 0x42103  sra         $a0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edb8c) {
            ctx->pc = 0x2EDBDCu;
            goto label_2edbdc;
        }
    }
    ctx->pc = 0x2EDB94u;
    // 0x2edb94: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2edb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2edb98: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2edb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2edb9c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2edb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2edba0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2EDBA0u;
    {
        const bool branch_taken_0x2edba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edba0) {
            ctx->pc = 0x2EDBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDBA0u;
            // 0x2edba4: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDBE0u;
            goto label_2edbe0;
        }
    }
    ctx->pc = 0x2EDBA8u;
    // 0x2edba8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2edba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2edbac: 0x8c436b80  lw          $v1, 0x6B80($v0)
    ctx->pc = 0x2edbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B80u));
    // 0x2edbb0: 0x2462fc00  addiu       $v0, $v1, -0x400
    ctx->pc = 0x2edbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966272));
    // 0x2edbb4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2edbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2edbb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EDBB8u;
    {
        const bool branch_taken_0x2edbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2edbb8) {
            ctx->pc = 0x2EDBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDBB8u;
            // 0x2edbbc: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDBE0u;
            goto label_2edbe0;
        }
    }
    ctx->pc = 0x2EDBC0u;
    // 0x2edbc0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2edbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2edbc4: 0x8ca2118c  lw          $v0, 0x118C($a1)
    ctx->pc = 0x2edbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2edbc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2edbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2edbcc: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2edbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2edbd0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2edbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2edbd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDBD4u;
    {
        const bool branch_taken_0x2edbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBD4u;
        // 0x2edbd8: 0x8fa400c4  lw          $a0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbd4) {
            ctx->pc = 0x2EDBE4u;
            goto label_2edbe4;
        }
    }
    ctx->pc = 0x2EDBDCu;
label_2edbdc:
    // 0x2edbdc: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x2edbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_2edbe0:
    // 0x2edbe0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2edbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2edbe4:
    // 0x2edbe4: 0x32050007  andi        $a1, $s0, 0x7
    ctx->pc = 0x2edbe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x2edbe8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x2edbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2edbec: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2edbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2edbf0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2edbf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2edbf4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2edbf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2edbf8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2edbf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2edbfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2edbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2edc00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2edc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2edc04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDC04u;
    {
        const bool branch_taken_0x2edc04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC04u;
        // 0x2edc08: 0xfe430040  sd          $v1, 0x40($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc04) {
            ctx->pc = 0x2EDC18u;
            goto label_2edc18;
        }
    }
    ctx->pc = 0x2EDC0Cu;
    // 0x2edc0c: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x2edc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2edc10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDC10u;
    {
        const bool branch_taken_0x2edc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC10u;
        // 0x2edc14: 0xfe460048  sd          $a2, 0x48($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc10) {
            ctx->pc = 0x2EDC20u;
            goto label_2edc20;
        }
    }
    ctx->pc = 0x2EDC18u;
label_2edc18:
    // 0x2edc18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2edc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2edc1c: 0xfe420048  sd          $v0, 0x48($s2)
    ctx->pc = 0x2edc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 2));
label_2edc20:
    // 0x2edc20: 0x82230249  lb          $v1, 0x249($s1)
    ctx->pc = 0x2edc20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2edc24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2edc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2edc28: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2edc28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2edc2c: 0x305000fe  andi        $s0, $v0, 0xFE
    ctx->pc = 0x2edc2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2edc30: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2edc30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2edc34: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2edc34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2edc38: 0x1460fef3  bnez        $v1, . + 4 + (-0x10D << 2)
    ctx->pc = 0x2EDC38u;
    {
        const bool branch_taken_0x2edc38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC38u;
        // 0x2edc3c: 0x26f70010  addiu       $s7, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc38) {
            ctx->pc = 0x2ED808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed808;
        }
    }
    ctx->pc = 0x2EDC40u;
label_2edc40:
    // 0x2edc40: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x2edc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x2edc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2edc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2edc48: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EDC48u;
    {
        const bool branch_taken_0x2edc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC48u;
        // 0x2edc4c: 0x3c070074  lui         $a3, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc48) {
            ctx->pc = 0x2EDDF4u;
            goto label_2eddf4;
        }
    }
    ctx->pc = 0x2EDC50u;
    // 0x2edc50: 0x8faa0114  lw          $t2, 0x114($sp)
    ctx->pc = 0x2edc50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x2edc54: 0x24e274a0  addiu       $v0, $a3, 0x74A0
    ctx->pc = 0x2edc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 29856));
    // 0x2edc58: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2edc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2edc5c: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x2edc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2edc60: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2edc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2edc64: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x2edc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2edc68: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x2edc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x2edc6c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2edc6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2edc70: 0x27a600fc  addiu       $a2, $sp, 0xFC
    ctx->pc = 0x2edc70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x2edc74: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2edc74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2edc78: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2edc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2edc7c: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2EDC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC84u);
    ctx->pc = 0x2EDC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC7Cu;
    // 0x2edc80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2EDC7Cu, 0x2EDC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDC84u;
label_2edc84:
    // 0x2edc84: 0x92240245  lbu         $a0, 0x245($s1)
    ctx->pc = 0x2edc84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x2edc88: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2edc88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2edc8c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2edc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2edc90: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDC90u;
    {
        const bool branch_taken_0x2edc90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edc90) {
            ctx->pc = 0x2EDC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EDC90u;
            // 0x2edc94: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EDC98u;
            goto label_2edc98;
        }
    }
    ctx->pc = 0x2EDC98u;
label_2edc98:
    // 0x2edc98: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2edc98u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2edc9c: 0x92250246  lbu         $a1, 0x246($s1)
    ctx->pc = 0x2edc9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x2edca0: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x2edca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x2edca4: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2edca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2edca8: 0x0  nop
    ctx->pc = 0x2edca8u;
    // NOP
    // 0x2edcac: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2edcacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2edcb0: 0x82220244  lb          $v0, 0x244($s1)
    ctx->pc = 0x2edcb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2edcb4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2edcb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2edcb8: 0x0  nop
    ctx->pc = 0x2edcb8u;
    // NOP
    // 0x2edcbc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2edcbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2edcc0: 0x8e28011c  lw          $t0, 0x11C($s1)
    ctx->pc = 0x2edcc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2edcc4: 0xc62202d8  lwc1        $f2, 0x2D8($s1)
    ctx->pc = 0x2edcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2edcc8: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2edcc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2edccc: 0x3812  mflo        $a3
    ctx->pc = 0x2edcccu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2edcd0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2edcd0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2edcd4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2edcd4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edcd8: 0x0  nop
    ctx->pc = 0x2edcd8u;
    // NOP
    // 0x2edcdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edcdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edce0: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x2edce0u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[4]);
    // 0x2edce4: 0x2812  mflo        $a1
    ctx->pc = 0x2edce4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2edce8: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2edce8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2edcec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2edcecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edcf0: 0x0  nop
    ctx->pc = 0x2edcf0u;
    // NOP
    // 0x2edcf4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2edcf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2edcf8: 0x460308c3  div.s       $f3, $f1, $f3
    ctx->pc = 0x2edcf8u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x2edcfc: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2edcfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2edd00: 0x1810  mfhi        $v1
    ctx->pc = 0x2edd00u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2edd04: 0x1012  mflo        $v0
    ctx->pc = 0x2edd04u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2edd08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2edd08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edd0c: 0x0  nop
    ctx->pc = 0x2edd0cu;
    // NOP
    // 0x2edd10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edd10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edd14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2edd14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edd18: 0x0  nop
    ctx->pc = 0x2edd18u;
    // NOP
    // 0x2edd1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2edd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2edd20: 0x46040182  mul.s       $f6, $f0, $f4
    ctx->pc = 0x2edd20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2edd24: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDD24u;
    {
        const bool branch_taken_0x2edd24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD24u;
        // 0x2edd28: 0x46030802  mul.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd24) {
            ctx->pc = 0x2EDD34u;
            goto label_2edd34;
        }
    }
    ctx->pc = 0x2EDD2Cu;
    // 0x2edd2c: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x2edd2cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2edd30: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x2edd30u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
label_2edd34:
    // 0x2edd34: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2edd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2edd38: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2edd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2edd3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EDD3Cu;
    {
        const bool branch_taken_0x2edd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD3Cu;
        // 0x2edd40: 0x82220249  lb          $v0, 0x249($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd3c) {
            ctx->pc = 0x2EDD4Cu;
            goto label_2edd4c;
        }
    }
    ctx->pc = 0x2EDD44u;
    // 0x2edd44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2edd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2edd48: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2edd48u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_2edd4c:
    // 0x2edd4c: 0x18400029  blez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2EDD4Cu;
    {
        const bool branch_taken_0x2edd4c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDD4Cu;
        // 0x2edd50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edd4c) {
            ctx->pc = 0x2EDDF4u;
            goto label_2eddf4;
        }
    }
    ctx->pc = 0x2EDD54u;
    // 0x2edd54: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x2edd54u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2edd58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2edd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2edd5c: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x2edd5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x2edd60: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x2edd60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edd64: 0x0  nop
    ctx->pc = 0x2edd64u;
    // NOP
label_2edd68:
    // 0x2edd68: 0xe46600a0  swc1        $f6, 0xA0($v1)
    ctx->pc = 0x2edd68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x2edd6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2edd6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2edd70: 0x0  nop
    ctx->pc = 0x2edd70u;
    // NOP
    // 0x2edd74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2edd74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2edd78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2edd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2edd7c: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2edd7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2edd80: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2edd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2edd84: 0xc62202d4  lwc1        $f2, 0x2D4($s1)
    ctx->pc = 0x2edd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2edd88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2edd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2edd8c: 0xfc6500a8  sd          $a1, 0xA8($v1)
    ctx->pc = 0x2edd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 5));
    // 0x2edd90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2edd90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2edd94: 0x0  nop
    ctx->pc = 0x2edd94u;
    // NOP
    // 0x2edd98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2edd98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2edd9c: 0xe46400c0  swc1        $f4, 0xC0($v1)
    ctx->pc = 0x2edd9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x2edda0: 0x0  nop
    ctx->pc = 0x2edda0u;
    // NOP
    // 0x2edda4: 0x0  nop
    ctx->pc = 0x2edda4u;
    // NOP
    // 0x2edda8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2edda8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2eddac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2eddacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2eddb0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2eddb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2eddb4: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x2eddb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2eddb8: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2eddb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eddbc: 0xc62202d4  lwc1        $f2, 0x2D4($s1)
    ctx->pc = 0x2eddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eddc0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2eddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2eddc4: 0xfc6500c8  sd          $a1, 0xC8($v1)
    ctx->pc = 0x2eddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 5));
    // 0x2eddc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eddc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eddcc: 0x0  nop
    ctx->pc = 0x2eddccu;
    // NOP
    // 0x2eddd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2eddd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2eddd4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2eddd4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2eddd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2eddd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2edddc: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x2edddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2edde0: 0xe46100c4  swc1        $f1, 0xC4($v1)
    ctx->pc = 0x2edde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
    // 0x2edde4: 0x82220249  lb          $v0, 0x249($s1)
    ctx->pc = 0x2edde4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2edde8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2edde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eddec: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2EDDECu;
    {
        const bool branch_taken_0x2eddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDDECu;
        // 0x2eddf0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eddec) {
            ctx->pc = 0x2EDD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2edd68;
        }
    }
    ctx->pc = 0x2EDDF4u;
label_2eddf4:
    // 0x2eddf4: 0x82280249  lb          $t0, 0x249($s1)
    ctx->pc = 0x2eddf4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 585)));
    // 0x2eddf8: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x2eddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x2eddfc: 0x344200f8  ori         $v0, $v0, 0xF8
    ctx->pc = 0x2eddfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)248);
    // 0x2ede00: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x2ede00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2ede04: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2ede04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ede08: 0x84180  sll         $t0, $t0, 6
    ctx->pc = 0x2ede08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2ede0c: 0x240b0070  addiu       $t3, $zero, 0x70
    ctx->pc = 0x2ede0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2ede10: 0x250800a0  addiu       $t0, $t0, 0xA0
    ctx->pc = 0x2ede10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x2ede14: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x2ede14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2ede18: 0x3c84021  addu        $t0, $fp, $t0
    ctx->pc = 0x2ede18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
    // 0x2ede1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ede1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede20: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x2ede20u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x2ede24: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2ede24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ede28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ede2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ede2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ede30: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x2ede30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x2ede34: 0xfd030008  sd          $v1, 0x8($t0)
    ctx->pc = 0x2ede34u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 3));
    // 0x2ede38: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2ede38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2ede3c: 0xfd0a0018  sd          $t2, 0x18($t0)
    ctx->pc = 0x2ede3cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 10));
    // 0x2ede40: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x2ede40u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2ede44: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2ede44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2ede48: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2ede48u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ede4c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2ede4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2ede50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ede50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ede54: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2ede54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2ede58: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2EDE58u;
    SET_GPR_U32(ctx, 31, 0x2EDE60u);
    ctx->pc = 0x2EDE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDE58u;
    // 0x2ede5c: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2EDE58u, 0x2EDE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EDE60u;
label_2ede60:
    // 0x2ede60: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x2ede60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_2ede64:
    // 0x2ede64: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x2ede64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2ede68:
    // 0x2ede68: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x2ede68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2ede6c: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x2ede6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2ede70: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x2ede70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2ede74: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x2ede74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2ede78: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x2ede78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2ede7c: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x2ede7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2ede80: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x2ede80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2ede84: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2ede84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2ede88: 0xc7b601e0  lwc1        $f22, 0x1E0($sp)
    ctx->pc = 0x2ede88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2ede8c: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x2ede8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2ede90: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x2ede90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ede94: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDE94u;
        // 0x2ede98: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDE9Cu;
    // 0x2ede9c: 0x0  nop
    ctx->pc = 0x2ede9cu;
    // NOP
    ctx->pc = 0x2edea0u;
}
