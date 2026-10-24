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

// Function: func_00318570
// Address: 0x318570 - 0x3186d0
void func_00318570_0x318570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00318570_0x318570");
#endif

    switch (ctx->pc) {
        case 0x318648u: goto label_318648;
        case 0x318650u: goto label_318650;
        default: break;
    }

    ctx->pc = 0x318570u;

    // 0x318570: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x318570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x318574: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x318574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x318578: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x318578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x31857c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31857cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318580: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x318580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x318584: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x318584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x318588: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x318588u;
    {
        const bool branch_taken_0x318588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318588u;
        // 0x31858c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318588) {
            ctx->pc = 0x318634u;
            goto label_318634;
        }
    }
    ctx->pc = 0x318590u;
    // 0x318590: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x318590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x318594: 0x24420c20  addiu       $v0, $v0, 0xC20
    ctx->pc = 0x318594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
    // 0x318598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x318598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31859c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31859cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3185a0: 0x800008  jr          $a0
    ctx->pc = 0x3185A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3185A8u: goto label_3185a8;
            case 0x3185F8u: goto label_3185f8;
            case 0x318620u: goto label_318620;
            case 0x318634u: goto label_318634;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3185A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3185A8u;
label_3185a8:
    // 0x3185a8: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x3185a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
    // 0x3185ac: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3185acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x3185b0: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3185b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3185b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3185b8: 0xa60304d8  sh          $v1, 0x4D8($s0)
    ctx->pc = 0x3185b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1240), (uint16_t)GPR_U32(ctx, 3));
    // 0x3185bc: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x3185bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x3185c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3185c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3185c4: 0x3c01c316  lui         $at, 0xC316
    ctx->pc = 0x3185c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49942 << 16));
    // 0x3185c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3185c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3185cc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x3185ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3185d0: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x3185d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x3185d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3185d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3185d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3185d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3185dc: 0x3c01c1f0  lui         $at, 0xC1F0
    ctx->pc = 0x3185dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49648 << 16));
    // 0x3185e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3185e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3185e4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x3185e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3185e8: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x3185e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3185ec: 0xe6010130  swc1        $f1, 0x130($s0)
    ctx->pc = 0x3185ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x3185f0: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x3185f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x3185f4: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x3185f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
label_3185f8:
    // 0x3185f8: 0x960204d8  lhu         $v0, 0x4D8($s0)
    ctx->pc = 0x3185f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1240)));
    // 0x3185fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3185fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x318600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x318600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x318604: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x318608: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x31860c: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31860Cu;
    {
        const bool branch_taken_0x31860c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x318610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31860Cu;
        // 0x318610: 0xa60204d8  sh          $v0, 0x4D8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31860c) {
            ctx->pc = 0x318634u;
            goto label_318634;
        }
    }
    ctx->pc = 0x318614u;
    // 0x318614: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x318614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x318618: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x318618u;
    {
        const bool branch_taken_0x318618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318618u;
        // 0x31861c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318618) {
            ctx->pc = 0x318628u;
            goto label_318628;
        }
    }
    ctx->pc = 0x318620u;
label_318620:
    // 0x318620: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x318620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x318624: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x318624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_318628:
    // 0x318628: 0xa20302f4  sb          $v1, 0x2F4($s0)
    ctx->pc = 0x318628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x31862c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x31862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x318630: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x318630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_318634:
    // 0x318634: 0x8e0504d0  lw          $a1, 0x4D0($s0)
    ctx->pc = 0x318634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1232)));
    // 0x318638: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x318638u;
    {
        const bool branch_taken_0x318638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x318638) {
            ctx->pc = 0x31863Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318638u;
            // 0x31863c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186C0u;
            goto label_3186c0;
        }
    }
    ctx->pc = 0x318640u;
    // 0x318640: 0xc0c61c0  jal         func_318700
    ctx->pc = 0x318640u;
    SET_GPR_U32(ctx, 31, 0x318648u);
    ctx->pc = 0x318644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318640u;
    // 0x318644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318700u, 0x318640u, 0x318648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318648u;
label_318648:
    // 0x318648: 0xc05285c  jal         func_14A170
    ctx->pc = 0x318648u;
    SET_GPR_U32(ctx, 31, 0x318650u);
    ctx->pc = 0x31864Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x318648u;
    // 0x31864c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A170u, 0x318648u, 0x318650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318650u;
label_318650:
    // 0x318650: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x318654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x318654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318658: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x31865c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x31865cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x318660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x318660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x318664: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x318664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x318668: 0x34422001  ori         $v0, $v0, 0x2001
    ctx->pc = 0x318668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x31866c: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x318670: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x318670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x318674: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x318674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x318678: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x318678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x31867c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x31867cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x318680: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x318680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x318684: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x318684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x318688: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x318688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x31868c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x31868cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x318690: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x318690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x318694: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x318694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x318698: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x318698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31869c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x31869cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x3186a0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3186a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x3186a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3186a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x3186a8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x3186a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x3186ac: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x3186acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3186b0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x3186b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x3186b4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x3186b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3186b8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x3186b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x3186bc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3186bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3186c0:
    // 0x3186c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3186c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3186c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3186C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3186C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186C4u;
        // 0x3186c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3186C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3186CCu;
    // 0x3186cc: 0x0  nop
    ctx->pc = 0x3186ccu;
    // NOP
    ctx->pc = 0x3186d0u;
}
