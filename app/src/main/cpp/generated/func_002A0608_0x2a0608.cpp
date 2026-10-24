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

// Function: func_002A0608
// Address: 0x2a0608 - 0x2a0940
void func_002A0608_0x2a0608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A0608_0x2a0608");
#endif

    switch (ctx->pc) {
        case 0x2a0660u: goto label_2a0660;
        case 0x2a0678u: goto label_2a0678;
        case 0x2a06c0u: goto label_2a06c0;
        case 0x2a06d8u: goto label_2a06d8;
        case 0x2a0744u: goto label_2a0744;
        case 0x2a0754u: goto label_2a0754;
        case 0x2a07a0u: goto label_2a07a0;
        case 0x2a07d0u: goto label_2a07d0;
        case 0x2a07f8u: goto label_2a07f8;
        case 0x2a0840u: goto label_2a0840;
        case 0x2a089cu: goto label_2a089c;
        case 0x2a08d8u: goto label_2a08d8;
        default: break;
    }

    ctx->pc = 0x2a0608u;

    // 0x2a0608: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a0608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a060c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2a0610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a0610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a0614: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a0614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0618: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2a0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2a061c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a061cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0620: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a0620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2a0624: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a0624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0628: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2a0628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2a062c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2a062cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0630: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a0630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2a0634: 0x8f043  sra         $fp, $t0, 1
    ctx->pc = 0x2a0634u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 8), 1));
    // 0x2a0638: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2a063c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a0640: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a0640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0644: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2a0644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2a0648: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a0648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a064c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2a064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2a0650: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a0654: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0658: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0658u;
    SET_GPR_U32(ctx, 31, 0x2A0660u);
    ctx->pc = 0x2A065Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0658u;
    // 0x2a065c: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0658u, 0x2A0660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0660u;
label_2a0660:
    // 0x2a0660: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a0660u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a0664: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x2a0664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x2a0668: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a066c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a066cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0670: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0670u;
    SET_GPR_U32(ctx, 31, 0x2A0678u);
    ctx->pc = 0x2A0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0670u;
    // 0x2a0674: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0670u, 0x2A0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0678u;
label_2a0678:
    // 0x2a0678: 0x8e8811c8  lw          $t0, 0x11C8($s4)
    ctx->pc = 0x2a0678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4552)));
    // 0x2a067c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a067cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0680: 0x8ee71180  lw          $a3, 0x1180($s7)
    ctx->pc = 0x2a0680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a0684: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a0684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0688: 0x1124018  mult        $t0, $t0, $s2
    ctx->pc = 0x2a0688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2a068c: 0x8e6611ac  lw          $a2, 0x11AC($s3)
    ctx->pc = 0x2a068cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4524)));
    // 0x2a0690: 0x227182a  slt         $v1, $s1, $a3
    ctx->pc = 0x2a0690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a0694: 0x24e2007f  addiu       $v0, $a3, 0x7F
    ctx->pc = 0x2a0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x2a0698: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x2a0698u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x2a069c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a069cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06a0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a06a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a06a4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2a06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a06a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a06a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a06ac: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a06acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a06b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a06b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a06b4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a06b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a06b8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A06B8u;
    SET_GPR_U32(ctx, 31, 0x2A06C0u);
    ctx->pc = 0x2A06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06B8u;
    // 0x2a06bc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A06B8u, 0x2A06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06C0u;
label_2a06c0:
    // 0x2a06c0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2a06c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2a06c4: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x2a06c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x2a06c8: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x2a06c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x2a06cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a06ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a06d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A06D0u;
    SET_GPR_U32(ctx, 31, 0x2A06D8u);
    ctx->pc = 0x2A06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A06D0u;
    // 0x2a06d4: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A06D0u, 0x2A06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A06D8u;
label_2a06d8:
    // 0x2a06d8: 0x8e8711c8  lw          $a3, 0x11C8($s4)
    ctx->pc = 0x2a06d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4552)));
    // 0x2a06dc: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2a06dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2a06e0: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x2a06e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a06e4: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x2a06e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x2a06e8: 0xf53818  mult        $a3, $a3, $s5
    ctx->pc = 0x2a06e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a06ec: 0x8e6611ac  lw          $a2, 0x11AC($s3)
    ctx->pc = 0x2a06ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4524)));
    // 0x2a06f0: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x2a06f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a06f4: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a06f8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a06f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a06fc: 0x8d0511bc  lw          $a1, 0x11BC($t0)
    ctx->pc = 0x2a06fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4540)));
    // 0x2a0700: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a0700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a0704: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x2a0704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a0708: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2a0708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a070c: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2a070cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2a0710: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2a0710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a0714: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a0714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0718: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a0718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a071c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a071cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a0720: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a0720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a0724: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a0724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a0728: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x2a0728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x2a072c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a072cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a0730: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0734: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a0734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a0738: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a0738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a073c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A073Cu;
    SET_GPR_U32(ctx, 31, 0x2A0744u);
    ctx->pc = 0x2A0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A073Cu;
    // 0x2a0740: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A073Cu, 0x2A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0744u;
label_2a0744:
    // 0x2a0744: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0748: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a0748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a074c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A074Cu;
    SET_GPR_U32(ctx, 31, 0x2A0754u);
    ctx->pc = 0x2A0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A074Cu;
    // 0x2a0750: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A074Cu, 0x2A0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0754u;
label_2a0754:
    // 0x2a0754: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x2a0754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a0758: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x2a0758u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a075c: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2a075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2a0760: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2a0760u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a0764: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a0764u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a0768: 0x18400064  blez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A0768u;
    {
        const bool branch_taken_0x2a0768 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0768u;
        // 0x2a076c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0768) {
            ctx->pc = 0x2A08FCu;
            goto label_2a08fc;
        }
    }
    ctx->pc = 0x2A0770u;
    // 0x2a0770: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2a0770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a0774: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x2a0774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a0778: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2a0778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a077c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0780: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x2a0780u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x2a0784: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2a0784u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a0788: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x2a0788u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2a078c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a078cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a0790: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0794: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x2a0794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0798: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2a0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2a079c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a079cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2a07a0:
    // 0x2a07a0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2a07a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07a4: 0x8c4611b4  lw          $a2, 0x11B4($v0)
    ctx->pc = 0x2a07a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x2a07a8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a07a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a07ac: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2a07acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2a07b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a07b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07b4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a07b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a07b8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2a07b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a07bc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a07bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a07c0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a07c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a07c4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a07c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a07c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A07C8u;
    SET_GPR_U32(ctx, 31, 0x2A07D0u);
    ctx->pc = 0x2A07CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07C8u;
    // 0x2a07cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A07C8u, 0x2A07D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07D0u;
label_2a07d0:
    // 0x2a07d0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2a07d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a07d4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2a07d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a07d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a07d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a07dc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a07dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a07e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a07e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a07e4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a07e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a07e8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a07e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a07ec: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2a07ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2a07f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A07F0u;
    SET_GPR_U32(ctx, 31, 0x2A07F8u);
    ctx->pc = 0x2A07F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A07F0u;
    // 0x2a07f4: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A07F0u, 0x2A07F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A07F8u;
label_2a07f8:
    // 0x2a07f8: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x2a07f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a07fc: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2a07fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a0800: 0x8ee26b80  lw          $v0, 0x6B80($s7)
    ctx->pc = 0x2a0800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a0804: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a0804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a0808: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x2a0808u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a080c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0810: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a0810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a0814: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0818: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a0818u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a081c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2a081cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2a0820: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2a0820u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0824: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0828: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a0828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a082c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a082cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0830: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a0830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0834: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a0834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a0838: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0838u;
    SET_GPR_U32(ctx, 31, 0x2A0840u);
    ctx->pc = 0x2A083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0838u;
    // 0x2a083c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0838u, 0x2A0840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0840u;
label_2a0840:
    // 0x2a0840: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a0840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a0844: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2a0844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0848: 0x8e86118c  lw          $a2, 0x118C($s4)
    ctx->pc = 0x2a0848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a084c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0850: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2a0850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a0854: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a0854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a0858: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2a0858u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a085c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0860: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x2a0860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a0864: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a0864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a0868: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a0868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a086c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a086cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a0870: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0874: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0874u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0878: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a087c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0880: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a0880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a0884: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a0884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0888: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a088c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a088cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a0890: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x2a0890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x2a0894: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0894u;
    SET_GPR_U32(ctx, 31, 0x2A089Cu);
    ctx->pc = 0x2A0898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0894u;
    // 0x2a0898: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0894u, 0x2A089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A089Cu;
label_2a089c:
    // 0x2a089c: 0x8e83118c  lw          $v1, 0x118C($s4)
    ctx->pc = 0x2a089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a08a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a08a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a08a4: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x2a08a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a08a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a08a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a08ac: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a08acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a08b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a08b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a08b4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a08b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a08b8: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2a08b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a08bc: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a08bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a08c0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a08c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a08c4: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x2a08c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x2a08c8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a08c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a08cc: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a08ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a08d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A08D0u;
    SET_GPR_U32(ctx, 31, 0x2A08D8u);
    ctx->pc = 0x2A08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A08D0u;
    // 0x2a08d4: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A08D0u, 0x2A08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A08D8u;
label_2a08d8:
    // 0x2a08d8: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x2a08d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a08dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a08dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a08e0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a08e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a08e4: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a08e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a08e8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a08e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a08ec: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a08ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a08f0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a08f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a08f4: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2A08F4u;
    {
        const bool branch_taken_0x2a08f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A08F4u;
        // 0x2a08f8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a08f4) {
            ctx->pc = 0x2A07A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a07a0;
        }
    }
    ctx->pc = 0x2A08FCu;
label_2a08fc:
    // 0x2a08fc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a0900: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a0900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0904: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2a0904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2a0908: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a0908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a090c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a0910: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a0910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a0914: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a0914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a0918: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a0918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a091c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a091cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a0920: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a0920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a0924: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2a0924u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a0928: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2a0928u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a092c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2a092cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0930: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0934: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2a0934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a0938: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0938u;
        // 0x2a093c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0940u;
}
