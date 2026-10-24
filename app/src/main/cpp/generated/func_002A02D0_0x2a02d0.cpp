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

// Function: func_002A02D0
// Address: 0x2a02d0 - 0x2a0608
void func_002A02D0_0x2a02d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A02D0_0x2a02d0");
#endif

    switch (ctx->pc) {
        case 0x2a0328u: goto label_2a0328;
        case 0x2a0340u: goto label_2a0340;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a040cu: goto label_2a040c;
        case 0x2a041cu: goto label_2a041c;
        case 0x2a0468u: goto label_2a0468;
        case 0x2a0498u: goto label_2a0498;
        case 0x2a04c0u: goto label_2a04c0;
        case 0x2a0508u: goto label_2a0508;
        case 0x2a0564u: goto label_2a0564;
        case 0x2a05a0u: goto label_2a05a0;
        default: break;
    }

    ctx->pc = 0x2a02d0u;

    // 0x2a02d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a02d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a02d4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a02d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2a02d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a02d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a02dc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2a02dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02e0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2a02e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2a02e4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a02e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a02e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2a02ec: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2a02ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02f0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2a02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2a02f4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2a02f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02f8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a02f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2a02fc: 0x8f043  sra         $fp, $t0, 1
    ctx->pc = 0x2a02fcu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 8), 1));
    // 0x2a0300: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2a0304: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a0304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2a0308: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a0308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a030c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2a030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2a0310: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a0310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a0314: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2a0314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2a0318: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a0318u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a031c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0320: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0320u;
    SET_GPR_U32(ctx, 31, 0x2A0328u);
    ctx->pc = 0x2A0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0320u;
    // 0x2a0324: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0320u, 0x2A0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0328u;
label_2a0328:
    // 0x2a0328: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a0328u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a032c: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x2a032cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x2a0330: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0334: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0338: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0338u;
    SET_GPR_U32(ctx, 31, 0x2A0340u);
    ctx->pc = 0x2A033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0338u;
    // 0x2a033c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0338u, 0x2A0340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0340u;
label_2a0340:
    // 0x2a0340: 0x8e8811c8  lw          $t0, 0x11C8($s4)
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4552)));
    // 0x2a0344: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0348: 0x8ee71180  lw          $a3, 0x1180($s7)
    ctx->pc = 0x2a0348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a034c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0350: 0x1124018  mult        $t0, $t0, $s2
    ctx->pc = 0x2a0350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2a0354: 0x8e6611ac  lw          $a2, 0x11AC($s3)
    ctx->pc = 0x2a0354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4524)));
    // 0x2a0358: 0x227182a  slt         $v1, $s1, $a3
    ctx->pc = 0x2a0358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a035c: 0x24e2007f  addiu       $v0, $a3, 0x7F
    ctx->pc = 0x2a035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x2a0360: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x2a0360u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x2a0364: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a0364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0368: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a0368u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a036c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x2a036cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2a0370: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0374: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a0374u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a0378: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a037c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a037cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a0380: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0380u;
    SET_GPR_U32(ctx, 31, 0x2A0388u);
    ctx->pc = 0x2A0384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0380u;
    // 0x2a0384: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0380u, 0x2A0388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0388u;
label_2a0388:
    // 0x2a0388: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2a0388u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2a038c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a0390: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x2a0390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x2a0394: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0398: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0398u;
    SET_GPR_U32(ctx, 31, 0x2A03A0u);
    ctx->pc = 0x2A039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0398u;
    // 0x2a039c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0398u, 0x2A03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03A0u;
label_2a03a0:
    // 0x2a03a0: 0x8e8711c8  lw          $a3, 0x11C8($s4)
    ctx->pc = 0x2a03a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4552)));
    // 0x2a03a4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2a03a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2a03a8: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x2a03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a03ac: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x2a03acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x2a03b0: 0xf53818  mult        $a3, $a3, $s5
    ctx->pc = 0x2a03b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a03b4: 0x8e6611ac  lw          $a2, 0x11AC($s3)
    ctx->pc = 0x2a03b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4524)));
    // 0x2a03b8: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x2a03b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a03bc: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a03c0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a03c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a03c4: 0x8d0511bc  lw          $a1, 0x11BC($t0)
    ctx->pc = 0x2a03c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4540)));
    // 0x2a03c8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a03c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a03cc: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x2a03ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a03d0: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2a03d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a03d4: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2a03d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2a03d8: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2a03d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a03dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a03dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a03e0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a03e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a03e4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a03e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a03e8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a03e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a03ec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a03ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a03f0: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x2a03f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x2a03f4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a03f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a03f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a03f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a03fc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a03fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a0400: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a0400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a0404: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0404u;
    SET_GPR_U32(ctx, 31, 0x2A040Cu);
    ctx->pc = 0x2A0408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0404u;
    // 0x2a0408: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0404u, 0x2A040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A040Cu;
label_2a040c:
    // 0x2a040c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a040cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0410: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a0410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a0414: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0414u;
    SET_GPR_U32(ctx, 31, 0x2A041Cu);
    ctx->pc = 0x2A0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0414u;
    // 0x2a0418: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0414u, 0x2A041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A041Cu;
label_2a041c:
    // 0x2a041c: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x2a041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x2a0420: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x2a0420u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0424: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a0424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a0428: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x2a0428u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a042c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a042cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a0430: 0x18400064  blez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2A0430u;
    {
        const bool branch_taken_0x2a0430 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0430u;
        // 0x2a0434: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0430) {
            ctx->pc = 0x2A05C4u;
            goto label_2a05c4;
        }
    }
    ctx->pc = 0x2A0438u;
    // 0x2a0438: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2a0438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a043c: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x2a043cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a0440: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2a0440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0448: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x2a0448u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x2a044c: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x2a044cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a0450: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x2a0450u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x2a0454: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a0454u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a0458: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a045c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x2a045cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0460: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2a0460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2a0464: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a0464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2a0468:
    // 0x2a0468: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2a0468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a046c: 0x8c4611b4  lw          $a2, 0x11B4($v0)
    ctx->pc = 0x2a046cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x2a0470: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a0470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a0474: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x2a0474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2a0478: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a047c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a047cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0480: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2a0480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a0484: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a0484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a0488: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a0488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a048c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a048cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a0490: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0490u;
    SET_GPR_U32(ctx, 31, 0x2A0498u);
    ctx->pc = 0x2A0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0490u;
    // 0x2a0494: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0490u, 0x2A0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0498u;
label_2a0498:
    // 0x2a0498: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2a0498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2a049c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2a049cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a04a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a04a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a04a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a04a8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a04a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a04ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a04acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a04b0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a04b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a04b4: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2a04b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2a04b8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A04B8u;
    SET_GPR_U32(ctx, 31, 0x2A04C0u);
    ctx->pc = 0x2A04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A04B8u;
    // 0x2a04bc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A04B8u, 0x2A04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A04C0u;
label_2a04c0:
    // 0x2a04c0: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x2a04c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a04c4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2a04c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a04c8: 0x8ee26b80  lw          $v0, 0x6B80($s7)
    ctx->pc = 0x2a04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a04cc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a04ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a04d0: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x2a04d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a04d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a04d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a04d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a04dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a04e0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a04e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a04e4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2a04e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2a04e8: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2a04e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a04ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a04ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a04f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a04f4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a04f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a04f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a04f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a04fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a04fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a0500: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0500u;
    SET_GPR_U32(ctx, 31, 0x2A0508u);
    ctx->pc = 0x2A0504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0500u;
    // 0x2a0504: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0500u, 0x2A0508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0508u;
label_2a0508:
    // 0x2a0508: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x2a0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a050c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2a050cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0510: 0x8e86118c  lw          $a2, 0x118C($s4)
    ctx->pc = 0x2a0510u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a0514: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0518: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2a0518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a051c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a0520: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2a0520u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a0524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0528: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x2a0528u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a052c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a052cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a0530: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a0530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a0534: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a0534u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a0538: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a053c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a053cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0540: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0544: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a0544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0548: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a0548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a054c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a054cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0550: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a0554: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a0558: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x2a0558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x2a055c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A055Cu;
    SET_GPR_U32(ctx, 31, 0x2A0564u);
    ctx->pc = 0x2A0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A055Cu;
    // 0x2a0560: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A055Cu, 0x2A0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0564u;
label_2a0564:
    // 0x2a0564: 0x8e83118c  lw          $v1, 0x118C($s4)
    ctx->pc = 0x2a0564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a0568: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2a0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a056c: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x2a056cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x2a0570: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a0570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0574: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a0574u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a0578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a057c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a057cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a0580: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2a0580u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0584: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a0584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0588: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0588u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a058c: 0xde3021  addu        $a2, $a2, $fp
    ctx->pc = 0x2a058cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
    // 0x2a0590: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0594: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a0594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a0598: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0598u;
    SET_GPR_U32(ctx, 31, 0x2A05A0u);
    ctx->pc = 0x2A059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0598u;
    // 0x2a059c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0598u, 0x2A05A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A05A0u;
label_2a05a0:
    // 0x2a05a0: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x2a05a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x2a05a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a05a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a05a8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a05a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a05ac: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x2a05acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a05b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a05b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a05b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a05b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a05b8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2a05b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a05bc: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2A05BCu;
    {
        const bool branch_taken_0x2a05bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A05C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A05BCu;
        // 0x2a05c0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a05bc) {
            ctx->pc = 0x2A0468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0468;
        }
    }
    ctx->pc = 0x2A05C4u;
label_2a05c4:
    // 0x2a05c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a05c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a05c8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a05c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a05cc: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x2a05ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2a05d0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a05d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a05d4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a05d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a05d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a05dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a05dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a05e0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a05e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a05e4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a05e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a05e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a05e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a05ec: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2a05ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a05f0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2a05f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a05f4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2a05f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a05f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a05f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a05fc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2a05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a0600: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0600u;
        // 0x2a0604: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0608u;
}
