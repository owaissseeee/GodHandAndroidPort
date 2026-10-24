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

// Function: func_0030CB30
// Address: 0x30cb30 - 0x30cf10
void func_0030CB30_0x30cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030CB30_0x30cb30");
#endif

    switch (ctx->pc) {
        case 0x30cb8cu: goto label_30cb8c;
        default: break;
    }

    ctx->pc = 0x30cb30u;

    // 0x30cb30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x30cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30cb34: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30cb38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x30cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30cb3c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x30cb3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x30cb40: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x30cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30cb44: 0x245e76c0  addiu       $fp, $v0, 0x76C0
    ctx->pc = 0x30cb44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 30400));
    // 0x30cb48: 0x84661180  lh          $a2, 0x1180($v1)
    ctx->pc = 0x30cb48u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x3C1180u));
    // 0x30cb4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb50: 0x84a7118c  lh          $a3, 0x118C($a1)
    ctx->pc = 0x30cb50u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x3C118Cu));
    // 0x30cb54: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x30cb54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30cb58: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x30cb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x30cb5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30cb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cb60: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x30cb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x30cb64: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x30cb64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x30cb68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x30cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x30cb6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x30cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x30cb70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x30cb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x30cb74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30cb78: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x30cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x30cb7c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x30cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x30cb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30cb84: 0xc0e5856  jal         func_396158
    ctx->pc = 0x30CB84u;
    SET_GPR_U32(ctx, 31, 0x30CB8Cu);
    ctx->pc = 0x30CB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB84u;
    // 0x30cb88: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396158u, 0x30CB84u, 0x30CB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB8Cu;
label_30cb8c:
    // 0x30cb8c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30cb90: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x30cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x30cb94: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x30cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30cb98: 0xdfd70018  ld          $s7, 0x18($fp)
    ctx->pc = 0x30cb98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x30cb9c: 0x8c65057c  lw          $a1, 0x57C($v1)
    ctx->pc = 0x30cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x747A1Cu));
    // 0x30cba0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30cba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30cba4: 0x8c68060c  lw          $t0, 0x60C($v1)
    ctx->pc = 0x30cba4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x747AACu));
    // 0x30cba8: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x30cba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cbac: 0x8fc30040  lw          $v1, 0x40($fp)
    ctx->pc = 0x30cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x30cbb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x30cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30cbb4: 0xdfd80040  ld          $t8, 0x40($fp)
    ctx->pc = 0x30cbb4u;
    SET_GPR_U64(ctx, 24, READ64(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x30cbb8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x30cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30cbbc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x30cbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x30cbc0: 0x2e6b824  and         $s7, $s7, $a2
    ctx->pc = 0x30cbc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 6));
    // 0x30cbc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30cbc8: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x30cbc8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x30cbcc: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x30cbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cbd0: 0x3102ff00  andi        $v0, $t0, 0xFF00
    ctx->pc = 0x30cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x30cbd4: 0x305c024  and         $t8, $t8, $a1
    ctx->pc = 0x30cbd4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 5));
    // 0x30cbd8: 0x83c02  srl         $a3, $t0, 16
    ctx->pc = 0x30cbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x30cbdc: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x30cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x30cbe0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x30cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x30cbe4: 0x24a574a0  addiu       $a1, $a1, 0x74A0
    ctx->pc = 0x30cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29856));
    // 0x30cbe8: 0xdfcf0010  ld          $t7, 0x10($fp)
    ctx->pc = 0x30cbe8u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x30cbec: 0x8ca50580  lw          $a1, 0x580($a1)
    ctx->pc = 0x30cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1408)));
    // 0x30cbf0: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x30cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x30cbf4: 0xdfc90060  ld          $t1, 0x60($fp)
    ctx->pc = 0x30cbf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 30), 96)));
    // 0x30cbf8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x30cbf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x30cbfc: 0xdfcc00e0  ld          $t4, 0xE0($fp)
    ctx->pc = 0x30cbfcu;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 30), 224)));
    // 0x30cc00: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x30cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x30cc04: 0xdfcd0038  ld          $t5, 0x38($fp)
    ctx->pc = 0x30cc04u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x30cc08: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x30cc08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x30cc0c: 0xdfca01d0  ld          $t2, 0x1D0($fp)
    ctx->pc = 0x30cc0cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 30), 464)));
    // 0x30cc10: 0x173538  dsll        $a2, $s7, 20
    ctx->pc = 0x30cc10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << 20);
    // 0x30cc14: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x30cc14u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x30cc18: 0xdfcb0250  ld          $t3, 0x250($fp)
    ctx->pc = 0x30cc18u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 30), 592)));
    // 0x30cc1c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x30cc1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30cc20: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x30cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x30cc24: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x30cc24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x30cc28: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x30cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x30cc2c: 0x92133cc9  lbu         $s3, 0x3CC9($s0)
    ctx->pc = 0x30cc2cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15561)));
    // 0x30cc30: 0x1a46824  and         $t5, $t5, $a0
    ctx->pc = 0x30cc30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 4));
    // 0x30cc34: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x30cc34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x30cc38: 0xdfd20070  ld          $s2, 0x70($fp)
    ctx->pc = 0x30cc38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x30cc3c: 0xdfd400f0  ld          $s4, 0xF0($fp)
    ctx->pc = 0x30cc3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 30), 240)));
    // 0x30cc40: 0x1a26824  and         $t5, $t5, $v0
    ctx->pc = 0x30cc40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x30cc44: 0xdfd60260  ld          $s6, 0x260($fp)
    ctx->pc = 0x30cc44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 30), 608)));
    // 0x30cc48: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x30cc48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x30cc4c: 0xdfd00008  ld          $s0, 0x8($fp)
    ctx->pc = 0x30cc4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x30cc50: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x30cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x30cc54: 0xdfd10030  ld          $s1, 0x30($fp)
    ctx->pc = 0x30cc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x30cc58: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x30cc58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x30cc5c: 0xdfd501e0  ld          $s5, 0x1E0($fp)
    ctx->pc = 0x30cc5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 30), 480)));
    // 0x30cc60: 0x1846024  and         $t4, $t4, $a0
    ctx->pc = 0x30cc60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 4));
    // 0x30cc64: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x30cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x30cc68: 0x1445024  and         $t2, $t2, $a0
    ctx->pc = 0x30cc68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x30cc6c: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x30cc6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x30cc70: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x30cc70u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cc74: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x30cc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x30cc78: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x30cc78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x30cc7c: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x30cc7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x30cc80: 0x1856025  or          $t4, $t4, $a1
    ctx->pc = 0x30cc80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
    // 0x30cc84: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x30cc84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x30cc88: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x30cc88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x30cc8c: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x30cc8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cc90: 0x303c025  or          $t8, $t8, $v1
    ctx->pc = 0x30cc90u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x30cc94: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30cc94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30cc98: 0x3273001f  andi        $s3, $s3, 0x1F
    ctx->pc = 0x30cc98u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)31);
    // 0x30cc9c: 0x3c03c0ff  lui         $v1, 0xC0FF
    ctx->pc = 0x30cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49407 << 16));
    // 0x30cca0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30cca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30cca4: 0x1e47824  and         $t7, $t7, $a0
    ctx->pc = 0x30cca4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 4));
    // 0x30cca8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x30cca8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x30ccac: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x30ccacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x30ccb0: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x30ccb0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x30ccb4: 0x284a024  and         $s4, $s4, $a0
    ctx->pc = 0x30ccb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
    // 0x30ccb8: 0x2a4a824  and         $s5, $s5, $a0
    ctx->pc = 0x30ccb8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x30ccbc: 0x139bf8  dsll        $s3, $s3, 15
    ctx->pc = 0x30ccbcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 15);
    // 0x30ccc0: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x30ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x30ccc4: 0xb32825  or          $a1, $a1, $s3
    ctx->pc = 0x30ccc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 19));
    // 0x30ccc8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x30ccc8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x30cccc: 0x240dfffd  addiu       $t5, $zero, -0x3
    ctx->pc = 0x30ccccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x30ccd0: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x30ccd0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x30ccd4: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x30ccd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x30ccd8: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x30ccd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x30ccdc: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x30ccdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x30cce0: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x30cce0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x30cce4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x30cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x30cce8: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x30cce8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x30ccec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x30ccecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ccf0: 0x31ce001f  andi        $t6, $t6, 0x1F
    ctx->pc = 0x30ccf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)31);
    // 0x30ccf4: 0x22d8824  and         $s1, $s1, $t5
    ctx->pc = 0x30ccf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 13));
    // 0x30ccf8: 0x20d8024  and         $s0, $s0, $t5
    ctx->pc = 0x30ccf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 13));
    // 0x30ccfc: 0x2449025  or          $s2, $s2, $a0
    ctx->pc = 0x30ccfcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x30cd00: 0x284a025  or          $s4, $s4, $a0
    ctx->pc = 0x30cd00u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x30cd04: 0x1e2c824  and         $t9, $t7, $v0
    ctx->pc = 0x30cd04u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 15) & GPR_U64(ctx, 2));
    // 0x30cd08: 0xffca01d0  sd          $t2, 0x1D0($fp)
    ctx->pc = 0x30cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 464), GPR_U64(ctx, 10));
    // 0x30cd0c: 0xffd00008  sd          $s0, 0x8($fp)
    ctx->pc = 0x30cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 16));
    // 0x30cd10: 0xe73f8  dsll        $t6, $t6, 15
    ctx->pc = 0x30cd10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 15);
    // 0x30cd14: 0xffd10030  sd          $s1, 0x30($fp)
    ctx->pc = 0x30cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 48), GPR_U64(ctx, 17));
    // 0x30cd18: 0x2a4a825  or          $s5, $s5, $a0
    ctx->pc = 0x30cd18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x30cd1c: 0xffc802f0  sd          $t0, 0x2F0($fp)
    ctx->pc = 0x30cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 752), GPR_U64(ctx, 8));
    // 0x30cd20: 0x3c0fff80  lui         $t7, 0xFF80
    ctx->pc = 0x30cd20u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65408 << 16));
    // 0x30cd24: 0x35ef0fff  ori         $t7, $t7, 0xFFF
    ctx->pc = 0x30cd24u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)4095);
    // 0x30cd28: 0xffc90060  sd          $t1, 0x60($fp)
    ctx->pc = 0x30cd28u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 96), GPR_U64(ctx, 9));
    // 0x30cd2c: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x30cd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x30cd30: 0xffd20070  sd          $s2, 0x70($fp)
    ctx->pc = 0x30cd30u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 112), GPR_U64(ctx, 18));
    // 0x30cd34: 0x32ec825  or          $t9, $t9, $t6
    ctx->pc = 0x30cd34u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | GPR_U64(ctx, 14));
    // 0x30cd38: 0xffcc00e0  sd          $t4, 0xE0($fp)
    ctx->pc = 0x30cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 224), GPR_U64(ctx, 12));
    // 0x30cd3c: 0x2c4b025  or          $s6, $s6, $a0
    ctx->pc = 0x30cd3cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
    // 0x30cd40: 0xffd400f0  sd          $s4, 0xF0($fp)
    ctx->pc = 0x30cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 240), GPR_U64(ctx, 20));
    // 0x30cd44: 0x63338  dsll        $a2, $a2, 12
    ctx->pc = 0x30cd44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 12);
    // 0x30cd48: 0xffd501e0  sd          $s5, 0x1E0($fp)
    ctx->pc = 0x30cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 480), GPR_U64(ctx, 21));
    // 0x30cd4c: 0x181538  dsll        $v0, $t8, 20
    ctx->pc = 0x30cd4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) << 20);
    // 0x30cd50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x30cd50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x30cd54: 0xffcb0250  sd          $t3, 0x250($fp)
    ctx->pc = 0x30cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 592), GPR_U64(ctx, 11));
    // 0x30cd58: 0x2efb824  and         $s7, $s7, $t7
    ctx->pc = 0x30cd58u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 15));
    // 0x30cd5c: 0xffd60260  sd          $s6, 0x260($fp)
    ctx->pc = 0x30cd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 608), GPR_U64(ctx, 22));
    // 0x30cd60: 0x2e6b825  or          $s7, $s7, $a2
    ctx->pc = 0x30cd60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 6));
    // 0x30cd64: 0xffc80180  sd          $t0, 0x180($fp)
    ctx->pc = 0x30cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 384), GPR_U64(ctx, 8));
    // 0x30cd68: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x30cd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x30cd6c: 0xffd90010  sd          $t9, 0x10($fp)
    ctx->pc = 0x30cd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 25));
    // 0x30cd70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30cd74: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x30cd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x30cd78: 0x30f2824  and         $a1, $t8, $t7
    ctx->pc = 0x30cd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & GPR_U64(ctx, 15));
    // 0x30cd7c: 0xdfa60000  ld          $a2, 0x0($sp)
    ctx->pc = 0x30cd7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cd80: 0x21338  dsll        $v0, $v0, 12
    ctx->pc = 0x30cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 12);
    // 0x30cd84: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x30cd84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x30cd88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30cd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30cd8c: 0xffc60038  sd          $a2, 0x38($fp)
    ctx->pc = 0x30cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 56), GPR_U64(ctx, 6));
    // 0x30cd90: 0x254a74a0  addiu       $t2, $t2, 0x74A0
    ctx->pc = 0x30cd90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29856));
    // 0x30cd94: 0xffd70018  sd          $s7, 0x18($fp)
    ctx->pc = 0x30cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 23));
    // 0x30cd98: 0x8d420578  lw          $v0, 0x578($t2)
    ctx->pc = 0x30cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A18u));
    // 0x30cd9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x30cd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30cda0: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x30CDA0u;
    {
        const bool branch_taken_0x30cda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDA0u;
        // 0x30cda4: 0xffc50040  sd          $a1, 0x40($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cda0) {
            ctx->pc = 0x30CEDCu;
            goto label_30cedc;
        }
    }
    ctx->pc = 0x30CDA8u;
    // 0x30cda8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x30cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30cdac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x30cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30cdb0: 0x8c8811a4  lw          $t0, 0x11A4($a0)
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11A4u));
    // 0x30cdb4: 0x3c03f87f  lui         $v1, 0xF87F
    ctx->pc = 0x30cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63615 << 16));
    // 0x30cdb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30cdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30cdbc: 0x2e33024  and         $a2, $s7, $v1
    ctx->pc = 0x30cdbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x30cdc0: 0x3c040280  lui         $a0, 0x280
    ctx->pc = 0x30cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)640 << 16));
    // 0x30cdc4: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x30cdc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x30cdc8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x30cdc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x30cdcc: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x30cdccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30cdd0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x30cdd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30cdd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30cdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30cdd8: 0x8ce511a8  lw          $a1, 0x11A8($a3)
    ctx->pc = 0x30cdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11A8u));
    // 0x30cddc: 0x3c078007  lui         $a3, 0x8007
    ctx->pc = 0x30cddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32775 << 16));
    // 0x30cde0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x30cde0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x30cde4: 0x73b78  dsll        $a3, $a3, 13
    ctx->pc = 0x30cde4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 13);
    // 0x30cde8: 0x34e71fff  ori         $a3, $a3, 0x1FFF
    ctx->pc = 0x30cde8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8191);
    // 0x30cdec: 0x240af000  addiu       $t2, $zero, -0x1000
    ctx->pc = 0x30cdecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cdf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30cdf4: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x30cdf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x30cdf8: 0x30440fff  andi        $a0, $v0, 0xFFF
    ctx->pc = 0x30cdf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x30cdfc: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x30cdfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x30ce00: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30ce00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce04: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30ce08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30ce08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ce0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30ce0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30ce10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ce10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ce14: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x30ce14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30ce18: 0x30a207ff  andi        $v0, $a1, 0x7FF
    ctx->pc = 0x30ce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x30ce1c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x30ce1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x30ce20: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x30ce20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x30ce24: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30ce24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30ce28: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30ce28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30ce2c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30ce2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30ce30: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x30ce30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x30ce34: 0x34840fff  ori         $a0, $a0, 0xFFF
    ctx->pc = 0x30ce34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4095);
    // 0x30ce38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ce38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce3c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x30ce3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x30ce40: 0x52b3c  dsll32      $a1, $a1, 12
    ctx->pc = 0x30ce40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 12));
    // 0x30ce44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30ce44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30ce48: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x30ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x30ce4c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30ce4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30ce50: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30ce50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30ce54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x30ce54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ce58: 0xffc30040  sd          $v1, 0x40($fp)
    ctx->pc = 0x30ce58u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 3));
    // 0x30ce5c: 0x88202a  slt         $a0, $a0, $t0
    ctx->pc = 0x30ce5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30ce60: 0xffc60018  sd          $a2, 0x18($fp)
    ctx->pc = 0x30ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 6));
    // 0x30ce64: 0x2502003f  addiu       $v0, $t0, 0x3F
    ctx->pc = 0x30ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 63));
    // 0x30ce68: 0x104100b  movn        $v0, $t0, $a0
    ctx->pc = 0x30ce68u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x30ce6c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x30ce6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x30ce70: 0xdfaa0000  ld          $t2, 0x0($sp)
    ctx->pc = 0x30ce70u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ce74: 0x240481ff  addiu       $a0, $zero, -0x7E01
    ctx->pc = 0x30ce74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x30ce78: 0x8fc70040  lw          $a3, 0x40($fp)
    ctx->pc = 0x30ce78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x30ce7c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30ce7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30ce80: 0x8fc50018  lw          $a1, 0x18($fp)
    ctx->pc = 0x30ce80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x30ce84: 0x3244824  and         $t1, $t9, $a0
    ctx->pc = 0x30ce84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 25) & GPR_U64(ctx, 4));
    // 0x30ce88: 0x3048003f  andi        $t0, $v0, 0x3F
    ctx->pc = 0x30ce88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x30ce8c: 0x1442024  and         $a0, $t2, $a0
    ctx->pc = 0x30ce8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & GPR_U64(ctx, 4));
    // 0x30ce90: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x30ce90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x30ce94: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x30ce94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x30ce98: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x30ce98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce9c: 0x24a5ffce  addiu       $a1, $a1, -0x32
    ctx->pc = 0x30ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967246));
    // 0x30cea0: 0x24e7ffce  addiu       $a3, $a3, -0x32
    ctx->pc = 0x30cea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967246));
    // 0x30cea4: 0x240af000  addiu       $t2, $zero, -0x1000
    ctx->pc = 0x30cea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cea8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x30cea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x30ceac: 0x84278  dsll        $t0, $t0, 9
    ctx->pc = 0x30ceacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 9);
    // 0x30ceb0: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x30ceb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x30ceb4: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x30ceb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x30ceb8: 0x30e70fff  andi        $a3, $a3, 0xFFF
    ctx->pc = 0x30ceb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x30cebc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x30cebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30cec0: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x30cec0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x30cec4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x30cec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x30cec8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30cec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x30cecc: 0xffc40038  sd          $a0, 0x38($fp)
    ctx->pc = 0x30ceccu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 56), GPR_U64(ctx, 4));
    // 0x30ced0: 0xffc30040  sd          $v1, 0x40($fp)
    ctx->pc = 0x30ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 64), GPR_U64(ctx, 3));
    // 0x30ced4: 0xffc90010  sd          $t1, 0x10($fp)
    ctx->pc = 0x30ced4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 16), GPR_U64(ctx, 9));
    // 0x30ced8: 0xffc60018  sd          $a2, 0x18($fp)
    ctx->pc = 0x30ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 24), GPR_U64(ctx, 6));
label_30cedc:
    // 0x30cedc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x30cedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30cee0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x30cee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30cee4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x30cee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30cee8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x30cee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30ceec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x30ceecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30cef0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30cef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30cef4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x30cef4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30cef8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x30cef8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cefc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x30cefcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cf00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30cf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cf04: 0x3e00008  jr          $ra
    ctx->pc = 0x30CF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF04u;
        // 0x30cf08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CF0Cu;
    // 0x30cf0c: 0x0  nop
    ctx->pc = 0x30cf0cu;
    // NOP
    ctx->pc = 0x30cf10u;
}
