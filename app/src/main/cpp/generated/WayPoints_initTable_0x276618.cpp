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

// Function: WayPoints_initTable
// Address: 0x276618 - 0x276790
void WayPoints_initTable_0x276618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WayPoints_initTable_0x276618");
#endif

    ctx->pc = 0x276618u;

    // 0x276618: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x276618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27661c: 0x14a20057  bne         $a1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x27661Cu;
    {
        const bool branch_taken_0x27661c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27661c) {
            ctx->pc = 0x27677Cu;
            goto label_27677c;
        }
    }
    ctx->pc = 0x276624u;
    // 0x276624: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x276624u;
    {
        const bool branch_taken_0x276624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276624u;
        // 0x276628: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276624) {
            ctx->pc = 0x27677Cu;
            goto label_27677c;
        }
    }
    ctx->pc = 0x27662Cu;
    // 0x27662c: 0x3c01bf94  lui         $at, 0xBF94
    ctx->pc = 0x27662cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49044 << 16));
    // 0x276630: 0x34211893  ori         $at, $at, 0x1893
    ctx->pc = 0x276630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6291);
    // 0x276634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276638: 0x3c01c1a8  lui         $at, 0xC1A8
    ctx->pc = 0x276638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49576 << 16));
    // 0x27663c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27663cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276640: 0x24625040  addiu       $v0, $v1, 0x5040
    ctx->pc = 0x276640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20544));
    // 0x276644: 0xe4615040  swc1        $f1, 0x5040($v1)
    ctx->pc = 0x276644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20544), bits); }
    // 0x276648: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x276648u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x27664c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27664cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x276650: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x276650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x276654: 0x24a450b0  addiu       $a0, $a1, 0x50B0
    ctx->pc = 0x276654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20656));
    // 0x276658: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27665c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27665cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276660: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x276660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x276664: 0x3c01bdf7  lui         $at, 0xBDF7
    ctx->pc = 0x276664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48631 << 16));
    // 0x276668: 0x3421ced9  ori         $at, $at, 0xCED9
    ctx->pc = 0x276668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52953);
    // 0x27666c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27666cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276670: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x276674: 0x3c01c06f  lui         $at, 0xC06F
    ctx->pc = 0x276674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49263 << 16));
    // 0x276678: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x276678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x27667c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27667cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276680: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x276680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276684: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276688: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27668c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x27668cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x276690: 0x3c01c086  lui         $at, 0xC086
    ctx->pc = 0x276690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49286 << 16));
    // 0x276694: 0x34215e35  ori         $at, $at, 0x5E35
    ctx->pc = 0x276694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24117);
    // 0x276698: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27669c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x27669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2766a0: 0x3c01c12b  lui         $at, 0xC12B
    ctx->pc = 0x2766a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49451 << 16));
    // 0x2766a4: 0x34213f7d  ori         $at, $at, 0x3F7D
    ctx->pc = 0x2766a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16253);
    // 0x2766a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2766a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2766ac: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2766acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2766b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2766b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2766b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2766b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2766b8: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2766b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2766bc: 0x3c01c09a  lui         $at, 0xC09A
    ctx->pc = 0x2766bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49306 << 16));
    // 0x2766c0: 0x3421b021  ori         $at, $at, 0xB021
    ctx->pc = 0x2766c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45089);
    // 0x2766c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2766c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2766c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2766c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2766cc: 0x3c01c128  lui         $at, 0xC128
    ctx->pc = 0x2766ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49448 << 16));
    // 0x2766d0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x2766d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x2766d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2766d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2766d8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2766d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2766dc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2766dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2766e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2766e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2766e4: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2766e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2766e8: 0x3c01bf71  lui         $at, 0xBF71
    ctx->pc = 0x2766e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49009 << 16));
    // 0x2766ec: 0x34216873  ori         $at, $at, 0x6873
    ctx->pc = 0x2766ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26739);
    // 0x2766f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2766f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2766f4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2766f8: 0x3c01c216  lui         $at, 0xC216
    ctx->pc = 0x2766f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49686 << 16));
    // 0x2766fc: 0x3421fcee  ori         $at, $at, 0xFCEE
    ctx->pc = 0x2766fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64750);
    // 0x276700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276704: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x276704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276708: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x27670c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x27670cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276710: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x276710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x276714: 0x3c01c0bf  lui         $at, 0xC0BF
    ctx->pc = 0x276714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49343 << 16));
    // 0x276718: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x276718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x27671c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27671cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x276720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x276724: 0x3c01c200  lui         $at, 0xC200
    ctx->pc = 0x276724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49664 << 16));
    // 0x276728: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x276728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x27672c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27672cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276730: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x276730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276734: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276738: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27673c: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x27673cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x276740: 0x3c01c09e  lui         $at, 0xC09E
    ctx->pc = 0x276740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49310 << 16));
    // 0x276744: 0x3421f9db  ori         $at, $at, 0xF9DB
    ctx->pc = 0x276744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63963);
    // 0x276748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x276748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27674c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x27674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x276750: 0x3c01c1ff  lui         $at, 0xC1FF
    ctx->pc = 0x276750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49663 << 16));
    // 0x276754: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x276754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x276758: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x276758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27675c: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x27675cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5850BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5850BCu, _value); } while (0); }
    // 0x276760: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x276760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x276764: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x276764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x276768: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x276768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x27676c: 0xaca050b0  sw          $zero, 0x50B0($a1)
    ctx->pc = 0x27676cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5850B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5850B0u, _value); } while (0);
    // 0x276770: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x276770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x276774: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x276774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5850B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5850B4u, _value); } while (0);
    // 0x276778: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x276778u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5850B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5850B8u, _value); } while (0);
label_27677c:
    // 0x27677c: 0x3e00008  jr          $ra
    ctx->pc = 0x27677Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27677Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276784u;
    // 0x276784: 0x0  nop
    ctx->pc = 0x276784u;
    // NOP
    // 0x276788: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x276788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27678c: 0x0  nop
    ctx->pc = 0x27678cu;
    // NOP
    ctx->pc = 0x276790u;
}
