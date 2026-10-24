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

// Function: func_00154E98
// Address: 0x154e98 - 0x155138
void func_00154E98_0x154e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00154E98_0x154e98");
#endif

    switch (ctx->pc) {
        case 0x154f60u: goto label_154f60;
        default: break;
    }

    ctx->pc = 0x154e98u;

    // 0x154e98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x154e9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x154e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x154ea0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x154ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x154ea4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x154ea4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ea8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x154ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x154eac: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x154eacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x154eb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x154eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x154eb4: 0x3c0b0fff  lui         $t3, 0xFFF
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4095 << 16));
    // 0x154eb8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x154eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x154ebc: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
    // 0x154ec0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x154ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x154ec4: 0x3c136500  lui         $s3, 0x6500
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)25856 << 16));
    // 0x154ec8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x154ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x154ecc: 0x3c146e00  lui         $s4, 0x6E00
    ctx->pc = 0x154eccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)28160 << 16));
    // 0x154ed0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x154ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x154ed4: 0x3c156e00  lui         $s5, 0x6E00
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)28160 << 16));
    // 0x154ed8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x154ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x154edc: 0x3c166c00  lui         $s6, 0x6C00
    ctx->pc = 0x154edcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)27648 << 16));
    // 0x154ee0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x154ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x154ee4: 0x3c176c02  lui         $s7, 0x6C02
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)27650 << 16));
    // 0x154ee8: 0x3c120100  lui         $s2, 0x100
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)256 << 16));
    // 0x154eec: 0x3c116e00  lui         $s1, 0x6E00
    ctx->pc = 0x154eecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28160 << 16));
    // 0x154ef0: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x154ef4: 0x36100404  ori         $s0, $s0, 0x404
    ctx->pc = 0x154ef4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1028);
    // 0x154ef8: 0x36f78000  ori         $s7, $s7, 0x8000
    ctx->pc = 0x154ef8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32768);
    // 0x154efc: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x154f00: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x154f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x154f04: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x154f08: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x154f08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x154f0c: 0x358c0106  ori         $t4, $t4, 0x106
    ctx->pc = 0x154f0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)262);
    // 0x154f10: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x154f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x154f14: 0x36d68002  ori         $s6, $s6, 0x8002
    ctx->pc = 0x154f14u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)32770);
    // 0x154f18: 0x36b58007  ori         $s5, $s5, 0x8007
    ctx->pc = 0x154f18u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32775);
    // 0x154f1c: 0x3694c003  ori         $s4, $s4, 0xC003
    ctx->pc = 0x154f1cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)49155);
    // 0x154f20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154f24: 0x36738004  ori         $s3, $s3, 0x8004
    ctx->pc = 0x154f24u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32772);
    // 0x154f28: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x154f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x154f2c: 0x36520206  ori         $s2, $s2, 0x206
    ctx->pc = 0x154f2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)518);
    // 0x154f30: 0x3631c005  ori         $s1, $s1, 0xC005
    ctx->pc = 0x154f30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)49157);
    // 0x154f34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154f38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x154f3c: 0x62c821  addu        $t9, $v1, $v0
    ctx->pc = 0x154f3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154f40: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x154f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x154f44: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x154f44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x154f48: 0x82c021  addu        $t8, $a0, $v0
    ctx->pc = 0x154f48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154f4c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x154f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x154f50: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x154f50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x154f54: 0x944a0014  lhu         $t2, 0x14($v0)
    ctx->pc = 0x154f54u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x154f58: 0xc27021  addu        $t6, $a2, $v0
    ctx->pc = 0x154f58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154f5c: 0x626821  addu        $t5, $v1, $v0
    ctx->pc = 0x154f5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_154f60:
    // 0x154f60: 0x2942001a  slti        $v0, $t2, 0x1A
    ctx->pc = 0x154f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x154f64: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x154f68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x154f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x154f6c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x154f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x154f70: 0x142480b  movn        $t1, $t2, $v0
    ctx->pc = 0x154f70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x154f74: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x154f74u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x154f78: 0x2942001b  slti        $v0, $t2, 0x1B
    ctx->pc = 0x154f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x154f7c: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x154f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x154f80: 0xad17000c  sw          $s7, 0xC($t0)
    ctx->pc = 0x154f80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 23));
    // 0x154f84: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x154f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x154f88: 0x35238000  ori         $v1, $t1, 0x8000
    ctx->pc = 0x154f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x154f8c: 0x3404c0f9  ori         $a0, $zero, 0xC0F9
    ctx->pc = 0x154f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49401);
    // 0x154f90: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x154f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x154f94: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x154f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x154f98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x154f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x154f9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154fa0: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x154fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x154fa4: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x154fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x154fa8: 0x25290007  addiu       $t1, $t1, 0x7
    ctx->pc = 0x154fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x154fac: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x154facu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x154fb0: 0x948c2  srl         $t1, $t1, 3
    ctx->pc = 0x154fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
    // 0x154fb4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x154fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x154fb8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x154fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x154fbc: 0x3404c0fb  ori         $a0, $zero, 0xC0FB
    ctx->pc = 0x154fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49403);
    // 0x154fc0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x154fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x154fc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x154fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x154fc8: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x154fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x154fcc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x154fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x154fd0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x154fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154fd4: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x154fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x154fd8: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x154fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x154fdc: 0x32b2024  and         $a0, $t9, $t3
    ctx->pc = 0x154fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & GPR_U64(ctx, 11));
    // 0x154fe0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x154fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x154fe4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x154fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x154fe8: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x154fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x154fec: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x154fecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x154ff0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x154ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x154ff4: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x154ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x154ff8: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x154ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x154ffc: 0x93cc0  sll         $a3, $t1, 19
    ctx->pc = 0x154ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 19));
    // 0x155000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x155000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x155004: 0xde3025  or          $a2, $a2, $fp
    ctx->pc = 0x155004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 30));
    // 0x155008: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x155008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x15500c: 0xf61025  or          $v0, $a3, $s6
    ctx->pc = 0x15500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 22));
    // 0x155010: 0x30b2024  and         $a0, $t8, $t3
    ctx->pc = 0x155010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & GPR_U64(ctx, 11));
    // 0x155014: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x155018: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x155018u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x15501c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15501cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x155020: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x155020u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x155024: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155028: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x155028u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
    // 0x15502c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x15502cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x155030: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x155030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x155034: 0xf51025  or          $v0, $a3, $s5
    ctx->pc = 0x155034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x155038: 0x1ab1824  and         $v1, $t5, $t3
    ctx->pc = 0x155038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x15503c: 0xfd040000  sd          $a0, 0x0($t0)
    ctx->pc = 0x15503cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 4));
    // 0x155040: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x155040u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x155044: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155048: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x155048u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
    // 0x15504c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x15504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x155050: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x155050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x155054: 0x1eb2024  and         $a0, $t7, $t3
    ctx->pc = 0x155054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 11));
    // 0x155058: 0xf42825  or          $a1, $a3, $s4
    ctx->pc = 0x155058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x15505c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x155060: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x155060u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x155064: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x155064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x155068: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x155068u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x15506c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x15506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x155070: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x155070u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
    // 0x155074: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x155074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x155078: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x155078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x15507c: 0x1cb1824  and         $v1, $t6, $t3
    ctx->pc = 0x15507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x155080: 0xf33825  or          $a3, $a3, $s3
    ctx->pc = 0x155080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x155084: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155088: 0xfd060000  sd          $a2, 0x0($t0)
    ctx->pc = 0x155088u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 6));
    // 0x15508c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155090: 0xad07000c  sw          $a3, 0xC($t0)
    ctx->pc = 0x155090u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 7));
    // 0x155094: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x155094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x155098: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x155098u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
    // 0x15509c: 0x92500  sll         $a0, $t1, 20
    ctx->pc = 0x15509cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 20));
    // 0x1550a0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1550a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1550a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1550a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1550a8: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x1550a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x1550ac: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x1550acu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x1550b0: 0xad04000c  sw          $a0, 0xC($t0)
    ctx->pc = 0x1550b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
    // 0x1550b4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1550b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1550b8: 0xad120008  sw          $s2, 0x8($t0)
    ctx->pc = 0x1550b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 18));
    // 0x1550bc: 0x3c041700  lui         $a0, 0x1700
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5888 << 16));
    // 0x1550c0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1550c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1550c4: 0x254affe8  addiu       $t2, $t2, -0x18
    ctx->pc = 0x1550c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x1550c8: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1550c8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1550cc: 0x27390180  addiu       $t9, $t9, 0x180
    ctx->pc = 0x1550ccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 384));
    // 0x1550d0: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x1550d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x1550d4: 0x27180060  addiu       $t8, $t8, 0x60
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x1550d8: 0xad10000c  sw          $s0, 0xC($t0)
    ctx->pc = 0x1550d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 16));
    // 0x1550dc: 0x25ef0060  addiu       $t7, $t7, 0x60
    ctx->pc = 0x1550dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 96));
    // 0x1550e0: 0x25ce00c0  addiu       $t6, $t6, 0xC0
    ctx->pc = 0x1550e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 192));
    // 0x1550e4: 0x25ad0060  addiu       $t5, $t5, 0x60
    ctx->pc = 0x1550e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x1550e8: 0x1d40ff9d  bgtz        $t2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x1550E8u;
    {
        const bool branch_taken_0x1550e8 = (GPR_S64(ctx, 10) > 0);
        ctx->pc = 0x1550ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1550E8u;
        // 0x1550ec: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1550e8) {
            ctx->pc = 0x154F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154f60;
        }
    }
    ctx->pc = 0x1550F0u;
    // 0x1550f0: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1550f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1550f4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1550f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1550f8: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1550f8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1550fc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1550fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x155100: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x155100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x155104: 0xfd020000  sd          $v0, 0x0($t0)
    ctx->pc = 0x155104u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
    // 0x155108: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x155108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15510c: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x15510cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x155110: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x155110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155114: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x155114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155118: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x155118u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15511c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x15511cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155120: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x155120u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155124: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x155124u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155128: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x155128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x15512c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x15512cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x155130: 0x3e00008  jr          $ra
    ctx->pc = 0x155130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155130u;
        // 0x155134: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155138u;
}
