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

// Function: __ieee754_rem_pio2f
// Address: 0x3a3768 - 0x3a3b48
void ps2___ieee754_rem_pio2f_0x3a3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_rem_pio2f_0x3a3768");
#endif

    switch (ctx->pc) {
        case 0x3a38ccu: goto label_3a38cc;
        case 0x3a3a80u: goto label_3a3a80;
        case 0x3a3ac8u: goto label_3a3ac8;
        case 0x3a3b04u: goto label_3a3b04;
        default: break;
    }

    ctx->pc = 0x3a3768u;

    // 0x3a3768: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3a376c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3a376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3a3770: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3a3770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3a3774: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3a3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3a3778: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a3778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a377c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a377cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a3780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3784: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a3784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a3788: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a3788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a378c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x3a378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x3a3790: 0x2438024  and         $s0, $s2, $v1
    ctx->pc = 0x3a3790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x3a3794: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x3a3794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x3a3798: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a3798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a379c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A379Cu;
    {
        const bool branch_taken_0x3a379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A37A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A379Cu;
        // 0x3a37a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a379c) {
            ctx->pc = 0x3A37B8u;
            goto label_3a37b8;
        }
    }
    ctx->pc = 0x3A37A4u;
    // 0x3a37a4: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x3a37a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3a37a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a37a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a37ac: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x3A37ACu;
    {
        const bool branch_taken_0x3a37ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37ACu;
        // 0x3a37b0: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37ac) {
            ctx->pc = 0x3A3B30u;
            goto label_3a3b30;
        }
    }
    ctx->pc = 0x3A37B4u;
    // 0x3a37b4: 0x0  nop
    ctx->pc = 0x3a37b4u;
    // NOP
label_3a37b8:
    // 0x3a37b8: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x3a37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x3a37bc: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x3a37bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x3a37c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a37c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a37c4: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3A37C4u;
    {
        const bool branch_taken_0x3a37c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37C4u;
        // 0x3a37c8: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37c4) {
            ctx->pc = 0x3A38B4u;
            goto label_3a38b4;
        }
    }
    ctx->pc = 0x3A37CCu;
    // 0x3a37cc: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A37CCu;
    {
        const bool branch_taken_0x3a37cc = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3A37D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37CCu;
        // 0x3a37d0: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37cc) {
            ctx->pc = 0x3A3844u;
            goto label_3a3844;
        }
    }
    ctx->pc = 0x3A37D4u;
    // 0x3a37d4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3a37d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3a37d8: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x3a37d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x3a37dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a37dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a37e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a37e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a37e4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3a37e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3a37e8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3a37e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a37ec: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x3a37ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x3a37f0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A37F0u;
    {
        const bool branch_taken_0x3a37f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A37F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A37F0u;
        // 0x3a37f4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a37f0) {
            ctx->pc = 0x3A380Cu;
            goto label_3a380c;
        }
    }
    ctx->pc = 0x3A37F8u;
    // 0x3a37f8: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a37f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a37fc: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x3a37fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x3a3800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3804: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3804u;
    {
        const bool branch_taken_0x3a3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3804u;
        // 0x3a3808: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3804) {
            ctx->pc = 0x3A382Cu;
            goto label_3a382c;
        }
    }
    ctx->pc = 0x3A380Cu;
label_3a380c:
    // 0x3a380c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a380cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a3810: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x3a3810u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x3a3814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3818: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x3a3818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x3a381c: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x3a381cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x3a3820: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3824: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3a3824u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a3828: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x3a3828u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_3a382c:
    // 0x3a382c: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x3a382cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3a3830: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3a3830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3a3834: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a3834u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a3838: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3a3838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3a383c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x3A383Cu;
    {
        const bool branch_taken_0x3a383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A383Cu;
        // 0x3a3840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a383c) {
            ctx->pc = 0x3A3B30u;
            goto label_3a3b30;
        }
    }
    ctx->pc = 0x3A3844u;
label_3a3844:
    // 0x3a3844: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3a3844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3a3848: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x3a3848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x3a384c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a384cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3850: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a3850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a3854: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3a3854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3a3858: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3a3858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a385c: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x3a385cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x3a3860: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3860u;
    {
        const bool branch_taken_0x3a3860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A3864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3860u;
        // 0x3a3864: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3860) {
            ctx->pc = 0x3A387Cu;
            goto label_3a387c;
        }
    }
    ctx->pc = 0x3A3868u;
    // 0x3a3868: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a3868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a386c: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x3a386cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x3a3870: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3874: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3874u;
    {
        const bool branch_taken_0x3a3874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3874u;
        // 0x3a3878: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3874) {
            ctx->pc = 0x3A389Cu;
            goto label_3a389c;
        }
    }
    ctx->pc = 0x3A387Cu;
label_3a387c:
    // 0x3a387c: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a387cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a3880: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x3a3880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x3a3884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a3884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3888: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x3a3888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x3a388c: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x3a388cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x3a3890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3894: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x3a3894u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a3898: 0x46026040  add.s       $f1, $f12, $f2
    ctx->pc = 0x3a3898u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_3a389c:
    // 0x3a389c: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x3a389cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3a38a0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3a38a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3a38a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a38a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a38a8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3a38a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x3a38ac: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x3A38ACu;
    {
        const bool branch_taken_0x3a38ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A38B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38ACu;
        // 0x3a38b0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38ac) {
            ctx->pc = 0x3A3B30u;
            goto label_3a3b30;
        }
    }
    ctx->pc = 0x3A38B4u;
label_3a38b4:
    // 0x3a38b4: 0x34420f80  ori         $v0, $v0, 0xF80
    ctx->pc = 0x3a38b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3968);
    // 0x3a38b8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a38b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a38bc: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3A38BCu;
    {
        const bool branch_taken_0x3a38bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38BCu;
        // 0x3a38c0: 0x3c027f7f  lui         $v0, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38bc) {
            ctx->pc = 0x3A3A38u;
            goto label_3a3a38;
        }
    }
    ctx->pc = 0x3A38C4u;
    // 0x3a38c4: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A38C4u;
    SET_GPR_U32(ctx, 31, 0x3A38CCu);
    ctx->pc = 0x3A19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19D8u, 0x3A38C4u, 0x3A38CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A38CCu;
label_3a38cc:
    // 0x3a38cc: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x3a38ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x3a38d0: 0x3421f984  ori         $at, $at, 0xF984
    ctx->pc = 0x3a38d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63876);
    // 0x3a38d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a38d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a38d8: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x3a38d8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x3a38dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a38dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a38e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a38e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a38e4: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3a38e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3a38e8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3a38e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x3a38ec: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x3a38ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x3a38f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a38f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a38f4: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a38f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a38f8: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x3a38f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x3a38fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a38fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a3900: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a3900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a3904: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3a3908: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x3a3908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a390c: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x3a390cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3a3910: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3a3910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x3a3914: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x3a3914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a3918: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a3918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a391c: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x3a391cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x3a3920: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A3920u;
    {
        const bool branch_taken_0x3a3920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3920u;
        // 0x3a3924: 0x46002901  sub.s       $f4, $f5, $f0 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3920) {
            ctx->pc = 0x3A395Cu;
            goto label_3a395c;
        }
    }
    ctx->pc = 0x3A3928u;
    // 0x3a3928: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3a3928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3a392c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x3a392cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a3930: 0x2484eee8  addiu       $a0, $a0, -0x1118
    ctx->pc = 0x3a3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962920));
    // 0x3a3934: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a3934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a3938: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a3938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a393c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a3940: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3a3940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x3a3944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a3944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a3948: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3a3948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a394c: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A394Cu;
    {
        const bool branch_taken_0x3a394c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A3950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A394Cu;
        // 0x3a3950: 0x46032001  sub.s       $f0, $f4, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a394c) {
            ctx->pc = 0x3A3960u;
            goto label_3a3960;
        }
    }
    ctx->pc = 0x3A3954u;
    // 0x3a3954: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3A3954u;
    {
        const bool branch_taken_0x3a3954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3954u;
        // 0x3a3958: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3954) {
            ctx->pc = 0x3A3A18u;
            goto label_3a3a18;
        }
    }
    ctx->pc = 0x3A395Cu;
label_3a395c:
    // 0x3a395c: 0x46032001  sub.s       $f0, $f4, $f3
    ctx->pc = 0x3a395cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3a3960:
    // 0x3a3960: 0x1025c3  sra         $a0, $s0, 23
    ctx->pc = 0x3a3960u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 23));
    // 0x3a3964: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a3964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3968: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a3968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3a396c: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x3a396cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x3a3970: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a3970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a3974: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3a3974u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a3978: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x3a3978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a397c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A397Cu;
    {
        const bool branch_taken_0x3a397c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a397c) {
            ctx->pc = 0x3A3980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A397Cu;
            // 0x3a3980: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3A1Cu;
            goto label_3a3a1c;
        }
    }
    ctx->pc = 0x3A3984u;
    // 0x3a3984: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x3a3984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x3a3988: 0x34214400  ori         $at, $at, 0x4400
    ctx->pc = 0x3a3988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17408);
    // 0x3a398c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a398cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3990: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x3a3990u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x3a3994: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x3a3994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x3a3998: 0x3421a308  ori         $at, $at, 0xA308
    ctx->pc = 0x3a3998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41736);
    // 0x3a399c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a39a0: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x3a39a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a39a4: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3a39a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3a39a8: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x3a39a8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3a39ac: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x3a39acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3a39b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3a39b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a39b4: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x3a39b4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a39b8: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x3a39b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3a39bc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3a39bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a39c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3a39c4: 0x21dc2  srl         $v1, $v0, 23
    ctx->pc = 0x3a39c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 23));
    // 0x3a39c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3a39c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3a39cc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a39d0: 0x2862001a  slti        $v0, $v1, 0x1A
    ctx->pc = 0x3a39d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x3a39d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A39D4u;
    {
        const bool branch_taken_0x3a39d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a39d4) {
            ctx->pc = 0x3A39D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A39D4u;
            // 0x3a39d8: 0xc6210000  lwc1        $f1, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3A1Cu;
            goto label_3a3a1c;
        }
    }
    ctx->pc = 0x3A39DCu;
    // 0x3a39dc: 0x3c012e85  lui         $at, 0x2E85
    ctx->pc = 0x3a39dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)11909 << 16));
    // 0x3a39e0: 0x3421a300  ori         $at, $at, 0xA300
    ctx->pc = 0x3a39e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41728);
    // 0x3a39e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a39e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a39e8: 0x46002146  mov.s       $f5, $f4
    ctx->pc = 0x3a39e8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[4]);
    // 0x3a39ec: 0x3c01248d  lui         $at, 0x248D
    ctx->pc = 0x3a39ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9357 << 16));
    // 0x3a39f0: 0x34213132  ori         $at, $at, 0x3132
    ctx->pc = 0x3a39f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12594);
    // 0x3a39f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a39f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a39f8: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x3a39f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a39fc: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x3a39fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x3a3a00: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x3a3a00u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3a3a04: 0x46042801  sub.s       $f0, $f5, $f4
    ctx->pc = 0x3a3a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3a3a08: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3a3a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a3a0c: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x3a3a0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3a3a10: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x3a3a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3a3a14: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3a3a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_3a3a18:
    // 0x3a3a18: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3a3a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a3a1c:
    // 0x3a3a1c: 0x46012001  sub.s       $f0, $f4, $f1
    ctx->pc = 0x3a3a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x3a3a20: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3a3a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3a3a24: 0x6410041  bgez        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x3A3A24u;
    {
        const bool branch_taken_0x3a3a24 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3A3A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A24u;
        // 0x3a3a28: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a24) {
            ctx->pc = 0x3A3B2Cu;
            goto label_3a3b2c;
        }
    }
    ctx->pc = 0x3A3A2Cu;
    // 0x3a3a2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a3a2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3a3a30: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3A3A30u;
    {
        const bool branch_taken_0x3a3a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A30u;
        // 0x3a3a34: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a30) {
            ctx->pc = 0x3A3B1Cu;
            goto label_3a3b1c;
        }
    }
    ctx->pc = 0x3A3A38u;
label_3a3a38:
    // 0x3a3a38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a3a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a3a3c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a3a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a3a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3A40u;
    {
        const bool branch_taken_0x3a3a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A40u;
        // 0x3a3a44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a40) {
            ctx->pc = 0x3A3A58u;
            goto label_3a3a58;
        }
    }
    ctx->pc = 0x3A3A48u;
    // 0x3a3a48: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x3a3a48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x3a3a4c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3a3a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3a3a50: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3A3A50u;
    {
        const bool branch_taken_0x3a3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3A50u;
        // 0x3a3a54: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3a50) {
            ctx->pc = 0x3A3B30u;
            goto label_3a3b30;
        }
    }
    ctx->pc = 0x3A3A58u;
label_3a3a58:
    // 0x3a3a58: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x3a3a58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x3a3a5c: 0x2466ff7a  addiu       $a2, $v1, -0x86
    ctx->pc = 0x3a3a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967162));
    // 0x3a3a60: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x3a3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x3a3a64: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x3a3a64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a3a68: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x3a3a68u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a3a6c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x3a3a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x3a3a70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a3a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a3a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3a7c: 0x0  nop
    ctx->pc = 0x3a3a7cu;
    // NOP
label_3a3a80:
    // 0x3a3a80: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3a80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a3a84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a3a84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a3a88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a3a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a3a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a3a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3a3a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3a3a94: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x3a3a94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a3a98: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3a3a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3a3a9c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3a3a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3a3aa0: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A3AA0u;
    {
        const bool branch_taken_0x3a3aa0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3A3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AA0u;
        // 0x3a3aa4: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3aa0) {
            ctx->pc = 0x3A3A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3a80;
        }
    }
    ctx->pc = 0x3A3AA8u;
    // 0x3a3aa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3a3aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a3aac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3a3aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3ab0: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x3a3ab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3ab4: 0x0  nop
    ctx->pc = 0x3a3ab4u;
    // NOP
    // 0x3a3ab8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3A3AB8u;
    {
        const bool branch_taken_0x3a3ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AB8u;
        // 0x3a3abc: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ab8) {
            ctx->pc = 0x3A3AECu;
            goto label_3a3aec;
        }
    }
    ctx->pc = 0x3A3AC0u;
    // 0x3a3ac0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3a3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a3ac4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3a3ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3ac8:
    // 0x3a3ac8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3a3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a3acc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a3accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ad0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3a3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a3ad4: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3a3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3a3ad8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3a3ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3adc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3a3adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3ae0: 0x0  nop
    ctx->pc = 0x3a3ae0u;
    // NOP
    // 0x3a3ae4: 0x4503fff8  bc1tl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A3AE4u;
    {
        const bool branch_taken_0x3a3ae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a3ae4) {
            ctx->pc = 0x3A3AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A3AE4u;
            // 0x3a3ae8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A3AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3ac8;
        }
    }
    ctx->pc = 0x3A3AECu;
label_3a3aec:
    // 0x3a3aec: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x3a3aecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x3a3af0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3af4: 0x2529ebd0  addiu       $t1, $t1, -0x1430
    ctx->pc = 0x3a3af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962128));
    // 0x3a3af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a3af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3afc: 0xc0e8f76  jal         func_3A3DD8
    ctx->pc = 0x3A3AFCu;
    SET_GPR_U32(ctx, 31, 0x3A3B04u);
    ctx->pc = 0x3A3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3AFCu;
    // 0x3a3b00: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3DD8u, 0x3A3AFCu, 0x3A3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B04u;
label_3a3b04:
    // 0x3a3b04: 0x6410009  bgez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3B04u;
    {
        const bool branch_taken_0x3a3b04 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x3A3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B04u;
        // 0x3a3b08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b04) {
            ctx->pc = 0x3A3B2Cu;
            goto label_3a3b2c;
        }
    }
    ctx->pc = 0x3A3B0Cu;
    // 0x3a3b0c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3a3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3b10: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3a3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3a3b14: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3a3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a3b18: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3a3b18u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3a3b1c:
    // 0x3a3b1c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a3b1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a3b20: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x3a3b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3a3b24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A3B24u;
    {
        const bool branch_taken_0x3a3b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B24u;
        // 0x3a3b28: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3b24) {
            ctx->pc = 0x3A3B30u;
            goto label_3a3b30;
        }
    }
    ctx->pc = 0x3A3B2Cu;
label_3a3b2c:
    // 0x3a3b2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a3b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3b30:
    // 0x3a3b30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3a3b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3b34: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3a3b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3b38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3a3b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3b3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a3b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3b40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3B40u;
        // 0x3a3b44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3B48u;
}
