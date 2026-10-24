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

// Function: func_00154A90
// Address: 0x154a90 - 0x154da0
void func_00154A90_0x154a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00154A90_0x154a90");
#endif

    switch (ctx->pc) {
        case 0x154af8u: goto label_154af8;
        case 0x154b24u: goto label_154b24;
        case 0x154b2cu: goto label_154b2c;
        case 0x154cc0u: goto label_154cc0;
        case 0x154ce4u: goto label_154ce4;
        default: break;
    }

    ctx->pc = 0x154a90u;

    // 0x154a90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x154a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x154a94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154a98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x154a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x154a9c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x154a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x154aa0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x154aa4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x154aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x154aa8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x154aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154aac: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x154aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x154ab0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x154ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x154ab4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x154ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x154ab8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x154ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154abc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x154abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x154ac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x154ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ac4: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x154ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x154ac8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x154ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x154acc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x154accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x154ad0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x154ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x154ad4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x154ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x154ad8: 0xaea0038c  sw          $zero, 0x38C($s5)
    ctx->pc = 0x154ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 908), GPR_U32(ctx, 0));
    // 0x154adc: 0xe6a003ac  swc1        $f0, 0x3AC($s5)
    ctx->pc = 0x154adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 940), bits); }
    // 0x154ae0: 0xaea00390  sw          $zero, 0x390($s5)
    ctx->pc = 0x154ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 912), GPR_U32(ctx, 0));
    // 0x154ae4: 0xe6a003a0  swc1        $f0, 0x3A0($s5)
    ctx->pc = 0x154ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 928), bits); }
    // 0x154ae8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x154ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x154aec: 0xe6a003a4  swc1        $f0, 0x3A4($s5)
    ctx->pc = 0x154aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 932), bits); }
    // 0x154af0: 0xe6a003a8  swc1        $f0, 0x3A8($s5)
    ctx->pc = 0x154af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 936), bits); }
    // 0x154af4: 0x0  nop
    ctx->pc = 0x154af4u;
    // NOP
label_154af8:
    // 0x154af8: 0x241000d0  addiu       $s0, $zero, 0xD0
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x154afc: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x154b00: 0x1508018  mult        $s0, $t2, $s0
    ctx->pc = 0x154b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x154b04: 0x1421818  mult        $v1, $t2, $v0
    ctx->pc = 0x154b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x154b08: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x154b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x154b0c: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x154b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x154b10: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x154b14: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x154b18: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x154b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x154b1c: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x154B1Cu;
    SET_GPR_U32(ctx, 31, 0x154B24u);
    ctx->pc = 0x154B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B1Cu;
    // 0x154b20: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x154B1Cu, 0x154B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B24u;
label_154b24:
    // 0x154b24: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x154B24u;
    SET_GPR_U32(ctx, 31, 0x154B2Cu);
    ctx->pc = 0x154B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154B24u;
    // 0x154b28: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x154B24u, 0x154B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154B2Cu;
label_154b2c:
    // 0x154b2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x154b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x154b30: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x154b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x154b34: 0x3484000d  ori         $a0, $a0, 0xD
    ctx->pc = 0x154b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    // 0x154b38: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x154b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x154b3c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x154b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x154b40: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x154b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x154b44: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x154b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x154b48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x154b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x154b4c: 0x3c036c0c  lui         $v1, 0x6C0C
    ctx->pc = 0x154b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27660 << 16));
    // 0x154b50: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x154b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154b54: 0x346300c8  ori         $v1, $v1, 0xC8
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)200);
    // 0x154b58: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x154b58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x154b5c: 0x34a50404  ori         $a1, $a1, 0x404
    ctx->pc = 0x154b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x154b60: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x154b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x154b64: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x154b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x154b68: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x154b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x154b6c: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x154b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x154b70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x154b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x154b74: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x154b78: 0x34c60005  ori         $a2, $a2, 0x5
    ctx->pc = 0x154b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x154b7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x154b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x154b80: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x154b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154b84: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x154b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x154b88: 0x34848004  ori         $a0, $a0, 0x8004
    ctx->pc = 0x154b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32772);
    // 0x154b8c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x154b90: 0xfe260010  sd          $a2, 0x10($s1)
    ctx->pc = 0x154b90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 6));
    // 0x154b94: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x154b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x154b98: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x154b98u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x154b9c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x154b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x154ba0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x154ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x154ba4: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x154ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x154ba8: 0x8ea20380  lw          $v0, 0x380($s5)
    ctx->pc = 0x154ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 896)));
    // 0x154bac: 0x7ba90020  lq          $t1, 0x20($sp)
    ctx->pc = 0x154bacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154bb0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x154bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x154bb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154BB4u;
    {
        const bool branch_taken_0x154bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BB4u;
        // 0x154bb8: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bb4) {
            ctx->pc = 0x154BCCu;
            goto label_154bcc;
        }
    }
    ctx->pc = 0x154BBCu;
    // 0x154bbc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x154bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x154bc0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x154bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x154bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154BC4u;
    {
        const bool branch_taken_0x154bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154BC4u;
        // 0x154bc8: 0xfe220030  sd          $v0, 0x30($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154bc4) {
            ctx->pc = 0x154BD8u;
            goto label_154bd8;
        }
    }
    ctx->pc = 0x154BCCu;
label_154bcc:
    // 0x154bcc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x154bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x154bd0: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x154bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x154bd4: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x154bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
label_154bd8:
    // 0x154bd8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x154bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x154bdc: 0x3c039c00  lui         $v1, 0x9C00
    ctx->pc = 0x154bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39936 << 16));
    // 0x154be0: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x154be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x154be4: 0x34630360  ori         $v1, $v1, 0x360
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)864);
    // 0x154be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x154be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x154bec: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x154becu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
    // 0x154bf0: 0xfe230040  sd          $v1, 0x40($s1)
    ctx->pc = 0x154bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 3));
    // 0x154bf4: 0xfe240048  sd          $a0, 0x48($s1)
    ctx->pc = 0x154bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 4));
    // 0x154bf8: 0x8ea20380  lw          $v0, 0x380($s5)
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 896)));
    // 0x154bfc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x154bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x154c00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154C00u;
    {
        const bool branch_taken_0x154c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154c00) {
            ctx->pc = 0x154C1Cu;
            goto label_154c1c;
        }
    }
    ctx->pc = 0x154C08u;
    // 0x154c08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x154c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154c0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x154c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x154c10: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x154c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
    // 0x154c14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x154C14u;
    {
        const bool branch_taken_0x154c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C14u;
        // 0x154c18: 0xfe220050  sd          $v0, 0x50($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c14) {
            ctx->pc = 0x154C2Cu;
            goto label_154c2c;
        }
    }
    ctx->pc = 0x154C1Cu;
label_154c1c:
    // 0x154c1c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x154c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154c20: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x154c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x154c24: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x154c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
    // 0x154c28: 0xfe220050  sd          $v0, 0x50($s1)
    ctx->pc = 0x154c28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
label_154c2c:
    // 0x154c2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x154c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x154c30: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x154c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x154c34: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x154c38: 0xfe200060  sd          $zero, 0x60($s1)
    ctx->pc = 0x154c38u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 0));
    // 0x154c3c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x154c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x154c40: 0xfe250058  sd          $a1, 0x58($s1)
    ctx->pc = 0x154c40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 5));
    // 0x154c44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x154c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x154c48: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x154c4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x154c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x154c50: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x154c50u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x154c54: 0xfe220090  sd          $v0, 0x90($s1)
    ctx->pc = 0x154c54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 2));
    // 0x154c58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x154c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x154c5c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x154c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x154c60: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x154c60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x154c64: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x154c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    // 0x154c68: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x154c68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x154c6c: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x154c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x154c70: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x154c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x154c74: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x154c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x154c78: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x154c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x154c7c: 0x8ea20388  lw          $v0, 0x388($s5)
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 904)));
    // 0x154c80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x154c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x154c84: 0x9443000a  lhu         $v1, 0xA($v0)
    ctx->pc = 0x154c84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x154c88: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x154c88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x154c8c: 0x2a420011  slti        $v0, $s2, 0x11
    ctx->pc = 0x154c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x154c90: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154C90u;
    {
        const bool branch_taken_0x154c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C90u;
        // 0x154c94: 0xa2a30385  sb          $v1, 0x385($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 901), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c90) {
            ctx->pc = 0x154CA0u;
            goto label_154ca0;
        }
    }
    ctx->pc = 0x154C98u;
    // 0x154c98: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x154C98u;
    {
        const bool branch_taken_0x154c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154C98u;
        // 0x154c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c98) {
            ctx->pc = 0x154D6Cu;
            goto label_154d6c;
        }
    }
    ctx->pc = 0x154CA0u;
label_154ca0:
    // 0x154ca0: 0xab180  sll         $s6, $t2, 6
    ctx->pc = 0x154ca0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x154ca4: 0x26b70300  addiu       $s7, $s5, 0x300
    ctx->pc = 0x154ca4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 768));
    // 0x154ca8: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x154ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x154cac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x154cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cb0: 0x255e0001  addiu       $fp, $t2, 0x1
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x154cb4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x154cb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x154cb8: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x154cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x154cbc: 0x2d78021  addu        $s0, $s6, $s7
    ctx->pc = 0x154cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_154cc0:
    // 0x154cc0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x154cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cc4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x154cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x154cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ccc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x154cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cd0: 0x7fa80010  sq          $t0, 0x10($sp)
    ctx->pc = 0x154cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 8));
    // 0x154cd4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x154cd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x154cd8: 0x7faa0030  sq          $t2, 0x30($sp)
    ctx->pc = 0x154cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 10));
    // 0x154cdc: 0xc055368  jal         func_154DA0
    ctx->pc = 0x154CDCu;
    SET_GPR_U32(ctx, 31, 0x154CE4u);
    ctx->pc = 0x154CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154CDCu;
    // 0x154ce0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DA0u, 0x154CDCu, 0x154CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154CE4u;
label_154ce4:
    // 0x154ce4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x154ce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ce8: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x154ce8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154cec: 0x1331024  and         $v0, $t1, $s3
    ctx->pc = 0x154cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 19));
    // 0x154cf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x154cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x154cf8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x154cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x154cfc: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x154cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
    // 0x154d00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d04: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x154d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x154d08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x154d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x154d10: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x154d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x154d14: 0x1640ffea  bnez        $s2, . + 4 + (-0x16 << 2)
    ctx->pc = 0x154D14u;
    {
        const bool branch_taken_0x154d14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D14u;
        // 0x154d18: 0x7baa0030  lq          $t2, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d14) {
            ctx->pc = 0x154CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154cc0;
        }
    }
    ctx->pc = 0x154D1Cu;
    // 0x154d1c: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x154d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x154d20: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x154d24: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x154d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x154d28: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x154d28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d2c: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x154d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x154d30: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x154d34: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x154d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x154d38: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x154d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x154d3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154d40: 0x2d470002  sltiu       $a3, $t2, 0x2
    ctx->pc = 0x154d40u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x154d44: 0xfc660030  sd          $a2, 0x30($v1)
    ctx->pc = 0x154d44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 6));
    // 0x154d48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x154d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154d4c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x154d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x154d50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x154d54: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x154d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x154d58: 0xae2500ac  sw          $a1, 0xAC($s1)
    ctx->pc = 0x154d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 5));
    // 0x154d5c: 0xfe2800a0  sd          $t0, 0xA0($s1)
    ctx->pc = 0x154d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 160), GPR_U64(ctx, 8));
    // 0x154d60: 0x14e0ff65  bnez        $a3, . + 4 + (-0x9B << 2)
    ctx->pc = 0x154D60u;
    {
        const bool branch_taken_0x154d60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D60u;
        // 0x154d64: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d60) {
            ctx->pc = 0x154AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154af8;
        }
    }
    ctx->pc = 0x154D68u;
    // 0x154d68: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x154d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_154d6c:
    // 0x154d6c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x154d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x154d70: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x154d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x154d74: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x154d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x154d78: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x154d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x154d7c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x154d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x154d80: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x154d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x154d84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x154d84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154d88: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x154d88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x154d8c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x154d8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154d90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x154d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154d94: 0x3e00008  jr          $ra
    ctx->pc = 0x154D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154D94u;
        // 0x154d98: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154D9Cu;
    // 0x154d9c: 0x0  nop
    ctx->pc = 0x154d9cu;
    // NOP
    ctx->pc = 0x154da0u;
}
