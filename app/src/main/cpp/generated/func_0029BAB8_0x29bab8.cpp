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

// Function: func_0029BAB8
// Address: 0x29bab8 - 0x29ce70
void func_0029BAB8_0x29bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029BAB8_0x29bab8");
#endif

    switch (ctx->pc) {
        case 0x29bb3cu: goto label_29bb3c;
        case 0x29bb78u: goto label_29bb78;
        case 0x29bbc0u: goto label_29bbc0;
        case 0x29bbd0u: goto label_29bbd0;
        case 0x29bbe8u: goto label_29bbe8;
        case 0x29bbf8u: goto label_29bbf8;
        case 0x29bc2cu: goto label_29bc2c;
        case 0x29bc80u: goto label_29bc80;
        case 0x29bc90u: goto label_29bc90;
        case 0x29bca8u: goto label_29bca8;
        case 0x29bcb8u: goto label_29bcb8;
        case 0x29bce8u: goto label_29bce8;
        case 0x29bd18u: goto label_29bd18;
        case 0x29bd40u: goto label_29bd40;
        case 0x29bd84u: goto label_29bd84;
        case 0x29bdc8u: goto label_29bdc8;
        case 0x29be04u: goto label_29be04;
        case 0x29be5cu: goto label_29be5c;
        case 0x29be6cu: goto label_29be6c;
        case 0x29bec8u: goto label_29bec8;
        case 0x29bf14u: goto label_29bf14;
        case 0x29bf30u: goto label_29bf30;
        case 0x29bf64u: goto label_29bf64;
        case 0x29bfbcu: goto label_29bfbc;
        case 0x29bfe8u: goto label_29bfe8;
        case 0x29c018u: goto label_29c018;
        case 0x29c030u: goto label_29c030;
        case 0x29c074u: goto label_29c074;
        case 0x29c0a8u: goto label_29c0a8;
        case 0x29c0dcu: goto label_29c0dc;
        case 0x29c174u: goto label_29c174;
        case 0x29c17cu: goto label_29c17c;
        case 0x29c18cu: goto label_29c18c;
        case 0x29c19cu: goto label_29c19c;
        case 0x29c1acu: goto label_29c1ac;
        case 0x29c1e8u: goto label_29c1e8;
        case 0x29c220u: goto label_29c220;
        case 0x29c230u: goto label_29c230;
        case 0x29c27cu: goto label_29c27c;
        case 0x29c2ecu: goto label_29c2ec;
        case 0x29c2fcu: goto label_29c2fc;
        case 0x29c338u: goto label_29c338;
        case 0x29c368u: goto label_29c368;
        case 0x29c380u: goto label_29c380;
        case 0x29c3b8u: goto label_29c3b8;
        case 0x29c3dcu: goto label_29c3dc;
        case 0x29c41cu: goto label_29c41c;
        case 0x29c4a4u: goto label_29c4a4;
        case 0x29c4e8u: goto label_29c4e8;
        case 0x29c4fcu: goto label_29c4fc;
        case 0x29c50cu: goto label_29c50c;
        case 0x29c534u: goto label_29c534;
        case 0x29c544u: goto label_29c544;
        case 0x29c550u: goto label_29c550;
        case 0x29c558u: goto label_29c558;
        case 0x29c580u: goto label_29c580;
        case 0x29c590u: goto label_29c590;
        case 0x29c59cu: goto label_29c59c;
        case 0x29c5a4u: goto label_29c5a4;
        case 0x29c5ccu: goto label_29c5cc;
        case 0x29c5dcu: goto label_29c5dc;
        case 0x29c5e8u: goto label_29c5e8;
        case 0x29c5f0u: goto label_29c5f0;
        case 0x29c618u: goto label_29c618;
        case 0x29c628u: goto label_29c628;
        case 0x29c634u: goto label_29c634;
        case 0x29c63cu: goto label_29c63c;
        case 0x29c664u: goto label_29c664;
        case 0x29c674u: goto label_29c674;
        case 0x29c684u: goto label_29c684;
        case 0x29c690u: goto label_29c690;
        case 0x29c698u: goto label_29c698;
        case 0x29c6c0u: goto label_29c6c0;
        case 0x29c6d0u: goto label_29c6d0;
        case 0x29c6dcu: goto label_29c6dc;
        case 0x29c6e4u: goto label_29c6e4;
        case 0x29c70cu: goto label_29c70c;
        case 0x29c71cu: goto label_29c71c;
        case 0x29c728u: goto label_29c728;
        case 0x29c730u: goto label_29c730;
        case 0x29c758u: goto label_29c758;
        case 0x29c768u: goto label_29c768;
        case 0x29c774u: goto label_29c774;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c828u: goto label_29c828;
        case 0x29c830u: goto label_29c830;
        case 0x29c858u: goto label_29c858;
        case 0x29c868u: goto label_29c868;
        case 0x29c874u: goto label_29c874;
        case 0x29c87cu: goto label_29c87c;
        case 0x29c8a4u: goto label_29c8a4;
        case 0x29c8b4u: goto label_29c8b4;
        case 0x29c8c0u: goto label_29c8c0;
        case 0x29c8c8u: goto label_29c8c8;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c900u: goto label_29c900;
        case 0x29c90cu: goto label_29c90c;
        case 0x29c914u: goto label_29c914;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c958u: goto label_29c958;
        case 0x29c960u: goto label_29c960;
        case 0x29c988u: goto label_29c988;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9b4u: goto label_29c9b4;
        case 0x29c9c0u: goto label_29c9c0;
        case 0x29c9c8u: goto label_29c9c8;
        case 0x29c9f0u: goto label_29c9f0;
        case 0x29ca00u: goto label_29ca00;
        case 0x29ca0cu: goto label_29ca0c;
        case 0x29ca14u: goto label_29ca14;
        case 0x29ca3cu: goto label_29ca3c;
        case 0x29ca4cu: goto label_29ca4c;
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca98u: goto label_29ca98;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caacu: goto label_29caac;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cae4u: goto label_29cae4;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cde8u: goto label_29cde8;
        default: break;
    }

    ctx->pc = 0x29bab8u;

    // 0x29bab8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x29bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x29babc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29bac0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x29bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x29bac4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29bac8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x29bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x29bacc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29baccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bad0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x29bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x29bad4: 0x262a821  addu        $s5, $s3, $v0
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29bad8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x29bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x29badc: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x29badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x29bae0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29bae4: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x29bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x29bae8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x29bae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x29baec: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x29baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x29baf0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29baf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29baf4: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x29baf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x29baf8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29bafc: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x29bafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x29bb00: 0x24170e00  addiu       $s7, $zero, 0xE00
    ctx->pc = 0x29bb00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29bb04: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x29bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x29bb08: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x29bb08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb0c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x29bb10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29bb10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb14: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x29bb14u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x29bb18: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x29bb18u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x29bb1c: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x29bb1cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x29bb20: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x29bb20u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x29bb24: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x29bb24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x29bb28: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x29bb28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x29bb2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29bb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29bb30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29bb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29bb34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BB34u;
    SET_GPR_U32(ctx, 31, 0x29BB3Cu);
    ctx->pc = 0x29BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB34u;
    // 0x29bb38: 0xaea00018  sw          $zero, 0x18($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BB34u, 0x29BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB3Cu;
label_29bb3c:
    // 0x29bb3c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29bb40: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29bb44: 0x8c8211ac  lw          $v0, 0x11AC($a0)
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29bb48: 0x243282a  slt         $a1, $s2, $v1
    ctx->pc = 0x29bb48u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29bb4c: 0x2466007f  addiu       $a2, $v1, 0x7F
    ctx->pc = 0x29bb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29bb50: 0x65300b  movn        $a2, $v1, $a1
    ctx->pc = 0x29bb50u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29bb54: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29bb58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bb5c: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29bb5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29bb60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29bb64: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29bb64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29bb68: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29bb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29bb6c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29bb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29bb70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BB70u;
    SET_GPR_U32(ctx, 31, 0x29BB78u);
    ctx->pc = 0x29BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BB70u;
    // 0x29bb74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BB70u, 0x29BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB78u;
label_29bb78:
    // 0x29bb78: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29bb7c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x29bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29bb80: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29bb84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bb88: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29bb88u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29bb8c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29bb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29bb90: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29bb94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bb98: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29bb98u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29bb9c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29bb9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29bba0: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x29bba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29bba4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x29bba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29bba8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bba8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bbac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29bbb0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29bbb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29bbb4: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x29bbb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29bbb8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BBB8u;
    SET_GPR_U32(ctx, 31, 0x29BBC0u);
    ctx->pc = 0x29BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBB8u;
    // 0x29bbbc: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BBB8u, 0x29BBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBC0u;
label_29bbc0:
    // 0x29bbc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbc4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x29bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x29bbc8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BBC8u;
    SET_GPR_U32(ctx, 31, 0x29BBD0u);
    ctx->pc = 0x29BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBC8u;
    // 0x29bbcc: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BBC8u, 0x29BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBD0u;
label_29bbd0:
    // 0x29bbd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbd4: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29bbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29bbd8: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29bbd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29bbdc: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29bbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29bbe0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BBE0u;
    SET_GPR_U32(ctx, 31, 0x29BBE8u);
    ctx->pc = 0x29BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBE0u;
    // 0x29bbe4: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BBE0u, 0x29BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBE8u;
label_29bbe8:
    // 0x29bbe8: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x29bbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x29bbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bbf0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BBF0u;
    SET_GPR_U32(ctx, 31, 0x29BBF8u);
    ctx->pc = 0x29BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BBF0u;
    // 0x29bbf4: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BBF0u, 0x29BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BBF8u;
label_29bbf8:
    // 0x29bbf8: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29bbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29bbfc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x29bbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x29bc00: 0x3463000a  ori         $v1, $v1, 0xA
    ctx->pc = 0x29bc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x29bc04: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29bc08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc0c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29bc10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29bc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29bc14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29bc18: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29bc18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29bc1c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bc20: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29bc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29bc24: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BC24u;
    SET_GPR_U32(ctx, 31, 0x29BC2Cu);
    ctx->pc = 0x29BC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC24u;
    // 0x29bc28: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BC24u, 0x29BC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC2Cu;
label_29bc2c:
    // 0x29bc2c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29bc30: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29bc34: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x29bc34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29bc38: 0x3c042400  lui         $a0, 0x2400
    ctx->pc = 0x29bc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9216 << 16));
    // 0x29bc3c: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x29bc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29bc40: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29bc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29bc44: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29bc44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29bc48: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29bc48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29bc4c: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29bc4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29bc50: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29bc50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29bc54: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x29bc54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x29bc58: 0x34028100  ori         $v0, $zero, 0x8100
    ctx->pc = 0x29bc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29bc5c: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x29bc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x29bc60: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x29bc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x29bc64: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x29bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x29bc68: 0x2e63025  or          $a2, $s7, $a2
    ctx->pc = 0x29bc68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 6));
    // 0x29bc6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc70: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29bc70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29bc74: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29bc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29bc78: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BC78u;
    SET_GPR_U32(ctx, 31, 0x29BC80u);
    ctx->pc = 0x29BC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC78u;
    // 0x29bc7c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BC78u, 0x29BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC80u;
label_29bc80:
    // 0x29bc80: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x29bc80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29bc84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BC88u;
    SET_GPR_U32(ctx, 31, 0x29BC90u);
    ctx->pc = 0x29BC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BC88u;
    // 0x29bc8c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BC88u, 0x29BC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BC90u;
label_29bc90:
    // 0x29bc90: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x29bc90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29bc94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bc98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29bc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29bc9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29bc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bca0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BCA0u;
    SET_GPR_U32(ctx, 31, 0x29BCA8u);
    ctx->pc = 0x29BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCA0u;
    // 0x29bca4: 0x6303c  dsll32      $a2, $a2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BCA0u, 0x29BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCA8u;
label_29bca8:
    // 0x29bca8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29bcacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcb0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BCB0u;
    SET_GPR_U32(ctx, 31, 0x29BCB8u);
    ctx->pc = 0x29BCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BCB0u;
    // 0x29bcb4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BCB0u, 0x29BCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BCB8u;
label_29bcb8:
    // 0x29bcb8: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29bcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29bcbc: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x29bcbcu;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29bcc0: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29bcc4: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x29bcc4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29bcc8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29bcc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29bccc: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x29BCCCu;
    {
        const bool branch_taken_0x29bccc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BCCCu;
        // 0x29bcd0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bccc) {
            ctx->pc = 0x29BE28u;
            goto label_29be28;
        }
    }
    ctx->pc = 0x29BCD4u;
    // 0x29bcd4: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x29bcd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcd8: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29bcd8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29bcdc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29bcdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29bce0: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x29bce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29bce4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_29bce8:
    // 0x29bce8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29bce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcec: 0x8c6211b4  lw          $v0, 0x11B4($v1)
    ctx->pc = 0x29bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4532)));
    // 0x29bcf0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29bcf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29bcf4: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x29bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x29bcf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bcfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29bd00: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29bd00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29bd04: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29bd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29bd08: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29bd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29bd0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29bd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29bd10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BD10u;
    SET_GPR_U32(ctx, 31, 0x29BD18u);
    ctx->pc = 0x29BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD10u;
    // 0x29bd14: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BD10u, 0x29BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD18u;
label_29bd18:
    // 0x29bd18: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x29bd1c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x29bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29bd20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd24: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29bd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bd28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bd28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bd2c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29bd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29bd30: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29bd30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29bd34: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29bd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29bd38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BD38u;
    SET_GPR_U32(ctx, 31, 0x29BD40u);
    ctx->pc = 0x29BD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD38u;
    // 0x29bd3c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BD38u, 0x29BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD40u;
label_29bd40:
    // 0x29bd40: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29bd44: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29bd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29bd48: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29bd48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29bd4c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29bd4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29bd50: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29bd50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29bd54: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29bd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29bd58: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29bd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29bd5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29bd60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bd60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bd64: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29bd64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29bd68: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29bd68u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29bd6c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29bd6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29bd70: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29bd70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29bd74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd78: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29bd78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29bd7c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BD7Cu;
    SET_GPR_U32(ctx, 31, 0x29BD84u);
    ctx->pc = 0x29BD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BD7Cu;
    // 0x29bd80: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BD7Cu, 0x29BD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BD84u;
label_29bd84:
    // 0x29bd84: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x29bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x29bd88: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29bd8c: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29bd90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bd94: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29bd94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29bd98: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29bd9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29bda0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29bda4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bda4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bda8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29bda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29bdac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29bdb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bdb4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29bdb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29bdb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29bdb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29bdbc: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29bdbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29bdc0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BDC0u;
    SET_GPR_U32(ctx, 31, 0x29BDC8u);
    ctx->pc = 0x29BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDC0u;
    // 0x29bdc4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BDC0u, 0x29BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BDC8u;
label_29bdc8:
    // 0x29bdc8: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29bdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29bdcc: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29bdccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29bdd0: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29bdd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29bdd4: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29bdd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29bdd8: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29bddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bde0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29bde4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29bde8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29bdec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29bdecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29bdf0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29bdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29bdf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bdf8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29bdf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29bdfc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BDFCu;
    SET_GPR_U32(ctx, 31, 0x29BE04u);
    ctx->pc = 0x29BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BDFCu;
    // 0x29be00: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BDFCu, 0x29BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE04u;
label_29be04:
    // 0x29be04: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29be04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29be08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29be0c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29be0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29be10: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29be14: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29be14u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29be18: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29be18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29be1c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x29be1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29be20: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x29BE20u;
    {
        const bool branch_taken_0x29be20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BE20u;
        // 0x29be24: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29be20) {
            ctx->pc = 0x29BCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bce8;
        }
    }
    ctx->pc = 0x29BE28u;
label_29be28:
    // 0x29be28: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29be28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29be2c: 0x17b942  srl         $s7, $s7, 5
    ctx->pc = 0x29be2cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 23), 5));
    // 0x29be30: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29be30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29be34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29be34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be38: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29be3c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29be3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29be40: 0xafb70070  sw          $s7, 0x70($sp)
    ctx->pc = 0x29be40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 23));
    // 0x29be44: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29be44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29be48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29be48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29be4c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29be4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29be50: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29be50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29be54: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BE54u;
    SET_GPR_U32(ctx, 31, 0x29BE5Cu);
    ctx->pc = 0x29BE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE54u;
    // 0x29be58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BE54u, 0x29BE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE5Cu;
label_29be5c:
    // 0x29be5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29be60: 0x24060316  addiu       $a2, $zero, 0x316
    ctx->pc = 0x29be60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x29be64: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BE64u;
    SET_GPR_U32(ctx, 31, 0x29BE6Cu);
    ctx->pc = 0x29BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BE64u;
    // 0x29be68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BE64u, 0x29BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BE6Cu;
label_29be6c:
    // 0x29be6c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29be6cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29be70: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29be70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29be74: 0x8d4811c8  lw          $t0, 0x11C8($t2)
    ctx->pc = 0x29be74u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29be78: 0x3409fffc  ori         $t1, $zero, 0xFFFC
    ctx->pc = 0x29be78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x29be7c: 0x94d38  dsll        $t1, $t1, 20
    ctx->pc = 0x29be7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 20);
    // 0x29be80: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x29be80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
    // 0x29be84: 0x94ab8  dsll        $t1, $t1, 10
    ctx->pc = 0x29be84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 10);
    // 0x29be88: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29be8c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29be90: 0x8c8611ac  lw          $a2, 0x11AC($a0)
    ctx->pc = 0x29be90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29be94: 0x203382a  slt         $a3, $s0, $v1
    ctx->pc = 0x29be94u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29be98: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29be98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29be9c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x29be9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x29bea0: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x29bea0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29bea4: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29bea8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29bea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29beac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29beacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29beb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29beb4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29beb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29beb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29beb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bebc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29bebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29bec0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BEC0u;
    SET_GPR_U32(ctx, 31, 0x29BEC8u);
    ctx->pc = 0x29BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BEC0u;
    // 0x29bec4: 0xc93025  or          $a2, $a2, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BEC0u, 0x29BEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BEC8u;
label_29bec8:
    // 0x29bec8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29becc: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29bed0: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29bed4: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29bed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29bed8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29bedc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bee0: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29bee0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29bee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29bee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bee8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29beec: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29beecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29bef0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29bef0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29bef4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29bef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29bef8: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29bef8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29befc: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29befcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29bf00: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29bf00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29bf04: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29bf04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29bf08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29bf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29bf0c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BF0Cu;
    SET_GPR_U32(ctx, 31, 0x29BF14u);
    ctx->pc = 0x29BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF0Cu;
    // 0x29bf10: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BF0Cu, 0x29BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF14u;
label_29bf14:
    // 0x29bf14: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x29bf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x29bf18: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29bf18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29bf1c: 0x34c6ff80  ori         $a2, $a2, 0xFF80
    ctx->pc = 0x29bf1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65408);
    // 0x29bf20: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x29bf20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x29bf24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BF28u;
    SET_GPR_U32(ctx, 31, 0x29BF30u);
    ctx->pc = 0x29BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF28u;
    // 0x29bf2c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BF28u, 0x29BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF30u;
label_29bf30:
    // 0x29bf30: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29bf34: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x29bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29bf38: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29bf38u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29bf3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bf40: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29bf44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29bf48: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29bf48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29bf4c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29bf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29bf50: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29bf50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29bf54: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29bf54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29bf58: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bf58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bf5c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BF5Cu;
    SET_GPR_U32(ctx, 31, 0x29BF64u);
    ctx->pc = 0x29BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BF5Cu;
    // 0x29bf60: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BF5Cu, 0x29BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BF64u;
label_29bf64:
    // 0x29bf64: 0x8fc51180  lw          $a1, 0x1180($fp)
    ctx->pc = 0x29bf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29bf68: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29bf6c: 0x8c8311bc  lw          $v1, 0x11BC($a0)
    ctx->pc = 0x29bf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11BCu));
    // 0x29bf70: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29bf70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29bf74: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x29bf74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29bf78: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29bf7c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x29bf7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29bf80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29bf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29bf84: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29bf84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29bf88: 0x9d4611ac  lwu         $a2, 0x11AC($t2)
    ctx->pc = 0x29bf88u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 10), 4524)));
    // 0x29bf8c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29bf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29bf90: 0x3c072020  lui         $a3, 0x2020
    ctx->pc = 0x29bf90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8224 << 16));
    // 0x29bf94: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29bf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29bf98: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29bf98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29bf9c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x29bf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x29bfa0: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x29bfa0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x29bfa4: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29bfa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29bfa8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29bfa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29bfac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfb0: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29bfb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29bfb4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29BFB4u;
    SET_GPR_U32(ctx, 31, 0x29BFBCu);
    ctx->pc = 0x29BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29BFB4u;
    // 0x29bfb8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29BFB4u, 0x29BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BFBCu;
label_29bfbc:
    // 0x29bfbc: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29bfc0: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29bfc0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29bfc4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29bfc8: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29bfc8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29bfcc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29bfccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29bfd0: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x29BFD0u;
    {
        const bool branch_taken_0x29bfd0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BFD0u;
        // 0x29bfd4: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bfd0) {
            ctx->pc = 0x29C100u;
            goto label_29c100;
        }
    }
    ctx->pc = 0x29BFD8u;
    // 0x29bfd8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29bfd8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29bfdc: 0x3c150058  lui         $s5, 0x58
    ctx->pc = 0x29bfdcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x29bfe0: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x29bfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29bfe4: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29bfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11B4u));
label_29bfe8:
    // 0x29bfe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29bfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfec: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x29bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x29bff0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29bff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29bff4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29bff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29bff8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29bffc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29bffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29c000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c004: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29c004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29c008: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29c008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29c00c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29c00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29c010: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C010u;
    SET_GPR_U32(ctx, 31, 0x29C018u);
    ctx->pc = 0x29C014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C010u;
    // 0x29c014: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C010u, 0x29C018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C018u;
label_29c018:
    // 0x29c018: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x29c018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29c01c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29c020: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29c020u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29c024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c028: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C028u;
    SET_GPR_U32(ctx, 31, 0x29C030u);
    ctx->pc = 0x29C02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C028u;
    // 0x29c02c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C028u, 0x29C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C030u;
label_29c030:
    // 0x29c030: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29c030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29c034: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x29c034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x29c038: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29c038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29c03c: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x29c03cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29c040: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x29c040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29c044: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29c044u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29c048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c04c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c050: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29c050u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c054: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29c054u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29c058: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29c058u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29c05c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c05cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c060: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29c060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29c064: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29c064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29c068: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29c068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29c06c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C06Cu;
    SET_GPR_U32(ctx, 31, 0x29C074u);
    ctx->pc = 0x29C070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C06Cu;
    // 0x29c070: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C06Cu, 0x29C074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C074u;
label_29c074:
    // 0x29c074: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29c074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29c078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c07c: 0x8e8611b4  lw          $a2, 0x11B4($s4)
    ctx->pc = 0x29c07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29c080: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c084: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29c084u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29c088: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29c088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x29c08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c090: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29c090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29c094: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29c094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29c098: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x29c098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x29c09c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c09cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c0a0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C0A0u;
    SET_GPR_U32(ctx, 31, 0x29C0A8u);
    ctx->pc = 0x29C0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0A0u;
    // 0x29c0a4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C0A0u, 0x29C0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0A8u;
label_29c0a8:
    // 0x29c0a8: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29c0ac: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x29c0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29c0b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29c0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29c0b4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x29c0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x29c0b8: 0x8ea66b80  lw          $a2, 0x6B80($s5)
    ctx->pc = 0x29c0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x29c0bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0c0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29c0c4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29c0c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29c0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29c0cc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c0d0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c0d4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C0D4u;
    SET_GPR_U32(ctx, 31, 0x29C0DCu);
    ctx->pc = 0x29C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C0D4u;
    // 0x29c0d8: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C0D4u, 0x29C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C0DCu;
label_29c0dc:
    // 0x29c0dc: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29c0e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c0e4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29c0e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29c0e8: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29c0ec: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29c0ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29c0f0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29c0f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29c0f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29c0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29c0f8: 0x5440ffbb  bnel        $v0, $zero, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29C0F8u;
    {
        const bool branch_taken_0x29c0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c0f8) {
            ctx->pc = 0x29C0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C0F8u;
            // 0x29c0fc: 0x8e8611b4  lw          $a2, 0x11B4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29BFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29bfe8;
        }
    }
    ctx->pc = 0x29C100u;
label_29c100:
    // 0x29c100: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29c104: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x29c104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x29c108: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x29c108u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29c10c: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x29c10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x29c110: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29c114: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x29c114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29c118: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x29c118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x29c11c: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x29c11cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x29c120: 0xa7a30002  sh          $v1, 0x2($sp)
    ctx->pc = 0x29c120u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x29c124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29c124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c128: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x29c128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x29c12c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x29c12cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x29c130: 0xa7a80056  sh          $t0, 0x56($sp)
    ctx->pc = 0x29c130u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 8));
    // 0x29c134: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c138: 0xa7a90058  sh          $t1, 0x58($sp)
    ctx->pc = 0x29c138u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 88), (uint16_t)GPR_U32(ctx, 9));
    // 0x29c13c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29c13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c140: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x29c140u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x29c144: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x29c144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c148: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x29c148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x29c14c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c14cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c150: 0xa7a80026  sh          $t0, 0x26($sp)
    ctx->pc = 0x29c150u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 38), (uint16_t)GPR_U32(ctx, 8));
    // 0x29c154: 0xa7a90028  sh          $t1, 0x28($sp)
    ctx->pc = 0x29c154u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 9));
    // 0x29c158: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x29c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x29c15c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x29c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x29c160: 0xa7a00024  sh          $zero, 0x24($sp)
    ctx->pc = 0x29c160u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x29c164: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x29c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x29c168: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x29c168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x29c16c: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x29C16Cu;
    SET_GPR_U32(ctx, 31, 0x29C174u);
    ctx->pc = 0x29C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C16Cu;
    // 0x29c170: 0xa7a00054  sh          $zero, 0x54($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x29C16Cu, 0x29C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C174u;
label_29c174:
    // 0x29c174: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29C174u;
    SET_GPR_U32(ctx, 31, 0x29C17Cu);
    ctx->pc = 0x29C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C174u;
    // 0x29c178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29C174u, 0x29C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C17Cu;
label_29c17c:
    // 0x29c17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c180: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c184: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29C184u;
    SET_GPR_U32(ctx, 31, 0x29C18Cu);
    ctx->pc = 0x29C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C184u;
    // 0x29c188: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29C184u, 0x29C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C18Cu;
label_29c18c:
    // 0x29c18c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c194: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29C194u;
    SET_GPR_U32(ctx, 31, 0x29C19Cu);
    ctx->pc = 0x29C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C194u;
    // 0x29c198: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29C194u, 0x29C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C19Cu;
label_29c19c:
    // 0x29c19c: 0x24060256  addiu       $a2, $zero, 0x256
    ctx->pc = 0x29c19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x29c1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1a4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C1A4u;
    SET_GPR_U32(ctx, 31, 0x29C1ACu);
    ctx->pc = 0x29C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1A4u;
    // 0x29c1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C1A4u, 0x29C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1ACu;
label_29c1ac:
    // 0x29c1ac: 0x8fc71180  lw          $a3, 0x1180($fp)
    ctx->pc = 0x29c1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c1b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29c1b4: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x29c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29c1b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1bc: 0x227182a  slt         $v1, $s1, $a3
    ctx->pc = 0x29c1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29c1c0: 0x24e6007f  addiu       $a2, $a3, 0x7F
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
    // 0x29c1c4: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x29c1c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x29c1c8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x29c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x29c1cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29c1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29c1d0: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29c1d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29c1d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29c1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29c1d8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c1dc: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29c1dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29c1e0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C1E0u;
    SET_GPR_U32(ctx, 31, 0x29C1E8u);
    ctx->pc = 0x29C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1E0u;
    // 0x29c1e4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C1E0u, 0x29C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1E8u;
label_29c1e8:
    // 0x29c1e8: 0x8fc61180  lw          $a2, 0x1180($fp)
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c1ec: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29c1ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29c1f0: 0x8d4311b4  lw          $v1, 0x11B4($t2)
    ctx->pc = 0x29c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11B4u));
    // 0x29c1f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1f8: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29c1fc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29c1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29c200: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29c200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29c204: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29c208: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29c208u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29c20c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29c20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x29c210: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29c210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29c214: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c214u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c218: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C218u;
    SET_GPR_U32(ctx, 31, 0x29C220u);
    ctx->pc = 0x29C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C218u;
    // 0x29c21c: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C218u, 0x29C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C220u;
label_29c220:
    // 0x29c220: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29c220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29c224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c228: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C228u;
    SET_GPR_U32(ctx, 31, 0x29C230u);
    ctx->pc = 0x29C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C228u;
    // 0x29c22c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C228u, 0x29C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C230u;
label_29c230:
    // 0x29c230: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29c234: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x29c234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29c238: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29c238u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29c23c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c240: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x29c240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c244: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29c244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29c248: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29c248u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29c24c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29c24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29c250: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29c250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29c254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c258: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29c258u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29c25c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29c25cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29c260: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29c260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29c264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29c268: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29c268u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29c26c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29c26cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29c270: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29c274: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C274u;
    SET_GPR_U32(ctx, 31, 0x29C27Cu);
    ctx->pc = 0x29C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C274u;
    // 0x29c278: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C274u, 0x29C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C27Cu;
label_29c27c:
    // 0x29c27c: 0x8fc41180  lw          $a0, 0x1180($fp)
    ctx->pc = 0x29c27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c280: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29c280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29c284: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29c284u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29c288: 0x8c6611ac  lw          $a2, 0x11AC($v1)
    ctx->pc = 0x29c288u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29c28c: 0x8d4711c8  lw          $a3, 0x11C8($t2)
    ctx->pc = 0x29c28cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29c290: 0x224282a  slt         $a1, $s1, $a0
    ctx->pc = 0x29c290u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29c294: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29c294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29c298: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29c298u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29c29c: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x29c29cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29c2a0: 0x8d4311bc  lw          $v1, 0x11BC($t2)
    ctx->pc = 0x29c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4540)));
    // 0x29c2a4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29c2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29c2a8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29c2a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29c2ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29c2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29c2b0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29c2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29c2b4: 0x3c0821b0  lui         $t0, 0x21B0
    ctx->pc = 0x29c2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8624 << 16));
    // 0x29c2b8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29c2b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29c2bc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29c2c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29c2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29c2c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x29c2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x29c2c8: 0x3409800e  ori         $t1, $zero, 0x800E
    ctx->pc = 0x29c2c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29c2cc: 0x94db8  dsll        $t1, $t1, 22
    ctx->pc = 0x29c2ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 22);
    // 0x29c2d0: 0x35298c00  ori         $t1, $t1, 0x8C00
    ctx->pc = 0x29c2d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)35840);
    // 0x29c2d4: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x29c2d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x29c2d8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29c2d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29c2dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2e0: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x29c2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x29c2e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C2E4u;
    SET_GPR_U32(ctx, 31, 0x29C2ECu);
    ctx->pc = 0x29C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2E4u;
    // 0x29c2e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C2E4u, 0x29C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2ECu;
label_29c2ec:
    // 0x29c2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c2f0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29c2f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C2F4u;
    SET_GPR_U32(ctx, 31, 0x29C2FCu);
    ctx->pc = 0x29C2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C2F4u;
    // 0x29c2f8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C2F4u, 0x29C2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C2FCu;
label_29c2fc:
    // 0x29c2fc: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c300: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x29c300u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c304: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x29c304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
    // 0x29c308: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x29c308u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29c30c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29c30cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29c310: 0x1840004b  blez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x29C310u;
    {
        const bool branch_taken_0x29c310 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C310u;
        // 0x29c314: 0x3c0a02d  daddu       $s4, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c310) {
            ctx->pc = 0x29C440u;
            goto label_29c440;
        }
    }
    ctx->pc = 0x29C318u;
    // 0x29c318: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x29c318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29c31c: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x29c31cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x29c320: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x29c320u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x29c324: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29c324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29c328: 0x24160800  addiu       $s6, $zero, 0x800
    ctx->pc = 0x29c328u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29c32c: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29c32cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29c330: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29c330u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29c334: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_29c338:
    // 0x29c338: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c33c: 0x8c6211b4  lw          $v0, 0x11B4($v1)
    ctx->pc = 0x29c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4532)));
    // 0x29c340: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c344: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x29c344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x29c348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c34c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29c350: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29c350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29c354: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29c354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29c358: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29c358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29c35c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29c35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29c360: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C360u;
    SET_GPR_U32(ctx, 31, 0x29C368u);
    ctx->pc = 0x29C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C360u;
    // 0x29c364: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C360u, 0x29C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C368u;
label_29c368:
    // 0x29c368: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x29c368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29c36c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x29c36cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x29c370: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x29c370u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29c374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c378: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x29C378u;
    SET_GPR_U32(ctx, 31, 0x29C380u);
    ctx->pc = 0x29C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C378u;
    // 0x29c37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998A0u, 0x29C378u, 0x29C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C380u;
label_29c380:
    // 0x29c380: 0x8e831180  lw          $v1, 0x1180($s4)
    ctx->pc = 0x29c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29c384: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c388: 0x8e266b80  lw          $a2, 0x6B80($s1)
    ctx->pc = 0x29c388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27520)));
    // 0x29c38c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29c38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29c390: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29c390u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29c394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29c394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29c398: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29c398u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c39c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29c39cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29c3a0: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x29c3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x29c3a4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c3a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c3a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29c3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29c3ac: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29c3acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29c3b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C3B0u;
    SET_GPR_U32(ctx, 31, 0x29C3B8u);
    ctx->pc = 0x29C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3B0u;
    // 0x29c3b4: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C3B0u, 0x29C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3B8u;
label_29c3b8:
    // 0x29c3b8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29c3bc: 0xc6ed119c  lwc1        $f13, 0x119C($s7)
    ctx->pc = 0x29c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c3c0: 0xc4801190  lwc1        $f0, 0x1190($a0)
    ctx->pc = 0x29c3c0u;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c3c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29c3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29c3cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29c3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c3d0: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x29c3d0u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[13]);
    // 0x29c3d4: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x29C3D4u;
    SET_GPR_U32(ctx, 31, 0x29C3DCu);
    ctx->pc = 0x29C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C3D4u;
    // 0x29c3d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998A0u, 0x29C3D4u, 0x29C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C3DCu;
label_29c3dc:
    // 0x29c3dc: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29c3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29c3e0: 0x8e266b80  lw          $a2, 0x6B80($s1)
    ctx->pc = 0x29c3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27520)));
    // 0x29c3e4: 0x8d42118c  lw          $v0, 0x118C($t2)
    ctx->pc = 0x29c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29c3e8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29c3e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29c3ec: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29c3ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29c3f0: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29c3f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29c3f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c3f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29c3fc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29c400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c404: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29c404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29c408: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29c408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29c40c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29c40cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29c410: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29c410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29c414: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C414u;
    SET_GPR_U32(ctx, 31, 0x29C41Cu);
    ctx->pc = 0x29C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C414u;
    // 0x29c418: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C414u, 0x29C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C41Cu;
label_29c41c:
    // 0x29c41c: 0x8e841180  lw          $a0, 0x1180($s4)
    ctx->pc = 0x29c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29c420: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c424: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29c424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29c428: 0x2482007f  addiu       $v0, $a0, 0x7F
    ctx->pc = 0x29c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
    // 0x29c42c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29c42cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29c430: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29c430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29c434: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29c434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29c438: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x29C438u;
    {
        const bool branch_taken_0x29c438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C438u;
        // 0x29c43c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c438) {
            ctx->pc = 0x29C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c338;
        }
    }
    ctx->pc = 0x29C440u;
label_29c440:
    // 0x29c440: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29c440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29c444: 0x3c080100  lui         $t0, 0x100
    ctx->pc = 0x29c444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)256 << 16));
    // 0x29c448: 0x3508001a  ori         $t0, $t0, 0x1A
    ctx->pc = 0x29c448u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)26);
    // 0x29c44c: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29c44cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29c450: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c454: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x29c454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29c458: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29c458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29c45c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29c45cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29c460: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x29c460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x29c464: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x29c464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x29c468: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29c468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29c46c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29c46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29c470: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29c470u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29c474: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29c478: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29c478u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29c47c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29c47cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29c480: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29c480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29c484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29c488: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29c488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29c48c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29c48cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29c490: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29c494: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x29c494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x29c498: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29c498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29c49c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29C49Cu;
    SET_GPR_U32(ctx, 31, 0x29C4A4u);
    ctx->pc = 0x29C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C49Cu;
    // 0x29c4a0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29C49Cu, 0x29C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4A4u;
label_29c4a4:
    // 0x29c4a4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29c4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29c4a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29c4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29c4ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29c4b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4b4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x29c4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x29c4b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c4bc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x29c4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c4c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c4c4: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x29c4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x29c4c8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x29c4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x29c4cc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29c4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29c4d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29c4d4: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x29c4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x29c4d8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x29c4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x29c4dc: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x29c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x29c4e0: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C4E0u;
    SET_GPR_U32(ctx, 31, 0x29C4E8u);
    ctx->pc = 0x29C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4E0u;
    // 0x29c4e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C4E0u, 0x29C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4E8u;
label_29c4e8:
    // 0x29c4e8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x29c4e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x29c4ec: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x29c4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x29c4f0: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x29c4f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29c4f4: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C4F4u;
    SET_GPR_U32(ctx, 31, 0x29C4FCu);
    ctx->pc = 0x29C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C4F4u;
    // 0x29c4f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C4F4u, 0x29C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C4FCu;
label_29c4fc:
    // 0x29c4fc: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x29c4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x29c500: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x29c500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x29c504: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C504u;
    SET_GPR_U32(ctx, 31, 0x29C50Cu);
    ctx->pc = 0x29C508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C504u;
    // 0x29c508: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C504u, 0x29C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C50Cu;
label_29c50c:
    // 0x29c50c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c510: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c514: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x29c514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29c518: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c518u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c51c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c524: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c528: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c52c: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C52Cu;
    SET_GPR_U32(ctx, 31, 0x29C534u);
    ctx->pc = 0x29C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C52Cu;
    // 0x29c530: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C52Cu, 0x29C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C534u;
label_29c534:
    // 0x29c534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c538: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c53c: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C53Cu;
    SET_GPR_U32(ctx, 31, 0x29C544u);
    ctx->pc = 0x29C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C53Cu;
    // 0x29c540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C53Cu, 0x29C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C544u;
label_29c544:
    // 0x29c544: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29c544u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29c548: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C548u;
    SET_GPR_U32(ctx, 31, 0x29C550u);
    ctx->pc = 0x29C54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C548u;
    // 0x29c54c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C548u, 0x29C550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C550u;
label_29c550:
    // 0x29c550: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C550u;
    SET_GPR_U32(ctx, 31, 0x29C558u);
    ctx->pc = 0x29C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C550u;
    // 0x29c554: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C550u, 0x29C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C558u;
label_29c558:
    // 0x29c558: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c55c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c560: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x29c560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29c564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c568: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c56c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c570: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c574: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c578: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C578u;
    SET_GPR_U32(ctx, 31, 0x29C580u);
    ctx->pc = 0x29C57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C578u;
    // 0x29c57c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C578u, 0x29C580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C580u;
label_29c580:
    // 0x29c580: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c584: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c588: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C588u;
    SET_GPR_U32(ctx, 31, 0x29C590u);
    ctx->pc = 0x29C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C588u;
    // 0x29c58c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C588u, 0x29C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C590u;
label_29c590:
    // 0x29c590: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x29c590u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x29c594: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C594u;
    SET_GPR_U32(ctx, 31, 0x29C59Cu);
    ctx->pc = 0x29C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C594u;
    // 0x29c598: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C594u, 0x29C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C59Cu;
label_29c59c:
    // 0x29c59c: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C59Cu;
    SET_GPR_U32(ctx, 31, 0x29C5A4u);
    ctx->pc = 0x29C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C59Cu;
    // 0x29c5a0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C59Cu, 0x29C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5A4u;
label_29c5a4:
    // 0x29c5a4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c5a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c5a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5ac: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x29c5acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29c5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c5b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5bc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c5c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c5c4: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C5C4u;
    SET_GPR_U32(ctx, 31, 0x29C5CCu);
    ctx->pc = 0x29C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5C4u;
    // 0x29c5c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C5C4u, 0x29C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5CCu;
label_29c5cc:
    // 0x29c5cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c5d4: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C5D4u;
    SET_GPR_U32(ctx, 31, 0x29C5DCu);
    ctx->pc = 0x29C5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5D4u;
    // 0x29c5d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C5D4u, 0x29C5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5DCu;
label_29c5dc:
    // 0x29c5dc: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x29c5dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x29c5e0: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C5E0u;
    SET_GPR_U32(ctx, 31, 0x29C5E8u);
    ctx->pc = 0x29C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5E0u;
    // 0x29c5e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C5E0u, 0x29C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5E8u;
label_29c5e8:
    // 0x29c5e8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C5E8u;
    SET_GPR_U32(ctx, 31, 0x29C5F0u);
    ctx->pc = 0x29C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C5E8u;
    // 0x29c5ec: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C5E8u, 0x29C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C5F0u;
label_29c5f0:
    // 0x29c5f0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c5f4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c5f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c5f8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x29c5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29c5fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c5fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c600: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c604: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c608: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c60c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c610: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C610u;
    SET_GPR_U32(ctx, 31, 0x29C618u);
    ctx->pc = 0x29C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C610u;
    // 0x29c614: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C610u, 0x29C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C618u;
label_29c618:
    // 0x29c618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c61c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c620: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C620u;
    SET_GPR_U32(ctx, 31, 0x29C628u);
    ctx->pc = 0x29C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C620u;
    // 0x29c624: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C620u, 0x29C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C628u;
label_29c628:
    // 0x29c628: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x29c628u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x29c62c: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C62Cu;
    SET_GPR_U32(ctx, 31, 0x29C634u);
    ctx->pc = 0x29C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C62Cu;
    // 0x29c630: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C62Cu, 0x29C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C634u;
label_29c634:
    // 0x29c634: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C634u;
    SET_GPR_U32(ctx, 31, 0x29C63Cu);
    ctx->pc = 0x29C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C634u;
    // 0x29c638: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C634u, 0x29C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C63Cu;
label_29c63c:
    // 0x29c63c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c640: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c640u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c644: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x29c644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x29c648: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c64c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c654: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c65c: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C65Cu;
    SET_GPR_U32(ctx, 31, 0x29C664u);
    ctx->pc = 0x29C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C65Cu;
    // 0x29c660: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C65Cu, 0x29C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C664u;
label_29c664:
    // 0x29c664: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c66c: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C66Cu;
    SET_GPR_U32(ctx, 31, 0x29C674u);
    ctx->pc = 0x29C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C66Cu;
    // 0x29c670: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C66Cu, 0x29C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C674u;
label_29c674:
    // 0x29c674: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c67c: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C67Cu;
    SET_GPR_U32(ctx, 31, 0x29C684u);
    ctx->pc = 0x29C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C67Cu;
    // 0x29c680: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C67Cu, 0x29C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C684u;
label_29c684:
    // 0x29c684: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x29c684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29c688: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C688u;
    SET_GPR_U32(ctx, 31, 0x29C690u);
    ctx->pc = 0x29C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C688u;
    // 0x29c68c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C688u, 0x29C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C690u;
label_29c690:
    // 0x29c690: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C690u;
    SET_GPR_U32(ctx, 31, 0x29C698u);
    ctx->pc = 0x29C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C690u;
    // 0x29c694: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C690u, 0x29C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C698u;
label_29c698:
    // 0x29c698: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c69c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c69cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6a4: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x29c6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29c6a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c6ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6b0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6b8: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C6B8u;
    SET_GPR_U32(ctx, 31, 0x29C6C0u);
    ctx->pc = 0x29C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6B8u;
    // 0x29c6bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C6B8u, 0x29C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6C0u;
label_29c6c0:
    // 0x29c6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c6c8: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C6C8u;
    SET_GPR_U32(ctx, 31, 0x29C6D0u);
    ctx->pc = 0x29C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6C8u;
    // 0x29c6cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C6C8u, 0x29C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6D0u;
label_29c6d0:
    // 0x29c6d0: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29c6d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29c6d4: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C6D4u;
    SET_GPR_U32(ctx, 31, 0x29C6DCu);
    ctx->pc = 0x29C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6D4u;
    // 0x29c6d8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C6D4u, 0x29C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6DCu;
label_29c6dc:
    // 0x29c6dc: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C6DCu;
    SET_GPR_U32(ctx, 31, 0x29C6E4u);
    ctx->pc = 0x29C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C6DCu;
    // 0x29c6e0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C6DCu, 0x29C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C6E4u;
label_29c6e4:
    // 0x29c6e4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c6e8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c6e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c6ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6f0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x29c6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29c6f4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c6f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c6fc: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c704: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C704u;
    SET_GPR_U32(ctx, 31, 0x29C70Cu);
    ctx->pc = 0x29C708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C704u;
    // 0x29c708: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C704u, 0x29C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C70Cu;
label_29c70c:
    // 0x29c70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c710: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c714: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C714u;
    SET_GPR_U32(ctx, 31, 0x29C71Cu);
    ctx->pc = 0x29C718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C714u;
    // 0x29c718: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C714u, 0x29C71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C71Cu;
label_29c71c:
    // 0x29c71c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x29c71cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x29c720: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C720u;
    SET_GPR_U32(ctx, 31, 0x29C728u);
    ctx->pc = 0x29C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C720u;
    // 0x29c724: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C720u, 0x29C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C728u;
label_29c728:
    // 0x29c728: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C728u;
    SET_GPR_U32(ctx, 31, 0x29C730u);
    ctx->pc = 0x29C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C728u;
    // 0x29c72c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C728u, 0x29C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C730u;
label_29c730:
    // 0x29c730: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c734: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c738: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c738u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c73c: 0x240800c0  addiu       $t0, $zero, 0xC0
    ctx->pc = 0x29c73cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x29c740: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c744: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c748: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c74c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c750: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C750u;
    SET_GPR_U32(ctx, 31, 0x29C758u);
    ctx->pc = 0x29C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C750u;
    // 0x29c754: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C750u, 0x29C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C758u;
label_29c758:
    // 0x29c758: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c75c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c760: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C760u;
    SET_GPR_U32(ctx, 31, 0x29C768u);
    ctx->pc = 0x29C764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C760u;
    // 0x29c764: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C760u, 0x29C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C768u;
label_29c768:
    // 0x29c768: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x29c768u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x29c76c: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C76Cu;
    SET_GPR_U32(ctx, 31, 0x29C774u);
    ctx->pc = 0x29C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C76Cu;
    // 0x29c770: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C76Cu, 0x29C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C774u;
label_29c774:
    // 0x29c774: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C774u;
    SET_GPR_U32(ctx, 31, 0x29C77Cu);
    ctx->pc = 0x29C778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C774u;
    // 0x29c778: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C774u, 0x29C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C77Cu;
label_29c77c:
    // 0x29c77c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c780: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c788: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x29c788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x29c78c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c78cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c790: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c794: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c798: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c79c: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C79Cu;
    SET_GPR_U32(ctx, 31, 0x29C7A4u);
    ctx->pc = 0x29C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C79Cu;
    // 0x29c7a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C79Cu, 0x29C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7A4u;
label_29c7a4:
    // 0x29c7a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7ac: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C7ACu;
    SET_GPR_U32(ctx, 31, 0x29C7B4u);
    ctx->pc = 0x29C7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7ACu;
    // 0x29c7b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C7ACu, 0x29C7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7B4u;
label_29c7b4:
    // 0x29c7b4: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x29c7b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x29c7b8: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C7B8u;
    SET_GPR_U32(ctx, 31, 0x29C7C0u);
    ctx->pc = 0x29C7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7B8u;
    // 0x29c7bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C7B8u, 0x29C7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7C0u;
label_29c7c0:
    // 0x29c7c0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C7C0u;
    SET_GPR_U32(ctx, 31, 0x29C7C8u);
    ctx->pc = 0x29C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7C0u;
    // 0x29c7c4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C7C0u, 0x29C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7C8u;
label_29c7c8:
    // 0x29c7c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c7cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c7ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c7d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c7dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29c7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c7e0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7e8: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C7E8u;
    SET_GPR_U32(ctx, 31, 0x29C7F0u);
    ctx->pc = 0x29C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C7E8u;
    // 0x29c7ec: 0x24080140  addiu       $t0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C7E8u, 0x29C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C7F0u;
label_29c7f0:
    // 0x29c7f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c7f8: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x29c7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29c7fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c800: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c804: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C804u;
    SET_GPR_U32(ctx, 31, 0x29C80Cu);
    ctx->pc = 0x29C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C804u;
    // 0x29c808: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C804u, 0x29C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C80Cu;
label_29c80c:
    // 0x29c80c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c810: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c814: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C814u;
    SET_GPR_U32(ctx, 31, 0x29C81Cu);
    ctx->pc = 0x29C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C814u;
    // 0x29c818: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C814u, 0x29C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C81Cu;
label_29c81c:
    // 0x29c81c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x29c81cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29c820: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C820u;
    SET_GPR_U32(ctx, 31, 0x29C828u);
    ctx->pc = 0x29C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C820u;
    // 0x29c824: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C820u, 0x29C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C828u;
label_29c828:
    // 0x29c828: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C828u;
    SET_GPR_U32(ctx, 31, 0x29C830u);
    ctx->pc = 0x29C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C828u;
    // 0x29c82c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C828u, 0x29C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C830u;
label_29c830:
    // 0x29c830: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c834: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c838: 0x2407ffc0  addiu       $a3, $zero, -0x40
    ctx->pc = 0x29c838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x29c83c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c83cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c840: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c844: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c848: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c84c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c850: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C850u;
    SET_GPR_U32(ctx, 31, 0x29C858u);
    ctx->pc = 0x29C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C850u;
    // 0x29c854: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C850u, 0x29C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C858u;
label_29c858:
    // 0x29c858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c85c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c860: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C860u;
    SET_GPR_U32(ctx, 31, 0x29C868u);
    ctx->pc = 0x29C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C860u;
    // 0x29c864: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C860u, 0x29C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C868u;
label_29c868:
    // 0x29c868: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29c868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29c86c: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C86Cu;
    SET_GPR_U32(ctx, 31, 0x29C874u);
    ctx->pc = 0x29C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C86Cu;
    // 0x29c870: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C86Cu, 0x29C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C874u;
label_29c874:
    // 0x29c874: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C874u;
    SET_GPR_U32(ctx, 31, 0x29C87Cu);
    ctx->pc = 0x29C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C874u;
    // 0x29c878: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C874u, 0x29C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C87Cu;
label_29c87c:
    // 0x29c87c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c880: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c880u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c884: 0x2407ff80  addiu       $a3, $zero, -0x80
    ctx->pc = 0x29c884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x29c888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c88c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c894: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c898: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c89c: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C89Cu;
    SET_GPR_U32(ctx, 31, 0x29C8A4u);
    ctx->pc = 0x29C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C89Cu;
    // 0x29c8a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C89Cu, 0x29C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8A4u;
label_29c8a4:
    // 0x29c8a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c8ac: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C8ACu;
    SET_GPR_U32(ctx, 31, 0x29C8B4u);
    ctx->pc = 0x29C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8ACu;
    // 0x29c8b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C8ACu, 0x29C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8B4u;
label_29c8b4:
    // 0x29c8b4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x29c8b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x29c8b8: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C8B8u;
    SET_GPR_U32(ctx, 31, 0x29C8C0u);
    ctx->pc = 0x29C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8B8u;
    // 0x29c8bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C8B8u, 0x29C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8C0u;
label_29c8c0:
    // 0x29c8c0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C8C0u;
    SET_GPR_U32(ctx, 31, 0x29C8C8u);
    ctx->pc = 0x29C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8C0u;
    // 0x29c8c4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C8C0u, 0x29C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8C8u;
label_29c8c8:
    // 0x29c8c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c8cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c8ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8d0: 0x2407ff40  addiu       $a3, $zero, -0xC0
    ctx->pc = 0x29c8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967104));
    // 0x29c8d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c8d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c8dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8e0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c8e8: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C8E8u;
    SET_GPR_U32(ctx, 31, 0x29C8F0u);
    ctx->pc = 0x29C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8E8u;
    // 0x29c8ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C8E8u, 0x29C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C8F0u;
label_29c8f0:
    // 0x29c8f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c8f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c8f8: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C8F8u;
    SET_GPR_U32(ctx, 31, 0x29C900u);
    ctx->pc = 0x29C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C8F8u;
    // 0x29c8fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C8F8u, 0x29C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C900u;
label_29c900:
    // 0x29c900: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x29c900u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x29c904: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C904u;
    SET_GPR_U32(ctx, 31, 0x29C90Cu);
    ctx->pc = 0x29C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C904u;
    // 0x29c908: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C904u, 0x29C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C90Cu;
label_29c90c:
    // 0x29c90c: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C90Cu;
    SET_GPR_U32(ctx, 31, 0x29C914u);
    ctx->pc = 0x29C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C90Cu;
    // 0x29c910: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C90Cu, 0x29C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C914u;
label_29c914:
    // 0x29c914: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c918: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c91c: 0x2407ff00  addiu       $a3, $zero, -0x100
    ctx->pc = 0x29c91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x29c920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c924: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c928: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c92c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c930: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c934: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C934u;
    SET_GPR_U32(ctx, 31, 0x29C93Cu);
    ctx->pc = 0x29C938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C934u;
    // 0x29c938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C934u, 0x29C93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C93Cu;
label_29c93c:
    // 0x29c93c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c940: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c944: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C944u;
    SET_GPR_U32(ctx, 31, 0x29C94Cu);
    ctx->pc = 0x29C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C944u;
    // 0x29c948: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C944u, 0x29C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C94Cu;
label_29c94c:
    // 0x29c94c: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x29c94cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x29c950: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C950u;
    SET_GPR_U32(ctx, 31, 0x29C958u);
    ctx->pc = 0x29C954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C950u;
    // 0x29c954: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C950u, 0x29C958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C958u;
label_29c958:
    // 0x29c958: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C958u;
    SET_GPR_U32(ctx, 31, 0x29C960u);
    ctx->pc = 0x29C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C958u;
    // 0x29c95c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C958u, 0x29C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C960u;
label_29c960:
    // 0x29c960: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c964: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c968: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c96c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c970: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c974: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29c974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c978: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c97c: 0x2407fec0  addiu       $a3, $zero, -0x140
    ctx->pc = 0x29c97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x29c980: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C980u;
    SET_GPR_U32(ctx, 31, 0x29C988u);
    ctx->pc = 0x29C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C980u;
    // 0x29c984: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C980u, 0x29C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C988u;
label_29c988:
    // 0x29c988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29c98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c990: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x29c990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29c994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c99c: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C99Cu;
    SET_GPR_U32(ctx, 31, 0x29C9A4u);
    ctx->pc = 0x29C9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C99Cu;
    // 0x29c9a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C99Cu, 0x29C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9A4u;
label_29c9a4:
    // 0x29c9a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9ac: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C9ACu;
    SET_GPR_U32(ctx, 31, 0x29C9B4u);
    ctx->pc = 0x29C9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9ACu;
    // 0x29c9b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C9ACu, 0x29C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9B4u;
label_29c9b4:
    // 0x29c9b4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x29c9b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x29c9b8: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29C9B8u;
    SET_GPR_U32(ctx, 31, 0x29C9C0u);
    ctx->pc = 0x29C9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9B8u;
    // 0x29c9bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29C9B8u, 0x29C9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9C0u;
label_29c9c0:
    // 0x29c9c0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29C9C0u;
    SET_GPR_U32(ctx, 31, 0x29C9C8u);
    ctx->pc = 0x29C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9C0u;
    // 0x29c9c4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29C9C0u, 0x29C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9C8u;
label_29c9c8:
    // 0x29c9c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29c9cc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29c9ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29c9d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9d4: 0x2408ffc0  addiu       $t0, $zero, -0x40
    ctx->pc = 0x29c9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x29c9d8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29c9dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9e0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29c9e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9e8: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29C9E8u;
    SET_GPR_U32(ctx, 31, 0x29C9F0u);
    ctx->pc = 0x29C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9E8u;
    // 0x29c9ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29C9E8u, 0x29C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9F0u;
label_29c9f0:
    // 0x29c9f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c9f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29c9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c9f8: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29C9F8u;
    SET_GPR_U32(ctx, 31, 0x29CA00u);
    ctx->pc = 0x29C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9F8u;
    // 0x29c9fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29C9F8u, 0x29CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA00u;
label_29ca00:
    // 0x29ca00: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29ca00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29ca04: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29CA04u;
    SET_GPR_U32(ctx, 31, 0x29CA0Cu);
    ctx->pc = 0x29CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA04u;
    // 0x29ca08: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29CA04u, 0x29CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA0Cu;
label_29ca0c:
    // 0x29ca0c: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29CA0Cu;
    SET_GPR_U32(ctx, 31, 0x29CA14u);
    ctx->pc = 0x29CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA0Cu;
    // 0x29ca10: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29CA0Cu, 0x29CA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA14u;
label_29ca14:
    // 0x29ca14: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29ca18: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29ca18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29ca1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca20: 0x2408ff80  addiu       $t0, $zero, -0x80
    ctx->pc = 0x29ca20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x29ca24: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29ca24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29ca28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca2c: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29ca30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ca34: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29CA34u;
    SET_GPR_U32(ctx, 31, 0x29CA3Cu);
    ctx->pc = 0x29CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA34u;
    // 0x29ca38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29CA34u, 0x29CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA3Cu;
label_29ca3c:
    // 0x29ca3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ca44: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29CA44u;
    SET_GPR_U32(ctx, 31, 0x29CA4Cu);
    ctx->pc = 0x29CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA44u;
    // 0x29ca48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29CA44u, 0x29CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA4Cu;
label_29ca4c:
    // 0x29ca4c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x29ca4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x29ca50: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29CA50u;
    SET_GPR_U32(ctx, 31, 0x29CA58u);
    ctx->pc = 0x29CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA50u;
    // 0x29ca54: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29CA50u, 0x29CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA58u;
label_29ca58:
    // 0x29ca58: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29CA58u;
    SET_GPR_U32(ctx, 31, 0x29CA60u);
    ctx->pc = 0x29CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA58u;
    // 0x29ca5c: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29CA58u, 0x29CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA60u;
label_29ca60:
    // 0x29ca60: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29ca64: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29ca64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29ca68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca6c: 0x2408ff40  addiu       $t0, $zero, -0xC0
    ctx->pc = 0x29ca6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967104));
    // 0x29ca70: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29ca70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29ca74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca78: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29ca7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ca80: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29CA80u;
    SET_GPR_U32(ctx, 31, 0x29CA88u);
    ctx->pc = 0x29CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA80u;
    // 0x29ca84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29CA80u, 0x29CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA88u;
label_29ca88:
    // 0x29ca88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ca8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29ca8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29ca90: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29CA90u;
    SET_GPR_U32(ctx, 31, 0x29CA98u);
    ctx->pc = 0x29CA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA90u;
    // 0x29ca94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29CA90u, 0x29CA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CA98u;
label_29ca98:
    // 0x29ca98: 0x4600cb46  mov.s       $f13, $f25
    ctx->pc = 0x29ca98u;
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    // 0x29ca9c: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29CA9Cu;
    SET_GPR_U32(ctx, 31, 0x29CAA4u);
    ctx->pc = 0x29CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA9Cu;
    // 0x29caa0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29CA9Cu, 0x29CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAA4u;
label_29caa4:
    // 0x29caa4: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29CAA4u;
    SET_GPR_U32(ctx, 31, 0x29CAACu);
    ctx->pc = 0x29CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAA4u;
    // 0x29caa8: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29CAA4u, 0x29CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAACu;
label_29caac:
    // 0x29caac: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29cab0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29cab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cab8: 0x2408ff00  addiu       $t0, $zero, -0x100
    ctx->pc = 0x29cab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x29cabc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29cabcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29cac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cac4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29cac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29cac8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cacc: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29CACCu;
    SET_GPR_U32(ctx, 31, 0x29CAD4u);
    ctx->pc = 0x29CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CACCu;
    // 0x29cad0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29CACCu, 0x29CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAD4u;
label_29cad4:
    // 0x29cad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cadc: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29CADCu;
    SET_GPR_U32(ctx, 31, 0x29CAE4u);
    ctx->pc = 0x29CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CADCu;
    // 0x29cae0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29CADCu, 0x29CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAE4u;
label_29cae4:
    // 0x29cae4: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x29cae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x29cae8: 0xc0e87ce  jal         func_3A1F38
    ctx->pc = 0x29CAE8u;
    SET_GPR_U32(ctx, 31, 0x29CAF0u);
    ctx->pc = 0x29CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAE8u;
    // 0x29caec: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F38u, 0x29CAE8u, 0x29CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAF0u;
label_29caf0:
    // 0x29caf0: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x29CAF0u;
    SET_GPR_U32(ctx, 31, 0x29CAF8u);
    ctx->pc = 0x29CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAF0u;
    // 0x29caf4: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x29CAF0u, 0x29CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAF8u;
label_29caf8:
    // 0x29caf8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29cafc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x29cafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29cb08: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29cb0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29cb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cb10: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x29cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x29cb14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb18: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29CB18u;
    SET_GPR_U32(ctx, 31, 0x29CB20u);
    ctx->pc = 0x29CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB18u;
    // 0x29cb1c: 0x2408fec0  addiu       $t0, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29CB18u, 0x29CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB20u;
label_29cb20:
    // 0x29cb20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cb20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29cb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb28: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x29cb28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29cb2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cb34: 0xc0a8182  jal         func_2A0608
    ctx->pc = 0x29CB34u;
    SET_GPR_U32(ctx, 31, 0x29CB3Cu);
    ctx->pc = 0x29CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB34u;
    // 0x29cb38: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0608u, 0x29CB34u, 0x29CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB3Cu;
label_29cb3c:
    // 0x29cb3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29cb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb44: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CB44u;
    SET_GPR_U32(ctx, 31, 0x29CB4Cu);
    ctx->pc = 0x29CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB44u;
    // 0x29cb48: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CB44u, 0x29CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB4Cu;
label_29cb4c:
    // 0x29cb4c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29cb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29cb50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb54: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CB54u;
    SET_GPR_U32(ctx, 31, 0x29CB5Cu);
    ctx->pc = 0x29CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB54u;
    // 0x29cb58: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CB54u, 0x29CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB5Cu;
label_29cb5c:
    // 0x29cb5c: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29cb60: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x29cb60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cb64: 0x73e3c  dsll32      $a3, $a3, 24
    ctx->pc = 0x29cb64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 24));
    // 0x29cb68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cb6c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29cb70: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29cb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29cb74: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29cb78: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29cb78u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29cb7c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x29cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29cb80: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29cb84: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29cb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29cb88: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29cb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29cb8c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CB8Cu;
    SET_GPR_U32(ctx, 31, 0x29CB94u);
    ctx->pc = 0x29CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB8Cu;
    // 0x29cb90: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CB8Cu, 0x29CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB94u;
label_29cb94:
    // 0x29cb94: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29cb94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29cb98: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x29cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29cb9c: 0x8d46118c  lw          $a2, 0x118C($t2)
    ctx->pc = 0x29cb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29cba0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29cba8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29cbac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29cbb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29cbb4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29cbb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29cbb8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CBB8u;
    SET_GPR_U32(ctx, 31, 0x29CBC0u);
    ctx->pc = 0x29CBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBB8u;
    // 0x29cbbc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CBB8u, 0x29CBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBC0u;
label_29cbc0:
    // 0x29cbc0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29cbc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29cbc4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29cbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29cbc8: 0x34c60068  ori         $a2, $a2, 0x68
    ctx->pc = 0x29cbc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)104);
    // 0x29cbcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbd0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CBD0u;
    SET_GPR_U32(ctx, 31, 0x29CBD8u);
    ctx->pc = 0x29CBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBD0u;
    // 0x29cbd4: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CBD0u, 0x29CBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBD8u;
label_29cbd8:
    // 0x29cbd8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29cbdc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cbe0: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29cbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29cbe4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29cbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29cbe8: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x29cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29cbec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cbf0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29cbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29cbf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29cbf8: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29cbfc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29cbfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29cc00: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29cc04: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CC04u;
    SET_GPR_U32(ctx, 31, 0x29CC0Cu);
    ctx->pc = 0x29CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC04u;
    // 0x29cc08: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CC04u, 0x29CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC0Cu;
label_29cc0c:
    // 0x29cc0c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29cc10: 0x8fc51180  lw          $a1, 0x1180($fp)
    ctx->pc = 0x29cc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29cc14: 0x8c6711c8  lw          $a3, 0x11C8($v1)
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29cc18: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x29cc18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x29cc1c: 0x8d4611ac  lw          $a2, 0x11AC($t2)
    ctx->pc = 0x29cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29cc20: 0x24a2007f  addiu       $v0, $a1, 0x7F
    ctx->pc = 0x29cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x29cc24: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x29cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x29cc28: 0x34088100  ori         $t0, $zero, 0x8100
    ctx->pc = 0x29cc28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29cc2c: 0x846f8  dsll        $t0, $t0, 27
    ctx->pc = 0x29cc2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 27);
    // 0x29cc30: 0x3508a200  ori         $t0, $t0, 0xA200
    ctx->pc = 0x29cc30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41472);
    // 0x29cc34: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29cc34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29cc38: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29cc3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc40: 0x205382a  slt         $a3, $s0, $a1
    ctx->pc = 0x29cc40u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29cc44: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29cc44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29cc48: 0xa7100b  movn        $v0, $a1, $a3
    ctx->pc = 0x29cc48u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29cc4c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29cc4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29cc50: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x29cc50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x29cc54: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29cc54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29cc58: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29cc5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29cc60: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29cc60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29cc64: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CC64u;
    SET_GPR_U32(ctx, 31, 0x29CC6Cu);
    ctx->pc = 0x29CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC64u;
    // 0x29cc68: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CC64u, 0x29CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC6Cu;
label_29cc6c:
    // 0x29cc6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc70: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29cc74: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CC74u;
    SET_GPR_U32(ctx, 31, 0x29CC7Cu);
    ctx->pc = 0x29CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC74u;
    // 0x29cc78: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CC74u, 0x29CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC7Cu;
label_29cc7c:
    // 0x29cc7c: 0x8fc31180  lw          $v1, 0x1180($fp)
    ctx->pc = 0x29cc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x29cc80: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29cc80u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29cc84: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29cc88: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29cc88u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29cc8c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29cc8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29cc90: 0x1840005e  blez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x29CC90u;
    {
        const bool branch_taken_0x29cc90 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC90u;
        // 0x29cc94: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc90) {
            ctx->pc = 0x29CE0Cu;
            goto label_29ce0c;
        }
    }
    ctx->pc = 0x29CC98u;
    // 0x29cc98: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29cc98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29cc9c: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x29cc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cca0: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29cca0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29cca4: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29cca4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29cca8: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29cca8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29ccac: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x29ccacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ccb0: 0x8e02118c  lw          $v0, 0x118C($s0)
    ctx->pc = 0x29ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29ccb4: 0x0  nop
    ctx->pc = 0x29ccb4u;
    // NOP
label_29ccb8:
    // 0x29ccb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29ccb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccbc: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x29ccbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x29ccc0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ccc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ccc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29ccc8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ccc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29cccc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29ccd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccd4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29ccd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29ccd8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CCD8u;
    SET_GPR_U32(ctx, 31, 0x29CCE0u);
    ctx->pc = 0x29CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCD8u;
    // 0x29ccdc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CCD8u, 0x29CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCE0u;
label_29cce0:
    // 0x29cce0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x29cce0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x29cce4: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x29cce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29cce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ccec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29ccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29ccf0: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x29ccf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x29ccf4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ccf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ccf8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29ccf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29ccfc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29ccfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29cd00: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29cd04: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CD04u;
    SET_GPR_U32(ctx, 31, 0x29CD0Cu);
    ctx->pc = 0x29CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD04u;
    // 0x29cd08: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CD04u, 0x29CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD0Cu;
label_29cd0c:
    // 0x29cd0c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29cd10: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29cd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29cd14: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29cd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29cd18: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29cd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29cd1c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29cd20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cd28: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29cd28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29cd2c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29cd2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29cd30: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29cd30u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29cd34: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29cd34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29cd38: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29cd38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29cd3c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29cd3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29cd40: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CD40u;
    SET_GPR_U32(ctx, 31, 0x29CD48u);
    ctx->pc = 0x29CD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD40u;
    // 0x29cd44: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CD40u, 0x29CD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD48u;
label_29cd48:
    // 0x29cd48: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29cd4c: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x29cd4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29cd50: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29cd50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29cd54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cd58: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x29cd58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29cd5c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29cd60: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x29cd60u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29cd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cd68: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x29cd68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29cd6c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x29cd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29cd70: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29cd70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29cd74: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29cd74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29cd78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29cd7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29cd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29cd80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29cd84: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29cd88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29cd8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29cd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29cd90: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29cd90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29cd94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29cd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29cd98: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29cd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29cd9c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CD9Cu;
    SET_GPR_U32(ctx, 31, 0x29CDA4u);
    ctx->pc = 0x29CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD9Cu;
    // 0x29cda0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CD9Cu, 0x29CDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDA4u;
label_29cda4:
    // 0x29cda4: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29cda8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cdac: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29cdb0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29cdb4: 0x8e07118c  lw          $a3, 0x118C($s0)
    ctx->pc = 0x29cdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29cdb8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29cdbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cdc0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29cdc4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29cdc8: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29cdcc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29cdccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29cdd0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cdd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29cdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29cdd8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29cdd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29cddc: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29cddcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29cde0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CDE0u;
    SET_GPR_U32(ctx, 31, 0x29CDE8u);
    ctx->pc = 0x29CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDE0u;
    // 0x29cde4: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CDE0u, 0x29CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDE8u;
label_29cde8:
    // 0x29cde8: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x29cde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29cdec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cdf0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29cdf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29cdf4: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29cdf8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29cdf8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29cdfc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29cdfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ce00: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x29ce00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ce04: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x29CE04u;
    {
        const bool branch_taken_0x29ce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE04u;
        // 0x29ce08: 0x8e02118c  lw          $v0, 0x118C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce04) {
            ctx->pc = 0x29CCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29ccb8;
        }
    }
    ctx->pc = 0x29CE0Cu;
label_29ce0c:
    // 0x29ce0c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29ce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29ce10: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x29ce10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x29ce14: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x29ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x29ce18: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x29ce18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29ce1c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29ce20: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x29ce20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x29ce24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29ce24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29ce28: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x29ce28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x29ce2c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x29ce2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x29ce30: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x29ce30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29ce34: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x29ce34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29ce38: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x29ce38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29ce3c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x29ce3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ce40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29ce40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ce44: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x29ce44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x29ce48: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x29ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x29ce4c: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x29ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29ce50: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x29ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29ce54: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x29ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29ce58: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x29ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ce5c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x29ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ce60: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29ce64: 0x3e00008  jr          $ra
    ctx->pc = 0x29CE64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE64u;
        // 0x29ce68: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CE64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CE6Cu;
    // 0x29ce6c: 0x0  nop
    ctx->pc = 0x29ce6cu;
    // NOP
    ctx->pc = 0x29ce70u;
}
