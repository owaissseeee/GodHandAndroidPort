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

// Function: func_00144C90
// Address: 0x144c90 - 0x144fd8
void func_00144C90_0x144c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00144C90_0x144c90");
#endif

    switch (ctx->pc) {
        case 0x144d30u: goto label_144d30;
        case 0x144d38u: goto label_144d38;
        case 0x144d50u: goto label_144d50;
        case 0x144d58u: goto label_144d58;
        case 0x144d6cu: goto label_144d6c;
        case 0x144dd8u: goto label_144dd8;
        case 0x144f88u: goto label_144f88;
        case 0x144f94u: goto label_144f94;
        default: break;
    }

    ctx->pc = 0x144c90u;

    // 0x144c90: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x144c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x144c94: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x144c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x144c98: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x144c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x144c9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x144c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ca0: 0xc440d880  lwc1        $f0, -0x2780($v0)
    ctx->pc = 0x144ca0u;
    { uint32_t bits = FAST_READ32(0x3BD880u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ca4: 0x26630098  addiu       $v1, $s3, 0x98
    ctx->pc = 0x144ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x144ca8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x144ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x144cac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x144cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x144cb0: 0x2442d880  addiu       $v0, $v0, -0x2780
    ctx->pc = 0x144cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957184));
    // 0x144cb4: 0x266302a8  addiu       $v1, $s3, 0x2A8
    ctx->pc = 0x144cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 680));
    // 0x144cb8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x144cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x144cbc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x144cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x144cc0: 0x26760094  addiu       $s6, $s3, 0x94
    ctx->pc = 0x144cc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 148));
    // 0x144cc4: 0x2663033c  addiu       $v1, $s3, 0x33C
    ctx->pc = 0x144cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 828));
    // 0x144cc8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x144cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x144ccc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x144cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x144cd0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cd4: 0x26630350  addiu       $v1, $s3, 0x350
    ctx->pc = 0x144cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 848));
    // 0x144cd8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x144cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x144cdc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x144cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x144ce0: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x144ce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x144ce4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x144ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x144ce8: 0x26630290  addiu       $v1, $s3, 0x290
    ctx->pc = 0x144ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 656));
    // 0x144cec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x144cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x144cf0: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x144cf0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x144cf4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x144cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x144cf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x144cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x144cfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144d00: 0xe6600290  swc1        $f0, 0x290($s3)
    ctx->pc = 0x144d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 656), bits); }
    // 0x144d04: 0x3c01431b  lui         $at, 0x431B
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17179 << 16));
    // 0x144d08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x144d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144d0c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x144d0cu;
    { uint32_t bits = FAST_READ32(0x3BD884u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d10: 0x3c01c26c  lui         $at, 0xC26C
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49772 << 16));
    // 0x144d14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144d18: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x144d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x144d1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x144d1cu;
    { uint32_t bits = FAST_READ32(0x3BD888u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144d20: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x144d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x144d24: 0xe6620290  swc1        $f2, 0x290($s3)
    ctx->pc = 0x144d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 656), bits); }
    // 0x144d28: 0xe6610294  swc1        $f1, 0x294($s3)
    ctx->pc = 0x144d28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 660), bits); }
    // 0x144d2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x144d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144d30:
    // 0x144d30: 0x14a880  sll         $s5, $s4, 2
    ctx->pc = 0x144d30u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x144d34: 0x0  nop
    ctx->pc = 0x144d34u;
    // NOP
label_144d38:
    // 0x144d38: 0x25e8818  mult        $s1, $s2, $fp
    ctx->pc = 0x144d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x144d3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x144d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d40: 0x26300100  addiu       $s0, $s1, 0x100
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x144d44: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x144d44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x144d48: 0xc0aa8f6  jal         func_2AA3D8
    ctx->pc = 0x144D48u;
    SET_GPR_U32(ctx, 31, 0x144D50u);
    ctx->pc = 0x144D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D48u;
    // 0x144d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA3D8u, 0x144D48u, 0x144D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D50u;
label_144d50:
    // 0x144d50: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x144D50u;
    SET_GPR_U32(ctx, 31, 0x144D58u);
    ctx->pc = 0x144D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D50u;
    // 0x144d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x144D50u, 0x144D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D58u;
label_144d58:
    // 0x144d58: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x144d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x144d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d64: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x144D64u;
    SET_GPR_U32(ctx, 31, 0x144D6Cu);
    ctx->pc = 0x144D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D64u;
    // 0x144d68: 0xa220011c  sb          $zero, 0x11C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x144D64u, 0x144D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D6Cu;
label_144d6c:
    // 0x144d6c: 0x2571818  mult        $v1, $s2, $s7
    ctx->pc = 0x144d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x144d70: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x144d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x144d74: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x144d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x144d78: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x144d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x144d7c: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x144d7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x144d80: 0x2e450005  sltiu       $a1, $s2, 0x5
    ctx->pc = 0x144d80u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144d84: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x144D84u;
    {
        const bool branch_taken_0x144d84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D84u;
        // 0x144d88: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d84) {
            ctx->pc = 0x144D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d38;
        }
    }
    ctx->pc = 0x144D8Cu;
    // 0x144d8c: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x144d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x144d90: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x144d90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144d94: 0x2e830005  sltiu       $v1, $s4, 0x5
    ctx->pc = 0x144d94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144d98: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x144D98u;
    {
        const bool branch_taken_0x144d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D98u;
        // 0x144d9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d98) {
            ctx->pc = 0x144D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d30;
        }
    }
    ctx->pc = 0x144DA0u;
    // 0x144da0: 0x3c0e5080  lui         $t6, 0x5080
    ctx->pc = 0x144da0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)20608 << 16));
    // 0x144da4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x144da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x144da8: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x144da8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x144dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x144db0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x144db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x144db4: 0x8fb50004  lw          $s5, 0x4($sp)
    ctx->pc = 0x144db4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x144db8: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x144db8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x144dbc: 0x8fb20000  lw          $s2, 0x0($sp)
    ctx->pc = 0x144dbcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144dc0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x144dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dc4: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x144dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144dc8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x144dc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144dcc: 0x8fb0000c  lw          $s0, 0xC($sp)
    ctx->pc = 0x144dccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x144dd0: 0x240f0014  addiu       $t7, $zero, 0x14
    ctx->pc = 0x144dd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x144dd4: 0x35ce8080  ori         $t6, $t6, 0x8080
    ctx->pc = 0x144dd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32896);
label_144dd8:
    // 0x144dd8: 0x28f1018  mult        $v0, $s4, $t7
    ctx->pc = 0x144dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x144ddc: 0x28f2018  mult        $a0, $s4, $t7
    ctx->pc = 0x144ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144de0: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x144de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x144de4: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x144de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x144de8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x144de8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x144dec: 0x0  nop
    ctx->pc = 0x144decu;
    // NOP
    // 0x144df0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x144df0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x144df4: 0x4d3821  addu        $a3, $v0, $t5
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x144df8: 0x2a44021  addu        $t0, $s5, $a0
    ctx->pc = 0x144df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x144dfc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x144dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x144e00: 0x1a43021  addu        $a2, $t5, $a0
    ctx->pc = 0x144e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x144e04: 0x2024821  addu        $t1, $s0, $v0
    ctx->pc = 0x144e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x144e08: 0x575021  addu        $t2, $v0, $s7
    ctx->pc = 0x144e08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x144e0c: 0x2426021  addu        $t4, $s2, $v0
    ctx->pc = 0x144e0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x144e10: 0x16960006  bne         $s4, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x144E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E10u;
        // 0x144e14: 0x2225821  addu        $t3, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E2Cu;
            goto label_144e2c;
        }
    }
    ctx->pc = 0x144E18u;
    // 0x144e18: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x144e1c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x144e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x144e20: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x144e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x144e24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144E24u;
    {
        const bool branch_taken_0x144e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E24u;
        // 0x144e28: 0xac44004c  sw          $a0, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e24) {
            ctx->pc = 0x144E34u;
            goto label_144e34;
        }
    }
    ctx->pc = 0x144E2Cu;
label_144e2c:
    // 0x144e2c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x144e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x144e30: 0xac4e004c  sw          $t6, 0x4C($v0)
    ctx->pc = 0x144e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 14));
label_144e34:
    // 0x144e34: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x144e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144e38: 0x30b4ffff  andi        $s4, $a1, 0xFFFF
    ctx->pc = 0x144e38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x144e3c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x144e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x144e40: 0x2e850004  sltiu       $a1, $s4, 0x4
    ctx->pc = 0x144e40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x144e44: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x144e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144e48: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x144e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
    // 0x144e4c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144e50: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x144e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x144e54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x144e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144e58: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x144e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x144e5c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144e60: 0xc6630290  lwc1        $f3, 0x290($s3)
    ctx->pc = 0x144e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144e64: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x144e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144e68: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x144e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x144e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x144e70: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x144e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x144e74: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x144e74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x144e78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x144e78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x144e7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144e80: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x144e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x144e84: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x144e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144e88: 0xc6610294  lwc1        $f1, 0x294($s3)
    ctx->pc = 0x144e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144e8c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x144e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144e90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x144e90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x144e94: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x144e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x144e98: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x144e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x144e9c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x144e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144ea0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x144ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x144ea4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x144ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144ea8: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x144ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x144eac: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144eb0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x144eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144eb4: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x144eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x144eb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x144eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144ebc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x144ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144ec0: 0x14a0ffc5  bnez        $a1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x144EC0u;
    {
        const bool branch_taken_0x144ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144EC0u;
        // 0x144ec4: 0xe5600000  swc1        $f0, 0x0($t3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ec0) {
            ctx->pc = 0x144DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144dd8;
        }
    }
    ctx->pc = 0x144EC8u;
    // 0x144ec8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x144ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x144ecc: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x144eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x144ed0: 0x8e6400e8  lw          $a0, 0xE8($s3)
    ctx->pc = 0x144ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x144ed4: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x144ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x144ed8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144edc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x144edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x144ee0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x144ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144ee4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x144ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144ee8: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x144ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x144eec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x144eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144ef0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x144ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ef4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x144ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x144ef8: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x144ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x144efc: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x144efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x144f00: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x144f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x144f04: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x144f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x144f08: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x144f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x144f0c: 0x8e6200e8  lw          $v0, 0xE8($s3)
    ctx->pc = 0x144f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x144f10: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x144f10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x144f14: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x144f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x144f18: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x144f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x144f1c: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x144f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x144f20: 0xc6620290  lwc1        $f2, 0x290($s3)
    ctx->pc = 0x144f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144f24: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x144f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f28: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x144f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x144f2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x144f30: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x144f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x144f34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x144f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144f38: 0xe4410038  swc1        $f1, 0x38($v0)
    ctx->pc = 0x144f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x144f3c: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x144f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x144f40: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x144f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x144f44: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x144f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f48: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x144f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x144f4c: 0x8e6300e4  lw          $v1, 0xE4($s3)
    ctx->pc = 0x144f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
    // 0x144f50: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x144f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144f54: 0xe6600360  swc1        $f0, 0x360($s3)
    ctx->pc = 0x144f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 864), bits); }
    // 0x144f58: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x144f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144f5c: 0xe661034c  swc1        $f1, 0x34C($s3)
    ctx->pc = 0x144f5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 844), bits); }
    // 0x144f60: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x144f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x144f64: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x144f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x144f68: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x144f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x144f6c: 0xa666041e  sh          $a2, 0x41E($s3)
    ctx->pc = 0x144f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1054), (uint16_t)GPR_U32(ctx, 6));
    // 0x144f70: 0xae650368  sw          $a1, 0x368($s3)
    ctx->pc = 0x144f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 872), GPR_U32(ctx, 5));
    // 0x144f74: 0xa6600420  sh          $zero, 0x420($s3)
    ctx->pc = 0x144f74u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1056), (uint16_t)GPR_U32(ctx, 0));
    // 0x144f78: 0xae6002a4  sw          $zero, 0x2A4($s3)
    ctx->pc = 0x144f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 0));
    // 0x144f7c: 0xae650364  sw          $a1, 0x364($s3)
    ctx->pc = 0x144f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 5));
    // 0x144f80: 0x2112018  mult        $a0, $s0, $s1
    ctx->pc = 0x144f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x144f84: 0x0  nop
    ctx->pc = 0x144f84u;
    // NOP
label_144f88:
    // 0x144f88: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x144f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x144f8c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x144F8Cu;
    SET_GPR_U32(ctx, 31, 0x144F94u);
    ctx->pc = 0x144F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144F8Cu;
    // 0x144f90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x144F8Cu, 0x144F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144F94u;
label_144f94:
    // 0x144f94: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x144f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x144f98: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x144f98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x144f9c: 0x2e030005  sltiu       $v1, $s0, 0x5
    ctx->pc = 0x144f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144fa0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144FA0u;
    {
        const bool branch_taken_0x144fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144fa0) {
            ctx->pc = 0x144FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144FA0u;
            // 0x144fa4: 0x2112018  mult        $a0, $s0, $s1 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x144F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144f88;
        }
    }
    ctx->pc = 0x144FA8u;
    // 0x144fa8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x144fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x144fac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x144facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x144fb0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x144fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x144fb4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x144fb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144fb8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x144fb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144fbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x144fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144fc0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x144fc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144fc4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x144fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144fc8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x144fc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144fcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x144fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x144FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144FD0u;
        // 0x144fd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144FD8u;
}
