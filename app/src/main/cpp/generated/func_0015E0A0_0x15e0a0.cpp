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

// Function: func_0015E0A0
// Address: 0x15e0a0 - 0x15e2e0
void func_0015E0A0_0x15e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015E0A0_0x15e0a0");
#endif

    switch (ctx->pc) {
        case 0x15e14cu: goto label_15e14c;
        case 0x15e1a8u: goto label_15e1a8;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e2b0u: goto label_15e2b0;
        default: break;
    }

    ctx->pc = 0x15e0a0u;

    // 0x15e0a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15e0a4: 0x3c090042  lui         $t1, 0x42
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)66 << 16));
    // 0x15e0a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x15e0ac: 0x2529ee70  addiu       $t1, $t1, -0x1190
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962800));
    // 0x15e0b0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x15e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x15e0b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15e0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0b8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x15e0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x15e0bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x15e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x15e0c0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15e0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x15e0c4: 0x3c0afc0f  lui         $t2, 0xFC0F
    ctx->pc = 0x15e0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64527 << 16));
    // 0x15e0c8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x15e0c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x15e0cc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x15e0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x15e0d0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15e0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0d4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x15e0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x15e0d8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15e0d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0dc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15e0e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15e0e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0e4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15e0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x15e0e8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15e0e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0ec: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x15e0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x15e0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e0f4: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x15e0f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x15e0f8: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x15e0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x15e0fc: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x15e0fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x15e100: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x15e100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x15e104: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x15e104u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e108: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15e10c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15e110: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x15e110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x15e114: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x15e114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x15e118: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x15e118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e11c: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x15e11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x15e120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e124: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x15e124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x15e128: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x15e128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x15e12c: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x15e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x15e130: 0xfe650000  sd          $a1, 0x0($s3)
    ctx->pc = 0x15e130u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
    // 0x15e134: 0x96140014  lhu         $s4, 0x14($s0)
    ctx->pc = 0x15e134u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e138: 0x9611000c  lhu         $s1, 0xC($s0)
    ctx->pc = 0x15e138u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e13c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e140: 0x96160016  lhu         $s6, 0x16($s0)
    ctx->pc = 0x15e140u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15e144: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x15E144u;
    SET_GPR_U32(ctx, 31, 0x15E14Cu);
    ctx->pc = 0x15E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E144u;
    // 0x15e148: 0x2118821  addu        $s1, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x15E144u, 0x15E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E14Cu;
label_15e14c:
    // 0x15e14c: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x15e14cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15e150: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x15e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15e154: 0x32a63fff  andi        $a2, $s5, 0x3FFF
    ctx->pc = 0x15e154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16383);
    // 0x15e158: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x15e158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15e15c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e160: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x15e160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x15e164: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15e164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x15e168: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x15e16c: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x15e16cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x15e170: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e174: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e178: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15e178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15e17c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15e17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e180: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x15e180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x15e184: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15e188: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e18c: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x15e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x15e190: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e194: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15e194u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e198: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e19c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15e19cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1a0: 0xc057944  jal         func_15E510
    ctx->pc = 0x15E1A0u;
    SET_GPR_U32(ctx, 31, 0x15E1A8u);
    ctx->pc = 0x15E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E1A0u;
    // 0x15e1a4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15E1A0u, 0x15E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1A8u;
label_15e1a8:
    // 0x15e1a8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x15e1a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15e1ac: 0x3403ff87  ori         $v1, $zero, 0xFF87
    ctx->pc = 0x15e1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x15e1b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e1b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e1bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e1c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e1c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e1c8: 0x3404ff7f  ori         $a0, $zero, 0xFF7F
    ctx->pc = 0x15e1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x15e1cc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e1d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e1d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e1d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e1dc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e1e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e1e4: 0x3405e0ff  ori         $a1, $zero, 0xE0FF
    ctx->pc = 0x15e1e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x15e1e8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e1e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e1ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e1f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e1f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e1f8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e1fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e200: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15e204: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15e204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e208: 0x630fa  dsrl        $a2, $a2, 3
    ctx->pc = 0x15e208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 3);
    // 0x15e20c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e210: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e214: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x15e214u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x15e218: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15e21c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x15e21cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15e220: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x15e220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x15e224: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e228: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e22c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e230: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x15e230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x15e234: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15e234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15e238: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x15e238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15e23c: 0x32e33fff  andi        $v1, $s7, 0x3FFF
    ctx->pc = 0x15e23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16383);
    // 0x15e240: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x15e240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x15e244: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x15e244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x15e248: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e24c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15e24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e250: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15e250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15e254: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x15e254u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x15e258: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x15e258u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e25c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15e260: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15e264: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x15e264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x15e268: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15E268u;
    {
        const bool branch_taken_0x15e268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E268u;
        // 0x15e26c: 0x645021  addu        $t2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e268) {
            ctx->pc = 0x15E294u;
            goto label_15e294;
        }
    }
    ctx->pc = 0x15E270u;
    // 0x15e270: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e274: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15e274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e27c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e280: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e284: 0xc057a2e  jal         func_15E8B8
    ctx->pc = 0x15E284u;
    SET_GPR_U32(ctx, 31, 0x15E28Cu);
    ctx->pc = 0x15E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E284u;
    // 0x15e288: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B8u, 0x15E284u, 0x15E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E28Cu;
label_15e28c:
    // 0x15e28c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E28Cu;
    {
        const bool branch_taken_0x15e28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E28Cu;
        // 0x15e290: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e28c) {
            ctx->pc = 0x15E2B4u;
            goto label_15e2b4;
        }
    }
    ctx->pc = 0x15E294u;
label_15e294:
    // 0x15e294: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e298: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15e298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e29c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e2a4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e2a8: 0xc057a2e  jal         func_15E8B8
    ctx->pc = 0x15E2A8u;
    SET_GPR_U32(ctx, 31, 0x15E2B0u);
    ctx->pc = 0x15E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2A8u;
    // 0x15e2ac: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B8u, 0x15E2A8u, 0x15E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2B0u;
label_15e2b0:
    // 0x15e2b0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15e2b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15e2b4:
    // 0x15e2b4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15e2b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e2b8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15e2b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e2bc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15e2bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e2c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15e2c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e2c4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15e2c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e2c8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x15e2c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e2cc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x15e2ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e2d0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x15e2d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e2d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15E2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D8u;
        // 0x15e2dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E2E0u;
}
