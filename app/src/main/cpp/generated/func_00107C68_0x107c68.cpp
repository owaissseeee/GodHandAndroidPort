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

// Function: func_00107C68
// Address: 0x107c68 - 0x107de0
void func_00107C68_0x107c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00107C68_0x107c68");
#endif

    switch (ctx->pc) {
        case 0x107cc0u: goto label_107cc0;
        case 0x107d40u: goto label_107d40;
        default: break;
    }

    ctx->pc = 0x107c68u;

    // 0x107c68: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x107c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x107c6c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x107c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x107c70: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x107c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x107c74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x107c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c78: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x107c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x107c7c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x107c7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c80: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x107c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x107c84: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x107c84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c88: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x107c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x107c8c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x107c8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107c90: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x107c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x107c94: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x107c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x107c98: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x107c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x107c9c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x107c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x107ca0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x107ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x107ca4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x107ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x107ca8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x107CA8u;
    {
        const bool branch_taken_0x107ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CA8u;
        // 0x107cac: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ca8) {
            ctx->pc = 0x107DB0u;
            goto label_107db0;
        }
    }
    ctx->pc = 0x107CB0u;
    // 0x107cb0: 0x241e00a0  addiu       $fp, $zero, 0xA0
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x107cb4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x107cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x107cb8: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x107cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x107cbc: 0x0  nop
    ctx->pc = 0x107cbcu;
    // NOP
label_107cc0:
    // 0x107cc0: 0x8e840054  lw          $a0, 0x54($s4)
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x107cc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x107CC4u;
    {
        const bool branch_taken_0x107cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x107cc4) {
            ctx->pc = 0x107CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107CC4u;
            // 0x107cc8: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107CE0u;
            goto label_107ce0;
        }
    }
    ctx->pc = 0x107CCCu;
    // 0x107ccc: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x107cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x107cd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x107cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x107cd4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x107cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x107cd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x107CD8u;
    {
        const bool branch_taken_0x107cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD8u;
        // 0x107cdc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cd8) {
            ctx->pc = 0x107D20u;
            goto label_107d20;
        }
    }
    ctx->pc = 0x107CE0u;
label_107ce0:
    // 0x107ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x107ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107ce4: 0x92a302b4  lbu         $v1, 0x2B4($s5)
    ctx->pc = 0x107ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 692)));
    // 0x107ce8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x107ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x107cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107CECu;
    {
        const bool branch_taken_0x107cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CECu;
        // 0x107cf0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cec) {
            ctx->pc = 0x107CFCu;
            goto label_107cfc;
        }
    }
    ctx->pc = 0x107CF4u;
    // 0x107cf4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x107cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x107cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x107cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107cfc:
    // 0x107cfc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x107cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x107d00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x107D00u;
    {
        const bool branch_taken_0x107d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D00u;
        // 0x107d04: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d00) {
            ctx->pc = 0x107D18u;
            goto label_107d18;
        }
    }
    ctx->pc = 0x107D08u;
    // 0x107d08: 0x8ea30278  lw          $v1, 0x278($s5)
    ctx->pc = 0x107d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 632)));
    // 0x107d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x107d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x107d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x107D10u;
    {
        const bool branch_taken_0x107d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D10u;
        // 0x107d14: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d10) {
            ctx->pc = 0x107D1Cu;
            goto label_107d1c;
        }
    }
    ctx->pc = 0x107D18u;
label_107d18:
    // 0x107d18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x107d18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_107d1c:
    // 0x107d1c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x107d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_107d20:
    // 0x107d20: 0x24450080  addiu       $a1, $v0, 0x80
    ctx->pc = 0x107d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x107d24: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x107d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x107d28: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x107d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x107d2c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x107d2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x107d30: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x107d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x107d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107d38: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x107D38u;
    SET_GPR_U32(ctx, 31, 0x107D40u);
    ctx->pc = 0x107D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107D38u;
    // 0x107d3c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x107D38u, 0x107D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107D40u;
label_107d40:
    // 0x107d40: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x107d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x107d44: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x107d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x107d48: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x107d4c: 0x10760006  beq         $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x107D4Cu;
    {
        const bool branch_taken_0x107d4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x107D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D4Cu;
        // 0x107d50: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d4c) {
            ctx->pc = 0x107D68u;
            goto label_107d68;
        }
    }
    ctx->pc = 0x107D54u;
    // 0x107d54: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x107d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107d58: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x107d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x107d5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x107d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x107d60: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x107d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x107d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_107d68:
    // 0x107d68: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x107d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x107d6c: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x107D6Cu;
    {
        const bool branch_taken_0x107d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x107d6c) {
            ctx->pc = 0x107D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D6Cu;
            // 0x107d70: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107D90u;
            goto label_107d90;
        }
    }
    ctx->pc = 0x107D74u;
    // 0x107d74: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x107d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d78: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x107d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x107d7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x107d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x107d80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x107d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x107d84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x107d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107d88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x107d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x107d8c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x107d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_107d90:
    // 0x107d90: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x107d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x107d94: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x107d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x107d98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x107d98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x107d9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x107d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x107da0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x107da4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x107da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x107da8: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x107DA8u;
    {
        const bool branch_taken_0x107da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA8u;
        // 0x107dac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107da8) {
            ctx->pc = 0x107CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107cc0;
        }
    }
    ctx->pc = 0x107DB0u;
label_107db0:
    // 0x107db0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x107db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x107db4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x107db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x107db8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x107db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x107dbc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x107dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x107dc0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x107dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x107dc4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x107dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x107dc8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x107dc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x107dcc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x107dccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x107dd0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x107dd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107dd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x107dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x107DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DD8u;
        // 0x107ddc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DE0u;
}
