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

// Function: func_00160D50
// Address: 0x160d50 - 0x160e78
void func_00160D50_0x160d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00160D50_0x160d50");
#endif

    switch (ctx->pc) {
        case 0x160d88u: goto label_160d88;
        case 0x160e24u: goto label_160e24;
        case 0x160e44u: goto label_160e44;
        default: break;
    }

    ctx->pc = 0x160d50u;

    // 0x160d50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x160d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x160d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x160d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x160d5c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160d60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x160d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x160d64: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x160d64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d68: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x160d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160d6c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x160d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160d70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160d74: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x160d74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x160d78: 0x27ab0070  addiu       $t3, $sp, 0x70
    ctx->pc = 0x160d78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160d7c: 0x27ac0080  addiu       $t4, $sp, 0x80
    ctx->pc = 0x160d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x160d80: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x160d80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x160d84: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x160d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_160d88:
    // 0x160d88: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x160d88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x160d8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x160d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x160d90: 0x0  nop
    ctx->pc = 0x160d90u;
    // NOP
    // 0x160d94: 0x0  nop
    ctx->pc = 0x160d94u;
    // NOP
    // 0x160d98: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x160D98u;
    {
        const bool branch_taken_0x160d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x160D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160D98u;
        // 0x160d9c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160d98) {
            ctx->pc = 0x160D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160d88;
        }
    }
    ctx->pc = 0x160DA0u;
    // 0x160da0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x160da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x160da4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x160da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160da8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x160da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x160dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x160db0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x160db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x160db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x160db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160db8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x160db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x160dbc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x160dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160dc0: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x160dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x160dc4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x160dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x160dc8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x160dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x160dcc: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x160dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x160dd0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x160dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x160dd4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x160dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x160dd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x160dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x160ddc: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x160ddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x160de0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x160de0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x160de4: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x160de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x160de8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x160de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x160dec: 0xe542000c  swc1        $f2, 0xC($t2)
    ctx->pc = 0x160decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x160df0: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x160df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x160df4: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x160df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x160df8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x160df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160dfc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x160dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x160e00: 0xe5610004  swc1        $f1, 0x4($t3)
    ctx->pc = 0x160e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
    // 0x160e04: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x160e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x160e08: 0xe562000c  swc1        $f2, 0xC($t3)
    ctx->pc = 0x160e08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x160e0c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x160e0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x160e10: 0xe5810004  swc1        $f1, 0x4($t4)
    ctx->pc = 0x160e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x160e14: 0x8da50ed0  lw          $a1, 0xED0($t5)
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 3792)));
    // 0x160e18: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x160e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x160e1c: 0xc056e20  jal         func_15B880
    ctx->pc = 0x160E1Cu;
    SET_GPR_U32(ctx, 31, 0x160E24u);
    ctx->pc = 0x160E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E1Cu;
    // 0x160e20: 0xe582000c  swc1        $f2, 0xC($t4) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B880u, 0x160E1Cu, 0x160E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E24u;
label_160e24:
    // 0x160e24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x160e24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160E28u;
    {
        const bool branch_taken_0x160e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e28) {
            ctx->pc = 0x160E3Cu;
            goto label_160e3c;
        }
    }
    ctx->pc = 0x160E30u;
    // 0x160e30: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x160e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x160e34: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x160e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x160e38: 0xfc620040  sd          $v0, 0x40($v1)
    ctx->pc = 0x160e38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 2));
label_160e3c:
    // 0x160e3c: 0xc0b153a  jal         func_2C54E8
    ctx->pc = 0x160E3Cu;
    SET_GPR_U32(ctx, 31, 0x160E44u);
    ctx->pc = 0x160E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E3Cu;
    // 0x160e40: 0x8e042fb0  lw          $a0, 0x2FB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54E8u, 0x160E3Cu, 0x160E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E44u;
label_160e44:
    // 0x160e44: 0x8e042fb0  lw          $a0, 0x2FB0($s0)
    ctx->pc = 0x160e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    // 0x160e48: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x160e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x160e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160e50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x160e54: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x160e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x160e58: 0x8e022fb0  lw          $v0, 0x2FB0($s0)
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12208)));
    // 0x160e5c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x160e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x160e60: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x160e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
    // 0x160e64: 0x3e00008  jr          $ra
    ctx->pc = 0x160E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E64u;
        // 0x160e68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160E6Cu;
    // 0x160e6c: 0x0  nop
    ctx->pc = 0x160e6cu;
    // NOP
    // 0x160e70: 0x0  nop
    ctx->pc = 0x160e70u;
    // NOP
    // 0x160e74: 0x0  nop
    ctx->pc = 0x160e74u;
    // NOP
    ctx->pc = 0x160e78u;
}
