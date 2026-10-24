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

// Function: func_0029FAD8
// Address: 0x29fad8 - 0x29fde0
void func_0029FAD8_0x29fad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029FAD8_0x29fad8");
#endif

    switch (ctx->pc) {
        case 0x29fb18u: goto label_29fb18;
        case 0x29fb30u: goto label_29fb30;
        case 0x29fb7cu: goto label_29fb7c;
        case 0x29fbe8u: goto label_29fbe8;
        case 0x29fbf8u: goto label_29fbf8;
        case 0x29fc30u: goto label_29fc30;
        case 0x29fc60u: goto label_29fc60;
        case 0x29fc88u: goto label_29fc88;
        case 0x29fcccu: goto label_29fccc;
        case 0x29fd28u: goto label_29fd28;
        case 0x29fd64u: goto label_29fd64;
        default: break;
    }

    ctx->pc = 0x29fad8u;

    // 0x29fad8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x29fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29fadc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x29fadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x29fae0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x29fae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x29fae4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x29fae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x29faec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x29faecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29faf0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x29faf0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29faf4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x29faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x29faf8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x29faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x29fafc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x29fb00: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29fb04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x29fb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x29fb08: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29fb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29fb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29fb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29fb10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FB10u;
    SET_GPR_U32(ctx, 31, 0x29FB18u);
    ctx->pc = 0x29FB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB10u;
    // 0x29fb14: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FB10u, 0x29FB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB18u;
label_29fb18:
    // 0x29fb18: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x29fb1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb20: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29fb24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FB28u;
    SET_GPR_U32(ctx, 31, 0x29FB30u);
    ctx->pc = 0x29FB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB28u;
    // 0x29fb2c: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FB28u, 0x29FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB30u;
label_29fb30:
    // 0x29fb30: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29fb30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fb34: 0x8e6711c8  lw          $a3, 0x11C8($s3)
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4552)));
    // 0x29fb38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb3c: 0x8ec51180  lw          $a1, 0x1180($s6)
    ctx->pc = 0x29fb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29fb40: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x29fb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29fb44: 0x8e4611ac  lw          $a2, 0x11AC($s2)
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4524)));
    // 0x29fb48: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x29fb48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29fb4c: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29fb50: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x29fb50u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29fb54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29fb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb58: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29fb58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29fb5c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29fb60: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fb64: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29fb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29fb68: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29fb6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29fb6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29fb70: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29fb70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29fb74: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FB74u;
    SET_GPR_U32(ctx, 31, 0x29FB7Cu);
    ctx->pc = 0x29FB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FB74u;
    // 0x29fb78: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FB74u, 0x29FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FB7Cu;
label_29fb7c:
    // 0x29fb7c: 0x8e6711c8  lw          $a3, 0x11C8($s3)
    ctx->pc = 0x29fb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4552)));
    // 0x29fb80: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x29fb84: 0x8ec41180  lw          $a0, 0x1180($s6)
    ctx->pc = 0x29fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29fb88: 0x3c092000  lui         $t1, 0x2000
    ctx->pc = 0x29fb88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8192 << 16));
    // 0x29fb8c: 0xf43818  mult        $a3, $a3, $s4
    ctx->pc = 0x29fb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29fb90: 0x8e4611ac  lw          $a2, 0x11AC($s2)
    ctx->pc = 0x29fb90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4524)));
    // 0x29fb94: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29fb94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29fb98: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29fb9c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29fb9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29fba0: 0x8d0511bc  lw          $a1, 0x11BC($t0)
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4540)));
    // 0x29fba4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29fba8: 0x34038100  ori         $v1, $zero, 0x8100
    ctx->pc = 0x29fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29fbac: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x29fbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x29fbb0: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x29fbb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x29fbb4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x29fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x29fbb8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fbbc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29fbc0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29fbc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29fbc4: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29fbc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29fbc8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29fbc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29fbcc: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x29fbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x29fbd0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29fbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29fbd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbd8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29fbd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29fbdc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29fbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29fbe0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FBE0u;
    SET_GPR_U32(ctx, 31, 0x29FBE8u);
    ctx->pc = 0x29FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBE0u;
    // 0x29fbe4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FBE0u, 0x29FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBE8u;
label_29fbe8:
    // 0x29fbe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29fbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29fbf0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FBF0u;
    SET_GPR_U32(ctx, 31, 0x29FBF8u);
    ctx->pc = 0x29FBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FBF0u;
    // 0x29fbf4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FBF0u, 0x29FBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FBF8u;
label_29fbf8:
    // 0x29fbf8: 0x8ec31180  lw          $v1, 0x1180($s6)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x29fbfc: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29fbfcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fc00: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29fc04: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29fc04u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29fc08: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29fc0c: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x29FC0Cu;
    {
        const bool branch_taken_0x29fc0c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FC0Cu;
        // 0x29fc10: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc0c) {
            ctx->pc = 0x29FD88u;
            goto label_29fd88;
        }
    }
    ctx->pc = 0x29FC14u;
    // 0x29fc14: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x29fc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc18: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x29fc1c: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29fc20: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29fc24: 0x2412001f  addiu       $s2, $zero, 0x1F
    ctx->pc = 0x29fc24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29fc28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29fc2c: 0x0  nop
    ctx->pc = 0x29fc2cu;
    // NOP
label_29fc30:
    // 0x29fc30: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29fc30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc34: 0x8c4611b4  lw          $a2, 0x11B4($v0)
    ctx->pc = 0x29fc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4532)));
    // 0x29fc38: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29fc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29fc3c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x29fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x29fc40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc44: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29fc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29fc48: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x29fc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29fc4c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29fc4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29fc50: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29fc54: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29fc54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29fc58: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FC58u;
    SET_GPR_U32(ctx, 31, 0x29FC60u);
    ctx->pc = 0x29FC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC58u;
    // 0x29fc5c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FC58u, 0x29FC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC60u;
label_29fc60:
    // 0x29fc60: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x29fc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x29fc64: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x29fc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29fc68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fc6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fc70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fc70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fc74: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29fc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29fc78: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29fc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29fc7c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29fc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29fc80: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FC80u;
    SET_GPR_U32(ctx, 31, 0x29FC88u);
    ctx->pc = 0x29FC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FC80u;
    // 0x29fc84: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FC80u, 0x29FC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FC88u;
label_29fc88:
    // 0x29fc88: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29fc8c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29fc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29fc90: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29fc90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29fc94: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29fc94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fc98: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29fc98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29fc9c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29fca0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29fca4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fca8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fcac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29fcacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29fcb0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29fcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29fcb4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fcb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fcb8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29fcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29fcbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcc0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29fcc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29fcc4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FCC4u;
    SET_GPR_U32(ctx, 31, 0x29FCCCu);
    ctx->pc = 0x29FCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FCC4u;
    // 0x29fcc8: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FCC4u, 0x29FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FCCCu;
label_29fccc:
    // 0x29fccc: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29fcd0: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x29fcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29fcd4: 0x8e86118c  lw          $a2, 0x118C($s4)
    ctx->pc = 0x29fcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x29fcd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fcdc: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29fce0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29fce4: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x29fce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29fce8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fcec: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x29fcecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29fcf0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x29fcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29fcf4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29fcf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29fcf8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29fcf8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29fcfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29fd00: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fd00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fd04: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29fd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fd08: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29fd08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29fd0c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29fd10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fd14: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29fd14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29fd18: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29fd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29fd1c: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29fd1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29fd20: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FD20u;
    SET_GPR_U32(ctx, 31, 0x29FD28u);
    ctx->pc = 0x29FD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD20u;
    // 0x29fd24: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FD20u, 0x29FD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD28u;
label_29fd28:
    // 0x29fd28: 0x8e82118c  lw          $v0, 0x118C($s4)
    ctx->pc = 0x29fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x29fd2c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29fd2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29fd30: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29fd30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29fd34: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29fd34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29fd38: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29fd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fd40: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29fd44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29fd48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29fd4c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29fd4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29fd50: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29fd54: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29fd58: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fd58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fd5c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FD5Cu;
    SET_GPR_U32(ctx, 31, 0x29FD64u);
    ctx->pc = 0x29FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FD5Cu;
    // 0x29fd60: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FD5Cu, 0x29FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FD64u;
label_29fd64:
    // 0x29fd64: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29fd68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fd6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29fd6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29fd70: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29fd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29fd74: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29fd74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29fd78: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29fd78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29fd7c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29fd7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29fd80: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x29FD80u;
    {
        const bool branch_taken_0x29fd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD80u;
        // 0x29fd84: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd80) {
            ctx->pc = 0x29FC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fc30;
        }
    }
    ctx->pc = 0x29FD88u;
label_29fd88:
    // 0x29fd88: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29fd8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x29fd8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29fd90: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x29fd94: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x29fd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fd98: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29fd9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x29fd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fda0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29fda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29fda4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29fda4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fda8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x29fda8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fdac: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x29fdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29fdb0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x29fdb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fdb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29fdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fdb8: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29fdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29fdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x29FDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FDBCu;
        // 0x29fdc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FDC4u;
    // 0x29fdc4: 0x0  nop
    ctx->pc = 0x29fdc4u;
    // NOP
    // 0x29fdc8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fdcc: 0x0  nop
    ctx->pc = 0x29fdccu;
    // NOP
    // 0x29fdd0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fdd4: 0x0  nop
    ctx->pc = 0x29fdd4u;
    // NOP
    // 0x29fdd8: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x29fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x29fddc: 0x0  nop
    ctx->pc = 0x29fddcu;
    // NOP
    ctx->pc = 0x29fde0u;
}
