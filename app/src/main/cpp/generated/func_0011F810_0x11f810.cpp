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

// Function: func_0011F810
// Address: 0x11f810 - 0x11fd10
void func_0011F810_0x11f810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011F810_0x11f810");
#endif

    switch (ctx->pc) {
        case 0x11f8d8u: goto label_11f8d8;
        case 0x11f8e4u: goto label_11f8e4;
        case 0x11f914u: goto label_11f914;
        case 0x11f91cu: goto label_11f91c;
        case 0x11f978u: goto label_11f978;
        case 0x11f984u: goto label_11f984;
        case 0x11f9f0u: goto label_11f9f0;
        case 0x11fa2cu: goto label_11fa2c;
        case 0x11faa0u: goto label_11faa0;
        case 0x11faf0u: goto label_11faf0;
        case 0x11fb2cu: goto label_11fb2c;
        case 0x11fb80u: goto label_11fb80;
        case 0x11fb88u: goto label_11fb88;
        case 0x11fba8u: goto label_11fba8;
        case 0x11fbe8u: goto label_11fbe8;
        case 0x11fbf4u: goto label_11fbf4;
        case 0x11fc24u: goto label_11fc24;
        case 0x11fc4cu: goto label_11fc4c;
        case 0x11fc88u: goto label_11fc88;
        case 0x11fc90u: goto label_11fc90;
        case 0x11fc9cu: goto label_11fc9c;
        case 0x11fcd0u: goto label_11fcd0;
        case 0x11fcdcu: goto label_11fcdc;
        default: break;
    }

    ctx->pc = 0x11f810u;

    // 0x11f810: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x11f810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x11f814: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x11f814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x11f818: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11f818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11f81c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x11f81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x11f820: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x11f820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f824: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x11f824u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x11f828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f82c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x11f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x11f830: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x11f830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x11f834: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x11f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x11f838: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x11f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x11f83c: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x11f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x11f840: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x11f840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x11f844: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x11f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x11f848: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x11f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11f84c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x11f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x11f850: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11f850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11f854: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f858: 0x3c01c130  lui         $at, 0xC130
    ctx->pc = 0x11f858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49456 << 16));
    // 0x11f85c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f85cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f860: 0x3c01bfe6  lui         $at, 0xBFE6
    ctx->pc = 0x11f860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49126 << 16));
    // 0x11f864: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x11f864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x11f868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f86c: 0x8e330694  lw          $s3, 0x694($s1)
    ctx->pc = 0x11f86cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11f870: 0x3c01c200  lui         $at, 0xC200
    ctx->pc = 0x11f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49664 << 16));
    // 0x11f874: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x11f874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x11f878: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11f878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11f87c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11f87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11f880: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x11f880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11f884: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11f884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11f888: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x11f888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11f88c: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x11f88cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11f890: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x11f890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x11f894: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x11f894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x11f898: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x11f898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f89c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x11f89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11f8a0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x11f8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11f8a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11f8a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11f8ac: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11f8b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11f8b4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11f8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11f8b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f8b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f8bc: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11f8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11f8c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11f8c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11f8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8c8: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x11f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x11f8cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8d0: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11F8D0u;
    SET_GPR_U32(ctx, 31, 0x11F8D8u);
    ctx->pc = 0x11F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8D0u;
    // 0x11f8d4: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11F8D0u, 0x11F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8D8u;
label_11f8d8:
    // 0x11f8d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11f8dc: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11F8DCu;
    SET_GPR_U32(ctx, 31, 0x11F8E4u);
    ctx->pc = 0x11F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F8DCu;
    // 0x11f8e0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11F8DCu, 0x11F8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F8E4u;
label_11f8e4:
    // 0x11f8e4: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x11f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11f8e8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11f8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11f8ec: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x11f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x11f8f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F8F0u;
    {
        const bool branch_taken_0x11f8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8F0u;
        // 0x11f8f4: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8f0) {
            ctx->pc = 0x11F90Cu;
            goto label_11f90c;
        }
    }
    ctx->pc = 0x11F8F8u;
    // 0x11f8f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f8fc: 0x10620092  beq         $v1, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x11F8FCu;
    {
        const bool branch_taken_0x11f8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F8FCu;
        // 0x11f900: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8fc) {
            ctx->pc = 0x11FB48u;
            goto label_11fb48;
        }
    }
    ctx->pc = 0x11F904u;
    // 0x11f904: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x11F904u;
    {
        const bool branch_taken_0x11f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F904u;
        // 0x11f908: 0x7bb10140  lq          $s1, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f904) {
            ctx->pc = 0x11FCE4u;
            goto label_11fce4;
        }
    }
    ctx->pc = 0x11F90Cu;
label_11f90c:
    // 0x11f90c: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11F90Cu;
    SET_GPR_U32(ctx, 31, 0x11F914u);
    ctx->pc = 0x11F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F90Cu;
    // 0x11f910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11F90Cu, 0x11F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F914u;
label_11f914:
    // 0x11f914: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11F914u;
    SET_GPR_U32(ctx, 31, 0x11F91Cu);
    ctx->pc = 0x11F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F914u;
    // 0x11f918: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11F914u, 0x11F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F91Cu;
label_11f91c:
    // 0x11f91c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11f920: 0x24040605  addiu       $a0, $zero, 0x605
    ctx->pc = 0x11f920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1541));
    // 0x11f924: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x11f924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x11f928: 0x1464005f  bne         $v1, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x11F928u;
    {
        const bool branch_taken_0x11f928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x11F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F928u;
        // 0x11f92c: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f928) {
            ctx->pc = 0x11FAA8u;
            goto label_11faa8;
        }
    }
    ctx->pc = 0x11F930u;
    // 0x11f930: 0x12bd0007  beq         $s5, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F930u;
    {
        const bool branch_taken_0x11f930 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 29));
        ctx->pc = 0x11F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F930u;
        // 0x11f934: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f930) {
            ctx->pc = 0x11F950u;
            goto label_11f950;
        }
    }
    ctx->pc = 0x11F938u;
    // 0x11f938: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x11f938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f93c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x11f93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11f940: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x11f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11f944: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x11f944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11f948: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x11f948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x11f94c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x11f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_11f950:
    // 0x11f950: 0x3c015a0e  lui         $at, 0x5A0E
    ctx->pc = 0x11f950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23054 << 16));
    // 0x11f954: 0x34211bca  ori         $at, $at, 0x1BCA
    ctx->pc = 0x11f954u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7114);
    // 0x11f958: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11f958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f95c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x11f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x11f960: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11f960u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f964: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x11f964u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11f968: 0x27b70070  addiu       $s7, $sp, 0x70
    ctx->pc = 0x11f968u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11f96c: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x11f96cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11f970: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x11f970u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x11f974: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x11f974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11f978:
    // 0x11f978: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x11f978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11f97c: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x11F97Cu;
    SET_GPR_U32(ctx, 31, 0x11F984u);
    ctx->pc = 0x11F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F97Cu;
    // 0x11f980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x11F97Cu, 0x11F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F984u;
label_11f984:
    // 0x11f984: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x11f984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f988: 0x0  nop
    ctx->pc = 0x11f988u;
    // NOP
    // 0x11f98c: 0x4503000a  bc1tl       . + 4 + (0xA << 2)
    ctx->pc = 0x11F98Cu;
    {
        const bool branch_taken_0x11f98c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11f98c) {
            ctx->pc = 0x11F990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F98Cu;
            // 0x11f990: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F9B8u;
            goto label_11f9b8;
        }
    }
    ctx->pc = 0x11F994u;
    // 0x11f994: 0x12b00007  beq         $s5, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11F994u;
    {
        const bool branch_taken_0x11f994 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x11F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F994u;
        // 0x11f998: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f994) {
            ctx->pc = 0x11F9B4u;
            goto label_11f9b4;
        }
    }
    ctx->pc = 0x11F99Cu;
    // 0x11f99c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f9a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x11f9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11f9a4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f9a8: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x11f9a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x11f9ac: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x11f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f9b0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x11f9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_11f9b4:
    // 0x11f9b4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x11f9b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11f9b8:
    // 0x11f9b8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x11f9b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11f9bc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11F9BCu;
    {
        const bool branch_taken_0x11f9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9BCu;
        // 0x11f9c0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9bc) {
            ctx->pc = 0x11F978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f978;
        }
    }
    ctx->pc = 0x11F9C4u;
    // 0x11f9c4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x11f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11f9c8: 0x10550006  beq         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F9C8u;
    {
        const bool branch_taken_0x11f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x11F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F9C8u;
        // 0x11f9cc: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f9c8) {
            ctx->pc = 0x11F9E4u;
            goto label_11f9e4;
        }
    }
    ctx->pc = 0x11F9D0u;
    // 0x11f9d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11f9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11f9d4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x11f9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f9d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11f9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11f9dc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x11f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f9e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11f9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11f9e4:
    // 0x11f9e4: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x11f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11f9e8: 0xc051e62  jal         func_147988
    ctx->pc = 0x11F9E8u;
    SET_GPR_U32(ctx, 31, 0x11F9F0u);
    ctx->pc = 0x11F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F9E8u;
    // 0x11f9ec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11F9E8u, 0x11F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F9F0u;
label_11f9f0:
    // 0x11f9f0: 0x3c01be53  lui         $at, 0xBE53
    ctx->pc = 0x11f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48723 << 16));
    // 0x11f9f4: 0x3421a92a  ori         $at, $at, 0xA92A
    ctx->pc = 0x11f9f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43306);
    // 0x11f9f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11f9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f9fc: 0x3c014093  lui         $at, 0x4093
    ctx->pc = 0x11f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16531 << 16));
    // 0x11fa00: 0x3421e354  ori         $at, $at, 0xE354
    ctx->pc = 0x11fa00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58196);
    // 0x11fa04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fa08: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x11fa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11fa0c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x11fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x11fa10: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x11fa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x11fa14: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x11fa14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x11fa18: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x11fa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11fa1c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11fa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa24: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11FA24u;
    SET_GPR_U32(ctx, 31, 0x11FA2Cu);
    ctx->pc = 0x11FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA24u;
    // 0x11fa28: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11FA24u, 0x11FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA2Cu;
label_11fa2c:
    // 0x11fa2c: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11fa2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11fa30: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x11fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11fa34: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x11fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11fa38: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x11fa38u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x11fa3c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x11fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11fa40: 0xdba400a0  lqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x11fa40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11fa44: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x11fa44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11fa48: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11fa48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11fa4c: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x11fa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11fa50: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x11fa50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11fa54: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11fa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11fa58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11fa5c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x11fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11fa60: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FA60u;
    {
        const bool branch_taken_0x11fa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FA60u;
        // 0x11fa64: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fa60) {
            ctx->pc = 0x11FA7Cu;
            goto label_11fa7c;
        }
    }
    ctx->pc = 0x11FA68u;
    // 0x11fa68: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x11fa68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11fa6c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x11fa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fa70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x11fa70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x11fa74: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x11fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa78: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x11fa78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_11fa7c:
    // 0x11fa7c: 0xc6600104  lwc1        $f0, 0x104($s3)
    ctx->pc = 0x11fa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa80: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11fa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11fa84: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11fa84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11fa88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fa88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fa8c: 0x0  nop
    ctx->pc = 0x11fa8cu;
    // NOP
    // 0x11fa90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11fa90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11fa94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11fa94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11fa98: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11FA98u;
    SET_GPR_U32(ctx, 31, 0x11FAA0u);
    ctx->pc = 0x11FA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA98u;
    // 0x11fa9c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11FA98u, 0x11FAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAA0u;
label_11faa0:
    // 0x11faa0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11FAA0u;
    {
        const bool branch_taken_0x11faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAA0u;
        // 0x11faa4: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faa0) {
            ctx->pc = 0x11FAF0u;
            goto label_11faf0;
        }
    }
    ctx->pc = 0x11FAA8u;
label_11faa8:
    // 0x11faa8: 0x3c01be53  lui         $at, 0xBE53
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48723 << 16));
    // 0x11faac: 0x3421a92a  ori         $at, $at, 0xA92A
    ctx->pc = 0x11faacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43306);
    // 0x11fab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11fab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11fab4: 0x3c014093  lui         $at, 0x4093
    ctx->pc = 0x11fab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16531 << 16));
    // 0x11fab8: 0x3421e354  ori         $at, $at, 0xE354
    ctx->pc = 0x11fab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58196);
    // 0x11fabc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fac0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x11fac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fac4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x11fac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x11fac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11facc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x11faccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x11fad0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11fad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fad4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11fad8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11fad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11fadc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11fadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11fae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fae4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x11fae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x11fae8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11FAE8u;
    SET_GPR_U32(ctx, 31, 0x11FAF0u);
    ctx->pc = 0x11FAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAE8u;
    // 0x11faec: 0xe454000c  swc1        $f20, 0xC($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11FAE8u, 0x11FAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAF0u;
label_11faf0:
    // 0x11faf0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FAF0u;
    {
        const bool branch_taken_0x11faf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11faf0) {
            ctx->pc = 0x11FB18u;
            goto label_11fb18;
        }
    }
    ctx->pc = 0x11FAF8u;
    // 0x11faf8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11fafc: 0x3c014071  lui         $at, 0x4071
    ctx->pc = 0x11fafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16497 << 16));
    // 0x11fb00: 0x3421a512  ori         $at, $at, 0xA512
    ctx->pc = 0x11fb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42258);
    // 0x11fb04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fb08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11fb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fb0c: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x11fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11fb10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11fb10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11fb14: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x11fb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_11fb18:
    // 0x11fb18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11fb18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fb1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb20: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11fb24: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11FB24u;
    SET_GPR_U32(ctx, 31, 0x11FB2Cu);
    ctx->pc = 0x11FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB24u;
    // 0x11fb28: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11FB24u, 0x11FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB2Cu;
label_11fb2c:
    // 0x11fb2c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11fb2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11fb30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fb34: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x11fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11fb38: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x11fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x11fb3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11fb40: 0xa624056e  sh          $a0, 0x56E($s1)
    ctx->pc = 0x11fb40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 4));
    // 0x11fb44: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11fb44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11fb48:
    // 0x11fb48: 0x8622056e  lh          $v0, 0x56E($s1)
    ctx->pc = 0x11fb48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
    // 0x11fb4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11FB4Cu;
    {
        const bool branch_taken_0x11fb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB4Cu;
        // 0x11fb50: 0x9623056e  lhu         $v1, 0x56E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1390)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb4c) {
            ctx->pc = 0x11FB78u;
            goto label_11fb78;
        }
    }
    ctx->pc = 0x11FB54u;
    // 0x11fb54: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FB54u;
    {
        const bool branch_taken_0x11fb54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB54u;
        // 0x11fb58: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb54) {
            ctx->pc = 0x11FB78u;
            goto label_11fb78;
        }
    }
    ctx->pc = 0x11FB5Cu;
    // 0x11fb5c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x11fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11fb60: 0xa622056e  sh          $v0, 0x56E($s1)
    ctx->pc = 0x11fb60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 2));
    // 0x11fb64: 0x26630550  addiu       $v1, $s3, 0x550
    ctx->pc = 0x11fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1360));
    // 0x11fb68: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11fb68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11fb6c: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11fb6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11fb70: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11fb70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11fb74: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x11fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_11fb78:
    // 0x11fb78: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11FB78u;
    SET_GPR_U32(ctx, 31, 0x11FB80u);
    ctx->pc = 0x11FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB78u;
    // 0x11fb7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11FB78u, 0x11FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB80u;
label_11fb80:
    // 0x11fb80: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11FB80u;
    SET_GPR_U32(ctx, 31, 0x11FB88u);
    ctx->pc = 0x11FB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FB80u;
    // 0x11fb84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11FB80u, 0x11FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB88u;
label_11fb88:
    // 0x11fb88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11FB88u;
    {
        const bool branch_taken_0x11fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fb88) {
            ctx->pc = 0x11FBD4u;
            goto label_11fbd4;
        }
    }
    ctx->pc = 0x11FB90u;
    // 0x11fb90: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11fb94: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FB94u;
    {
        const bool branch_taken_0x11fb94 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11FB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB94u;
        // 0x11fb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb94) {
            ctx->pc = 0x11FBC4u;
            goto label_11fbc4;
        }
    }
    ctx->pc = 0x11FB9Cu;
    // 0x11fb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fba0: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11FBA0u;
    SET_GPR_U32(ctx, 31, 0x11FBA8u);
    ctx->pc = 0x11FBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBA0u;
    // 0x11fba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11FBA0u, 0x11FBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBA8u;
label_11fba8:
    // 0x11fba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fbac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11fbb0: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11fbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11fbb4: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11fbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fbb8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11fbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fbbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11FBBCu;
    {
        const bool branch_taken_0x11fbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBBCu;
        // 0x11fbc0: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbbc) {
            ctx->pc = 0x11FBD4u;
            goto label_11fbd4;
        }
    }
    ctx->pc = 0x11FBC4u;
label_11fbc4:
    // 0x11fbc4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11fbc8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11fbcc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11fbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11fbd0: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11fbd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11fbd4:
    // 0x11fbd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11fbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11fbd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11fbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11fbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbe0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11FBE0u;
    SET_GPR_U32(ctx, 31, 0x11FBE8u);
    ctx->pc = 0x11FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBE0u;
    // 0x11fbe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11FBE0u, 0x11FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBE8u;
label_11fbe8:
    // 0x11fbe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11fbe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11fbec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11FBECu;
    SET_GPR_U32(ctx, 31, 0x11FBF4u);
    ctx->pc = 0x11FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FBECu;
    // 0x11fbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11FBECu, 0x11FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBF4u;
label_11fbf4:
    // 0x11fbf4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11fbf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11fbf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11fbfc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x11FBFCu;
    {
        const bool branch_taken_0x11fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBFCu;
        // 0x11fc00: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbfc) {
            ctx->pc = 0x11FCE0u;
            goto label_11fce0;
        }
    }
    ctx->pc = 0x11FC04u;
    // 0x11fc04: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11fc08: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x11FC08u;
    {
        const bool branch_taken_0x11fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC08u;
        // 0x11fc0c: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc08) {
            ctx->pc = 0x11FCE0u;
            goto label_11fce0;
        }
    }
    ctx->pc = 0x11FC10u;
    // 0x11fc10: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x11fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x11fc14: 0x24529b70  addiu       $s2, $v0, -0x6490
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x11fc18: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x11fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x11fc1c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11FC1Cu;
    SET_GPR_U32(ctx, 31, 0x11FC24u);
    ctx->pc = 0x11FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC1Cu;
    // 0x11fc20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11FC1Cu, 0x11FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC24u;
label_11fc24:
    // 0x11fc24: 0x5260000a  beql        $s3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11FC24u;
    {
        const bool branch_taken_0x11fc24 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc24) {
            ctx->pc = 0x11FC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC24u;
            // 0x11fc28: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC50u;
            goto label_11fc50;
        }
    }
    ctx->pc = 0x11FC2Cu;
    // 0x11fc2c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x11fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x11fc30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11fc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11fc34: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fc38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11fc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11fc3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11fc3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11fc40: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11fc40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11fc44: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11FC44u;
    SET_GPR_U32(ctx, 31, 0x11FC4Cu);
    ctx->pc = 0x11FC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC44u;
    // 0x11fc48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11FC44u, 0x11FC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC4Cu;
label_11fc4c:
    // 0x11fc4c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11fc4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_11fc50:
    // 0x11fc50: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11FC50u;
    {
        const bool branch_taken_0x11fc50 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x11FC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC50u;
        // 0x11fc54: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc50) {
            ctx->pc = 0x11FCACu;
            goto label_11fcac;
        }
    }
    ctx->pc = 0x11FC58u;
    // 0x11fc58: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x11fc5c: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11fc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11fc60: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x11fc60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x11fc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc68: 0x240600d6  addiu       $a2, $zero, 0xD6
    ctx->pc = 0x11fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x11fc6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11fc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11fc70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11fc74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11fc7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11FC80u;
    SET_GPR_U32(ctx, 31, 0x11FC88u);
    ctx->pc = 0x11FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC80u;
    // 0x11fc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11FC80u, 0x11FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC88u;
label_11fc88:
    // 0x11fc88: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11FC88u;
    SET_GPR_U32(ctx, 31, 0x11FC90u);
    ctx->pc = 0x11FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC88u;
    // 0x11fc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11FC88u, 0x11FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC90u;
label_11fc90:
    // 0x11fc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11fc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc94: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11FC94u;
    SET_GPR_U32(ctx, 31, 0x11FC9Cu);
    ctx->pc = 0x11FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FC94u;
    // 0x11fc98: 0x2405fc18  addiu       $a1, $zero, -0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11FC94u, 0x11FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC9Cu;
label_11fc9c:
    // 0x11fc9c: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11fc9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11fca0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11fca4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11FCA4u;
    {
        const bool branch_taken_0x11fca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCA4u;
        // 0x11fca8: 0xa6220434  sh          $v0, 0x434($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fca4) {
            ctx->pc = 0x11FCD0u;
            goto label_11fcd0;
        }
    }
    ctx->pc = 0x11FCACu;
label_11fcac:
    // 0x11fcac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcb0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x11fcb4: 0x240600d7  addiu       $a2, $zero, 0xD7
    ctx->pc = 0x11fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x11fcb8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11fcb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11fcbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x11fcc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11fcc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcc8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x11FCC8u;
    SET_GPR_U32(ctx, 31, 0x11FCD0u);
    ctx->pc = 0x11FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FCC8u;
    // 0x11fccc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x11FCC8u, 0x11FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCD0u;
label_11fcd0:
    // 0x11fcd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcd4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11FCD4u;
    SET_GPR_U32(ctx, 31, 0x11FCDCu);
    ctx->pc = 0x11FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FCD4u;
    // 0x11fcd8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11FCD4u, 0x11FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCDCu;
label_11fcdc:
    // 0x11fcdc: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x11fcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_11fce0:
    // 0x11fce0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x11fce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_11fce4:
    // 0x11fce4: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x11fce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x11fce8: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x11fce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x11fcec: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x11fcecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11fcf0: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x11fcf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11fcf4: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x11fcf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11fcf8: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x11fcf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11fcfc: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x11fcfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11fd00: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11fd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11fd04: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x11fd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x11FD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD08u;
        // 0x11fd0c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FD10u;
}
