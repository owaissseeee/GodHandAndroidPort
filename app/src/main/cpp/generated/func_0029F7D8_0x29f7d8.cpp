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

// Function: func_0029F7D8
// Address: 0x29f7d8 - 0x29fad8
void func_0029F7D8_0x29f7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029F7D8_0x29f7d8");
#endif

    switch (ctx->pc) {
        case 0x29f830u: goto label_29f830;
        case 0x29f868u: goto label_29f868;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f908u: goto label_29f908;
        case 0x29f938u: goto label_29f938;
        case 0x29f950u: goto label_29f950;
        case 0x29f960u: goto label_29f960;
        case 0x29f998u: goto label_29f998;
        case 0x29f9c0u: goto label_29f9c0;
        case 0x29f9d8u: goto label_29f9d8;
        case 0x29fa14u: goto label_29fa14;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa7cu: goto label_29fa7c;
        default: break;
    }

    ctx->pc = 0x29f7d8u;

    // 0x29f7d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29f7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29f7dc: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29f7e0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x29f7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x29f7e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29f7e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f7ec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x29f7f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x29f7f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x29f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x29f7f8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f7fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29f800: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29f800u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29f804: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x29f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x29f808: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29f808u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29f80c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x29f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x29f810: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29f810u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29f814: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x29f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x29f818: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x29f818u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f81c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29f81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x29f820: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x29f820u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f828: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F828u;
    SET_GPR_U32(ctx, 31, 0x29F830u);
    ctx->pc = 0x29F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F828u;
    // 0x29f82c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F828u, 0x29F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F830u;
label_29f830:
    // 0x29f830: 0x8ea41180  lw          $a0, 0x1180($s5)
    ctx->pc = 0x29f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4480)));
    // 0x29f834: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x29f834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x29f838: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29f838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f83c: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29f83cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29f840: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29f840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29f844: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x29f844u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29f848: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29f848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29f84c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29f84cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29f850: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f850u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f854: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f858: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29f858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29f85c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f85cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f860: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F860u;
    SET_GPR_U32(ctx, 31, 0x29F868u);
    ctx->pc = 0x29F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F860u;
    // 0x29f864: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F860u, 0x29F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F868u;
label_29f868:
    // 0x29f868: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29f86c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x29f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29f870: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x29f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29f874: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f878: 0x904640d8  lbu         $a2, 0x40D8($v0)
    ctx->pc = 0x29f878u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16600)));
    // 0x29f87c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x29f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x29f880: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29f880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29f884: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F884u;
    SET_GPR_U32(ctx, 31, 0x29F88Cu);
    ctx->pc = 0x29F888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F884u;
    // 0x29f888: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F884u, 0x29F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F88Cu;
label_29f88c:
    // 0x29f88c: 0x8e051188  lw          $a1, 0x1188($s0)
    ctx->pc = 0x29f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4488)));
    // 0x29f890: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x29f894: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x29f894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x29f898: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x29f898u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x29f89c: 0x225182a  slt         $v1, $s1, $a1
    ctx->pc = 0x29f89cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29f8a0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x29f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x29f8a4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x29f8a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29f8a8: 0x90c43cc8  lbu         $a0, 0x3CC8($a2)
    ctx->pc = 0x29f8a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 15560)));
    // 0x29f8ac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29f8acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29f8b0: 0x90e53cc9  lbu         $a1, 0x3CC9($a3)
    ctx->pc = 0x29f8b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 15561)));
    // 0x29f8b4: 0x8d0311c0  lw          $v1, 0x11C0($t0)
    ctx->pc = 0x29f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4544)));
    // 0x29f8b8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29f8bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x29f8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x29f8c0: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x29f8c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x29f8c4: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x29f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x29f8c8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29f8cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29f8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29f8d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29f8d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x29f8d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x29f8d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29f8d8: 0x34068100  ori         $a2, $zero, 0x8100
    ctx->pc = 0x29f8d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29f8dc: 0x636f8  dsll        $a2, $a2, 27
    ctx->pc = 0x29f8dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 27);
    // 0x29f8e0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x29f8e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x29f8e4: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x29f8e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x29f8e8: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x29f8e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x29f8ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29f8f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F8F0u;
    SET_GPR_U32(ctx, 31, 0x29F8F8u);
    ctx->pc = 0x29F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F8F0u;
    // 0x29f8f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F8F0u, 0x29F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F8F8u;
label_29f8f8:
    // 0x29f8f8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29f8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29f8fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f900: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F900u;
    SET_GPR_U32(ctx, 31, 0x29F908u);
    ctx->pc = 0x29F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F900u;
    // 0x29f904: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F900u, 0x29F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F908u;
label_29f908:
    // 0x29f908: 0x8e461194  lw          $a2, 0x1194($s2)
    ctx->pc = 0x29f908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4500)));
    // 0x29f90c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29f910: 0x8e021188  lw          $v0, 0x1188($s0)
    ctx->pc = 0x29f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4488)));
    // 0x29f914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f918: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29f91c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29f91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29f924: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29f924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29f928: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29f928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29f92c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29f930: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F930u;
    SET_GPR_U32(ctx, 31, 0x29F938u);
    ctx->pc = 0x29F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F930u;
    // 0x29f934: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F930u, 0x29F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F938u;
label_29f938:
    // 0x29f938: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f93c: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29f93cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29f940: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29f940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29f944: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29f944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29f948: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F948u;
    SET_GPR_U32(ctx, 31, 0x29F950u);
    ctx->pc = 0x29F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F948u;
    // 0x29f94c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F948u, 0x29F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F950u;
label_29f950:
    // 0x29f950: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f954: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29f958: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F958u;
    SET_GPR_U32(ctx, 31, 0x29F960u);
    ctx->pc = 0x29F95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F958u;
    // 0x29f95c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F958u, 0x29F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F960u;
label_29f960:
    // 0x29f960: 0x8ea31180  lw          $v1, 0x1180($s5)
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4480)));
    // 0x29f964: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x29f964u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29f968: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x29f96c: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x29f96cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29f970: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29f970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29f974: 0x1840004a  blez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x29F974u;
    {
        const bool branch_taken_0x29f974 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F974u;
        // 0x29f978: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f974) {
            ctx->pc = 0x29FAA0u;
            goto label_29faa0;
        }
    }
    ctx->pc = 0x29F97Cu;
    // 0x29f97c: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x29f97cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x29f980: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29f980u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29f984: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x29f984u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29f988: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x29f988u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x29f98c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x29f98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29f990: 0x8ec2118c  lw          $v0, 0x118C($s6)
    ctx->pc = 0x29f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
    // 0x29f994: 0x0  nop
    ctx->pc = 0x29f994u;
    // NOP
label_29f998:
    // 0x29f998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29f998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f99c: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x29f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29f9a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29f9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29f9a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29f9a8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29f9a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29f9ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29f9b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29f9b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29f9b8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F9B8u;
    SET_GPR_U32(ctx, 31, 0x29F9C0u);
    ctx->pc = 0x29F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9B8u;
    // 0x29f9bc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F9B8u, 0x29F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9C0u;
label_29f9c0:
    // 0x29f9c0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x29f9c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29f9c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29f9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29f9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29f9d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29F9D0u;
    SET_GPR_U32(ctx, 31, 0x29F9D8u);
    ctx->pc = 0x29F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F9D0u;
    // 0x29f9d4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29F9D0u, 0x29F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F9D8u;
label_29f9d8:
    // 0x29f9d8: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29f9dc: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29f9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29f9e0: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29f9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29f9e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f9e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29f9ec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29f9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29f9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f9f4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29f9f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29f9f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29f9fc: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29f9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29fa00: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fa00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fa04: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29fa04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29fa08: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29fa08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29fa0c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FA0Cu;
    SET_GPR_U32(ctx, 31, 0x29FA14u);
    ctx->pc = 0x29FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA0Cu;
    // 0x29fa10: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FA0Cu, 0x29FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA14u;
label_29fa14:
    // 0x29fa14: 0x8ee61194  lw          $a2, 0x1194($s7)
    ctx->pc = 0x29fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4500)));
    // 0x29fa18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa1c: 0x8fc21188  lw          $v0, 0x1188($fp)
    ctx->pc = 0x29fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4488)));
    // 0x29fa20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29fa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fa24: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fa24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fa28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29fa2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fa2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fa30: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FA30u;
    SET_GPR_U32(ctx, 31, 0x29FA38u);
    ctx->pc = 0x29FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA30u;
    // 0x29fa34: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FA30u, 0x29FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA38u;
label_29fa38:
    // 0x29fa38: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29fa3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa40: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29fa44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29fa48: 0x8ec7118c  lw          $a3, 0x118C($s6)
    ctx->pc = 0x29fa48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
    // 0x29fa4c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29fa50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29fa54: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fa58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29fa5c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29fa60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fa64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29fa68: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29fa6c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fa6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fa70: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29fa70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29fa74: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FA74u;
    SET_GPR_U32(ctx, 31, 0x29FA7Cu);
    ctx->pc = 0x29FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FA74u;
    // 0x29fa78: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FA74u, 0x29FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FA7Cu;
label_29fa7c:
    // 0x29fa7c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29fa80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fa84: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29fa84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29fa88: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x29fa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x29fa8c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29fa8cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29fa90: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29fa90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29fa94: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x29fa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29fa98: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x29FA98u;
    {
        const bool branch_taken_0x29fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FA98u;
        // 0x29fa9c: 0x8ec2118c  lw          $v0, 0x118C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa98) {
            ctx->pc = 0x29F998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f998;
        }
    }
    ctx->pc = 0x29FAA0u;
label_29faa0:
    // 0x29faa0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29faa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29faa4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29faa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29faa8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x29faa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29faac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x29faacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fab0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29fab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fab4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x29fab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fab8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x29fab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fabc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x29fabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fac0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x29fac0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29fac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fac8: 0x3e00008  jr          $ra
    ctx->pc = 0x29FAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FAC8u;
        // 0x29facc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FAD0u;
    // 0x29fad0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29fad4: 0x0  nop
    ctx->pc = 0x29fad4u;
    // NOP
    ctx->pc = 0x29fad8u;
}
