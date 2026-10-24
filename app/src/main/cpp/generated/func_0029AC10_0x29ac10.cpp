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

// Function: func_0029AC10
// Address: 0x29ac10 - 0x29bab8
void func_0029AC10_0x29ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029AC10_0x29ac10");
#endif

    switch (ctx->pc) {
        case 0x29ac7cu: goto label_29ac7c;
        case 0x29acb8u: goto label_29acb8;
        case 0x29ad00u: goto label_29ad00;
        case 0x29ad18u: goto label_29ad18;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad40u: goto label_29ad40;
        case 0x29ad74u: goto label_29ad74;
        case 0x29adccu: goto label_29adcc;
        case 0x29addcu: goto label_29addc;
        case 0x29adf4u: goto label_29adf4;
        case 0x29ae04u: goto label_29ae04;
        case 0x29ae38u: goto label_29ae38;
        case 0x29ae68u: goto label_29ae68;
        case 0x29ae90u: goto label_29ae90;
        case 0x29aed4u: goto label_29aed4;
        case 0x29af18u: goto label_29af18;
        case 0x29af54u: goto label_29af54;
        case 0x29afacu: goto label_29afac;
        case 0x29b00cu: goto label_29b00c;
        case 0x29b054u: goto label_29b054;
        case 0x29b070u: goto label_29b070;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b0f8u: goto label_29b0f8;
        case 0x29b108u: goto label_29b108;
        case 0x29b138u: goto label_29b138;
        case 0x29b168u: goto label_29b168;
        case 0x29b180u: goto label_29b180;
        case 0x29b1c4u: goto label_29b1c4;
        case 0x29b1f8u: goto label_29b1f8;
        case 0x29b22cu: goto label_29b22c;
        case 0x29b27cu: goto label_29b27c;
        case 0x29b288u: goto label_29b288;
        case 0x29b298u: goto label_29b298;
        case 0x29b2a8u: goto label_29b2a8;
        case 0x29b2b8u: goto label_29b2b8;
        case 0x29b2f4u: goto label_29b2f4;
        case 0x29b32cu: goto label_29b32c;
        case 0x29b33cu: goto label_29b33c;
        case 0x29b384u: goto label_29b384;
        case 0x29b3f4u: goto label_29b3f4;
        case 0x29b404u: goto label_29b404;
        case 0x29b438u: goto label_29b438;
        case 0x29b468u: goto label_29b468;
        case 0x29b490u: goto label_29b490;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b530u: goto label_29b530;
        case 0x29b56cu: goto label_29b56c;
        case 0x29b5f0u: goto label_29b5f0;
        case 0x29b604u: goto label_29b604;
        case 0x29b614u: goto label_29b614;
        case 0x29b62cu: goto label_29b62c;
        case 0x29b654u: goto label_29b654;
        case 0x29b67cu: goto label_29b67c;
        case 0x29b6a4u: goto label_29b6a4;
        case 0x29b6c8u: goto label_29b6c8;
        case 0x29b6e0u: goto label_29b6e0;
        case 0x29b6f0u: goto label_29b6f0;
        case 0x29b708u: goto label_29b708;
        case 0x29b730u: goto label_29b730;
        case 0x29b758u: goto label_29b758;
        case 0x29b780u: goto label_29b780;
        case 0x29b79cu: goto label_29b79c;
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7e8u: goto label_29b7e8;
        case 0x29b810u: goto label_29b810;
        case 0x29b828u: goto label_29b828;
        case 0x29b858u: goto label_29b858;
        case 0x29b8c8u: goto label_29b8c8;
        case 0x29b8d8u: goto label_29b8d8;
        case 0x29b918u: goto label_29b918;
        case 0x29b940u: goto label_29b940;
        case 0x29b96cu: goto label_29b96c;
        case 0x29b9a8u: goto label_29b9a8;
        case 0x29ba08u: goto label_29ba08;
        case 0x29ba4cu: goto label_29ba4c;
        default: break;
    }

    ctx->pc = 0x29ac10u;

    // 0x29ac10: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x29ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29ac14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29ac18: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x29ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x29ac1c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ac20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29ac24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ac24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac28: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x29ac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x29ac2c: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x29ac2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29ac30: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x29ac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x29ac34: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x29ac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x29ac38: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29ac38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ac3c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x29ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x29ac40: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x29ac40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x29ac44: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x29ac44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x29ac48: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29ac48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ac4c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x29ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x29ac50: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29ac50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29ac54: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x29ac54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29ac58: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x29ac58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac5c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x29ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x29ac60: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x29ac60u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29ac64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29ac68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ac6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29ac6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29ac70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29ac70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29ac74: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AC74u;
    SET_GPR_U32(ctx, 31, 0x29AC7Cu);
    ctx->pc = 0x29AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AC74u;
    // 0x29ac78: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AC74u, 0x29AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AC7Cu;
label_29ac7c:
    // 0x29ac7c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29ac7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ac80: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29ac84: 0x8c8211ac  lw          $v0, 0x11AC($a0)
    ctx->pc = 0x29ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29ac88: 0x243282a  slt         $a1, $s2, $v1
    ctx->pc = 0x29ac88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ac8c: 0x2466007f  addiu       $a2, $v1, 0x7F
    ctx->pc = 0x29ac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29ac90: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x29ac90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29ac94: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29ac98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29ac98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ac9c: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29ac9cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29aca0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29aca4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29aca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29aca8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29aca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29acac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29acacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29acb0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ACB0u;
    SET_GPR_U32(ctx, 31, 0x29ACB8u);
    ctx->pc = 0x29ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACB0u;
    // 0x29acb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ACB0u, 0x29ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ACB8u;
label_29acb8:
    // 0x29acb8: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29acbc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x29acbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29acc0: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29acc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29acc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29acc8: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29acc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29accc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29acd0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29acd4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29acd8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29acd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29acdc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29acdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29ace0: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x29ace0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29ace4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x29ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29ace8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29acec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29acecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29acf0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29acf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29acf4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x29acf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29acf8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ACF8u;
    SET_GPR_U32(ctx, 31, 0x29AD00u);
    ctx->pc = 0x29ACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ACF8u;
    // 0x29acfc: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ACF8u, 0x29AD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD00u;
label_29ad00:
    // 0x29ad00: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x29ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29ad04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29ad08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29ad0c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x29ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x29ad10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AD10u;
    SET_GPR_U32(ctx, 31, 0x29AD18u);
    ctx->pc = 0x29AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD10u;
    // 0x29ad14: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AD10u, 0x29AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD18u;
label_29ad18:
    // 0x29ad18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad1c: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29ad1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29ad20: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29ad20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29ad24: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29ad24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29ad28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AD28u;
    SET_GPR_U32(ctx, 31, 0x29AD30u);
    ctx->pc = 0x29AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD28u;
    // 0x29ad2c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AD28u, 0x29AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD30u;
label_29ad30:
    // 0x29ad30: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x29ad30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x29ad34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AD38u;
    SET_GPR_U32(ctx, 31, 0x29AD40u);
    ctx->pc = 0x29AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD38u;
    // 0x29ad3c: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AD38u, 0x29AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD40u;
label_29ad40:
    // 0x29ad40: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29ad40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29ad44: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x29ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x29ad48: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x29ad48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x29ad4c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ad50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ad50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ad54: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29ad54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29ad58: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29ad58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29ad5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29ad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ad60: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29ad60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29ad64: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29ad64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29ad68: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29ad68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29ad6c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AD6Cu;
    SET_GPR_U32(ctx, 31, 0x29AD74u);
    ctx->pc = 0x29AD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AD6Cu;
    // 0x29ad70: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AD6Cu, 0x29AD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AD74u;
label_29ad74:
    // 0x29ad74: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ad78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29ad7c: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x29ad7cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29ad80: 0x3c042400  lui         $a0, 0x2400
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9216 << 16));
    // 0x29ad84: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x29ad84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ad88: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29ad8c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29ad8cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29ad90: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29ad90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29ad94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ad98: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29ad98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29ad9c: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x29ad9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x29ada0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29ada0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29ada4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ada8: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x29ada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29adac: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x29adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x29adb0: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29adb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29adb4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x29adb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x29adb8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29adb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29adbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adc0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29adc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29adc4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ADC4u;
    SET_GPR_U32(ctx, 31, 0x29ADCCu);
    ctx->pc = 0x29ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADC4u;
    // 0x29adc8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ADC4u, 0x29ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADCCu;
label_29adcc:
    // 0x29adcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29add0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29add0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29add4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ADD4u;
    SET_GPR_U32(ctx, 31, 0x29ADDCu);
    ctx->pc = 0x29ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADD4u;
    // 0x29add8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ADD4u, 0x29ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADDCu;
label_29addc:
    // 0x29addc: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x29addcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x29ade0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29ade0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ade4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29ade4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ade8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ADECu;
    SET_GPR_U32(ctx, 31, 0x29ADF4u);
    ctx->pc = 0x29ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADECu;
    // 0x29adf0: 0x6303c  dsll32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ADECu, 0x29ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ADF4u;
label_29adf4:
    // 0x29adf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29adf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29adfc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ADFCu;
    SET_GPR_U32(ctx, 31, 0x29AE04u);
    ctx->pc = 0x29AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ADFCu;
    // 0x29ae00: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ADFCu, 0x29AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE04u;
label_29ae04:
    // 0x29ae04: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ae08: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x29ae08u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ae0c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29ae10: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x29ae10u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29ae14: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29ae14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ae18: 0x18400057  blez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x29AE18u;
    {
        const bool branch_taken_0x29ae18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AE18u;
        // 0x29ae1c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ae18) {
            ctx->pc = 0x29AF78u;
            goto label_29af78;
        }
    }
    ctx->pc = 0x29AE20u;
    // 0x29ae20: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x29ae20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae24: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29ae24u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29ae28: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x29ae28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae2c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x29ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29ae30: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x29ae30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x29ae34: 0x0  nop
    ctx->pc = 0x29ae34u;
    // NOP
label_29ae38:
    // 0x29ae38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae3c: 0x8ce211b4  lw          $v0, 0x11B4($a3)
    ctx->pc = 0x29ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4532)));
    // 0x29ae40: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x29ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x29ae44: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ae44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ae48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ae50: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ae50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ae54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29ae58: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29ae5c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ae5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ae60: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AE60u;
    SET_GPR_U32(ctx, 31, 0x29AE68u);
    ctx->pc = 0x29AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE60u;
    // 0x29ae64: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AE60u, 0x29AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE68u;
label_29ae68:
    // 0x29ae68: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x29ae68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29ae6c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x29ae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29ae70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae74: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ae78: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ae78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ae7c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29ae7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29ae80: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29ae80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29ae84: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29ae88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AE88u;
    SET_GPR_U32(ctx, 31, 0x29AE90u);
    ctx->pc = 0x29AE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE88u;
    // 0x29ae8c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AE88u, 0x29AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AE90u;
label_29ae90:
    // 0x29ae90: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29ae94: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29ae94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29ae98: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29ae9c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29ae9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29aea0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29aea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29aea4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29aea8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29aeac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29aeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29aeb0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29aeb4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29aeb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29aeb8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29aeb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29aebc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29aebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29aec0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29aec0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29aec4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29aec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aec8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29aec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29aecc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AECCu;
    SET_GPR_U32(ctx, 31, 0x29AED4u);
    ctx->pc = 0x29AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AECCu;
    // 0x29aed0: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AECCu, 0x29AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AED4u;
label_29aed4:
    // 0x29aed4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x29aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29aed8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29aed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29aedc: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29aee0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aee4: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29aee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29aee8: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29aee8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29aeec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29aef0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29aef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29aef4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29aef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29aef8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29aef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29aefc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29af00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29af04: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29af04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29af08: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29af08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29af0c: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29af0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29af10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AF10u;
    SET_GPR_U32(ctx, 31, 0x29AF18u);
    ctx->pc = 0x29AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF10u;
    // 0x29af14: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AF10u, 0x29AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF18u;
label_29af18:
    // 0x29af18: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29af1c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29af1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29af20: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29af20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29af24: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29af24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29af28: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29af28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29af2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29af2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af30: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29af30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29af34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29af34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29af38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29af38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29af3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29af3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29af40: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29af40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29af44: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29af44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29af48: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29af48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29af4c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AF4Cu;
    SET_GPR_U32(ctx, 31, 0x29AF54u);
    ctx->pc = 0x29AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AF4Cu;
    // 0x29af50: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AF4Cu, 0x29AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AF54u;
label_29af54:
    // 0x29af54: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29af58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29af5c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29af5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29af60: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29af64: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29af64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29af68: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29af68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29af6c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x29af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29af70: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x29AF70u;
    {
        const bool branch_taken_0x29af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF70u;
        // 0x29af74: 0x3c07003c  lui         $a3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af70) {
            ctx->pc = 0x29AE38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ae38;
        }
    }
    ctx->pc = 0x29AF78u;
label_29af78:
    // 0x29af78: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29af78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29af7c: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x29af7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af80: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29af84: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29af84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29af88: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29af8c: 0xa5142  srl         $t2, $t2, 5
    ctx->pc = 0x29af8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 5));
    // 0x29af90: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x29af90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x29af94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29af98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29af9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29af9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afa0: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29afa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29afa4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AFA4u;
    SET_GPR_U32(ctx, 31, 0x29AFACu);
    ctx->pc = 0x29AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AFA4u;
    // 0x29afa8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AFA4u, 0x29AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AFACu;
label_29afac:
    // 0x29afac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29afacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29afb4: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x29afb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x29afb8: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29afbc: 0x3409fffc  ori         $t1, $zero, 0xFFFC
    ctx->pc = 0x29afbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x29afc0: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x29afc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x29afc4: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x29afc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x29afc8: 0x94ab8  dsll        $t1, $t1, 10
    ctx->pc = 0x29afc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 10);
    // 0x29afcc: 0x8ce811c8  lw          $t0, 0x11C8($a3)
    ctx->pc = 0x29afccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4552)));
    // 0x29afd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29afd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29afd4: 0x8c4611ac  lw          $a2, 0x11AC($v0)
    ctx->pc = 0x29afd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4524)));
    // 0x29afd8: 0x203382a  slt         $a3, $s0, $v1
    ctx->pc = 0x29afd8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29afdc: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29afe0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29afe4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x29afe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x29afe8: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x29afe8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29afec: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29afecu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29aff0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29aff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29aff4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29aff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29aff8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29affc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29affcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29b000: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b004: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B004u;
    SET_GPR_U32(ctx, 31, 0x29B00Cu);
    ctx->pc = 0x29B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B004u;
    // 0x29b008: 0xc93025  or          $a2, $a2, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B004u, 0x29B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B00Cu;
label_29b00c:
    // 0x29b00c: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b010: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29b010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29b014: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b018: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b01c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29b01cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b020: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29b024: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b028: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29b028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29b02c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b030: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b030u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b034: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29b034u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29b038: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29b038u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29b03c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29b03cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29b040: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b044: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29b044u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29b048: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b04c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B04Cu;
    SET_GPR_U32(ctx, 31, 0x29B054u);
    ctx->pc = 0x29B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B04Cu;
    // 0x29b050: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B04Cu, 0x29B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B054u;
label_29b054:
    // 0x29b054: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x29b054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x29b058: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b05c: 0x34c6ff80  ori         $a2, $a2, 0xFF80
    ctx->pc = 0x29b05cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65408);
    // 0x29b060: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x29b060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x29b064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b068: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B068u;
    SET_GPR_U32(ctx, 31, 0x29B070u);
    ctx->pc = 0x29B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B068u;
    // 0x29b06c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B068u, 0x29B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B070u;
label_29b070:
    // 0x29b070: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b074: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29b074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29b078: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b07c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b080: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29b080u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29b084: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29b088: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b08c: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29b08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29b090: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29b090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b094: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b098: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B098u;
    SET_GPR_U32(ctx, 31, 0x29B0A0u);
    ctx->pc = 0x29B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B098u;
    // 0x29b09c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B098u, 0x29B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0A0u;
label_29b0a0:
    // 0x29b0a0: 0x8ee51180  lw          $a1, 0x1180($s7)
    ctx->pc = 0x29b0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b0a4: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29b0a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29b0a8: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x29b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x29b0ac: 0x3c072020  lui         $a3, 0x2020
    ctx->pc = 0x29b0acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8224 << 16));
    // 0x29b0b0: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x29b0b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29b0b4: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29b0b8: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x29b0b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29b0bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29b0c0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29b0c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29b0c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29b0c8: 0x9c8611ac  lwu         $a2, 0x11AC($a0)
    ctx->pc = 0x29b0c8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29b0cc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b0d0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29b0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29b0d4: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x29b0d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x29b0d8: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29b0d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29b0dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b0dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b0e0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x29b0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x29b0e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29b0e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b0e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0ec: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29b0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29b0f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B0F0u;
    SET_GPR_U32(ctx, 31, 0x29B0F8u);
    ctx->pc = 0x29B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B0F0u;
    // 0x29b0f4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B0F0u, 0x29B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B0F8u;
label_29b0f8:
    // 0x29b0f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b0fc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29b0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29b100: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B100u;
    SET_GPR_U32(ctx, 31, 0x29B108u);
    ctx->pc = 0x29B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B100u;
    // 0x29b104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B100u, 0x29B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B108u;
label_29b108:
    // 0x29b108: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b10c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29b10cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b110: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29b114: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29b114u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29b118: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29b118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29b11c: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x29B11Cu;
    {
        const bool branch_taken_0x29b11c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B11Cu;
        // 0x29b120: 0x3c14003c  lui         $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b11c) {
            ctx->pc = 0x29B250u;
            goto label_29b250;
        }
    }
    ctx->pc = 0x29B124u;
    // 0x29b124: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x29b124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b128: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29b128u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29b12c: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29b12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29b130: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29b130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29b134: 0x0  nop
    ctx->pc = 0x29b134u;
    // NOP
label_29b138:
    // 0x29b138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29b138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b13c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29b140: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29b140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29b144: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29b144u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29b148: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29b148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b14c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b150: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b154: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29b154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29b158: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29b15c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29b15cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29b160: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B160u;
    SET_GPR_U32(ctx, 31, 0x29B168u);
    ctx->pc = 0x29B164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B160u;
    // 0x29b164: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B160u, 0x29B168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B168u;
label_29b168:
    // 0x29b168: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x29b168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29b16c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29b16cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29b170: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29b170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29b174: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b178: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B178u;
    SET_GPR_U32(ctx, 31, 0x29B180u);
    ctx->pc = 0x29B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B178u;
    // 0x29b17c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B178u, 0x29B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B180u;
label_29b180:
    // 0x29b180: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29b184: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x29b184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x29b188: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29b188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29b18c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29b18cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b190: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29b190u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b194: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b19c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b1a0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b1a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b1a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b1a8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29b1ac: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b1b0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29b1b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29b1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29b1b8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29b1b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29b1bc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B1BCu;
    SET_GPR_U32(ctx, 31, 0x29B1C4u);
    ctx->pc = 0x29B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1BCu;
    // 0x29b1c0: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B1BCu, 0x29B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1C4u;
label_29b1c4:
    // 0x29b1c4: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29b1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b1cc: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29b1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29b1d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b1d4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b1d8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29b1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x29b1dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b1e0: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29b1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29b1e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29b1e8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x29b1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x29b1ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b1f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B1F0u;
    SET_GPR_U32(ctx, 31, 0x29B1F8u);
    ctx->pc = 0x29B1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B1F0u;
    // 0x29b1f4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B1F0u, 0x29B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B1F8u;
label_29b1f8:
    // 0x29b1f8: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29b1fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29b1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b200: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b204: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x29b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x29b208: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29b208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29b20c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b210: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29b210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29b214: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b218: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b21c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b220: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b224: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B224u;
    SET_GPR_U32(ctx, 31, 0x29B22Cu);
    ctx->pc = 0x29B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B224u;
    // 0x29b228: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B224u, 0x29B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B22Cu;
label_29b22c:
    // 0x29b22c: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29b22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29b230: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29b230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b234: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29b234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29b238: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29b23c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29b23cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29b240: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29b240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29b244: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29b244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b248: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29B248u;
    {
        const bool branch_taken_0x29b248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b248) {
            ctx->pc = 0x29B24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B248u;
            // 0x29b24c: 0x8e8611b4  lw          $a2, 0x11B4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b138;
        }
    }
    ctx->pc = 0x29B250u;
label_29b250:
    // 0x29b250: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x29b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x29b254: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x29b254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x29b258: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x29b258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x29b25c: 0x348440dc  ori         $a0, $a0, 0x40DC
    ctx->pc = 0x29b25cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16604);
    // 0x29b260: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x29b260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x29b264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b268: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x29b268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x29b26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b270: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x29b270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x29b274: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x29B274u;
    SET_GPR_U32(ctx, 31, 0x29B27Cu);
    ctx->pc = 0x29B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B274u;
    // 0x29b278: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x29B274u, 0x29B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B27Cu;
label_29b27c:
    // 0x29b27c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29b27cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b280: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29B280u;
    SET_GPR_U32(ctx, 31, 0x29B288u);
    ctx->pc = 0x29B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B280u;
    // 0x29b284: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29B280u, 0x29B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B288u;
label_29b288:
    // 0x29b288: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29b288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b28c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b290: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29B290u;
    SET_GPR_U32(ctx, 31, 0x29B298u);
    ctx->pc = 0x29B294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B290u;
    // 0x29b294: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29B290u, 0x29B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B298u;
label_29b298:
    // 0x29b298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b29c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b29cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2a0: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29B2A0u;
    SET_GPR_U32(ctx, 31, 0x29B2A8u);
    ctx->pc = 0x29B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2A0u;
    // 0x29b2a4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29B2A0u, 0x29B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2A8u;
label_29b2a8:
    // 0x29b2a8: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29b2ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B2B0u;
    SET_GPR_U32(ctx, 31, 0x29B2B8u);
    ctx->pc = 0x29B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2B0u;
    // 0x29b2b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B2B0u, 0x29B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2B8u;
label_29b2b8:
    // 0x29b2b8: 0x8ee71180  lw          $a3, 0x1180($s7)
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b2bc: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29b2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29b2c0: 0x8d4211ac  lw          $v0, 0x11AC($t2)
    ctx->pc = 0x29b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29b2c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b2c8: 0x227182a  slt         $v1, $s1, $a3
    ctx->pc = 0x29b2c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29b2cc: 0x24e6007f  addiu       $a2, $a3, 0x7F
    ctx->pc = 0x29b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x29b2d0: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x29b2d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x29b2d4: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29b2d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b2dc: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29b2dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29b2e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b2e4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b2e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b2e8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29b2e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29b2ec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B2ECu;
    SET_GPR_U32(ctx, 31, 0x29B2F4u);
    ctx->pc = 0x29B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B2ECu;
    // 0x29b2f0: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B2ECu, 0x29B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B2F4u;
label_29b2f4:
    // 0x29b2f4: 0x8ee61180  lw          $a2, 0x1180($s7)
    ctx->pc = 0x29b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b2f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29b2fc: 0x8c4311b4  lw          $v1, 0x11B4($v0)
    ctx->pc = 0x29b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x29b300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b304: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b308: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29b308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29b30c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29b30cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b310: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29b310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29b314: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b314u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b318: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29b318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29b31c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b320: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b320u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b324: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B324u;
    SET_GPR_U32(ctx, 31, 0x29B32Cu);
    ctx->pc = 0x29B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B324u;
    // 0x29b328: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B324u, 0x29B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B32Cu;
label_29b32c:
    // 0x29b32c: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29b32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29b330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b334: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B334u;
    SET_GPR_U32(ctx, 31, 0x29B33Cu);
    ctx->pc = 0x29B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B334u;
    // 0x29b338: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B334u, 0x29B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B33Cu;
label_29b33c:
    // 0x29b33c: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b340: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x29b340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29b344: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29b344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b34c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29b34cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b350: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29b350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29b354: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b358: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b358u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b35c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b360: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b360u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b364: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b364u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b368: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b36c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b370: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29b370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29b374: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29b374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29b378: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b37c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B37Cu;
    SET_GPR_U32(ctx, 31, 0x29B384u);
    ctx->pc = 0x29B380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B37Cu;
    // 0x29b380: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B37Cu, 0x29B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B384u;
label_29b384:
    // 0x29b384: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29b384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b388: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29b388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29b38c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29b38cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29b390: 0x8c6611ac  lw          $a2, 0x11AC($v1)
    ctx->pc = 0x29b390u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29b394: 0x8d4711c8  lw          $a3, 0x11C8($t2)
    ctx->pc = 0x29b394u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29b398: 0x224282a  slt         $a1, $s1, $a0
    ctx->pc = 0x29b398u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29b39c: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29b3a0: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29b3a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29b3a4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x29b3a4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29b3a8: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x29b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4540)));
    // 0x29b3ac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b3b0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29b3b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29b3b4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b3b8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b3bc: 0x3c0821b0  lui         $t0, 0x21B0
    ctx->pc = 0x29b3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8624 << 16));
    // 0x29b3c0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29b3c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29b3c4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29b3c8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b3c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b3cc: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29b3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29b3d0: 0x3409800e  ori         $t1, $zero, 0x800E
    ctx->pc = 0x29b3d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29b3d4: 0x94db8  dsll        $t1, $t1, 22
    ctx->pc = 0x29b3d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 22);
    // 0x29b3d8: 0x35298c00  ori         $t1, $t1, 0x8C00
    ctx->pc = 0x29b3d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)35840);
    // 0x29b3dc: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x29b3dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x29b3e0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29b3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b3e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3e8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x29b3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x29b3ec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B3ECu;
    SET_GPR_U32(ctx, 31, 0x29B3F4u);
    ctx->pc = 0x29B3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3ECu;
    // 0x29b3f0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B3ECu, 0x29B3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B3F4u;
label_29b3f4:
    // 0x29b3f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b3f8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29b3fc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B3FCu;
    SET_GPR_U32(ctx, 31, 0x29B404u);
    ctx->pc = 0x29B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B3FCu;
    // 0x29b400: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B3FCu, 0x29B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B404u;
label_29b404:
    // 0x29b404: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b408: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x29b408u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b40c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29b410: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x29b410u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29b414: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29b418: 0x1840005d  blez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x29B418u;
    {
        const bool branch_taken_0x29b418 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B418u;
        // 0x29b41c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b418) {
            ctx->pc = 0x29B590u;
            goto label_29b590;
        }
    }
    ctx->pc = 0x29B420u;
    // 0x29b420: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x29b420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b424: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x29b424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29b428: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29b42c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x29b42cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b430: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x29b430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29b434: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29b434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_29b438:
    // 0x29b438: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29b438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b43c: 0x8c6211b4  lw          $v0, 0x11B4($v1)
    ctx->pc = 0x29b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4532)));
    // 0x29b440: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b444: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29b448: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b44c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b450: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29b450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29b454: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29b458: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29b458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29b45c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b45cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b460: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B460u;
    SET_GPR_U32(ctx, 31, 0x29B468u);
    ctx->pc = 0x29B464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B460u;
    // 0x29b464: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B460u, 0x29B468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B468u;
label_29b468:
    // 0x29b468: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x29b46c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x29b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b470: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b474: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b478: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b47c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b480: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29b480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29b484: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29b488: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B488u;
    SET_GPR_U32(ctx, 31, 0x29B490u);
    ctx->pc = 0x29B48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B488u;
    // 0x29b48c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B488u, 0x29B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B490u;
label_29b490:
    // 0x29b490: 0x8e821180  lw          $v0, 0x1180($s4)
    ctx->pc = 0x29b490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29b494: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29b494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29b498: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29b498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29b49c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29b49cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b4a0: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29b4a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29b4a4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b4a8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29b4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29b4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b4b0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b4b4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b4b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b4b8: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29b4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29b4bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b4c0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29b4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29b4c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4c8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29b4c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29b4cc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B4CCu;
    SET_GPR_U32(ctx, 31, 0x29B4D4u);
    ctx->pc = 0x29B4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B4CCu;
    // 0x29b4d0: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B4CCu, 0x29B4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4D4u;
label_29b4d4:
    // 0x29b4d4: 0x8e821180  lw          $v0, 0x1180($s4)
    ctx->pc = 0x29b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29b4d8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x29b4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29b4dc: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29b4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29b4e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4e4: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x29b4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29b4e8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b4ec: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x29b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b4f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b4f4: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x29b4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29b4f8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x29b4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29b4fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b4fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b500: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b500u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b504: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29b504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29b508: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b50c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b510: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b514: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29b514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b51c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b520: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29b520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b524: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29b524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29b528: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B528u;
    SET_GPR_U32(ctx, 31, 0x29B530u);
    ctx->pc = 0x29B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B528u;
    // 0x29b52c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B528u, 0x29B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B530u;
label_29b530:
    // 0x29b530: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29b530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29b534: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29b534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b538: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29b538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29b53c: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29b53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29b540: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29b540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29b544: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b548: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b548u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b54c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29b54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29b550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b554: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b558: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29b558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b55c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b560: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b564: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B564u;
    SET_GPR_U32(ctx, 31, 0x29B56Cu);
    ctx->pc = 0x29B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B564u;
    // 0x29b568: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B564u, 0x29B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B56Cu;
label_29b56c:
    // 0x29b56c: 0x8e841180  lw          $a0, 0x1180($s4)
    ctx->pc = 0x29b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29b570: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b574: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29b574u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29b578: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29b57c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29b57cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29b580: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29b580u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29b584: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29b584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29b588: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x29B588u;
    {
        const bool branch_taken_0x29b588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B588u;
        // 0x29b58c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b588) {
            ctx->pc = 0x29B438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b438;
        }
    }
    ctx->pc = 0x29B590u;
label_29b590:
    // 0x29b590: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29b594: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    // 0x29b598: 0x3508001a  ori         $t0, $t0, 0x1A
    ctx->pc = 0x29b598u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26);
    // 0x29b59c: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x29b59cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29b5a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5a4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b5a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29b5ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b5b0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b5b4: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b5b8: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b5bc: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x29b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b5c0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b5c4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x29b5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b5c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29b5cc: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b5ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b5d0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b5d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b5d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b5d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b5dc: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29b5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29b5e0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b5e4: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29b5e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29b5e8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B5E8u;
    SET_GPR_U32(ctx, 31, 0x29B5F0u);
    ctx->pc = 0x29B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5E8u;
    // 0x29b5ec: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B5E8u, 0x29B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B5F0u;
label_29b5f0:
    // 0x29b5f0: 0x9651433a  lhu         $s1, 0x433A($s2)
    ctx->pc = 0x29b5f0u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 17210)));
    // 0x29b5f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29b5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b5f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5fc: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29B5FCu;
    SET_GPR_U32(ctx, 31, 0x29B604u);
    ctx->pc = 0x29B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5FCu;
    // 0x29b600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29B5FCu, 0x29B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B604u;
label_29b604:
    // 0x29b604: 0x118023  negu        $s0, $s1
    ctx->pc = 0x29b604u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x29b608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b60c: 0xc0a7f78  jal         func_29FDE0
    ctx->pc = 0x29B60Cu;
    SET_GPR_U32(ctx, 31, 0x29B614u);
    ctx->pc = 0x29B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B60Cu;
    // 0x29b610: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FDE0u, 0x29B60Cu, 0x29B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B614u;
label_29b614:
    // 0x29b614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b618: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b61c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b620: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29b620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b624: 0xc0a7fec  jal         func_29FFB0
    ctx->pc = 0x29B624u;
    SET_GPR_U32(ctx, 31, 0x29B62Cu);
    ctx->pc = 0x29B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B624u;
    // 0x29b628: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FFB0u, 0x29B624u, 0x29B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B62Cu;
label_29b62c:
    // 0x29b62c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b634: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b63c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b640: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29b640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b644: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b648: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29b648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b64c: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B64Cu;
    SET_GPR_U32(ctx, 31, 0x29B654u);
    ctx->pc = 0x29B650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B64Cu;
    // 0x29b650: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B64Cu, 0x29B654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B654u;
label_29b654:
    // 0x29b654: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b65c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b660: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b664: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b668: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29b668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b66c: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b670: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29b670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b674: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B674u;
    SET_GPR_U32(ctx, 31, 0x29B67Cu);
    ctx->pc = 0x29B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B674u;
    // 0x29b678: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B674u, 0x29B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B67Cu;
label_29b67c:
    // 0x29b67c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b680: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29b680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b688: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b68c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b690: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b694: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b698: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29b698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b69c: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B69Cu;
    SET_GPR_U32(ctx, 31, 0x29B6A4u);
    ctx->pc = 0x29B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B69Cu;
    // 0x29b6a0: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B69Cu, 0x29B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6A4u;
label_29b6a4:
    // 0x29b6a4: 0x92544335  lbu         $s4, 0x4335($s2)
    ctx->pc = 0x29b6a4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17205)));
    // 0x29b6a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29b6ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b6b0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x29b6b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x29b6b4: 0x12820035  beq         $s4, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x29B6B4u;
    {
        const bool branch_taken_0x29b6b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x29B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B6B4u;
        // 0x29b6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6b4) {
            ctx->pc = 0x29B78Cu;
            goto label_29b78c;
        }
    }
    ctx->pc = 0x29B6BCu;
    // 0x29b6bc: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x29b6bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x29b6c0: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x29b6c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x29b6c4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x29b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_29b6c8:
    // 0x29b6c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29b6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b6cc: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x29b6ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x29b6d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6d8: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29B6D8u;
    SET_GPR_U32(ctx, 31, 0x29B6E0u);
    ctx->pc = 0x29B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6D8u;
    // 0x29b6dc: 0x118023  negu        $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29B6D8u, 0x29B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6E0u;
label_29b6e0:
    // 0x29b6e0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x29b6e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x29b6e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6e8: 0xc0a7f78  jal         func_29FDE0
    ctx->pc = 0x29B6E8u;
    SET_GPR_U32(ctx, 31, 0x29B6F0u);
    ctx->pc = 0x29B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B6E8u;
    // 0x29b6ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FDE0u, 0x29B6E8u, 0x29B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B6F0u;
label_29b6f0:
    // 0x29b6f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b6f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b6f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29b6fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b700: 0xc0a7fec  jal         func_29FFB0
    ctx->pc = 0x29B700u;
    SET_GPR_U32(ctx, 31, 0x29B708u);
    ctx->pc = 0x29B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B700u;
    // 0x29b704: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FFB0u, 0x29B700u, 0x29B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B708u;
label_29b708:
    // 0x29b708: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b718: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b71c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29b71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b720: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b724: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29b724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b728: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B728u;
    SET_GPR_U32(ctx, 31, 0x29B730u);
    ctx->pc = 0x29B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B728u;
    // 0x29b72c: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B728u, 0x29B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B730u;
label_29b730:
    // 0x29b730: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b734: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b738: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b73c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b740: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b744: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29b744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b748: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b74c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29b74cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b750: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B750u;
    SET_GPR_U32(ctx, 31, 0x29B758u);
    ctx->pc = 0x29B754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B750u;
    // 0x29b754: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B750u, 0x29B758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B758u;
label_29b758:
    // 0x29b758: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x29b758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29b75c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x29b75cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b760: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b764: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29b764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b768: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29b768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29b76c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29b76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b770: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x29b770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x29b774: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x29b774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b778: 0xc0a80b4  jal         func_2A02D0
    ctx->pc = 0x29B778u;
    SET_GPR_U32(ctx, 31, 0x29B780u);
    ctx->pc = 0x29B77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B778u;
    // 0x29b77c: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A02D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A02D0u, 0x29B778u, 0x29B780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B780u;
label_29b780:
    // 0x29b780: 0x1695ffd1  bne         $s4, $s5, . + 4 + (-0x2F << 2)
    ctx->pc = 0x29B780u;
    {
        const bool branch_taken_0x29b780 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 21));
        ctx->pc = 0x29B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B780u;
        // 0x29b784: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b780) {
            ctx->pc = 0x29B6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b6c8;
        }
    }
    ctx->pc = 0x29B788u;
    // 0x29b788: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29b78c:
    // 0x29b78c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29b78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b790: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29b794: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B794u;
    SET_GPR_U32(ctx, 31, 0x29B79Cu);
    ctx->pc = 0x29B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B794u;
    // 0x29b798: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B794u, 0x29B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B79Cu;
label_29b79c:
    // 0x29b79c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29b79cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7a0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29b7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29b7a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7a8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B7A8u;
    SET_GPR_U32(ctx, 31, 0x29B7B0u);
    ctx->pc = 0x29B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7A8u;
    // 0x29b7ac: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B7A8u, 0x29B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7B0u;
label_29b7b0:
    // 0x29b7b0: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b7b4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29b7b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b7b8: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29b7b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29b7bc: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x29b7bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b7c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7c4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29b7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b7c8: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29b7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29b7cc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29b7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29b7d0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29b7d4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29b7d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29b7d8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b7d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b7dc: 0x1463025  or          $a2, $t2, $a2
    ctx->pc = 0x29b7dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x29b7e0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B7E0u;
    SET_GPR_U32(ctx, 31, 0x29B7E8u);
    ctx->pc = 0x29B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7E0u;
    // 0x29b7e4: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B7E0u, 0x29B7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7E8u;
label_29b7e8:
    // 0x29b7e8: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29b7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b7ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7f0: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b7f4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29b7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29b7f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b7fc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b800: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29b804: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29b804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29b808: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B808u;
    SET_GPR_U32(ctx, 31, 0x29B810u);
    ctx->pc = 0x29B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B808u;
    // 0x29b80c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B808u, 0x29B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B810u;
label_29b810:
    // 0x29b810: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29b810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29b814: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29b818: 0x34c60068  ori         $a2, $a2, 0x68
    ctx->pc = 0x29b818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)104);
    // 0x29b81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b820: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B820u;
    SET_GPR_U32(ctx, 31, 0x29B828u);
    ctx->pc = 0x29B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B820u;
    // 0x29b824: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B820u, 0x29B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B828u;
label_29b828:
    // 0x29b828: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29b828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29b82c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29b830: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29b830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b838: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b83c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29b83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29b840: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b844: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29b844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29b848: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29b848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b84c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b850: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B850u;
    SET_GPR_U32(ctx, 31, 0x29B858u);
    ctx->pc = 0x29B854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B850u;
    // 0x29b854: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B850u, 0x29B858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B858u;
label_29b858:
    // 0x29b858: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29b858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b85c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29b860: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29b864: 0x8c4611ac  lw          $a2, 0x11AC($v0)
    ctx->pc = 0x29b864u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29b868: 0x8c6711c8  lw          $a3, 0x11C8($v1)
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29b86c: 0x204282a  slt         $a1, $s0, $a0
    ctx->pc = 0x29b86cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29b870: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29b874: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29b874u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29b878: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x29b878u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29b87c: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x29b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4540)));
    // 0x29b880: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b884: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29b884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29b888: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b88c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29b890: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x29b890u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x29b894: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29b894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29b898: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29b898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29b89c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b89cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b8a0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29b8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29b8a4: 0x34098100  ori         $t1, $zero, 0x8100
    ctx->pc = 0x29b8a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29b8a8: 0x94ef8  dsll        $t1, $t1, 27
    ctx->pc = 0x29b8a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 27);
    // 0x29b8ac: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x29b8acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x29b8b0: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x29b8b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x29b8b4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29b8b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29b8b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8bc: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x29b8bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x29b8c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B8C0u;
    SET_GPR_U32(ctx, 31, 0x29B8C8u);
    ctx->pc = 0x29B8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8C0u;
    // 0x29b8c4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B8C0u, 0x29B8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8C8u;
label_29b8c8:
    // 0x29b8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8cc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29b8d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B8D0u;
    SET_GPR_U32(ctx, 31, 0x29B8D8u);
    ctx->pc = 0x29B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B8D0u;
    // 0x29b8d4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B8D0u, 0x29B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B8D8u;
label_29b8d8:
    // 0x29b8d8: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29b8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29b8dc: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29b8dcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29b8e0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x29b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x29b8e4: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29b8e4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29b8e8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29b8e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29b8ec: 0x18400060  blez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x29B8ECu;
    {
        const bool branch_taken_0x29b8ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B8ECu;
        // 0x29b8f0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8ec) {
            ctx->pc = 0x29BA70u;
            goto label_29ba70;
        }
    }
    ctx->pc = 0x29B8F4u;
    // 0x29b8f4: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x29b8f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8f8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x29b8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b8fc: 0x262a021  addu        $s4, $s3, $v0
    ctx->pc = 0x29b8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29b900: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x29b900u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x29b904: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x29b904u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b908: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29b908u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29b90c: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x29b90cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29b910: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x29b910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29b914: 0x0  nop
    ctx->pc = 0x29b914u;
    // NOP
label_29b918:
    // 0x29b918: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x29b918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b91c: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29b920: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29b928: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29b928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29b92c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29b930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b934: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29b934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29b938: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B938u;
    SET_GPR_U32(ctx, 31, 0x29B940u);
    ctx->pc = 0x29B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B938u;
    // 0x29b93c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B938u, 0x29B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B940u;
label_29b940:
    // 0x29b940: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29b940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b944: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x29b944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x29b948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b94c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b950: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x29b950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x29b954: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b954u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b958: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b958u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b95c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29b95cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29b960: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29b960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29b964: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B964u;
    SET_GPR_U32(ctx, 31, 0x29B96Cu);
    ctx->pc = 0x29B968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B964u;
    // 0x29b968: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B964u, 0x29B96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B96Cu;
label_29b96c:
    // 0x29b96c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29b970: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29b970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29b974: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x29b974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x29b978: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29b978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29b97c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29b97cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29b980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b988: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b98c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29b98cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29b990: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29b994: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29b994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29b998: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29b99c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29b99cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29b9a0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29B9A0u;
    SET_GPR_U32(ctx, 31, 0x29B9A8u);
    ctx->pc = 0x29B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B9A0u;
    // 0x29b9a4: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29B9A0u, 0x29B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B9A8u;
label_29b9a8:
    // 0x29b9a8: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29b9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29b9ac: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x29b9acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29b9b0: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29b9b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29b9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b9b8: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x29b9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x29b9bc: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29b9c0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29b9c4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x29b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29b9c8: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x29b9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29b9cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b9d0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29b9d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29b9d4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29b9d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29b9d8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29b9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29b9dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29b9e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29b9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29b9e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29b9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b9e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29b9ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29b9f0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b9f4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29b9f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29b9f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29b9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29b9fc: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29b9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29ba00: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BA00u;
    SET_GPR_U32(ctx, 31, 0x29BA08u);
    ctx->pc = 0x29BA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA00u;
    // 0x29ba04: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BA00u, 0x29BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA08u;
label_29ba08:
    // 0x29ba08: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29ba08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ba0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ba0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba10: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x29ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x29ba14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29ba18: 0x8e07118c  lw          $a3, 0x118C($s0)
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29ba1c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29ba20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ba24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29ba24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29ba28: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29ba28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29ba2c: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29ba30: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ba34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ba38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ba3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ba3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ba40: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ba40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ba44: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BA44u;
    SET_GPR_U32(ctx, 31, 0x29BA4Cu);
    ctx->pc = 0x29BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BA44u;
    // 0x29ba48: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BA44u, 0x29BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BA4Cu;
label_29ba4c:
    // 0x29ba4c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x29ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ba50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ba54: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ba54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ba58: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x29ba58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x29ba5c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ba5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ba60: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x29ba60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x29ba64: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29ba64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ba68: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x29BA68u;
    {
        const bool branch_taken_0x29ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BA68u;
        // 0x29ba6c: 0x8e02118c  lw          $v0, 0x118C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba68) {
            ctx->pc = 0x29B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b918;
        }
    }
    ctx->pc = 0x29BA70u;
label_29ba70:
    // 0x29ba70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29ba74: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29ba74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29ba78: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29ba7c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29ba7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ba80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29ba84: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29ba84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ba88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29ba88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29ba8c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29ba8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ba90: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x29ba90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ba94: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29ba94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ba98: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x29ba98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ba9c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x29ba9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29baa0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x29baa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29baa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29baa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29baa8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x29baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29baac: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29baacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x29BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAB0u;
        // 0x29bab4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BAB8u;
}
