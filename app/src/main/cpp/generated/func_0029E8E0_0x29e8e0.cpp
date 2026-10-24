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

// Function: func_0029E8E0
// Address: 0x29e8e0 - 0x29f7d8
void func_0029E8E0_0x29e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029E8E0_0x29e8e0");
#endif

    switch (ctx->pc) {
        case 0x29e988u: goto label_29e988;
        case 0x29eac8u: goto label_29eac8;
        case 0x29eadcu: goto label_29eadc;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eb04u: goto label_29eb04;
        case 0x29eb14u: goto label_29eb14;
        case 0x29eb24u: goto label_29eb24;
        case 0x29eb70u: goto label_29eb70;
        case 0x29ebc0u: goto label_29ebc0;
        case 0x29ebd4u: goto label_29ebd4;
        case 0x29ebe4u: goto label_29ebe4;
        case 0x29ec40u: goto label_29ec40;
        case 0x29ec78u: goto label_29ec78;
        case 0x29eca0u: goto label_29eca0;
        case 0x29ecbcu: goto label_29ecbc;
        case 0x29ecf4u: goto label_29ecf4;
        case 0x29ed28u: goto label_29ed28;
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ede0u: goto label_29ede0;
        case 0x29ee28u: goto label_29ee28;
        case 0x29ee40u: goto label_29ee40;
        case 0x29ee50u: goto label_29ee50;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eef0u: goto label_29eef0;
        case 0x29ef18u: goto label_29ef18;
        case 0x29ef30u: goto label_29ef30;
        case 0x29ef44u: goto label_29ef44;
        case 0x29ef84u: goto label_29ef84;
        case 0x29efb4u: goto label_29efb4;
        case 0x29efe4u: goto label_29efe4;
        case 0x29f01cu: goto label_29f01c;
        case 0x29f06cu: goto label_29f06c;
        case 0x29f0b4u: goto label_29f0b4;
        case 0x29f0ccu: goto label_29f0cc;
        case 0x29f0dcu: goto label_29f0dc;
        case 0x29f138u: goto label_29f138;
        case 0x29f148u: goto label_29f148;
        case 0x29f178u: goto label_29f178;
        case 0x29f1a0u: goto label_29f1a0;
        case 0x29f1b8u: goto label_29f1b8;
        case 0x29f1c8u: goto label_29f1c8;
        case 0x29f20cu: goto label_29f20c;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f330u: goto label_29f330;
        case 0x29f348u: goto label_29f348;
        case 0x29f358u: goto label_29f358;
        case 0x29f3c8u: goto label_29f3c8;
        case 0x29f3d8u: goto label_29f3d8;
        case 0x29f408u: goto label_29f408;
        case 0x29f430u: goto label_29f430;
        case 0x29f448u: goto label_29f448;
        case 0x29f458u: goto label_29f458;
        case 0x29f49cu: goto label_29f49c;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4fcu: goto label_29f4fc;
        case 0x29f534u: goto label_29f534;
        case 0x29f584u: goto label_29f584;
        case 0x29f594u: goto label_29f594;
        case 0x29f5ccu: goto label_29f5cc;
        case 0x29f5e4u: goto label_29f5e4;
        case 0x29f640u: goto label_29f640;
        case 0x29f678u: goto label_29f678;
        case 0x29f6a0u: goto label_29f6a0;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f734u: goto label_29f734;
        case 0x29f778u: goto label_29f778;
        default: break;
    }

    ctx->pc = 0x29e8e0u;

    // 0x29e8e0: 0x27bdfb30  addiu       $sp, $sp, -0x4D0
    ctx->pc = 0x29e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966064));
    // 0x29e8e4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x29e8e8: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x29e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
    // 0x29e8ec: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x29e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
    // 0x29e8f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29e8f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8f4: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x29e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
    // 0x29e8f8: 0x246474a0  addiu       $a0, $v1, 0x74A0
    ctx->pc = 0x29e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x29e8fc: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x29e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
    // 0x29e900: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x29e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
    // 0x29e904: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x29e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
    // 0x29e908: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x29e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
    // 0x29e90c: 0x7fb70450  sq          $s7, 0x450($sp)
    ctx->pc = 0x29e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 23));
    // 0x29e910: 0x7fbe0440  sq          $fp, 0x440($sp)
    ctx->pc = 0x29e910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 30));
    // 0x29e914: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x29e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
    // 0x29e918: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x29e918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x29e91c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29e91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29e920: 0x24060e00  addiu       $a2, $zero, 0xE00
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29e924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e928: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29e928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29e92c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29e930: 0x24491680  addiu       $t1, $v0, 0x1680
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 5760));
    // 0x29e934: 0x5983c  dsll32      $s3, $a1, 0
    ctx->pc = 0x29e934u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29e938: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x29e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29e93c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29e93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29e940: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x29e940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x29e944: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29e944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29e948: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29e948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x29e94c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29e94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29e950: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x29e950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x29e954: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x29e954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x29e958: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x29e958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x29e95c: 0x2234021  addu        $t0, $s1, $v1
    ctx->pc = 0x29e95cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x29e960: 0xafa20410  sw          $v0, 0x410($sp)
    ctx->pc = 0x29e960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 2));
    // 0x29e964: 0x3c014415  lui         $at, 0x4415
    ctx->pc = 0x29e964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17429 << 16));
    // 0x29e968: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x29e968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x29e96c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x29e96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29e970: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x29e970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29e974: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x29e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x29e978: 0x3c0a005d  lui         $t2, 0x5D
    ctx->pc = 0x29e978u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)93 << 16));
    // 0x29e97c: 0xffa60420  sd          $a2, 0x420($sp)
    ctx->pc = 0x29e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 6));
    // 0x29e980: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x29e980u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x29e984: 0x0  nop
    ctx->pc = 0x29e984u;
    // NOP
label_29e988:
    // 0x29e988: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x29e988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29e98c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29e98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e990: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29e990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29e994: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29e994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29e998: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29e998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e99c: 0x33642  srl         $a2, $v1, 25
    ctx->pc = 0x29e99cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x29e9a0: 0x8d44aff0  lw          $a0, -0x5010($t2)
    ctx->pc = 0x29e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294946800)));
    // 0x29e9a4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x29e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29e9a8: 0x3c0149f7  lui         $at, 0x49F7
    ctx->pc = 0x29e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18935 << 16));
    // 0x29e9ac: 0x3421ff08  ori         $at, $at, 0xFF08
    ctx->pc = 0x29e9acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65288);
    // 0x29e9b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29e9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29e9b4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29e9b8: 0xc4800250  lwc1        $f0, 0x250($a0)
    ctx->pc = 0x29e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29e9bc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x29e9c0: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x29e9c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x29e9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29e9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e9c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x29e9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x29e9cc: 0xc50340d0  lwc1        $f3, 0x40D0($t0)
    ctx->pc = 0x29e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29e9d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x29e9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29e9d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x29e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29e9d8: 0x0  nop
    ctx->pc = 0x29e9d8u;
    // NOP
    // 0x29e9dc: 0x0  nop
    ctx->pc = 0x29e9dcu;
    // NOP
    // 0x29e9e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x29e9e0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x29e9e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29e9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29e9e8: 0x0  nop
    ctx->pc = 0x29e9e8u;
    // NOP
    // 0x29e9ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29e9ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29e9f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29e9f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x29e9f4: 0x46070802  mul.s       $f0, $f1, $f7
    ctx->pc = 0x29e9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29e9f8: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x29e9f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
    // 0x29e9fc: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x29e9fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x29ea00: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x29ea00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x29ea04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29ea04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29ea08: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x29ea08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x29ea0c: 0x0  nop
    ctx->pc = 0x29ea0cu;
    // NOP
    // 0x29ea10: 0x0  nop
    ctx->pc = 0x29ea10u;
    // NOP
    // 0x29ea14: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x29ea14u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[5]);
    // 0x29ea18: 0x0  nop
    ctx->pc = 0x29ea18u;
    // NOP
    // 0x29ea1c: 0x0  nop
    ctx->pc = 0x29ea1cu;
    // NOP
    // 0x29ea20: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x29ea20u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[5]);
    // 0x29ea24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x29ea24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29ea28: 0x0  nop
    ctx->pc = 0x29ea28u;
    // NOP
    // 0x29ea2c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x29ea2cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x29ea30: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x29ea30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ea34: 0x0  nop
    ctx->pc = 0x29ea34u;
    // NOP
    // 0x29ea38: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29EA38u;
    {
        const bool branch_taken_0x29ea38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA38u;
        // 0x29ea3c: 0xc50440d4  lwc1        $f4, 0x40D4($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea38) {
            ctx->pc = 0x29EA8Cu;
            goto label_29ea8c;
        }
    }
    ctx->pc = 0x29EA40u;
    // 0x29ea40: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x29ea40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x29ea44: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29ea44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29ea48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29ea48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ea4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x29ea4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x29ea50: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x29ea50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29ea54: 0x0  nop
    ctx->pc = 0x29ea54u;
    // NOP
    // 0x29ea58: 0x0  nop
    ctx->pc = 0x29ea58u;
    // NOP
    // 0x29ea5c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x29ea5cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x29ea60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29ea60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29ea64: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x29ea64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29ea68: 0x0  nop
    ctx->pc = 0x29ea68u;
    // NOP
    // 0x29ea6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x29EA6Cu;
    {
        const bool branch_taken_0x29ea6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EA6Cu;
        // 0x29ea70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea6c) {
            ctx->pc = 0x29EA7Cu;
            goto label_29ea7c;
        }
    }
    ctx->pc = 0x29EA74u;
    // 0x29ea74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ea74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29ea78: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x29ea78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_29ea7c:
    // 0x29ea7c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x29ea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29ea80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x29ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29ea84: 0x2cc20081  sltiu       $v0, $a2, 0x81
    ctx->pc = 0x29ea84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x29ea88: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x29ea88u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_29ea8c:
    // 0x29ea8c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x29ea8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x29ea90: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x29ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x29ea94: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x29ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29ea98: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x29ea98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x29ea9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29eaa0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x29eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x29eaa4: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x29eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x29eaa8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x29eaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29eaac: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x29eaacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eab0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x29eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29eab4: 0x14a0ffb4  bnez        $a1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x29EAB4u;
    {
        const bool branch_taken_0x29eab4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EAB4u;
        // 0x29eab8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eab4) {
            ctx->pc = 0x29E988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e988;
        }
    }
    ctx->pc = 0x29EABCu;
    // 0x29eabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eac0: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29EAC0u;
    SET_GPR_U32(ctx, 31, 0x29EAC8u);
    ctx->pc = 0x29EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAC0u;
    // 0x29eac4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29EAC0u, 0x29EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAC8u;
label_29eac8:
    // 0x29eac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29eac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eacc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x29eaccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ead0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ead4: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29EAD4u;
    SET_GPR_U32(ctx, 31, 0x29EADCu);
    ctx->pc = 0x29EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAD4u;
    // 0x29ead8: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29EAD4u, 0x29EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EADCu;
label_29eadc:
    // 0x29eadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29eae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eae4: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29EAE4u;
    SET_GPR_U32(ctx, 31, 0x29EAECu);
    ctx->pc = 0x29EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAE4u;
    // 0x29eae8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29EAE4u, 0x29EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EAECu;
label_29eaec:
    // 0x29eaec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eaf0: 0x3406fc00  ori         $a2, $zero, 0xFC00
    ctx->pc = 0x29eaf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x29eaf4: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x29eaf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x29eaf8: 0x34c63f05  ori         $a2, $a2, 0x3F05
    ctx->pc = 0x29eaf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16133);
    // 0x29eafc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EAFCu;
    SET_GPR_U32(ctx, 31, 0x29EB04u);
    ctx->pc = 0x29EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EAFCu;
    // 0x29eb00: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EAFCu, 0x29EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB04u;
label_29eb04:
    // 0x29eb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29eb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb0c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EB0Cu;
    SET_GPR_U32(ctx, 31, 0x29EB14u);
    ctx->pc = 0x29EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB0Cu;
    // 0x29eb10: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EB0Cu, 0x29EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB14u;
label_29eb14:
    // 0x29eb14: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29eb14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29eb18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb1c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EB1Cu;
    SET_GPR_U32(ctx, 31, 0x29EB24u);
    ctx->pc = 0x29EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB1Cu;
    // 0x29eb20: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EB1Cu, 0x29EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB24u;
label_29eb24:
    // 0x29eb24: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29eb24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29eb28: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29eb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29eb2c: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29eb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29eb30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb34: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29eb38: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29eb3c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29eb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29eb40: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29eb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29eb44: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29eb48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29eb4c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29eb4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29eb50: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29eb54: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29eb54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29eb58: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29eb58u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29eb5c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29eb5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29eb60: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29eb60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29eb64: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29eb64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29eb68: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EB68u;
    SET_GPR_U32(ctx, 31, 0x29EB70u);
    ctx->pc = 0x29EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EB68u;
    // 0x29eb6c: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EB68u, 0x29EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EB70u;
label_29eb70:
    // 0x29eb70: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x29eb70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29eb74: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29eb78: 0x8c8611ac  lw          $a2, 0x11AC($a0)
    ctx->pc = 0x29eb78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29eb7c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29eb7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29eb80: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29eb80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x29eb84: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    ctx->pc = 0x29eb84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x29eb88: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x29eb88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x29eb8c: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x29eb8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29eb90: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29eb94: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x29eb94u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29eb98: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29eb98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29eb9c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29eb9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29eba0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29eba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29eba4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29eba8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29eba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29ebac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ebacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ebb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ebb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebb4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29ebb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29ebb8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EBB8u;
    SET_GPR_U32(ctx, 31, 0x29EBC0u);
    ctx->pc = 0x29EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBB8u;
    // 0x29ebbc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EBB8u, 0x29EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBC0u;
label_29ebc0:
    // 0x29ebc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ebc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebc4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29ebc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29ebc8: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29ebc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29ebcc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EBCCu;
    SET_GPR_U32(ctx, 31, 0x29EBD4u);
    ctx->pc = 0x29EBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBCCu;
    // 0x29ebd0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EBCCu, 0x29EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBD4u;
label_29ebd4:
    // 0x29ebd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ebd8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29ebdc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EBDCu;
    SET_GPR_U32(ctx, 31, 0x29EBE4u);
    ctx->pc = 0x29EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EBDCu;
    // 0x29ebe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EBDCu, 0x29EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBE4u;
label_29ebe4:
    // 0x29ebe4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29ebe8: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29ebec: 0x8ca41188  lw          $a0, 0x1188($a1)
    ctx->pc = 0x29ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29ebf0: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29ebf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29ebf4: 0x8d4511b8  lw          $a1, 0x11B8($t2)
    ctx->pc = 0x29ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29ebf8: 0x13303e  dsrl32      $a2, $s3, 0
    ctx->pc = 0x29ebf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x29ebfc: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29ebfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ec00: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29ec04: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ec04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ec08: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29ec08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29ec0c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29ec0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ec10: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29ec10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29ec14: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29ec14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29ec18: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x29ec18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29ec1c: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x29ec1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x29ec20: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x29ec20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x29ec24: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x29ec24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x29ec28: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ec28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ec2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ec2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec30: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29ec30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29ec34: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29ec34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29ec38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EC38u;
    SET_GPR_U32(ctx, 31, 0x29EC40u);
    ctx->pc = 0x29EC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC38u;
    // 0x29ec3c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EC38u, 0x29EC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EC40u;
label_29ec40:
    // 0x29ec40: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29ec44: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29ec44u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ec48: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29ec4c: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29ec4cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29ec50: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29ec50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29ec54: 0x18400049  blez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x29EC54u;
    {
        const bool branch_taken_0x29ec54 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EC54u;
        // 0x29ec58: 0x2410003f  addiu       $s0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ec54) {
            ctx->pc = 0x29ED7Cu;
            goto label_29ed7c;
        }
    }
    ctx->pc = 0x29EC5Cu;
    // 0x29ec5c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29ec5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29ec60: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x29ec60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec64: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x29ec64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x29ec68: 0x241e0800  addiu       $fp, $zero, 0x800
    ctx->pc = 0x29ec68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29ec6c: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x29ec6cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ec70: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x29ec70u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x29ec74: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x29ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
label_29ec78:
    // 0x29ec78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29ec78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec7c: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x29ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x29ec80: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ec80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ec84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ec88: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ec88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ec8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29ec8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29ec90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ec94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ec94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ec98: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EC98u;
    SET_GPR_U32(ctx, 31, 0x29ECA0u);
    ctx->pc = 0x29EC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EC98u;
    // 0x29ec9c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EC98u, 0x29ECA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECA0u;
label_29eca0:
    // 0x29eca0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29eca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29eca4: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29eca8: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29eca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29ecac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ecacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ecb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ecb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ecb4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ECB4u;
    SET_GPR_U32(ctx, 31, 0x29ECBCu);
    ctx->pc = 0x29ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ECB4u;
    // 0x29ecb8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ECB4u, 0x29ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECBCu;
label_29ecbc:
    // 0x29ecbc: 0x8e831180  lw          $v1, 0x1180($s4)
    ctx->pc = 0x29ecbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29ecc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ecc4: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29ecc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29ecc8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29eccc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29ecd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ecd4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ecd8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29ecd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29ecdc: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x29ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x29ece0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ece0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ece4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ece4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ece8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ece8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ecec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ECECu;
    SET_GPR_U32(ctx, 31, 0x29ECF4u);
    ctx->pc = 0x29ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ECECu;
    // 0x29ecf0: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ECECu, 0x29ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ECF4u;
label_29ecf4:
    // 0x29ecf4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29ecf8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29ecfc: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29ecfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29ed00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ed04: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29ed08: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ed0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed10: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x29ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x29ed14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ed18: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x29ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x29ed1c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ed1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ed20: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ED20u;
    SET_GPR_U32(ctx, 31, 0x29ED28u);
    ctx->pc = 0x29ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED20u;
    // 0x29ed24: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ED20u, 0x29ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED28u;
label_29ed28:
    // 0x29ed28: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x29ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
    // 0x29ed2c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29ed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ed30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29ed30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29ed34: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29ed34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ed38: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29ed3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed40: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29ed40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29ed44: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29ed44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29ed48: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ed48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ed4c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ed4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ed50: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ED50u;
    SET_GPR_U32(ctx, 31, 0x29ED58u);
    ctx->pc = 0x29ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED50u;
    // 0x29ed54: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ED50u, 0x29ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED58u;
label_29ed58:
    // 0x29ed58: 0x8e841180  lw          $a0, 0x1180($s4)
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29ed5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ed60: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ed60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ed64: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29ed68: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ed68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ed6c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29ed6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29ed70: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29ed70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ed74: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x29ED74u;
    {
        const bool branch_taken_0x29ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED74u;
        // 0x29ed78: 0x8ea211b4  lw          $v0, 0x11B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed74) {
            ctx->pc = 0x29EC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ec78;
        }
    }
    ctx->pc = 0x29ED7Cu;
label_29ed7c:
    // 0x29ed7c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29ed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ed80: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ed84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ed84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ED88u;
    SET_GPR_U32(ctx, 31, 0x29ED90u);
    ctx->pc = 0x29ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ED88u;
    // 0x29ed8c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ED88u, 0x29ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ED90u;
label_29ed90:
    // 0x29ed90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ed90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed94: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x29ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29ed98: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29ed9c: 0x8ca6118c  lw          $a2, 0x118C($a1)
    ctx->pc = 0x29ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29eda0: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29eda0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29eda4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29eda8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29edac: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29edb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29edb4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29edb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29edb8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29edb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29edbc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29edc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29edc4: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29edc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29edc8: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29edc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29edcc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29edccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29edd0: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29edd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29edd4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29edd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29edd8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EDD8u;
    SET_GPR_U32(ctx, 31, 0x29EDE0u);
    ctx->pc = 0x29EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EDD8u;
    // 0x29eddc: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EDD8u, 0x29EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EDE0u;
label_29ede0:
    // 0x29ede0: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29ede0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29ede4: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x29ede4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29ede8: 0x8d4611ac  lw          $a2, 0x11AC($t2)
    ctx->pc = 0x29ede8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29edec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29edecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29edf0: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29edf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29edf4: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x29edf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29edf8: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29edfc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x29edfcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29ee00: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29ee00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29ee04: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29ee04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29ee08: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29ee08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29ee0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29ee0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29ee10: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29ee10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29ee14: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ee14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ee18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee1c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29ee1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29ee20: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EE20u;
    SET_GPR_U32(ctx, 31, 0x29EE28u);
    ctx->pc = 0x29EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE20u;
    // 0x29ee24: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EE20u, 0x29EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE28u;
label_29ee28:
    // 0x29ee28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee2c: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29ee2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29ee30: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29ee30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29ee34: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29ee34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29ee38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EE38u;
    SET_GPR_U32(ctx, 31, 0x29EE40u);
    ctx->pc = 0x29EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE38u;
    // 0x29ee3c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EE38u, 0x29EE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE40u;
label_29ee40:
    // 0x29ee40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee44: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29ee48: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EE48u;
    SET_GPR_U32(ctx, 31, 0x29EE50u);
    ctx->pc = 0x29EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EE48u;
    // 0x29ee4c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EE48u, 0x29EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EE50u;
label_29ee50:
    // 0x29ee50: 0xdfa20420  ld          $v0, 0x420($sp)
    ctx->pc = 0x29ee50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x29ee54: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29ee58: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x29ee58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29ee5c: 0x3c072400  lui         $a3, 0x2400
    ctx->pc = 0x29ee5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9216 << 16));
    // 0x29ee60: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29ee60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29ee64: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x29ee64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29ee68: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29ee68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ee6c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29ee70: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ee70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ee74: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29ee74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29ee78: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29ee78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ee7c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29ee7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29ee80: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29ee80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29ee84: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x29ee84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29ee88: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x29ee88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x29ee8c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x29ee8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x29ee90: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x29ee90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x29ee94: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ee94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ee98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ee98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ee9c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29ee9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29eea0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29eea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29eea4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EEA4u;
    SET_GPR_U32(ctx, 31, 0x29EEACu);
    ctx->pc = 0x29EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEA4u;
    // 0x29eea8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EEA4u, 0x29EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEACu;
label_29eeac:
    // 0x29eeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eeb0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29eeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29eeb4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EEB4u;
    SET_GPR_U32(ctx, 31, 0x29EEBCu);
    ctx->pc = 0x29EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEB4u;
    // 0x29eeb8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EEB4u, 0x29EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEBCu;
label_29eebc:
    // 0x29eebc: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29eec0: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29eec0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29eec4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29eec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29eec8: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29eec8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29eecc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29eeccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29eed0: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x29EED0u;
    {
        const bool branch_taken_0x29eed0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED0u;
        // 0x29eed4: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eed0) {
            ctx->pc = 0x29F008u;
            goto label_29f008;
        }
    }
    ctx->pc = 0x29EED8u;
    // 0x29eed8: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29eed8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29eedc: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29eedcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eee0: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x29eee0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x29eee4: 0x24170800  addiu       $s7, $zero, 0x800
    ctx->pc = 0x29eee4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29eee8: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x29eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x29eeec: 0x0  nop
    ctx->pc = 0x29eeecu;
    // NOP
label_29eef0:
    // 0x29eef0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29eef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eef4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29eef8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29eef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29eefc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ef00: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ef00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ef04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29ef04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29ef08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ef0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ef10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EF10u;
    SET_GPR_U32(ctx, 31, 0x29EF18u);
    ctx->pc = 0x29EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF10u;
    // 0x29ef14: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EF10u, 0x29EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF18u;
label_29ef18:
    // 0x29ef18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29ef18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29ef1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ef20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef24: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29ef24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29ef28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EF28u;
    SET_GPR_U32(ctx, 31, 0x29EF30u);
    ctx->pc = 0x29EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF28u;
    // 0x29ef2c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EF28u, 0x29EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF30u;
label_29ef30:
    // 0x29ef30: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29ef30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29ef34: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29ef34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29ef38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef3c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EF3Cu;
    SET_GPR_U32(ctx, 31, 0x29EF44u);
    ctx->pc = 0x29EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF3Cu;
    // 0x29ef40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EF3Cu, 0x29EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF44u;
label_29ef44:
    // 0x29ef44: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29ef48: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29ef48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29ef4c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29ef4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29ef50: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29ef54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef58: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29ef5c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29ef60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ef64: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ef68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29ef6c: 0x2e21023  subu        $v0, $s7, $v0
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x29ef70: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ef70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ef74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29ef78: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29ef78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29ef7c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EF7Cu;
    SET_GPR_U32(ctx, 31, 0x29EF84u);
    ctx->pc = 0x29EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF7Cu;
    // 0x29ef80: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EF7Cu, 0x29EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF84u;
label_29ef84:
    // 0x29ef84: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29ef88: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29ef8c: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x29ef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29ef90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ef90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ef94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29ef98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ef9c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29efa0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x29efa4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x29efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x29efa8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29efa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29efac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EFACu;
    SET_GPR_U32(ctx, 31, 0x29EFB4u);
    ctx->pc = 0x29EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFACu;
    // 0x29efb0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EFACu, 0x29EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFB4u;
label_29efb4:
    // 0x29efb4: 0x8ea211b4  lw          $v0, 0x11B4($s5)
    ctx->pc = 0x29efb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
    // 0x29efb8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29efb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29efbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29efbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29efc0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29efc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29efc4: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29efc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29efc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29efc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29efcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29efd0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29efd4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29efd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29efd8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29efd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29efdc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29EFDCu;
    SET_GPR_U32(ctx, 31, 0x29EFE4u);
    ctx->pc = 0x29EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFDCu;
    // 0x29efe0: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29EFDCu, 0x29EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFE4u;
label_29efe4:
    // 0x29efe4: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x29efe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29efe8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29efec: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29efecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29eff0: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29eff4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29eff4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29eff8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29eff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29effc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29effcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f000: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29F000u;
    {
        const bool branch_taken_0x29f000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F000u;
        // 0x29f004: 0x8ea211b4  lw          $v0, 0x11B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f000) {
            ctx->pc = 0x29EEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29eef0;
        }
    }
    ctx->pc = 0x29F008u;
label_29f008:
    // 0x29f008: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29f008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29f00c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29f00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29f010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f014: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F014u;
    SET_GPR_U32(ctx, 31, 0x29F01Cu);
    ctx->pc = 0x29F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F014u;
    // 0x29f018: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F014u, 0x29F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F01Cu;
label_29f01c:
    // 0x29f01c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f01cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f020: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x29f020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29f024: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f028: 0x8ca6118c  lw          $a2, 0x118C($a1)
    ctx->pc = 0x29f028u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29f02c: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29f02cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f030: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f038: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29f038u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29f03c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29f03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f040: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29f040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29f044: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29f044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29f048: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29f048u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29f04c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29f050: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29f050u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29f054: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29f054u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29f058: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f05c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29f05cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29f060: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f064: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F064u;
    SET_GPR_U32(ctx, 31, 0x29F06Cu);
    ctx->pc = 0x29F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F064u;
    // 0x29f068: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F064u, 0x29F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F06Cu;
label_29f06c:
    // 0x29f06c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29f06cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29f070: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x29f070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x29f074: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f07c: 0x8d4811c8  lw          $t0, 0x11C8($t2)
    ctx->pc = 0x29f07cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29f080: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29f080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29f084: 0x8cc211ac  lw          $v0, 0x11AC($a2)
    ctx->pc = 0x29f084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29f088: 0x203382a  slt         $a3, $s0, $v1
    ctx->pc = 0x29f088u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f08c: 0x2466007f  addiu       $a2, $v1, 0x7F
    ctx->pc = 0x29f08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29f090: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x29f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29f094: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x29f094u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29f098: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29f09c: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29f09cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29f0a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29f0a4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f0a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f0a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29f0ac: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F0ACu;
    SET_GPR_U32(ctx, 31, 0x29F0B4u);
    ctx->pc = 0x29F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0ACu;
    // 0x29f0b0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F0ACu, 0x29F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0B4u;
label_29f0b4:
    // 0x29f0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0b8: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29f0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29f0bc: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29f0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29f0c0: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29f0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29f0c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F0C4u;
    SET_GPR_U32(ctx, 31, 0x29F0CCu);
    ctx->pc = 0x29F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0C4u;
    // 0x29f0c8: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F0C4u, 0x29F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0CCu;
label_29f0cc:
    // 0x29f0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f0d0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29f0d4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F0D4u;
    SET_GPR_U32(ctx, 31, 0x29F0DCu);
    ctx->pc = 0x29F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0D4u;
    // 0x29f0d8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F0D4u, 0x29F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0DCu;
label_29f0dc:
    // 0x29f0dc: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x29f0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f0e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29f0e4: 0x8c4511bc  lw          $a1, 0x11BC($v0)
    ctx->pc = 0x29f0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x29f0e8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x29f0e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x29f0ec: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29f0ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f0f0: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29f0f4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f0f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f0f8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29f0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29f0fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29f100: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29f100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29f104: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x29f104u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x29f108: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29f108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29f10c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29f10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29f110: 0x34088100  ori         $t0, $zero, 0x8100
    ctx->pc = 0x29f110u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29f114: 0x846f8  dsll        $t0, $t0, 27
    ctx->pc = 0x29f114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 27);
    // 0x29f118: 0x3508c000  ori         $t0, $t0, 0xC000
    ctx->pc = 0x29f118u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49152);
    // 0x29f11c: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29f11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29f120: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f128: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29f128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29f12c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29f12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29f130: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F130u;
    SET_GPR_U32(ctx, 31, 0x29F138u);
    ctx->pc = 0x29F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F130u;
    // 0x29f134: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F130u, 0x29F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F138u;
label_29f138:
    // 0x29f138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f13c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29f13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29f140: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F140u;
    SET_GPR_U32(ctx, 31, 0x29F148u);
    ctx->pc = 0x29F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F140u;
    // 0x29f144: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F140u, 0x29F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F148u;
label_29f148:
    // 0x29f148: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f14c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29f14cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f150: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29f154: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29f154u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29f158: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f158u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f15c: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x29F15Cu;
    {
        const bool branch_taken_0x29f15c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F15Cu;
        // 0x29f160: 0x2410001f  addiu       $s0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f15c) {
            ctx->pc = 0x29F290u;
            goto label_29f290;
        }
    }
    ctx->pc = 0x29F164u;
    // 0x29f164: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29f164u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29f168: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29f168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f16c: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29f170: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29f170u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x29f174: 0x0  nop
    ctx->pc = 0x29f174u;
    // NOP
label_29f178:
    // 0x29f178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29f178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f17c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29f180: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29f188: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f18c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29f18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f194: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f198: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F198u;
    SET_GPR_U32(ctx, 31, 0x29F1A0u);
    ctx->pc = 0x29F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F198u;
    // 0x29f19c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F198u, 0x29F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1A0u;
label_29f1a0:
    // 0x29f1a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1ac: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29f1b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F1B0u;
    SET_GPR_U32(ctx, 31, 0x29F1B8u);
    ctx->pc = 0x29F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1B0u;
    // 0x29f1b4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F1B0u, 0x29F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1B8u;
label_29f1b8:
    // 0x29f1b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F1C0u;
    SET_GPR_U32(ctx, 31, 0x29F1C8u);
    ctx->pc = 0x29F1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F1C0u;
    // 0x29f1c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F1C0u, 0x29F1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F1C8u;
label_29f1c8:
    // 0x29f1c8: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f1cc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29f1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f1d0: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f1d4: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29f1d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f1d8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29f1d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29f1dc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29f1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f1e8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f1ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29f1ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29f1f0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29f1f4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f1f8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29f1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29f1fc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29f1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29f200: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29f200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29f204: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F204u;
    SET_GPR_U32(ctx, 31, 0x29F20Cu);
    ctx->pc = 0x29F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F204u;
    // 0x29f208: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F204u, 0x29F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F20Cu;
label_29f20c:
    // 0x29f20c: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x29f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f214: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29f214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29f218: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29f218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f21c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f220: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f224: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f228: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29f228u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29f22c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f230: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f234: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F234u;
    SET_GPR_U32(ctx, 31, 0x29F23Cu);
    ctx->pc = 0x29F238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F234u;
    // 0x29f238: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F234u, 0x29F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29f240: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29f240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f244: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29f248: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f24c: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f254: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29f254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29f258: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29f258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29f25c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f25cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f260: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f264: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F264u;
    SET_GPR_U32(ctx, 31, 0x29F26Cu);
    ctx->pc = 0x29F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F264u;
    // 0x29f268: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F264u, 0x29F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F26Cu;
label_29f26c:
    // 0x29f26c: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f270: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f274: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29f274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f278: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29f27c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f27cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f280: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f280u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f284: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29f284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f288: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29F288u;
    {
        const bool branch_taken_0x29f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F288u;
        // 0x29f28c: 0x8e8211b4  lw          $v0, 0x11B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f288) {
            ctx->pc = 0x29F178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f178;
        }
    }
    ctx->pc = 0x29F290u;
label_29f290:
    // 0x29f290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f294: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29f294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29f298: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29f298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29f29c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F29Cu;
    SET_GPR_U32(ctx, 31, 0x29F2A4u);
    ctx->pc = 0x29F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F29Cu;
    // 0x29f2a0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F29Cu, 0x29F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2A4u;
label_29f2a4:
    // 0x29f2a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29f2ac: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f2b0: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x29f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29f2b4: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29f2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f2b8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f2bc: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29f2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29f2c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f2c4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29f2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29f2c8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29f2c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29f2cc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29f2ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29f2d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29f2d4: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29f2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29f2d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f2dc: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29f2e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f2e4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29f2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29f2e8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f2ec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F2ECu;
    SET_GPR_U32(ctx, 31, 0x29F2F4u);
    ctx->pc = 0x29F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2ECu;
    // 0x29f2f0: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F2ECu, 0x29F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2F4u;
label_29f2f4:
    // 0x29f2f4: 0x8ec71180  lw          $a3, 0x1180($s6)
    ctx->pc = 0x29f2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f2f8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x29f2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29f2fc: 0x8ca211ac  lw          $v0, 0x11AC($a1)
    ctx->pc = 0x29f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29f300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f304: 0x207182a  slt         $v1, $s0, $a3
    ctx->pc = 0x29f304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29f308: 0x24e6007f  addiu       $a2, $a3, 0x7F
    ctx->pc = 0x29f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x29f30c: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x29f30cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x29f310: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29f310u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29f314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29f318: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29f318u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29f31c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29f31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29f320: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f324: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29f324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29f328: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F328u;
    SET_GPR_U32(ctx, 31, 0x29F330u);
    ctx->pc = 0x29F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F328u;
    // 0x29f32c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F328u, 0x29F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F330u;
label_29f330:
    // 0x29f330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f334: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29f334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29f338: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29f338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29f33c: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29f33cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29f340: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F340u;
    SET_GPR_U32(ctx, 31, 0x29F348u);
    ctx->pc = 0x29F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F340u;
    // 0x29f344: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F340u, 0x29F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F348u;
label_29f348:
    // 0x29f348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f34c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29f34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29f350: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F350u;
    SET_GPR_U32(ctx, 31, 0x29F358u);
    ctx->pc = 0x29F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F350u;
    // 0x29f354: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F350u, 0x29F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F358u;
label_29f358:
    // 0x29f358: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x29f358u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x29f35c: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x29f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f360: 0x8cc711c8  lw          $a3, 0x11C8($a2)
    ctx->pc = 0x29f360u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29f364: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29f364u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29f368: 0x8d4611ac  lw          $a2, 0x11AC($t2)
    ctx->pc = 0x29f368u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29f36c: 0x204282a  slt         $a1, $s0, $a0
    ctx->pc = 0x29f36cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f370: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29f374: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29f374u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29f378: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x29f378u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f37c: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x29f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4540)));
    // 0x29f380: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29f380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29f384: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29f384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29f388: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f38c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29f390: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x29f390u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x29f394: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29f394u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29f398: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29f398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29f39c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f3a0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29f3a4: 0x34098100  ori         $t1, $zero, 0x8100
    ctx->pc = 0x29f3a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29f3a8: 0x94ef8  dsll        $t1, $t1, 27
    ctx->pc = 0x29f3a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 27);
    // 0x29f3ac: 0x3529c000  ori         $t1, $t1, 0xC000
    ctx->pc = 0x29f3acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)49152);
    // 0x29f3b0: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x29f3b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x29f3b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29f3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29f3b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3bc: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x29f3bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x29f3c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F3C0u;
    SET_GPR_U32(ctx, 31, 0x29F3C8u);
    ctx->pc = 0x29F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F3C0u;
    // 0x29f3c4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F3C0u, 0x29F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3C8u;
label_29f3c8:
    // 0x29f3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29f3d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F3D0u;
    SET_GPR_U32(ctx, 31, 0x29F3D8u);
    ctx->pc = 0x29F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F3D0u;
    // 0x29f3d4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F3D0u, 0x29F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F3D8u;
label_29f3d8:
    // 0x29f3d8: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f3dc: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29f3dcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f3e0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29f3e4: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29f3e4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29f3e8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f3ec: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x29F3ECu;
    {
        const bool branch_taken_0x29f3ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F3ECu;
        // 0x29f3f0: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f3ec) {
            ctx->pc = 0x29F520u;
            goto label_29f520;
        }
    }
    ctx->pc = 0x29F3F4u;
    // 0x29f3f4: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29f3f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f3f8: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29f3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29f3fc: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x29f3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29f400: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29f404: 0x0  nop
    ctx->pc = 0x29f404u;
    // NOP
label_29f408:
    // 0x29f408: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29f408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f40c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29f410: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29f418: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f418u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f41c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f420: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f424: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f428: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F428u;
    SET_GPR_U32(ctx, 31, 0x29F430u);
    ctx->pc = 0x29F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F428u;
    // 0x29f42c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F428u, 0x29F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F430u;
label_29f430:
    // 0x29f430: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f430u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f434: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f43c: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29f43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29f440: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F440u;
    SET_GPR_U32(ctx, 31, 0x29F448u);
    ctx->pc = 0x29F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F440u;
    // 0x29f444: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F440u, 0x29F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F448u;
label_29f448:
    // 0x29f448: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f44c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f450: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F450u;
    SET_GPR_U32(ctx, 31, 0x29F458u);
    ctx->pc = 0x29F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F450u;
    // 0x29f454: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F450u, 0x29F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F458u;
label_29f458:
    // 0x29f458: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29f458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f45c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29f45cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f460: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f464: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29f464u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f468: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29f468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29f46c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29f470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f478: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f47c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29f47cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29f480: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29f480u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29f484: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f488: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29f488u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29f48c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29f490: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29f490u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29f494: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F494u;
    SET_GPR_U32(ctx, 31, 0x29F49Cu);
    ctx->pc = 0x29F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F494u;
    // 0x29f498: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F494u, 0x29F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F49Cu;
label_29f49c:
    // 0x29f49c: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x29f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f4a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f4a4: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29f4a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f4ac: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f4b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f4b4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f4b8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29f4b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29f4bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f4c0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f4c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f4c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F4C4u;
    SET_GPR_U32(ctx, 31, 0x29F4CCu);
    ctx->pc = 0x29F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4C4u;
    // 0x29f4c8: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F4C4u, 0x29F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4CCu;
label_29f4cc:
    // 0x29f4cc: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29f4d0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29f4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f4d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29f4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29f4d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f4dc: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f4e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f4e4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29f4e8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29f4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29f4ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f4f0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f4f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F4F4u;
    SET_GPR_U32(ctx, 31, 0x29F4FCu);
    ctx->pc = 0x29F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F4F4u;
    // 0x29f4f8: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F4F4u, 0x29F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4FCu;
label_29f4fc:
    // 0x29f4fc: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29f500: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f504: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29f504u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f508: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29f50c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f50cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f510: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f514: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29f514u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f518: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29F518u;
    {
        const bool branch_taken_0x29f518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F518u;
        // 0x29f51c: 0x8e8211b4  lw          $v0, 0x11B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f518) {
            ctx->pc = 0x29F408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f408;
        }
    }
    ctx->pc = 0x29F520u;
label_29f520:
    // 0x29f520: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29f524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f528: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29f52c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F52Cu;
    SET_GPR_U32(ctx, 31, 0x29F534u);
    ctx->pc = 0x29F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F52Cu;
    // 0x29f530: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F52Cu, 0x29F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F534u;
label_29f534:
    // 0x29f534: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f538: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29f53c: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f540: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29f540u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29f544: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29f544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f548: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f550: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29f550u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29f554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29f554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f558: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29f558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29f55c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29f55cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29f560: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29f560u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29f564: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29f568: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29f56c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29f56cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29f570: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f574: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29f574u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29f578: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f57c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F57Cu;
    SET_GPR_U32(ctx, 31, 0x29F584u);
    ctx->pc = 0x29F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F57Cu;
    // 0x29f580: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F57Cu, 0x29F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F584u;
label_29f584:
    // 0x29f584: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29f584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29f588: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f58c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F58Cu;
    SET_GPR_U32(ctx, 31, 0x29F594u);
    ctx->pc = 0x29F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F58Cu;
    // 0x29f590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F58Cu, 0x29F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F594u;
label_29f594:
    // 0x29f594: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f598: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29f598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f59c: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29f59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29f5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5a4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29f5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29f5a8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29f5a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f5ac: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29f5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29f5b0: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29f5b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29f5b4: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x29f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x29f5b8: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29f5bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f5bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f5c0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f5c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F5C4u;
    SET_GPR_U32(ctx, 31, 0x29F5CCu);
    ctx->pc = 0x29F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5C4u;
    // 0x29f5c8: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F5C4u, 0x29F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5CCu;
label_29f5cc:
    // 0x29f5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f5d0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29f5d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29f5d4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29f5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29f5d8: 0x34c60044  ori         $a2, $a2, 0x44
    ctx->pc = 0x29f5d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)68);
    // 0x29f5dc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F5DCu;
    SET_GPR_U32(ctx, 31, 0x29F5E4u);
    ctx->pc = 0x29F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F5DCu;
    // 0x29f5e0: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F5DCu, 0x29F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F5E4u;
label_29f5e4:
    // 0x29f5e4: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x29f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f5e8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x29f5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x29f5ec: 0x8cc511bc  lw          $a1, 0x11BC($a2)
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x29f5f0: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29f5f4: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29f5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f5f8: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29f5fc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f5fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f600: 0x9d4611ac  lwu         $a2, 0x11AC($t2)
    ctx->pc = 0x29f600u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4524)));
    // 0x29f604: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29f604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29f608: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x29f608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x29f60c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29f610: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29f610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29f614: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29f614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29f618: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f61c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29f61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29f620: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29f620u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29f624: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29f624u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29f628: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29f628u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29f62c: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29f62cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29f630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f634: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29f638: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F638u;
    SET_GPR_U32(ctx, 31, 0x29F640u);
    ctx->pc = 0x29F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F638u;
    // 0x29f63c: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F638u, 0x29F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F640u;
label_29f640:
    // 0x29f640: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29f644: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29f644u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f648: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x29f64c: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29f64cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29f650: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29f650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29f654: 0x18400051  blez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x29F654u;
    {
        const bool branch_taken_0x29f654 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F654u;
        // 0x29f658: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f654) {
            ctx->pc = 0x29F79Cu;
            goto label_29f79c;
        }
    }
    ctx->pc = 0x29F65Cu;
    // 0x29f65c: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x29f65cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x29f660: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29f660u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29f664: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x29f664u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f668: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x29f668u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29f66c: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x29f66cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29f670: 0x8ee2118c  lw          $v0, 0x118C($s7)
    ctx->pc = 0x29f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x29f674: 0x0  nop
    ctx->pc = 0x29f674u;
    // NOP
label_29f678:
    // 0x29f678: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29f678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f67c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29f680: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29f688: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f68c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29f68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f694: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f698: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F698u;
    SET_GPR_U32(ctx, 31, 0x29F6A0u);
    ctx->pc = 0x29F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F698u;
    // 0x29f69c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F698u, 0x29F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6A0u;
label_29f6a0:
    // 0x29f6a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29f6a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29f6a4: 0x3c060010  lui         $a2, 0x10
    ctx->pc = 0x29f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16 << 16));
    // 0x29f6a8: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x29f6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x29f6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f6b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F6B4u;
    SET_GPR_U32(ctx, 31, 0x29F6BCu);
    ctx->pc = 0x29F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6B4u;
    // 0x29f6b8: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F6B4u, 0x29F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6BCu;
label_29f6bc:
    // 0x29f6bc: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29f6c0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29f6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f6c4: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f6c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f6cc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29f6d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29f6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f6d8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f6dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29f6dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29f6e0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29f6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29f6e4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f6e8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29f6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29f6ec: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29f6ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29f6f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F6F0u;
    SET_GPR_U32(ctx, 31, 0x29F6F8u);
    ctx->pc = 0x29F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F6F0u;
    // 0x29f6f4: 0xd43025  or          $a2, $a2, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F6F0u, 0x29F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F6F8u;
label_29f6f8:
    // 0x29f6f8: 0x8e061180  lw          $a2, 0x1180($s0)
    ctx->pc = 0x29f6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29f6fc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29f700: 0x8c4311b4  lw          $v1, 0x11B4($v0)
    ctx->pc = 0x29f700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x29f704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f708: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29f708u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29f70c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29f70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f710: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29f710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29f714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f718: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29f718u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29f71c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x29f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x29f720: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f724: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29f724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29f728: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x29f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x29f72c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F72Cu;
    SET_GPR_U32(ctx, 31, 0x29F734u);
    ctx->pc = 0x29F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F72Cu;
    // 0x29f730: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F72Cu, 0x29F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F734u;
label_29f734:
    // 0x29f734: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29f738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f73c: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f740: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29f740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29f744: 0x8ee7118c  lw          $a3, 0x118C($s7)
    ctx->pc = 0x29f744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
    // 0x29f748: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29f748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29f74c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f750: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29f750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29f754: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29f754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29f758: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29f75c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f760: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29f760u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29f764: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29f768: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f76c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f76cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f770: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F770u;
    SET_GPR_U32(ctx, 31, 0x29F778u);
    ctx->pc = 0x29F774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F770u;
    // 0x29f774: 0xd43025  or          $a2, $a2, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F770u, 0x29F778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F778u;
label_29f778:
    // 0x29f778: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29f778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29f77c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29f77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f780: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29f780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f784: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x29f788: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f788u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f78c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29f78cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29f790: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29f790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29f794: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x29F794u;
    {
        const bool branch_taken_0x29f794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29F798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F794u;
        // 0x29f798: 0x8ee2118c  lw          $v0, 0x118C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f794) {
            ctx->pc = 0x29F678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f678;
        }
    }
    ctx->pc = 0x29F79Cu;
label_29f79c:
    // 0x29f79c: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x29f79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x29f7a0: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x29f7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x29f7a4: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x29f7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x29f7a8: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x29f7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x29f7ac: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x29f7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x29f7b0: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x29f7b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x29f7b4: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x29f7b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x29f7b8: 0x7bb70450  lq          $s7, 0x450($sp)
    ctx->pc = 0x29f7b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x29f7bc: 0x7bbe0440  lq          $fp, 0x440($sp)
    ctx->pc = 0x29f7bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x29f7c0: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x29f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x29f7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F7C4u;
        // 0x29f7c8: 0x27bd04d0  addiu       $sp, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F7CCu;
    // 0x29f7cc: 0x0  nop
    ctx->pc = 0x29f7ccu;
    // NOP
    // 0x29f7d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29f7d4: 0x0  nop
    ctx->pc = 0x29f7d4u;
    // NOP
    ctx->pc = 0x29f7d8u;
}
