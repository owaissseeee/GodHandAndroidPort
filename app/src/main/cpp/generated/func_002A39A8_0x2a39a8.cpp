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

// Function: func_002A39A8
// Address: 0x2a39a8 - 0x2a48a8
void func_002A39A8_0x2a39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A39A8_0x2a39a8");
#endif

    switch (ctx->pc) {
        case 0x2a3a68u: goto label_2a3a68;
        case 0x2a3be8u: goto label_2a3be8;
        case 0x2a3bfcu: goto label_2a3bfc;
        case 0x2a3c0cu: goto label_2a3c0c;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c34u: goto label_2a3c34;
        case 0x2a3c44u: goto label_2a3c44;
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3d04u: goto label_2a3d04;
        case 0x2a3d60u: goto label_2a3d60;
        case 0x2a3d98u: goto label_2a3d98;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3ddcu: goto label_2a3ddc;
        case 0x2a3e14u: goto label_2a3e14;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3e78u: goto label_2a3e78;
        case 0x2a3eb0u: goto label_2a3eb0;
        case 0x2a3f00u: goto label_2a3f00;
        case 0x2a3f48u: goto label_2a3f48;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3fb4u: goto label_2a3fb4;
        case 0x2a3fc4u: goto label_2a3fc4;
        case 0x2a3ff8u: goto label_2a3ff8;
        case 0x2a4020u: goto label_2a4020;
        case 0x2a4038u: goto label_2a4038;
        case 0x2a404cu: goto label_2a404c;
        case 0x2a408cu: goto label_2a408c;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4174u: goto label_2a4174;
        case 0x2a41bcu: goto label_2a41bc;
        case 0x2a41ccu: goto label_2a41cc;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a4238u: goto label_2a4238;
        case 0x2a4268u: goto label_2a4268;
        case 0x2a4290u: goto label_2a4290;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42b8u: goto label_2a42b8;
        case 0x2a42fcu: goto label_2a42fc;
        case 0x2a432cu: goto label_2a432c;
        case 0x2a435cu: goto label_2a435c;
        case 0x2a4394u: goto label_2a4394;
        case 0x2a43e4u: goto label_2a43e4;
        case 0x2a4420u: goto label_2a4420;
        case 0x2a4430u: goto label_2a4430;
        case 0x2a44a0u: goto label_2a44a0;
        case 0x2a44b0u: goto label_2a44b0;
        case 0x2a44e0u: goto label_2a44e0;
        case 0x2a4508u: goto label_2a4508;
        case 0x2a4520u: goto label_2a4520;
        case 0x2a4530u: goto label_2a4530;
        case 0x2a4574u: goto label_2a4574;
        case 0x2a45a4u: goto label_2a45a4;
        case 0x2a45d4u: goto label_2a45d4;
        case 0x2a460cu: goto label_2a460c;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a466cu: goto label_2a466c;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a4750u: goto label_2a4750;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a47d0u: goto label_2a47d0;
        case 0x2a480cu: goto label_2a480c;
        case 0x2a4850u: goto label_2a4850;
        default: break;
    }

    ctx->pc = 0x2a39a8u;

    // 0x2a39a8: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x2a39a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x2a39ac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a39acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a39b0: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x2a39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x2a39b4: 0x244574a0  addiu       $a1, $v0, 0x74A0
    ctx->pc = 0x2a39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2a39b8: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x2a39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x2a39bc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2a39bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2a39c0: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x2a39c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x2a39c4: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x2a39c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x2a39c8: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x2a39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x2a39cc: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x2a39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x2a39d0: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x2a39d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x2a39d4: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x2a39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x2a39d8: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x2a39d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x2a39dc: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x2a39dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x2a39e0: 0x8ca205e4  lw          $v0, 0x5E4($a1)
    ctx->pc = 0x2a39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x2a39e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a39e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a39e8: 0x104003a2  beqz        $v0, . + 4 + (0x3A2 << 2)
    ctx->pc = 0x2A39E8u;
    {
        const bool branch_taken_0x2a39e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39E8u;
        // 0x2a39ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39e8) {
            ctx->pc = 0x2A4874u;
            goto label_2a4874;
        }
    }
    ctx->pc = 0x2A39F0u;
    // 0x2a39f0: 0x8ca20210  lw          $v0, 0x210($a1)
    ctx->pc = 0x2a39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x2a39f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a39f8: 0x24060e00  addiu       $a2, $zero, 0xE00
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2a39fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a39fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a00: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a3a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a3a04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a3a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a3a08: 0x24491680  addiu       $t1, $v0, 0x1680
    ctx->pc = 0x2a3a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x2a3a0c: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x2a3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a3a10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3a14: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2a3a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2a3a18: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3a1c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a3a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a3a20: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a3a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a3a24: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2a3a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2a3a28: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2a3a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2a3a2c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2a3a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2a3a30: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x2a3a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a3a34: 0xafa20410  sw          $v0, 0x410($sp)
    ctx->pc = 0x2a3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 2));
    // 0x2a3a38: 0x4983c  dsll32      $s3, $a0, 0
    ctx->pc = 0x2a3a38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3a3c: 0x3c014415  lui         $at, 0x4415
    ctx->pc = 0x2a3a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17429 << 16));
    // 0x2a3a40: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x2a3a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x2a3a44: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2a3a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a3a48: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2a3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3a4c: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x2a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x2a3a50: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x2a3a50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x2a3a54: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a3a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2a3a58: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2a3a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2a3a5c: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2a3a60: 0xffa60420  sd          $a2, 0x420($sp)
    ctx->pc = 0x2a3a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 6));
    // 0x2a3a64: 0x0  nop
    ctx->pc = 0x2a3a64u;
    // NOP
label_2a3a68:
    // 0x2a3a68: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x2a3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2a3a6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a3a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3a74: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a3a78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3a7c: 0x33642  srl         $a2, $v1, 25
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x2a3a80: 0x8d44aff0  lw          $a0, -0x5010($t2)
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294946800)));
    // 0x2a3a84: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2a3a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a3a88: 0x3c0149f7  lui         $at, 0x49F7
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18935 << 16));
    // 0x2a3a8c: 0x3421ff08  ori         $at, $at, 0xFF08
    ctx->pc = 0x2a3a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65288);
    // 0x2a3a90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a3a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3a94: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2a3a98: 0xc4800250  lwc1        $f0, 0x250($a0)
    ctx->pc = 0x2a3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3a9c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x2a3a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2a3aa0: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x2a3aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2a3aa4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a3aa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a3aa8: 0x85024336  lh          $v0, 0x4336($t0)
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 17206)));
    // 0x2a3aac: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a3ab0: 0x85054338  lh          $a1, 0x4338($t0)
    ctx->pc = 0x2a3ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 17208)));
    // 0x2a3ab4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2a3ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a3ab8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2a3ab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a3abc: 0x0  nop
    ctx->pc = 0x2a3abcu;
    // NOP
    // 0x2a3ac0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2a3ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2a3ac4: 0x0  nop
    ctx->pc = 0x2a3ac4u;
    // NOP
    // 0x2a3ac8: 0x0  nop
    ctx->pc = 0x2a3ac8u;
    // NOP
    // 0x2a3acc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a3accu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2a3ad0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2a3ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a3ad4: 0x0  nop
    ctx->pc = 0x2a3ad4u;
    // NOP
    // 0x2a3ad8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2a3ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2a3adc: 0x0  nop
    ctx->pc = 0x2a3adcu;
    // NOP
    // 0x2a3ae0: 0x0  nop
    ctx->pc = 0x2a3ae0u;
    // NOP
    // 0x2a3ae4: 0x460618c3  div.s       $f3, $f3, $f6
    ctx->pc = 0x2a3ae4u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[6]);
    // 0x2a3ae8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2a3ae8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a3aec: 0x0  nop
    ctx->pc = 0x2a3aecu;
    // NOP
    // 0x2a3af0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a3af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a3af4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a3af4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a3af8: 0x0  nop
    ctx->pc = 0x2a3af8u;
    // NOP
    // 0x2a3afc: 0x0  nop
    ctx->pc = 0x2a3afcu;
    // NOP
    // 0x2a3b00: 0x46061143  div.s       $f5, $f2, $f6
    ctx->pc = 0x2a3b00u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[6]);
    // 0x2a3b04: 0x46090802  mul.s       $f0, $f1, $f9
    ctx->pc = 0x2a3b04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2a3b08: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x2a3b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
    // 0x2a3b0c: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x2a3b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x2a3b10: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x2a3b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x2a3b14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2a3b14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2a3b18: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2a3b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2a3b1c: 0x0  nop
    ctx->pc = 0x2a3b1cu;
    // NOP
    // 0x2a3b20: 0x0  nop
    ctx->pc = 0x2a3b20u;
    // NOP
    // 0x2a3b24: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x2a3b24u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[7]);
    // 0x2a3b28: 0x0  nop
    ctx->pc = 0x2a3b28u;
    // NOP
    // 0x2a3b2c: 0x0  nop
    ctx->pc = 0x2a3b2cu;
    // NOP
    // 0x2a3b30: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x2a3b30u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[7]);
    // 0x2a3b34: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x2a3b34u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x2a3b38: 0x0  nop
    ctx->pc = 0x2a3b38u;
    // NOP
    // 0x2a3b3c: 0x46040903  div.s       $f4, $f1, $f4
    ctx->pc = 0x2a3b3cu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[4]);
    // 0x2a3b40: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x2a3b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3b44: 0x0  nop
    ctx->pc = 0x2a3b44u;
    // NOP
    // 0x2a3b48: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2A3B48u;
    {
        const bool branch_taken_0x2a3b48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B48u;
        // 0x2a3b4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b48) {
            ctx->pc = 0x2A3B9Cu;
            goto label_2a3b9c;
        }
    }
    ctx->pc = 0x2A3B50u;
    // 0x2a3b50: 0x46032881  sub.s       $f2, $f5, $f3
    ctx->pc = 0x2a3b50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2a3b54: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2a3b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2a3b58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a3b58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3b5c: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x2a3b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2a3b60: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2a3b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a3b64: 0x0  nop
    ctx->pc = 0x2a3b64u;
    // NOP
    // 0x2a3b68: 0x0  nop
    ctx->pc = 0x2a3b68u;
    // NOP
    // 0x2a3b6c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a3b6cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2a3b70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3b70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3b74: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x2a3b74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3b78: 0x0  nop
    ctx->pc = 0x2a3b78u;
    // NOP
    // 0x2a3b7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3B7Cu;
    {
        const bool branch_taken_0x2a3b7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B7Cu;
        // 0x2a3b80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b7c) {
            ctx->pc = 0x2A3B8Cu;
            goto label_2a3b8c;
        }
    }
    ctx->pc = 0x2A3B84u;
    // 0x2a3b84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a3b84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a3b88: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2a3b88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2a3b8c:
    // 0x2a3b8c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a3b90: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3b94: 0x2cc20081  sltiu       $v0, $a2, 0x81
    ctx->pc = 0x2a3b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x2a3b98: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x2a3b98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_2a3b9c:
    // 0x2a3b9c: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x2a3b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a3ba0: 0x0  nop
    ctx->pc = 0x2a3ba0u;
    // NOP
    // 0x2a3ba4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2A3BA4u;
    {
        const bool branch_taken_0x2a3ba4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a3ba4) {
            ctx->pc = 0x2A3BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3BA4u;
            // 0x2a3ba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3BACu;
            goto label_2a3bac;
        }
    }
    ctx->pc = 0x2A3BACu;
label_2a3bac:
    // 0x2a3bac: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x2a3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a3bb0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x2a3bb4: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2a3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2a3bb8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2a3bbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3bc0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2a3bc4: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x2a3bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2a3bc8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2a3bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2a3bcc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2a3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bd0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2a3bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a3bd4: 0x14a0ffa4  bnez        $a1, . + 4 + (-0x5C << 2)
    ctx->pc = 0x2A3BD4u;
    {
        const bool branch_taken_0x2a3bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3BD4u;
        // 0x2a3bd8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3bd4) {
            ctx->pc = 0x2A3A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3a68;
        }
    }
    ctx->pc = 0x2A3BDCu;
    // 0x2a3bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3be0: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A3BE0u;
    SET_GPR_U32(ctx, 31, 0x2A3BE8u);
    ctx->pc = 0x2A3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BE0u;
    // 0x2a3be4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A3BE0u, 0x2A3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BE8u;
label_2a3be8:
    // 0x2a3be8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a3be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2a3becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3bf4: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x2A3BF4u;
    SET_GPR_U32(ctx, 31, 0x2A3BFCu);
    ctx->pc = 0x2A3BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3BF4u;
    // 0x2a3bf8: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x2A3BF4u, 0x2A3BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BFCu;
label_2a3bfc:
    // 0x2a3bfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c04: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A3C04u;
    SET_GPR_U32(ctx, 31, 0x2A3C0Cu);
    ctx->pc = 0x2A3C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C04u;
    // 0x2a3c08: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A3C04u, 0x2A3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C0Cu;
label_2a3c0c:
    // 0x2a3c0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c10: 0x3406fc00  ori         $a2, $zero, 0xFC00
    ctx->pc = 0x2a3c10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x2a3c14: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x2a3c14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x2a3c18: 0x34c63f05  ori         $a2, $a2, 0x3F05
    ctx->pc = 0x2a3c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16133);
    // 0x2a3c1c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C24u);
    ctx->pc = 0x2A3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C1Cu;
    // 0x2a3c20: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3C1Cu, 0x2A3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C24u;
label_2a3c24:
    // 0x2a3c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c2c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3C2Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C34u);
    ctx->pc = 0x2A3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C2Cu;
    // 0x2a3c30: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3C2Cu, 0x2A3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C34u;
label_2a3c34:
    // 0x2a3c34: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a3c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c3c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3C3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C44u);
    ctx->pc = 0x2A3C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C3Cu;
    // 0x2a3c40: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3C3Cu, 0x2A3C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C44u;
label_2a3c44:
    // 0x2a3c44: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a3c48: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2a3c48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a3c4c: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x2a3c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a3c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3c54: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a3c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3c58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a3c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a3c5c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a3c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a3c60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a3c64: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a3c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a3c68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3c6c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a3c70: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2a3c70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a3c74: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a3c74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a3c78: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2a3c78u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a3c7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a3c80: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2a3c80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a3c84: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3c84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3c88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3C88u;
    SET_GPR_U32(ctx, 31, 0x2A3C90u);
    ctx->pc = 0x2A3C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3C88u;
    // 0x2a3c8c: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3C88u, 0x2A3C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C90u;
label_2a3c90:
    // 0x2a3c90: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3c94: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a3c98: 0x8c8611ac  lw          $a2, 0x11AC($a0)
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a3c9c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2a3c9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3ca0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x2a3ca0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x2a3ca4: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    ctx->pc = 0x2a3ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x2a3ca8: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2a3ca8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2a3cac: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x2a3cacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a3cb0: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x2a3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2a3cb4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a3cb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a3cb8: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a3cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a3cbc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3cc0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a3cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a3cc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3cc8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a3cc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a3ccc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a3cccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a3cd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cd4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a3cd8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3CD8u;
    SET_GPR_U32(ctx, 31, 0x2A3CE0u);
    ctx->pc = 0x2A3CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CD8u;
    // 0x2a3cdc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3CD8u, 0x2A3CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CE0u;
label_2a3ce0:
    // 0x2a3ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ce4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a3ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a3ce8: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a3ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a3cec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3CECu;
    SET_GPR_U32(ctx, 31, 0x2A3CF4u);
    ctx->pc = 0x2A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CECu;
    // 0x2a3cf0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3CECu, 0x2A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3cf8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a3cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a3cfc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3CFCu;
    SET_GPR_U32(ctx, 31, 0x2A3D04u);
    ctx->pc = 0x2A3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3CFCu;
    // 0x2a3d00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3CFCu, 0x2A3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D04u;
label_2a3d04:
    // 0x2a3d04: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a3d08: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a3d08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a3d0c: 0x8ca41188  lw          $a0, 0x1188($a1)
    ctx->pc = 0x2a3d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1188u));
    // 0x2a3d10: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x2a3d14: 0x8d4511b8  lw          $a1, 0x11B8($t2)
    ctx->pc = 0x2a3d14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x2a3d18: 0x13303e  dsrl32      $a2, $s3, 0
    ctx->pc = 0x2a3d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x2a3d1c: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x2a3d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a3d20: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a3d24: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a3d24u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a3d28: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a3d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a3d2c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a3d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a3d30: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2a3d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2a3d34: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a3d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a3d38: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x2a3d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a3d3c: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x2a3d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x2a3d40: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x2a3d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x2a3d44: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2a3d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2a3d48: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a3d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a3d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d50: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a3d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a3d54: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a3d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a3d58: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3D58u;
    SET_GPR_U32(ctx, 31, 0x2A3D60u);
    ctx->pc = 0x2A3D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3D58u;
    // 0x2a3d5c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3D58u, 0x2A3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D60u;
label_2a3d60:
    // 0x2a3d60: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3d64: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a3d64u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a3d68: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2a3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2a3d6c: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a3d6cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a3d70: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a3d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a3d74: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2A3D74u;
    {
        const bool branch_taken_0x2a3d74 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3D74u;
        // 0x2a3d78: 0x2410003f  addiu       $s0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d74) {
            ctx->pc = 0x2A3E9Cu;
            goto label_2a3e9c;
        }
    }
    ctx->pc = 0x2A3D7Cu;
    // 0x2a3d7c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2a3d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2a3d80: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x2a3d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d84: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x2a3d84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x2a3d88: 0x241e0800  addiu       $fp, $zero, 0x800
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a3d8c: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x2a3d8cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3d90: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x2a3d90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x2a3d94: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x2a3d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
label_2a3d98:
    // 0x2a3d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a3d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3d9c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a3da0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a3da0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a3da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a3da8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a3da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a3dac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a3dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a3db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3db4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a3db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a3db8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3DB8u;
    SET_GPR_U32(ctx, 31, 0x2A3DC0u);
    ctx->pc = 0x2A3DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DB8u;
    // 0x2a3dbc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3DB8u, 0x2A3DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DC0u;
label_2a3dc0:
    // 0x2a3dc0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a3dc4: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a3dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a3dc8: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a3dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a3dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3dd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a3dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3dd4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3DD4u;
    SET_GPR_U32(ctx, 31, 0x2A3DDCu);
    ctx->pc = 0x2A3DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3DD4u;
    // 0x2a3dd8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3DD4u, 0x2A3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DDCu;
label_2a3ddc:
    // 0x2a3ddc: 0x8e831180  lw          $v1, 0x1180($s4)
    ctx->pc = 0x2a3ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x2a3de0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3de4: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x2a3de8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a3dec: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a3df0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3df4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a3df4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a3df8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a3df8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a3dfc: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x2a3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2a3e00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a3e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a3e04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3e08: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a3e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a3e0c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3E0Cu;
    SET_GPR_U32(ctx, 31, 0x2A3E14u);
    ctx->pc = 0x2A3E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E0Cu;
    // 0x2a3e10: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3E0Cu, 0x2A3E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E14u;
label_2a3e14:
    // 0x2a3e14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a3e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a3e18: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a3e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a3e1c: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x2a3e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x2a3e20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a3e24: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x2a3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x2a3e28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a3e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a3e2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e30: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a3e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a3e34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a3e38: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2a3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2a3e3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a3e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a3e40: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3E40u;
    SET_GPR_U32(ctx, 31, 0x2A3E48u);
    ctx->pc = 0x2A3E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E40u;
    // 0x2a3e44: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3E40u, 0x2A3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E48u;
label_2a3e48:
    // 0x2a3e48: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
    // 0x2a3e4c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a3e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3e50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a3e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a3e54: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a3e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a3e58: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x2a3e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x2a3e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a3e64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a3e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a3e68: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a3e6c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a3e6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a3e70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3E70u;
    SET_GPR_U32(ctx, 31, 0x2A3E78u);
    ctx->pc = 0x2A3E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3E70u;
    // 0x2a3e74: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3E70u, 0x2A3E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E78u;
label_2a3e78:
    // 0x2a3e78: 0x8e841180  lw          $a0, 0x1180($s4)
    ctx->pc = 0x2a3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x2a3e7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3e80: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a3e80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a3e84: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a3e88: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a3e88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a3e8c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a3e8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a3e90: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a3e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a3e94: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2A3E94u;
    {
        const bool branch_taken_0x2a3e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3E94u;
        // 0x2a3e98: 0x8ea211b4  lw          $v0, 0x11B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3e94) {
            ctx->pc = 0x2A3D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3d98;
        }
    }
    ctx->pc = 0x2A3E9Cu;
label_2a3e9c:
    // 0x2a3e9c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a3ea0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a3ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ea8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3EA8u;
    SET_GPR_U32(ctx, 31, 0x2A3EB0u);
    ctx->pc = 0x2A3EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EA8u;
    // 0x2a3eac: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3EA8u, 0x2A3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EB0u;
label_2a3eb0:
    // 0x2a3eb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a3eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3eb4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a3eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a3eb8: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3ebc: 0x8ca6118c  lw          $a2, 0x118C($a1)
    ctx->pc = 0x2a3ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a3ec0: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2a3ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a3ec4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a3ec8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a3ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a3ecc: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a3eccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a3ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3ed4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a3ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a3ed8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a3ed8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a3edc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a3ee0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ee4: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a3ee8: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a3eec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a3ef0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a3ef4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3ef8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3EF8u;
    SET_GPR_U32(ctx, 31, 0x2A3F00u);
    ctx->pc = 0x2A3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EF8u;
    // 0x2a3efc: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3EF8u, 0x2A3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F00u;
label_2a3f00:
    // 0x2a3f00: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x2a3f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3f04: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a3f08: 0x8d4611ac  lw          $a2, 0x11AC($t2)
    ctx->pc = 0x2a3f08u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a3f0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2a3f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a3f10: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x2a3f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a3f14: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x2a3f14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a3f18: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x2a3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2a3f1c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a3f1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a3f20: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a3f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a3f24: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a3f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a3f28: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a3f2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3f30: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a3f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a3f34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a3f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a3f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f3c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a3f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a3f40: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3F40u;
    SET_GPR_U32(ctx, 31, 0x2A3F48u);
    ctx->pc = 0x2A3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F40u;
    // 0x2a3f44: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3F40u, 0x2A3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F48u;
label_2a3f48:
    // 0x2a3f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f4c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a3f50: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3F50u;
    SET_GPR_U32(ctx, 31, 0x2A3F58u);
    ctx->pc = 0x2A3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F50u;
    // 0x2a3f54: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3F50u, 0x2A3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F58u;
label_2a3f58:
    // 0x2a3f58: 0xdfa20420  ld          $v0, 0x420($sp)
    ctx->pc = 0x2a3f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2a3f5c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a3f60: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3f64: 0x3c072400  lui         $a3, 0x2400
    ctx->pc = 0x2a3f64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9216 << 16));
    // 0x2a3f68: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x2a3f6c: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x2a3f6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a3f70: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x2a3f70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a3f74: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a3f78: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a3f78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a3f7c: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a3f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a3f80: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a3f84: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2a3f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2a3f88: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a3f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a3f8c: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x2a3f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a3f90: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2a3f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a3f94: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2a3f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2a3f98: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2a3f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a3f9c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a3f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a3fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fa4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a3fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a3fa8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a3fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a3fac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3FACu;
    SET_GPR_U32(ctx, 31, 0x2A3FB4u);
    ctx->pc = 0x2A3FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FACu;
    // 0x2a3fb0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3FACu, 0x2A3FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FB4u;
label_2a3fb4:
    // 0x2a3fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fb8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a3fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a3fbc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A3FBCu;
    SET_GPR_U32(ctx, 31, 0x2A3FC4u);
    ctx->pc = 0x2A3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3FBCu;
    // 0x2a3fc0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A3FBCu, 0x2A3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FC4u;
label_2a3fc4:
    // 0x2a3fc4: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a3fc8: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a3fc8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a3fcc: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a3fd0: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a3fd0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a3fd4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a3fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a3fd8: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2A3FD8u;
    {
        const bool branch_taken_0x2a3fd8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3FD8u;
        // 0x2a3fdc: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3fd8) {
            ctx->pc = 0x2A4110u;
            goto label_2a4110;
        }
    }
    ctx->pc = 0x2A3FE0u;
    // 0x2a3fe0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2a3fe0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2a3fe4: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2a3fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3fe8: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x2a3fec: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x2a3fecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a3ff0: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x2a3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x2a3ff4: 0x0  nop
    ctx->pc = 0x2a3ff4u;
    // NOP
label_2a3ff8:
    // 0x2a3ff8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a3ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ffc: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a4000: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4004: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a4004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a4008: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a4008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a400c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a400cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a4010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4014: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a4014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4018: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4018u;
    SET_GPR_U32(ctx, 31, 0x2A4020u);
    ctx->pc = 0x2A401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4018u;
    // 0x2a401c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4018u, 0x2A4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4020u;
label_2a4020:
    // 0x2a4020: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a4024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a402c: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x2a402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a4030: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4030u;
    SET_GPR_U32(ctx, 31, 0x2A4038u);
    ctx->pc = 0x2A4034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4030u;
    // 0x2a4034: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4030u, 0x2A4038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4038u;
label_2a4038:
    // 0x2a4038: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a4038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a403c: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a403cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a4040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4044: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4044u;
    SET_GPR_U32(ctx, 31, 0x2A404Cu);
    ctx->pc = 0x2A4048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4044u;
    // 0x2a4048: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4044u, 0x2A404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A404Cu;
label_2a404c:
    // 0x2a404c: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4050: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x2a4050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4054: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x2a4054u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2a4058: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x2a4058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x2a405c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4060: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a4064: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a4064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a4068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a406c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a406cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4070: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a4070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a4074: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x2a4074u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2a4078: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4078u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a407c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a407cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a4080: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a4080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a4084: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4084u;
    SET_GPR_U32(ctx, 31, 0x2A408Cu);
    ctx->pc = 0x2A4088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4084u;
    // 0x2a4088: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4084u, 0x2A408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A408Cu;
label_2a408c:
    // 0x2a408c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a408cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a4090: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a4090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4094: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x2a4094u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a4098: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a4098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a409c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a409cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a40a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a40a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40a4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a40a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a40a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a40a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a40ac: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a40b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a40b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a40b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A40B4u;
    SET_GPR_U32(ctx, 31, 0x2A40BCu);
    ctx->pc = 0x2A40B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40B4u;
    // 0x2a40b8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A40B4u, 0x2A40BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40BCu;
label_2a40bc:
    // 0x2a40bc: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x2a40bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
    // 0x2a40c0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a40c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a40c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a40c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a40c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a40c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a40cc: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x2a40ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x2a40d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a40d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a40d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a40d8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a40d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a40dc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a40e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a40e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a40e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A40E4u;
    SET_GPR_U32(ctx, 31, 0x2A40ECu);
    ctx->pc = 0x2A40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A40E4u;
    // 0x2a40e8: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A40E4u, 0x2A40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A40ECu;
label_2a40ec:
    // 0x2a40ec: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a40f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a40f4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a40f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a40f8: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a40f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a40fc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a40fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a4100: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a4100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a4104: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a4104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4108: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2A4108u;
    {
        const bool branch_taken_0x2a4108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4108u;
        // 0x2a410c: 0x8ea211b4  lw          $v0, 0x11B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4108) {
            ctx->pc = 0x2A3FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3ff8;
        }
    }
    ctx->pc = 0x2A4110u;
label_2a4110:
    // 0x2a4110: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a4114: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a4118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a411c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A411Cu;
    SET_GPR_U32(ctx, 31, 0x2A4124u);
    ctx->pc = 0x2A4120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A411Cu;
    // 0x2a4120: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A411Cu, 0x2A4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4124u;
label_2a4124:
    // 0x2a4124: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a4124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4128: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a4128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a412c: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a4130: 0x8ca6118c  lw          $a2, 0x118C($a1)
    ctx->pc = 0x2a4130u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a4134: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2a4134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a4138: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a413c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4140: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a4144: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4148: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a4148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a414c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a414cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a4150: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a4150u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a4154: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a4154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a4158: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2a4158u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a415c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2a415cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a4160: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a4160u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4164: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2a4164u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a4168: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a4168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a416c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A416Cu;
    SET_GPR_U32(ctx, 31, 0x2A4174u);
    ctx->pc = 0x2A4170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A416Cu;
    // 0x2a4170: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A416Cu, 0x2A4174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4174u;
label_2a4174:
    // 0x2a4174: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a4174u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a4178: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a4178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a417c: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a4180: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4184: 0x8d4811c8  lw          $t0, 0x11C8($t2)
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x2a4188: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a4188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a418c: 0x8cc211ac  lw          $v0, 0x11AC($a2)
    ctx->pc = 0x2a418cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a4190: 0x203382a  slt         $a3, $s0, $v1
    ctx->pc = 0x2a4190u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4194: 0x2466007f  addiu       $a2, $v1, 0x7F
    ctx->pc = 0x2a4194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2a4198: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2a4198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2a419c: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x2a419cu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a41a0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2a41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a41a4: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x2a41a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x2a41a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a41a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a41ac: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a41acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a41b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a41b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a41b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A41B4u;
    SET_GPR_U32(ctx, 31, 0x2A41BCu);
    ctx->pc = 0x2A41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41B4u;
    // 0x2a41b8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A41B4u, 0x2A41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41BCu;
label_2a41bc:
    // 0x2a41bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a41bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a41c0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a41c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A41C4u;
    SET_GPR_U32(ctx, 31, 0x2A41CCu);
    ctx->pc = 0x2A41C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A41C4u;
    // 0x2a41c8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A41C4u, 0x2A41CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A41CCu;
label_2a41cc:
    // 0x2a41cc: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x2a41ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a41d0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a41d4: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x2a41d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x2a41d8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x2a41d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x2a41dc: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x2a41dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a41e0: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a41e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a41e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a41e8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a41e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a41ec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a41f0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a41f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a41f4: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x2a41f4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x2a41f8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a41f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a41fc: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2a41fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2a4200: 0x34088100  ori         $t0, $zero, 0x8100
    ctx->pc = 0x2a4200u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a4204: 0x846f8  dsll        $t0, $t0, 27
    ctx->pc = 0x2a4204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 27);
    // 0x2a4208: 0x3508c000  ori         $t0, $t0, 0xC000
    ctx->pc = 0x2a4208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49152);
    // 0x2a420c: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x2a420cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x2a4210: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a4210u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4218: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a4218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a421c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x2a421cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x2a4220: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4220u;
    SET_GPR_U32(ctx, 31, 0x2A4228u);
    ctx->pc = 0x2A4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4220u;
    // 0x2a4224: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4220u, 0x2A4228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4228u;
label_2a4228:
    // 0x2a4228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a422c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a422cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a4230: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4230u;
    SET_GPR_U32(ctx, 31, 0x2A4238u);
    ctx->pc = 0x2A4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4230u;
    // 0x2a4234: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4230u, 0x2A4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4238u;
label_2a4238:
    // 0x2a4238: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a423c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a423cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4240: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a4244: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a4244u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a4248: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a4248u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a424c: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2A424Cu;
    {
        const bool branch_taken_0x2a424c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A424Cu;
        // 0x2a4250: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a424c) {
            ctx->pc = 0x2A4380u;
            goto label_2a4380;
        }
    }
    ctx->pc = 0x2A4254u;
    // 0x2a4254: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a4254u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a4258: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2a4258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a425c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2a4260: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x2a4264: 0x0  nop
    ctx->pc = 0x2a4264u;
    // NOP
label_2a4268:
    // 0x2a4268: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a4268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a426c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2a426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a4270: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a4274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a4278: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a4278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a427c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a4280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4284: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a4284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4288: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4288u;
    SET_GPR_U32(ctx, 31, 0x2A4290u);
    ctx->pc = 0x2A428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4288u;
    // 0x2a428c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4288u, 0x2A4290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4290u;
label_2a4290:
    // 0x2a4290: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a4294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4298: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a429c: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a42a0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A42A0u;
    SET_GPR_U32(ctx, 31, 0x2A42A8u);
    ctx->pc = 0x2A42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42A0u;
    // 0x2a42a4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A42A0u, 0x2A42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42A8u;
label_2a42a8:
    // 0x2a42a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a42a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A42B0u;
    SET_GPR_U32(ctx, 31, 0x2A42B8u);
    ctx->pc = 0x2A42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42B0u;
    // 0x2a42b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A42B0u, 0x2A42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42B8u;
label_2a42b8:
    // 0x2a42b8: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a42bc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2a42bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a42c0: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a42c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a42c4: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2a42c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a42c8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2a42c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a42cc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a42d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a42d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a42d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a42d8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a42d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a42dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a42dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a42e0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2a42e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a42e4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a42e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a42e8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a42e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a42ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a42ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a42f0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2a42f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a42f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A42F4u;
    SET_GPR_U32(ctx, 31, 0x2A42FCu);
    ctx->pc = 0x2A42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A42F4u;
    // 0x2a42f8: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A42F4u, 0x2A42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A42FCu;
label_2a42fc:
    // 0x2a42fc: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x2a42fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4304: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x2a4308: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a4308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a430c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a430cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a4310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4314: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4318: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a4318u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a431c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a431cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a4320: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4324: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4324u;
    SET_GPR_U32(ctx, 31, 0x2A432Cu);
    ctx->pc = 0x2A4328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4324u;
    // 0x2a4328: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4324u, 0x2A432Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A432Cu;
label_2a432c:
    // 0x2a432c: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x2a432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x2a4330: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a4330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4334: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a4334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a4338: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a4338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a433c: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a433cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a4340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4344: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a4344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a4348: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a4348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a434c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4350: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4354: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4354u;
    SET_GPR_U32(ctx, 31, 0x2A435Cu);
    ctx->pc = 0x2A4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4354u;
    // 0x2a4358: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4354u, 0x2A435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A435Cu;
label_2a435c:
    // 0x2a435c: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4360: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4364: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a4364u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4368: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a436c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a436cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a4370: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a4370u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a4374: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a4374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a4378: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2A4378u;
    {
        const bool branch_taken_0x2a4378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4378u;
        // 0x2a437c: 0x8e8211b4  lw          $v0, 0x11B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4378) {
            ctx->pc = 0x2A4268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4268;
        }
    }
    ctx->pc = 0x2A4380u;
label_2a4380:
    // 0x2a4380: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4384: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a4388: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a4388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a438c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A438Cu;
    SET_GPR_U32(ctx, 31, 0x2A4394u);
    ctx->pc = 0x2A4390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A438Cu;
    // 0x2a4390: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A438Cu, 0x2A4394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4394u;
label_2a4394:
    // 0x2a4394: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a4394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4398: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a439c: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a43a0: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a43a4: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2a43a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a43a8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a43ac: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a43acu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a43b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a43b4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a43b8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a43bc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a43bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a43c0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a43c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a43c4: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a43c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a43c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43cc: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a43d0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a43d4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2a43d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a43d8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a43d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a43dc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A43DCu;
    SET_GPR_U32(ctx, 31, 0x2A43E4u);
    ctx->pc = 0x2A43E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A43DCu;
    // 0x2a43e0: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A43DCu, 0x2A43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A43E4u;
label_2a43e4:
    // 0x2a43e4: 0x8ec71180  lw          $a3, 0x1180($s6)
    ctx->pc = 0x2a43e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a43e8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a43e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a43ec: 0x8ca211ac  lw          $v0, 0x11AC($a1)
    ctx->pc = 0x2a43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a43f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a43f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a43f4: 0x207182a  slt         $v1, $s0, $a3
    ctx->pc = 0x2a43f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a43f8: 0x24e6007f  addiu       $a2, $a3, 0x7F
    ctx->pc = 0x2a43f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x2a43fc: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x2a43fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x2a4400: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a4404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a4404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a4408: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x2a4408u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x2a440c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a4410: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4414: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a4414u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a4418: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4418u;
    SET_GPR_U32(ctx, 31, 0x2A4420u);
    ctx->pc = 0x2A441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4418u;
    // 0x2a441c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4418u, 0x2A4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4420u;
label_2a4420:
    // 0x2a4420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4424: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a4428: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4428u;
    SET_GPR_U32(ctx, 31, 0x2A4430u);
    ctx->pc = 0x2A442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4428u;
    // 0x2a442c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4428u, 0x2A4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4430u;
label_2a4430:
    // 0x2a4430: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a4430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a4434: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x2a4434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a4438: 0x8cc711c8  lw          $a3, 0x11C8($a2)
    ctx->pc = 0x2a4438u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x2a443c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a443cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a4440: 0x8d4611ac  lw          $a2, 0x11AC($t2)
    ctx->pc = 0x2a4440u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a4444: 0x204282a  slt         $a1, $s0, $a0
    ctx->pc = 0x2a4444u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a4448: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a4448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a444c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a4450: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x2a4450u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a4454: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x2a4454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4540)));
    // 0x2a4458: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a4458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a445c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a445cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a4460: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a4460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a4464: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a4464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a4468: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x2a446c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a446cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a4470: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2a4470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2a4474: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a4474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4478: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x2a4478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x2a447c: 0x34098100  ori         $t1, $zero, 0x8100
    ctx->pc = 0x2a447cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a4480: 0x94ef8  dsll        $t1, $t1, 27
    ctx->pc = 0x2a4480u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 27);
    // 0x2a4484: 0x3529c000  ori         $t1, $t1, 0xC000
    ctx->pc = 0x2a4484u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)49152);
    // 0x2a4488: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x2a4488u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x2a448c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a448cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a4490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4494: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x2a4494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x2a4498: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4498u;
    SET_GPR_U32(ctx, 31, 0x2A44A0u);
    ctx->pc = 0x2A449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4498u;
    // 0x2a449c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4498u, 0x2A44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44A0u;
label_2a44a0:
    // 0x2a44a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a44a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a44a8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A44A8u;
    SET_GPR_U32(ctx, 31, 0x2A44B0u);
    ctx->pc = 0x2A44ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A44A8u;
    // 0x2a44ac: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A44A8u, 0x2A44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44B0u;
label_2a44b0:
    // 0x2a44b0: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a44b4: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a44b4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a44b8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a44bc: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a44bcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a44c0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a44c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a44c4: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2A44C4u;
    {
        const bool branch_taken_0x2a44c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A44C4u;
        // 0x2a44c8: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44c4) {
            ctx->pc = 0x2A45F8u;
            goto label_2a45f8;
        }
    }
    ctx->pc = 0x2A44CCu;
    // 0x2a44cc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x2a44ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44d0: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2a44d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2a44d4: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x2a44d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a44d8: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x2a44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x2a44dc: 0x0  nop
    ctx->pc = 0x2a44dcu;
    // NOP
label_2a44e0:
    // 0x2a44e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a44e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44e4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2a44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a44e8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a44e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a44ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a44f0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a44f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a44f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a44f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a44f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a44f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a44fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a44fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4500: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4500u;
    SET_GPR_U32(ctx, 31, 0x2A4508u);
    ctx->pc = 0x2A4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4500u;
    // 0x2a4504: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4500u, 0x2A4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4508u;
label_2a4508:
    // 0x2a4508: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a450c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4510: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a4510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4514: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x2a4514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a4518: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4518u;
    SET_GPR_U32(ctx, 31, 0x2A4520u);
    ctx->pc = 0x2A451Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4518u;
    // 0x2a451c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4518u, 0x2A4520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4520u;
label_2a4520:
    // 0x2a4520: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a4520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4528: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4528u;
    SET_GPR_U32(ctx, 31, 0x2A4530u);
    ctx->pc = 0x2A452Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4528u;
    // 0x2a452c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4528u, 0x2A4530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4530u;
label_2a4530:
    // 0x2a4530: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a4530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4534: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a4538: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a453c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2a453cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4540: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x2a4540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x2a4544: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a4544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a4548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a454c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a454cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a4550: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a4550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4554: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a4554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a4558: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2a4558u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a455c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a455cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4560: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a4560u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a4564: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a4568: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2a4568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a456c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A456Cu;
    SET_GPR_U32(ctx, 31, 0x2A4574u);
    ctx->pc = 0x2A4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A456Cu;
    // 0x2a4570: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A456Cu, 0x2A4574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4574u;
label_2a4574:
    // 0x2a4574: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x2a4574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a4578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a457c: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x2a457cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x2a4580: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4584: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a4588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a458c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a458cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4590: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a4590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a4594: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a4598: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a459c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A459Cu;
    SET_GPR_U32(ctx, 31, 0x2A45A4u);
    ctx->pc = 0x2A45A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A459Cu;
    // 0x2a45a0: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A459Cu, 0x2A45A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45A4u;
label_2a45a4:
    // 0x2a45a4: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x2a45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x2a45a8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2a45a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a45ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2a45acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a45b0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2a45b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2a45b4: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a45b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a45b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a45b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a45bc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a45bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a45c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a45c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a45c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a45c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a45c8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a45c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a45cc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A45CCu;
    SET_GPR_U32(ctx, 31, 0x2A45D4u);
    ctx->pc = 0x2A45D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A45CCu;
    // 0x2a45d0: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A45CCu, 0x2A45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A45D4u;
label_2a45d4:
    // 0x2a45d4: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x2a45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a45d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a45dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a45dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a45e0: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a45e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a45e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a45e8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a45e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a45ec: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a45ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a45f0: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2A45F0u;
    {
        const bool branch_taken_0x2a45f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A45F0u;
        // 0x2a45f4: 0x8e8211b4  lw          $v0, 0x11B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a45f0) {
            ctx->pc = 0x2A44E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a44e0;
        }
    }
    ctx->pc = 0x2A45F8u;
label_2a45f8:
    // 0x2a45f8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a45f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a45fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a45fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4600: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a4600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a4604: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4604u;
    SET_GPR_U32(ctx, 31, 0x2A460Cu);
    ctx->pc = 0x2A4608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4604u;
    // 0x2a4608: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4604u, 0x2A460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A460Cu;
label_2a460c:
    // 0x2a460c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a460cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4610: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a4610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a4614: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a4614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a4618: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2a461c: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2a461cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a4620: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a4620u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a4624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4628: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a462c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4630: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a4630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a4634: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a4634u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a4638: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a4638u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a463c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a4640: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2a4640u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2a4644: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x2a4644u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2a4648: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a4648u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a464c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2a464cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2a4650: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a4650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a4654: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4654u;
    SET_GPR_U32(ctx, 31, 0x2A465Cu);
    ctx->pc = 0x2A4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4654u;
    // 0x2a4658: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4654u, 0x2A465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A465Cu;
label_2a465c:
    // 0x2a465c: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x2a465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x2a4660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4664: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4664u;
    SET_GPR_U32(ctx, 31, 0x2A466Cu);
    ctx->pc = 0x2A4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4664u;
    // 0x2a4668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4664u, 0x2A466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A466Cu;
label_2a466c:
    // 0x2a466c: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a4670: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2a4670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4674: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x2a4674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2a4678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a467c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a467cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a4680: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x2a4680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4684: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x2a4684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a4688: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2a4688u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a468c: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x2a468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x2a4690: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a4694: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4698: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a4698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a469c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A469Cu;
    SET_GPR_U32(ctx, 31, 0x2A46A4u);
    ctx->pc = 0x2A46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A469Cu;
    // 0x2a46a0: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A469Cu, 0x2A46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46A4u;
label_2a46a4:
    // 0x2a46a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a46a8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a46a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a46ac: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a46acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a46b0: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x2a46b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x2a46b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A46B4u;
    SET_GPR_U32(ctx, 31, 0x2A46BCu);
    ctx->pc = 0x2A46B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A46B4u;
    // 0x2a46b8: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A46B4u, 0x2A46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A46BCu;
label_2a46bc:
    // 0x2a46bc: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x2a46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a46c0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a46c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a46c4: 0x8cc511bc  lw          $a1, 0x11BC($a2)
    ctx->pc = 0x2a46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x2a46c8: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2a46c8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2a46cc: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x2a46ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a46d0: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a46d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a46d4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a46d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a46d8: 0x9d4611ac  lwu         $a2, 0x11AC($t2)
    ctx->pc = 0x2a46d8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4524)));
    // 0x2a46dc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a46dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a46e0: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x2a46e4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a46e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a46e8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a46e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a46ec: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2a46ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x2a46f0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a46f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a46f4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a46f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a46f8: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x2a46f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a46fc: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x2a46fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x2a4700: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x2a4700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x2a4704: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x2a4704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x2a4708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a470c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a470cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4710: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4710u;
    SET_GPR_U32(ctx, 31, 0x2A4718u);
    ctx->pc = 0x2A4714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4710u;
    // 0x2a4714: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4710u, 0x2A4718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4718u;
label_2a4718:
    // 0x2a4718: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a4718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a471c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a471cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a4720: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x2a4720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x2a4724: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a4724u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a4728: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2a472c: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2A472Cu;
    {
        const bool branch_taken_0x2a472c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A472Cu;
        // 0x2a4730: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a472c) {
            ctx->pc = 0x2A4874u;
            goto label_2a4874;
        }
    }
    ctx->pc = 0x2A4734u;
    // 0x2a4734: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2a4734u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2a4738: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x2a4738u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x2a473c: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x2a473cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a4740: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x2a4740u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2a4744: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x2a4744u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4748: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x2a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a474c: 0x0  nop
    ctx->pc = 0x2a474cu;
    // NOP
label_2a4750:
    // 0x2a4750: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a4750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4754: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a4758: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4758u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a475c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a4760: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a4760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a4764: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a4764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a4768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a476c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a476cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a4770: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4770u;
    SET_GPR_U32(ctx, 31, 0x2A4778u);
    ctx->pc = 0x2A4774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4770u;
    // 0x2a4774: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4770u, 0x2A4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4778u;
label_2a4778:
    // 0x2a4778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a4778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2a477c: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x2a477cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x2a4780: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x2a4780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x2a4784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4788: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a4788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a478c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A478Cu;
    SET_GPR_U32(ctx, 31, 0x2A4794u);
    ctx->pc = 0x2A4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A478Cu;
    // 0x2a4790: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A478Cu, 0x2A4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4794u;
label_2a4794:
    // 0x2a4794: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x2a4794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a4798: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x2a4798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a479c: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a479cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a47a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47a4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a47a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a47a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a47ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a47acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a47b0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a47b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a47b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a47b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a47b8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x2a47b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2a47bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a47bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a47c0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2a47c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2a47c4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x2a47c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2a47c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A47C8u;
    SET_GPR_U32(ctx, 31, 0x2A47D0u);
    ctx->pc = 0x2A47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A47C8u;
    // 0x2a47cc: 0xd43025  or          $a2, $a2, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A47C8u, 0x2A47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A47D0u;
label_2a47d0:
    // 0x2a47d0: 0x8e061180  lw          $a2, 0x1180($s0)
    ctx->pc = 0x2a47d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a47d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a47d8: 0x8c4311b4  lw          $v1, 0x11B4($v0)
    ctx->pc = 0x2a47d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x2a47dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47e0: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2a47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a47e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a47e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a47e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a47ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a47f0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a47f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2a47f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2a47f8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a47f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a47fc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a47fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a4800: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2a4800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2a4804: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4804u;
    SET_GPR_U32(ctx, 31, 0x2A480Cu);
    ctx->pc = 0x2A4808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4804u;
    // 0x2a4808: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4804u, 0x2A480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A480Cu;
label_2a480c:
    // 0x2a480c: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x2a480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a4810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4814: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x2a4814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2a4818: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a4818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a481c: 0x8ee7118c  lw          $a3, 0x118C($s7)
    ctx->pc = 0x2a481cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x2a4820: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a4820u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a4824: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2a4824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a4828: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a4828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a482c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a482cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a4830: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x2a4830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2a4834: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a4834u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a4838: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a4838u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a483c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2a4840: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a4840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a4844: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a4844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a4848: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A4848u;
    SET_GPR_U32(ctx, 31, 0x2A4850u);
    ctx->pc = 0x2A484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4848u;
    // 0x2a484c: 0xd43025  or          $a2, $a2, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A4848u, 0x2A4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4850u;
label_2a4850:
    // 0x2a4850: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x2a4854: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a4854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4858: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a4858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a485c: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x2a485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x2a4860: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a4860u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a4864: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x2a4864u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x2a4868: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a4868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a486c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2A486Cu;
    {
        const bool branch_taken_0x2a486c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A486Cu;
        // 0x2a4870: 0x8ee2118c  lw          $v0, 0x118C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a486c) {
            ctx->pc = 0x2A4750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4750;
        }
    }
    ctx->pc = 0x2A4874u;
label_2a4874:
    // 0x2a4874: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x2a4874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2a4878: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x2a4878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2a487c: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x2a487cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2a4880: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x2a4880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2a4884: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x2a4884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x2a4888: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x2a4888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x2a488c: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x2a488cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x2a4890: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x2a4890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x2a4894: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x2a4894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x2a4898: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x2a4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2a489c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A489Cu;
        // 0x2a48a0: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A48A4u;
    // 0x2a48a4: 0x0  nop
    ctx->pc = 0x2a48a4u;
    // NOP
    ctx->pc = 0x2a48a8u;
}
