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

// Function: func_0015E2E0
// Address: 0x15e2e0 - 0x15e510
void func_0015E2E0_0x15e2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015E2E0_0x15e2e0");
#endif

    switch (ctx->pc) {
        case 0x15e37cu: goto label_15e37c;
        case 0x15e3d8u: goto label_15e3d8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4e0u: goto label_15e4e0;
        default: break;
    }

    ctx->pc = 0x15e2e0u;

    // 0x15e2e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x15e2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15e2e4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x15e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x15e2e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x15e2ec: 0x2463ee88  addiu       $v1, $v1, -0x1178
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962824));
    // 0x15e2f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x15e2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x15e2f4: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x15e2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15e2f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x15e2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x15e2fc: 0x3c09fc0f  lui         $t1, 0xFC0F
    ctx->pc = 0x15e2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64527 << 16));
    // 0x15e300: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x15e300u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x15e304: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15e304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x15e308: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e30c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x15e30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x15e310: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x15e310u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e314: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x15e314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x15e318: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x15e318u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e31c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x15e31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x15e320: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x15e320u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e324: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x15e324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x15e328: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x15e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x15e32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e330: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x15e330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x15e334: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x15e334u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x15e338: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e33c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e340: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x15e344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15e348: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x15e348u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e34c: 0x3242003f  andi        $v0, $s2, 0x3F
    ctx->pc = 0x15e34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x15e350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e354: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x15e354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x15e358: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x15e358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x15e35c: 0xfe050018  sd          $a1, 0x18($s0)
    ctx->pc = 0x15e35cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 5));
    // 0x15e360: 0xfe650000  sd          $a1, 0x0($s3)
    ctx->pc = 0x15e360u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 5));
    // 0x15e364: 0x96140014  lhu         $s4, 0x14($s0)
    ctx->pc = 0x15e364u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x15e368: 0x9611000c  lhu         $s1, 0xC($s0)
    ctx->pc = 0x15e368u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e36c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15e36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e370: 0x96160016  lhu         $s6, 0x16($s0)
    ctx->pc = 0x15e370u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x15e374: 0xc0c270c  jal         func_309C30
    ctx->pc = 0x15E374u;
    SET_GPR_U32(ctx, 31, 0x15E37Cu);
    ctx->pc = 0x15E378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E374u;
    // 0x15e378: 0x2118821  addu        $s1, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309C30u, 0x15E374u, 0x15E37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E37Cu;
label_15e37c:
    // 0x15e37c: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x15e37cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15e380: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x15e380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15e384: 0x32a63fff  andi        $a2, $s5, 0x3FFF
    ctx->pc = 0x15e384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16383);
    // 0x15e388: 0x3045003f  andi        $a1, $v0, 0x3F
    ctx->pc = 0x15e388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x15e38c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e390: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x15e390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x15e394: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15e394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x15e398: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x15e39c: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x15e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x15e3a0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x15e3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15e3a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15e3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15e3ac: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x15e3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e3b0: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x15e3b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x15e3b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15e3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15e3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3bc: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x15e3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x15e3c0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15e3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x15e3c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3c8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15e3ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3d0: 0xc0579c2  jal         func_15E708
    ctx->pc = 0x15E3D0u;
    SET_GPR_U32(ctx, 31, 0x15E3D8u);
    ctx->pc = 0x15E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3D0u;
    // 0x15e3d4: 0x2c0482d  daddu       $t1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E708u, 0x15E3D0u, 0x15E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3D8u;
label_15e3d8:
    // 0x15e3d8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x15e3d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15e3dc: 0x3403ff87  ori         $v1, $zero, 0xFF87
    ctx->pc = 0x15e3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65415);
    // 0x15e3e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e3e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e3e8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e3ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e3f0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x15e3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15e3f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e3f8: 0x3404ff7f  ori         $a0, $zero, 0xFF7F
    ctx->pc = 0x15e3f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x15e3fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e400: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e404: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e408: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e40c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e410: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e414: 0x3405e0ff  ori         $a1, $zero, 0xE0FF
    ctx->pc = 0x15e414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57599);
    // 0x15e418: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e41c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e420: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e424: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e428: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15e428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15e42c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x15e42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15e430: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15e430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15e434: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e438: 0x630fa  dsrl        $a2, $a2, 3
    ctx->pc = 0x15e438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 3);
    // 0x15e43c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e440: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x15e440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15e444: 0x73bbc  dsll32      $a3, $a3, 14
    ctx->pc = 0x15e444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 14));
    // 0x15e448: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15e448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15e44c: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x15e44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15e450: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x15e450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x15e454: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e458: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15e458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15e45c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15e45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15e460: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x15e460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x15e464: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15e464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15e468: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x15e468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15e46c: 0x32e33fff  andi        $v1, $s7, 0x3FFF
    ctx->pc = 0x15e46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16383);
    // 0x15e470: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x15e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x15e474: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x15e474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x15e478: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15e478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15e47c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x15e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15e480: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15e480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15e484: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x15e484u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x15e488: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x15e488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15e48c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x15e48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15e490: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15e494: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x15e494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x15e498: 0x1445000a  bne         $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x15E498u;
    {
        const bool branch_taken_0x15e498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x15E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E498u;
        // 0x15e49c: 0x645021  addu        $t2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e498) {
            ctx->pc = 0x15E4C4u;
            goto label_15e4c4;
        }
    }
    ctx->pc = 0x15E4A0u;
    // 0x15e4a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4a4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15e4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e4b0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x15e4b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e4b4: 0xc057a2e  jal         func_15E8B8
    ctx->pc = 0x15E4B4u;
    SET_GPR_U32(ctx, 31, 0x15E4BCu);
    ctx->pc = 0x15E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4B4u;
    // 0x15e4b8: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B8u, 0x15E4B4u, 0x15E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4BCu;
label_15e4bc:
    // 0x15e4bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15E4BCu;
    {
        const bool branch_taken_0x15e4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4bc) {
            ctx->pc = 0x15E4E4u;
            goto label_15e4e4;
        }
    }
    ctx->pc = 0x15E4C4u;
label_15e4c4:
    // 0x15e4c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4c8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x15e4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e4d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e4d4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x15e4d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15e4d8: 0xc057a2e  jal         func_15E8B8
    ctx->pc = 0x15E4D8u;
    SET_GPR_U32(ctx, 31, 0x15E4E0u);
    ctx->pc = 0x15E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4D8u;
    // 0x15e4dc: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E8B8u, 0x15E4D8u, 0x15E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4E0u;
label_15e4e0:
    // 0x15e4e0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x15e4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15e4e4:
    // 0x15e4e4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15e4e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e4e8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x15e4e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e4ec: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x15e4ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e4f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x15e4f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e4f4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15e4f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e4f8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x15e4f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e4fc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x15e4fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e500: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x15e500u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e508: 0x3e00008  jr          $ra
    ctx->pc = 0x15E508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E508u;
        // 0x15e50c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E510u;
}
