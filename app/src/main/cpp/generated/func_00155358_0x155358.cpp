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

// Function: func_00155358
// Address: 0x155358 - 0x155678
void func_00155358_0x155358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00155358_0x155358");
#endif

    switch (ctx->pc) {
        case 0x1553c0u: goto label_1553c0;
        case 0x1553ecu: goto label_1553ec;
        case 0x1553f4u: goto label_1553f4;
        case 0x155598u: goto label_155598;
        case 0x1555bcu: goto label_1555bc;
        default: break;
    }

    ctx->pc = 0x155358u;

    // 0x155358: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15535c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15535cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x155360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x155360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x155364: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x155364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x155368: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x15536c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x155370: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x155370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155374: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x155374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x155378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x155378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15537c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x155380: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x155380u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155384: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x155384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x155388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x155388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15538c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x15538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x155390: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x155390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x155394: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x155394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x155398: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x155398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x15539c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1553a0: 0xaea0038c  sw          $zero, 0x38C($s5)
    ctx->pc = 0x1553a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 908), GPR_U32(ctx, 0));
    // 0x1553a4: 0xe6a003ac  swc1        $f0, 0x3AC($s5)
    ctx->pc = 0x1553a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 940), bits); }
    // 0x1553a8: 0xaea00390  sw          $zero, 0x390($s5)
    ctx->pc = 0x1553a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 912), GPR_U32(ctx, 0));
    // 0x1553ac: 0xe6a003a0  swc1        $f0, 0x3A0($s5)
    ctx->pc = 0x1553acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 928), bits); }
    // 0x1553b0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1553b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1553b4: 0xe6a003a4  swc1        $f0, 0x3A4($s5)
    ctx->pc = 0x1553b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 932), bits); }
    // 0x1553b8: 0xe6a003a8  swc1        $f0, 0x3A8($s5)
    ctx->pc = 0x1553b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 936), bits); }
    // 0x1553bc: 0x0  nop
    ctx->pc = 0x1553bcu;
    // NOP
label_1553c0:
    // 0x1553c0: 0x241000d0  addiu       $s0, $zero, 0xD0
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1553c4: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1553c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1553c8: 0x1508018  mult        $s0, $t2, $s0
    ctx->pc = 0x1553c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1553cc: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x1553ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1553d0: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x1553d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x1553d4: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x1553d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x1553d8: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1553dc: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x1553dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1553e0: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1553e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1553e4: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x1553E4u;
    SET_GPR_U32(ctx, 31, 0x1553ECu);
    ctx->pc = 0x1553E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553E4u;
    // 0x1553e8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x1553E4u, 0x1553ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553ECu;
label_1553ec:
    // 0x1553ec: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x1553ECu;
    SET_GPR_U32(ctx, 31, 0x1553F4u);
    ctx->pc = 0x1553F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553ECu;
    // 0x1553f0: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x1553ECu, 0x1553F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553F4u;
label_1553f4:
    // 0x1553f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1553f8: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1553fc: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x1553fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x155400: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x155400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x155404: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x155404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x155408: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x155408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x15540c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x15540cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x155410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x155410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x155414: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x155414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x155418: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x155418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15541c: 0x3c036c0c  lui         $v1, 0x6C0C
    ctx->pc = 0x15541cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27660 << 16));
    // 0x155420: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x155420u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x155424: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x155424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x155428: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x155428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x15542c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x155430: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x155430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x155434: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x155434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x155438: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x155438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x15543c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x15543cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x155440: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x155440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x155444: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x155444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x155448: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x155448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15544c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15544cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x155450: 0x34a58004  ori         $a1, $a1, 0x8004
    ctx->pc = 0x155450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32772);
    // 0x155454: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x155458: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x155458u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
    // 0x15545c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x15545cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x155460: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x155464: 0xfe250020  sd          $a1, 0x20($s1)
    ctx->pc = 0x155464u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 5));
    // 0x155468: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15546c: 0xae260028  sw          $a2, 0x28($s1)
    ctx->pc = 0x15546cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 6));
    // 0x155470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155474: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x155474u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x155478: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x155478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x15547c: 0x8ea50380  lw          $a1, 0x380($s5)
    ctx->pc = 0x15547cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 896)));
    // 0x155480: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x155480u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155484: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x155484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x155488: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x155488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x15548c: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x15548cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x155490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x155490u;
    {
        const bool branch_taken_0x155490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155490u;
        // 0x155494: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155490) {
            ctx->pc = 0x1554A8u;
            goto label_1554a8;
        }
    }
    ctx->pc = 0x155498u;
    // 0x155498: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x15549c: 0x3463001d  ori         $v1, $v1, 0x1D
    ctx->pc = 0x15549cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29);
    // 0x1554a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1554A0u;
    {
        const bool branch_taken_0x1554a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554A0u;
        // 0x1554a4: 0x71478  dsll        $v0, $a3, 17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554a0) {
            ctx->pc = 0x1554CCu;
            goto label_1554cc;
        }
    }
    ctx->pc = 0x1554A8u;
label_1554a8:
    // 0x1554a8: 0x30a20200  andi        $v0, $a1, 0x200
    ctx->pc = 0x1554a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)512);
    // 0x1554ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1554ACu;
    {
        const bool branch_taken_0x1554ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1554B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554ACu;
        // 0x1554b0: 0x71478  dsll        $v0, $a3, 17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554ac) {
            ctx->pc = 0x1554C4u;
            goto label_1554c4;
        }
    }
    ctx->pc = 0x1554B4u;
    // 0x1554b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1554b8: 0x346307fd  ori         $v1, $v1, 0x7FD
    ctx->pc = 0x1554b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2045);
    // 0x1554bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1554BCu;
    {
        const bool branch_taken_0x1554bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1554BCu;
        // 0x1554c0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554bc) {
            ctx->pc = 0x1554D0u;
            goto label_1554d0;
        }
    }
    ctx->pc = 0x1554C4u;
label_1554c4:
    // 0x1554c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1554c8: 0x3463001c  ori         $v1, $v1, 0x1C
    ctx->pc = 0x1554c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
label_1554cc:
    // 0x1554cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1554ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1554d0:
    // 0x1554d0: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1554d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1554d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1554d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1554d8: 0x24080047  addiu       $t0, $zero, 0x47
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1554dc: 0x3c049c00  lui         $a0, 0x9C00
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39936 << 16));
    // 0x1554e0: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x1554e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x1554e4: 0x34840360  ori         $a0, $a0, 0x360
    ctx->pc = 0x1554e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)864);
    // 0x1554e8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1554e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1554ec: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x1554ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x1554f0: 0x34a50044  ori         $a1, $a1, 0x44
    ctx->pc = 0x1554f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)68);
    // 0x1554f4: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x1554f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x1554f8: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1554fc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1554fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x155500: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x155500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x155504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x155504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x155508: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15550c: 0xfe230090  sd          $v1, 0x90($s1)
    ctx->pc = 0x15550cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 3));
    // 0x155510: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x155510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x155514: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x155514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x155518: 0xfe280038  sd          $t0, 0x38($s1)
    ctx->pc = 0x155518u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 8));
    // 0x15551c: 0xfe240040  sd          $a0, 0x40($s1)
    ctx->pc = 0x15551cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 4));
    // 0x155520: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x155520u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x155524: 0xfe250050  sd          $a1, 0x50($s1)
    ctx->pc = 0x155524u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 5));
    // 0x155528: 0xfe260058  sd          $a2, 0x58($s1)
    ctx->pc = 0x155528u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 6));
    // 0x15552c: 0xfe270068  sd          $a3, 0x68($s1)
    ctx->pc = 0x15552cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 7));
    // 0x155530: 0xfe200060  sd          $zero, 0x60($s1)
    ctx->pc = 0x155530u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 0));
    // 0x155534: 0xfe230070  sd          $v1, 0x70($s1)
    ctx->pc = 0x155534u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 3));
    // 0x155538: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x155538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x15553c: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x15553cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x155540: 0xfe230080  sd          $v1, 0x80($s1)
    ctx->pc = 0x155540u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 3));
    // 0x155544: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x155544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x155548: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x155548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x15554c: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x15554cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x155550: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x155550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x155554: 0x8ea20388  lw          $v0, 0x388($s5)
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 904)));
    // 0x155558: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x155558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15555c: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x15555cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x155560: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x155560u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x155564: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x155564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x155568: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x155568u;
    {
        const bool branch_taken_0x155568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155568u;
        // 0x15556c: 0xa2a30385  sb          $v1, 0x385($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 901), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155568) {
            ctx->pc = 0x155578u;
            goto label_155578;
        }
    }
    ctx->pc = 0x155570u;
    // 0x155570: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x155570u;
    {
        const bool branch_taken_0x155570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155570u;
        // 0x155574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155570) {
            ctx->pc = 0x155644u;
            goto label_155644;
        }
    }
    ctx->pc = 0x155578u;
label_155578:
    // 0x155578: 0xab180  sll         $s6, $t2, 6
    ctx->pc = 0x155578u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x15557c: 0x26b70300  addiu       $s7, $s5, 0x300
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
    // 0x155580: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x155584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x155584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155588: 0x255e0001  addiu       $fp, $t2, 0x1
    ctx->pc = 0x155588u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x15558c: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x15558cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x155590: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x155594: 0x2d78021  addu        $s0, $s6, $s7
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_155598:
    // 0x155598: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x155598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15559c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15559cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1555a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a4: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1555a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a8: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x1555a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x1555ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1555b0: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x1555b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x1555b4: 0xc05559e  jal         func_155678
    ctx->pc = 0x1555B4u;
    SET_GPR_U32(ctx, 31, 0x1555BCu);
    ctx->pc = 0x1555B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555B4u;
    // 0x1555b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155678u, 0x1555B4u, 0x1555BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555BCu;
label_1555bc:
    // 0x1555bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1555bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555c0: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x1555c0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1555c4: 0x1331024  and         $v0, $t1, $s3
    ctx->pc = 0x1555c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 19));
    // 0x1555c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1555cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1555ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1555d0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1555d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1555d4: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x1555d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x1555d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1555dc: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x1555dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x1555e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1555e4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1555e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1555e8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1555e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1555ec: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1555ECu;
    {
        const bool branch_taken_0x1555ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1555F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555ECu;
        // 0x1555f0: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555ec) {
            ctx->pc = 0x155598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155598;
        }
    }
    ctx->pc = 0x1555F4u;
    // 0x1555f4: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1555f8: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x1555fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1555fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x155600: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x155600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155604: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x155608: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x15560c: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x155610: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x155614: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155618: 0x29470002  slti        $a3, $t2, 0x2
    ctx->pc = 0x155618u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15561c: 0xfc660030  sd          $a2, 0x30($v1)
    ctx->pc = 0x15561cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 6));
    // 0x155620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155624: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x155624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x155628: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15562c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x15562cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x155630: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x155630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x155634: 0xfe2800a0  sd          $t0, 0xA0($s1)
    ctx->pc = 0x155634u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 8));
    // 0x155638: 0x14e0ff61  bnez        $a3, . + 4 + (-0x9F << 2)
    ctx->pc = 0x155638u;
    {
        const bool branch_taken_0x155638 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x15563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155638u;
        // 0x15563c: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155638) {
            ctx->pc = 0x1553C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1553c0;
        }
    }
    ctx->pc = 0x155640u;
    // 0x155640: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x155640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_155644:
    // 0x155644: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x155644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x155648: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x155648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15564c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15564cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x155650: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x155650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x155654: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x155654u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x155658: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x155658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15565c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x15565cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x155660: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x155660u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x155664: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x155664u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x155668: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x155668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15566c: 0x3e00008  jr          $ra
    ctx->pc = 0x15566Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15566Cu;
        // 0x155670: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15566Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155674u;
    // 0x155674: 0x0  nop
    ctx->pc = 0x155674u;
    // NOP
    ctx->pc = 0x155678u;
}
