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

// Function: func_0029FFB0
// Address: 0x29ffb0 - 0x2a02d0
void func_0029FFB0_0x29ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029FFB0_0x29ffb0");
#endif

    switch (ctx->pc) {
        case 0x2a0008u: goto label_2a0008;
        case 0x2a001cu: goto label_2a001c;
        case 0x2a0064u: goto label_2a0064;
        case 0x2a00d0u: goto label_2a00d0;
        case 0x2a00e0u: goto label_2a00e0;
        case 0x2a0130u: goto label_2a0130;
        case 0x2a0160u: goto label_2a0160;
        case 0x2a0188u: goto label_2a0188;
        case 0x2a01d0u: goto label_2a01d0;
        case 0x2a022cu: goto label_2a022c;
        case 0x2a0268u: goto label_2a0268;
        default: break;
    }

    ctx->pc = 0x29ffb0u;

    // 0x29ffb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29ffb4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x29ffb8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x29ffbc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29ffbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffc0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ffc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29ffc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffc8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x29ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x29ffcc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29ffccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffd0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29ffd4: 0x8b843  sra         $s7, $t0, 1
    ctx->pc = 0x29ffd4u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), 1));
    // 0x29ffd8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29ffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29ffdc: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29ffdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29ffe0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ffe4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x29ffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x29ffe8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ffec: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x29ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x29fff0: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29fff0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29fff4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x29fff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x29fff8: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x29fff8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x29fffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0000: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0000u;
    SET_GPR_U32(ctx, 31, 0x2A0008u);
    ctx->pc = 0x2A0004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0000u;
    // 0x2a0004: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0000u, 0x2A0008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0008u;
label_2a0008:
    // 0x2a0008: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a0008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a000c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0010: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x2a0010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x2a0014: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0014u;
    SET_GPR_U32(ctx, 31, 0x2A001Cu);
    ctx->pc = 0x2A0018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0014u;
    // 0x2a0018: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0014u, 0x2A001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A001Cu;
label_2a001c:
    // 0x2a001c: 0x8e4711c8  lw          $a3, 0x11C8($s2)
    ctx->pc = 0x2a001cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x2a0020: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0024: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x2a0024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a0028: 0xf33818  mult        $a3, $a3, $s3
    ctx->pc = 0x2a0028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a002c: 0x8e2611ac  lw          $a2, 0x11AC($s1)
    ctx->pc = 0x2a002cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4524)));
    // 0x2a0030: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x2a0030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a0034: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x2a0034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x2a0038: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a0038u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a003c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a003cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0040: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a0040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a0044: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a0044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0048: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a0048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a004c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0050: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x2a0054: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a0058: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a0058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a005c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A005Cu;
    SET_GPR_U32(ctx, 31, 0x2A0064u);
    ctx->pc = 0x2A0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A005Cu;
    // 0x2a0060: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A005Cu, 0x2A0064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0064u;
label_2a0064:
    // 0x2a0064: 0x8e4711c8  lw          $a3, 0x11C8($s2)
    ctx->pc = 0x2a0064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4552)));
    // 0x2a0068: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2a0068u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2a006c: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a0070: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x2a0070u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x2a0074: 0xf43818  mult        $a3, $a3, $s4
    ctx->pc = 0x2a0074u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a0078: 0x8e2611ac  lw          $a2, 0x11AC($s1)
    ctx->pc = 0x2a0078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4524)));
    // 0x2a007c: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x2a007cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a0080: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a0080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a0084: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a0084u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a0088: 0x8d0511bc  lw          $a1, 0x11BC($t0)
    ctx->pc = 0x2a0088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4540)));
    // 0x2a008c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a008cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a0090: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x2a0090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a0094: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x2a0094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x2a0098: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x2a0098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x2a009c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x2a009cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x2a00a0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a00a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a00a4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a00a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a00a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a00ac: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a00acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a00b0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a00b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a00b4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x2a00b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x2a00b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a00b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a00bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a00bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00c0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a00c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a00c4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2a00c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2a00c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A00C8u;
    SET_GPR_U32(ctx, 31, 0x2A00D0u);
    ctx->pc = 0x2A00CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00C8u;
    // 0x2a00cc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A00C8u, 0x2A00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00D0u;
label_2a00d0:
    // 0x2a00d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a00d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a00d4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a00d8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A00D8u;
    SET_GPR_U32(ctx, 31, 0x2A00E0u);
    ctx->pc = 0x2A00DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A00D8u;
    // 0x2a00dc: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A00D8u, 0x2A00E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00E0u;
label_2a00e0:
    // 0x2a00e0: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x2a00e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2a00e4: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x2a00e4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a00e8: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x2a00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x2a00ec: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x2a00ecu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a00f0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a00f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a00f4: 0x18400065  blez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x2A00F4u;
    {
        const bool branch_taken_0x2a00f4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2A00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A00F4u;
        // 0x2a00f8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a00f4) {
            ctx->pc = 0x2A028Cu;
            goto label_2a028c;
        }
    }
    ctx->pc = 0x2A00FCu;
    // 0x2a00fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2a00fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a0100: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x2a0100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2a0104: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2a0104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0108: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a0108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a010c: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x2a010cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x2a0110: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x2a0110u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a0114: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x2a0114u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x2a0118: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2a0118u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2a011c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0120: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x2a0120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0124: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x2a0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x2a0128: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a012c: 0x0  nop
    ctx->pc = 0x2a012cu;
    // NOP
label_2a0130:
    // 0x2a0130: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2a0130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0134: 0x8c4611b4  lw          $a2, 0x11B4($v0)
    ctx->pc = 0x2a0134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x2a0138: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2a0138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2a013c: 0x131180  sll         $v0, $s3, 6
    ctx->pc = 0x2a013cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x2a0140: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0144: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a0144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0148: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2a0148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a014c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a014cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a0150: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a0150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a0154: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x2a0154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2a0158: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0158u;
    SET_GPR_U32(ctx, 31, 0x2A0160u);
    ctx->pc = 0x2A015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0158u;
    // 0x2a015c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0158u, 0x2A0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0160u;
label_2a0160:
    // 0x2a0160: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2a0160u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a0164: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2a0164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a0168: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a016c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a016cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0170: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0174: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a0178: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2a0178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2a017c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x2a017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x2a0180: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0180u;
    SET_GPR_U32(ctx, 31, 0x2A0188u);
    ctx->pc = 0x2A0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0180u;
    // 0x2a0184: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0180u, 0x2A0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0188u;
label_2a0188:
    // 0x2a0188: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x2a0188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a018c: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2a018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a0190: 0x8fc26b80  lw          $v0, 0x6B80($fp)
    ctx->pc = 0x2a0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x2a0194: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a0194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a0198: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x2a0198u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a019c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01a0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a01a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a01a8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a01a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a01ac: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2a01acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2a01b0: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2a01b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a01b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a01b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a01b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a01bc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a01bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a01c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a01c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a01c4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a01c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a01c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A01C8u;
    SET_GPR_U32(ctx, 31, 0x2A01D0u);
    ctx->pc = 0x2A01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A01C8u;
    // 0x2a01cc: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A01C8u, 0x2A01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A01D0u;
label_2a01d0:
    // 0x2a01d0: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x2a01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a01d4: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x2a01d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a01d8: 0x8e86118c  lw          $a2, 0x118C($s4)
    ctx->pc = 0x2a01d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a01dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a01dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a01e0: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x2a01e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a01e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a01e8: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x2a01e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a01ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a01f0: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x2a01f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2a01f4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2a01f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2a01f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a01f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a01fc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a01fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a0200: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0204: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0204u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0208: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a020c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0210: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a0210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a0214: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a0214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0218: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a021c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a021cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a0220: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x2a0220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x2a0224: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0224u;
    SET_GPR_U32(ctx, 31, 0x2A022Cu);
    ctx->pc = 0x2A0228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0224u;
    // 0x2a0228: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0224u, 0x2A022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A022Cu;
label_2a022c:
    // 0x2a022c: 0x8e83118c  lw          $v1, 0x118C($s4)
    ctx->pc = 0x2a022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x2a0230: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a0230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0234: 0x8fc66b80  lw          $a2, 0x6B80($fp)
    ctx->pc = 0x2a0234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x2a0238: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a0238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a023c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a0240: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a0240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a0244: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a0244u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a0248: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x2a0248u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a024c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2a024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2a0250: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0250u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0254: 0xd73021  addu        $a2, $a2, $s7
    ctx->pc = 0x2a0254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 23)));
    // 0x2a0258: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a025c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a025cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a0260: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0260u;
    SET_GPR_U32(ctx, 31, 0x2A0268u);
    ctx->pc = 0x2A0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0260u;
    // 0x2a0264: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0260u, 0x2A0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0268u;
label_2a0268:
    // 0x2a0268: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x2a0268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x2a026c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0270: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2a0270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a0274: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x2a0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x2a0278: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a0278u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2a027c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x2a027cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x2a0280: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2a0280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a0284: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x2A0284u;
    {
        const bool branch_taken_0x2a0284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0284u;
        // 0x2a0288: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0284) {
            ctx->pc = 0x2A0130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a0130;
        }
    }
    ctx->pc = 0x2A028Cu;
label_2a028c:
    // 0x2a028c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a028cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a0290: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a0290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a0294: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x2a0294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x2a0298: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a0298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a029c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a02a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a02a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a02a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a02a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a02a8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a02a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a02ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a02acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a02b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a02b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a02b4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2a02b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a02b8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2a02b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a02bc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2a02bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a02c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a02c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a02c4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x2a02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a02c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A02C8u;
        // 0x2a02cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A02C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A02D0u;
}
