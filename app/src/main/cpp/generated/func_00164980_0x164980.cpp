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

// Function: func_00164980
// Address: 0x164980 - 0x164e88
void func_00164980_0x164980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00164980_0x164980");
#endif

    ctx->pc = 0x164980u;

    // 0x164980: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x164980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164984: 0x14a2013e  bne         $a1, $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x164984u;
    {
        const bool branch_taken_0x164984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x164984) {
            ctx->pc = 0x164E80u;
            goto label_164e80;
        }
    }
    ctx->pc = 0x16498Cu;
    // 0x16498c: 0x1080013c  beqz        $a0, . + 4 + (0x13C << 2)
    ctx->pc = 0x16498Cu;
    {
        const bool branch_taken_0x16498c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x164990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16498Cu;
        // 0x164990: 0x3c030056  lui         $v1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16498c) {
            ctx->pc = 0x164E80u;
            goto label_164e80;
        }
    }
    ctx->pc = 0x164994u;
    // 0x164994: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x164994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x164998: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x164998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x16499c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16499cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1649a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1649a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1649a4: 0x24627d80  addiu       $v0, $v1, 0x7D80
    ctx->pc = 0x1649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32128));
    // 0x1649a8: 0x3c01438a  lui         $at, 0x438A
    ctx->pc = 0x1649a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17290 << 16));
    // 0x1649ac: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1649acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1649b0: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x1649b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x1649b4: 0xe4697d80  swc1        $f9, 0x7D80($v1)
    ctx->pc = 0x1649b4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32128), bits); }
    // 0x1649b8: 0x24c77d70  addiu       $a3, $a2, 0x7D70
    ctx->pc = 0x1649b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 32112));
    // 0x1649bc: 0xe44a0004  swc1        $f10, 0x4($v0)
    ctx->pc = 0x1649bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1649c0: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x1649c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
    // 0x1649c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1649c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1649c8: 0x25037e80  addiu       $v1, $t0, 0x7E80
    ctx->pc = 0x1649c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32384));
    // 0x1649cc: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x1649ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1649d0: 0x3c090056  lui         $t1, 0x56
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)86 << 16));
    // 0x1649d4: 0x3c014325  lui         $at, 0x4325
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17189 << 16));
    // 0x1649d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1649d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1649dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1649dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1649e0: 0x3c014352  lui         $at, 0x4352
    ctx->pc = 0x1649e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17234 << 16));
    // 0x1649e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1649e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1649e8: 0x25257f80  addiu       $a1, $t1, 0x7F80
    ctx->pc = 0x1649e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32640));
    // 0x1649ec: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1649ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1649f0: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x1649f0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
    // 0x1649f4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1649f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1649f8: 0x25447fa0  addiu       $a0, $t2, 0x7FA0
    ctx->pc = 0x1649f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 32672));
    // 0x1649fc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1649fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164a00: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164a04: 0x3c0142e8  lui         $at, 0x42E8
    ctx->pc = 0x164a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17128 << 16));
    // 0x164a08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164a0c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164a10: 0x3c014332  lui         $at, 0x4332
    ctx->pc = 0x164a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17202 << 16));
    // 0x164a14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164a18: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164a1c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164a20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164a24: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164a24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164a28: 0x3c014305  lui         $at, 0x4305
    ctx->pc = 0x164a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17157 << 16));
    // 0x164a2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164a30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164a34: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x164a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x164a38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164a38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164a3c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164a40: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164a44: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164a48: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164a4c: 0x3c014328  lui         $at, 0x4328
    ctx->pc = 0x164a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17192 << 16));
    // 0x164a50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164a54: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164a58: 0x3c0142f2  lui         $at, 0x42F2
    ctx->pc = 0x164a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17138 << 16));
    // 0x164a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164a60: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164a60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164a64: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164a68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164a6c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164a70: 0x3c01433b  lui         $at, 0x433B
    ctx->pc = 0x164a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17211 << 16));
    // 0x164a74: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164a78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164a7c: 0x3c01432c  lui         $at, 0x432C
    ctx->pc = 0x164a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17196 << 16));
    // 0x164a80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164a84: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164a84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164a88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164a8c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164a90: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164a94: 0x3c01436b  lui         $at, 0x436B
    ctx->pc = 0x164a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17259 << 16));
    // 0x164a98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164a9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164aa0: 0x3c01430a  lui         $at, 0x430A
    ctx->pc = 0x164aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17162 << 16));
    // 0x164aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164aa8: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164aac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164ab0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164ab4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164ab8: 0x3c01438b  lui         $at, 0x438B
    ctx->pc = 0x164ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17291 << 16));
    // 0x164abc: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x164abcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x164ac0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164ac4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164ac8: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x164ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x164acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164ad0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164ad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164ad4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164ad8: 0xacc07d70  sw          $zero, 0x7D70($a2)
    ctx->pc = 0x164ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567D70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567D70u, _value); } while (0);
    // 0x164adc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x164adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567D78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567D78u, _value); } while (0);
    // 0x164ae0: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x164ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567D74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567D74u, _value); } while (0);
    // 0x164ae4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164ae8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164aec: 0x3c01434c  lui         $at, 0x434C
    ctx->pc = 0x164aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17228 << 16));
    // 0x164af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164af4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164af8: 0x3c01439b  lui         $at, 0x439B
    ctx->pc = 0x164af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17307 << 16));
    // 0x164afc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164b00: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164b04: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164b08: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164b0c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164b0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164b10: 0x3c014339  lui         $at, 0x4339
    ctx->pc = 0x164b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17209 << 16));
    // 0x164b14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b18: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164b1c: 0x3c0143a7  lui         $at, 0x43A7
    ctx->pc = 0x164b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17319 << 16));
    // 0x164b20: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x164b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x164b24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164b28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164b2c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164b30: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164b34: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164b38: 0x3c014317  lui         $at, 0x4317
    ctx->pc = 0x164b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17175 << 16));
    // 0x164b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b40: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164b44: 0x3c01439c  lui         $at, 0x439C
    ctx->pc = 0x164b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17308 << 16));
    // 0x164b48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164b4c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164b50: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164b54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164b58: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164b5c: 0x3c0142c2  lui         $at, 0x42C2
    ctx->pc = 0x164b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17090 << 16));
    // 0x164b60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164b68: 0x3c0143a2  lui         $at, 0x43A2
    ctx->pc = 0x164b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17314 << 16));
    // 0x164b6c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x164b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x164b70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164b74: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164b78: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164b7c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164b80: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164b84: 0x3c0142ba  lui         $at, 0x42BA
    ctx->pc = 0x164b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17082 << 16));
    // 0x164b88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164b8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164b90: 0x3c0143b3  lui         $at, 0x43B3
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17331 << 16));
    // 0x164b94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164b98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164b9c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164ba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164ba4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164ba8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x164ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x164bac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164bb0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164bb4: 0x3c0143bc  lui         $at, 0x43BC
    ctx->pc = 0x164bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17340 << 16));
    // 0x164bb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164bbc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164bc0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164bc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164bc8: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164bcc: 0x3c0142d4  lui         $at, 0x42D4
    ctx->pc = 0x164bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17108 << 16));
    // 0x164bd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164bd4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164bd8: 0x3c0143ca  lui         $at, 0x43CA
    ctx->pc = 0x164bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17354 << 16));
    // 0x164bdc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164be0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164be4: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164be8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164bec: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164bf0: 0x3c014264  lui         $at, 0x4264
    ctx->pc = 0x164bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16996 << 16));
    // 0x164bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164bf8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x164bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x164bfc: 0x3c0143e3  lui         $at, 0x43E3
    ctx->pc = 0x164bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17379 << 16));
    // 0x164c00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164c04: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x164c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x164c08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x164c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164c0c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x164c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x164c10: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x164c10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x164c14: 0x3c01c20c  lui         $at, 0xC20C
    ctx->pc = 0x164c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49676 << 16));
    // 0x164c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c1c: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x164c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x164c20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x164c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x164c24: 0xe5037e80  swc1        $f3, 0x7E80($t0)
    ctx->pc = 0x164c24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E80u, _value); } while (0); }
    // 0x164c28: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E84u, _value); } while (0); }
    // 0x164c2c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164c2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567E88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E88u, _value); } while (0);
    // 0x164c30: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E8Cu, _value); } while (0); }
    // 0x164c34: 0x3c01c150  lui         $at, 0xC150
    ctx->pc = 0x164c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49488 << 16));
    // 0x164c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164c40: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x164c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x164c44: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x164c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x164c48: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E94u, _value); } while (0); }
    // 0x164c4c: 0xe4680000  swc1        $f8, 0x0($v1)
    ctx->pc = 0x164c4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E90u, _value); } while (0); }
    // 0x164c50: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164c50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567E98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E98u, _value); } while (0);
    // 0x164c54: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567E9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567E9Cu, _value); } while (0); }
    // 0x164c58: 0x3c01c22c  lui         $at, 0xC22C
    ctx->pc = 0x164c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49708 << 16));
    // 0x164c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164c64: 0x3c01c27c  lui         $at, 0xC27C
    ctx->pc = 0x164c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49788 << 16));
    // 0x164c68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164c6c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EA4u, _value); } while (0); }
    // 0x164c70: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EA0u, _value); } while (0); }
    // 0x164c74: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164c74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EA8u, _value); } while (0);
    // 0x164c78: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EACu, _value); } while (0); }
    // 0x164c7c: 0x3c01c25c  lui         $at, 0xC25C
    ctx->pc = 0x164c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49756 << 16));
    // 0x164c80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164c84: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164c88: 0x3c01427c  lui         $at, 0x427C
    ctx->pc = 0x164c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17020 << 16));
    // 0x164c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164c90: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EB4u, _value); } while (0); }
    // 0x164c94: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EB0u, _value); } while (0); }
    // 0x164c98: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164c98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EB8u, _value); } while (0);
    // 0x164c9c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EBCu, _value); } while (0); }
    // 0x164ca0: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x164ca4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164ca8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164cac: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x164cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x164cb0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x164cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x164cb4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EC4u, _value); } while (0); }
    // 0x164cb8: 0xe4660000  swc1        $f6, 0x0($v1)
    ctx->pc = 0x164cb8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EC0u, _value); } while (0); }
    // 0x164cbc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EC8u, _value); } while (0);
    // 0x164cc0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567ECCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567ECCu, _value); } while (0); }
    // 0x164cc4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x164cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x164cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164ccc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164cd0: 0x3c0142b6  lui         $at, 0x42B6
    ctx->pc = 0x164cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17078 << 16));
    // 0x164cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164cd8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567ED4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567ED4u, _value); } while (0); }
    // 0x164cdc: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164cdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567ED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567ED0u, _value); } while (0); }
    // 0x164ce0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164ce0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567ED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567ED8u, _value); } while (0);
    // 0x164ce4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EDCu, _value); } while (0); }
    // 0x164ce8: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x164ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x164cec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x164cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x164cf0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164cf4: 0x3c01c28e  lui         $at, 0xC28E
    ctx->pc = 0x164cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49806 << 16));
    // 0x164cf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164cfc: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x164cfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EE0u, _value); } while (0); }
    // 0x164d00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EE4u, _value); } while (0); }
    // 0x164d04: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EE8u, _value); } while (0);
    // 0x164d08: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EECu, _value); } while (0); }
    // 0x164d0c: 0x3c014230  lui         $at, 0x4230
    ctx->pc = 0x164d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16944 << 16));
    // 0x164d10: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x164d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x164d14: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164d18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164d18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EF0u, _value); } while (0);
    // 0x164d1c: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x164d1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EF4u, _value); } while (0); }
    // 0x164d20: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567EF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EF8u, _value); } while (0);
    // 0x164d24: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567EFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567EFCu, _value); } while (0); }
    // 0x164d28: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x164d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x164d2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164d30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164d34: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x164d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
    // 0x164d38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164d3c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164d3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F00u, _value); } while (0); }
    // 0x164d40: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F04u, _value); } while (0); }
    // 0x164d44: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164d44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F08u, _value); } while (0);
    // 0x164d48: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F0Cu, _value); } while (0); }
    // 0x164d4c: 0x3c01c1a8  lui         $at, 0xC1A8
    ctx->pc = 0x164d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49576 << 16));
    // 0x164d50: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x164d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x164d54: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164d58: 0xe4680000  swc1        $f8, 0x0($v1)
    ctx->pc = 0x164d58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F10u, _value); } while (0); }
    // 0x164d5c: 0xe4670004  swc1        $f7, 0x4($v1)
    ctx->pc = 0x164d5cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F14u, _value); } while (0); }
    // 0x164d60: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F18u, _value); } while (0);
    // 0x164d64: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F1Cu, _value); } while (0); }
    // 0x164d68: 0x3c01c280  lui         $at, 0xC280
    ctx->pc = 0x164d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49792 << 16));
    // 0x164d6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164d70: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164d74: 0x3c01c238  lui         $at, 0xC238
    ctx->pc = 0x164d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49720 << 16));
    // 0x164d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164d7c: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164d7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F20u, _value); } while (0); }
    // 0x164d80: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F24u, _value); } while (0); }
    // 0x164d84: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F28u, _value); } while (0);
    // 0x164d88: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F2Cu, _value); } while (0); }
    // 0x164d8c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164d90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x164d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x164d94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164d98: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x164d98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F30u, _value); } while (0); }
    // 0x164d9c: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x164d9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F34u, _value); } while (0); }
    // 0x164da0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F38u, _value); } while (0);
    // 0x164da4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F3Cu, _value); } while (0); }
    // 0x164da8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164dac: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x164dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x164db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164db4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x164db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F40u, _value); } while (0); }
    // 0x164db8: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x164db8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F44u, _value); } while (0); }
    // 0x164dbc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F48u, _value); } while (0);
    // 0x164dc0: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F4Cu, _value); } while (0); }
    // 0x164dc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164dc8: 0x3c01c2c2  lui         $at, 0xC2C2
    ctx->pc = 0x164dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49858 << 16));
    // 0x164dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164dd0: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x164dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F50u, _value); } while (0); }
    // 0x164dd4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x164dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F54u, _value); } while (0); }
    // 0x164dd8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164dd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F58u, _value); } while (0);
    // 0x164ddc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F5Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F5Cu, _value); } while (0); }
    // 0x164de0: 0xe5297f80  swc1        $f9, 0x7F80($t1)
    ctx->pc = 0x164de0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F80u, _value); } while (0); }
    // 0x164de4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164de8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F64u, _value); } while (0); }
    // 0x164dec: 0xe4650000  swc1        $f5, 0x0($v1)
    ctx->pc = 0x164decu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F60u, _value); } while (0); }
    // 0x164df0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164df0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F68u, _value); } while (0);
    // 0x164df4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F6Cu, _value); } while (0); }
    // 0x164df8: 0x3c01c1d0  lui         $at, 0xC1D0
    ctx->pc = 0x164df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49616 << 16));
    // 0x164dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164e00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x164e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x164e04: 0xe4aa0004  swc1        $f10, 0x4($a1)
    ctx->pc = 0x164e04u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F84u, _value); } while (0); }
    // 0x164e08: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x164e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F88u, _value); } while (0);
    // 0x164e0c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x164e0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F8Cu, _value); } while (0); }
    // 0x164e10: 0x3c01432b  lui         $at, 0x432B
    ctx->pc = 0x164e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17195 << 16));
    // 0x164e14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164e18: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x164e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x164e1c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x164e1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F70u, _value); } while (0); }
    // 0x164e20: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x164e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F74u, _value); } while (0); }
    // 0x164e24: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x164e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F7Cu, _value); } while (0); }
    // 0x164e28: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x164e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F78u, _value); } while (0);
    // 0x164e2c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x164e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F90u, _value); } while (0); }
    // 0x164e30: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x164e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x164e34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164e38: 0xe5477fa0  swc1        $f7, 0x7FA0($t2)
    ctx->pc = 0x164e38u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FA0u, _value); } while (0); }
    // 0x164e3c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x164e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FA4u, _value); } while (0); }
    // 0x164e40: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x164e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FA8u, _value); } while (0);
    // 0x164e44: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x164e44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FACu, _value); } while (0); }
    // 0x164e48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x164e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x164e4c: 0x3c014355  lui         $at, 0x4355
    ctx->pc = 0x164e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17237 << 16));
    // 0x164e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164e54: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x164e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FBCu, _value); } while (0); }
    // 0x164e58: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x164e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x164e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164e60: 0x3c01c240  lui         $at, 0xC240
    ctx->pc = 0x164e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49728 << 16));
    // 0x164e64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x164e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x164e68: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x164e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F94u, _value); } while (0); }
    // 0x164e6c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x164e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F9Cu, _value); } while (0); }
    // 0x164e70: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x164e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FB0u, _value); } while (0); }
    // 0x164e74: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x164e74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x567FB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FB4u, _value); } while (0); }
    // 0x164e78: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x164e78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567F98u, _value); } while (0);
    // 0x164e7c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x164e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x567FB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x567FB8u, _value); } while (0);
label_164e80:
    // 0x164e80: 0x3e00008  jr          $ra
    ctx->pc = 0x164E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164E88u;
}
