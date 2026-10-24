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

// Function: CutFrameCmd_resolveBefore
// Address: 0x2b2d88 - 0x2b2e80
void CutFrameCmd_resolveBefore_0x2b2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CutFrameCmd_resolveBefore_0x2b2d88");
#endif

    switch (ctx->pc) {
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e34u: goto label_2b2e34;
        case 0x2b2e4cu: goto label_2b2e4c;
        default: break;
    }

    ctx->pc = 0x2b2d88u;

    // 0x2b2d88: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b2d8c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2d90: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b2d94: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x2b2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x2b2d98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2d9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2da0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2da4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2b2da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2b2da8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2DA8u;
    {
        const bool branch_taken_0x2b2da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DA8u;
        // 0x2b2dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2da8) {
            ctx->pc = 0x2B2DB8u;
            goto label_2b2db8;
        }
    }
    ctx->pc = 0x2B2DB0u;
    // 0x2b2db0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2B2DB0u;
    {
        const bool branch_taken_0x2b2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DB0u;
        // 0x2b2db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2db0) {
            ctx->pc = 0x2B2E68u;
            goto label_2b2e68;
        }
    }
    ctx->pc = 0x2B2DB8u;
label_2b2db8:
    // 0x2b2db8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2b2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b2dbc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2b2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2dc0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2b2dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2b2dc4: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2DC4u;
    {
        const bool branch_taken_0x2b2dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b2dc4) {
            ctx->pc = 0x2B2DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2DC4u;
            // 0x2b2dc8: 0x90820002  lbu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2DE4u;
            goto label_2b2de4;
        }
    }
    ctx->pc = 0x2B2DCCu;
    // 0x2b2dcc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2b2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2b2dd0: 0x24446af0  addiu       $a0, $v0, 0x6AF0
    ctx->pc = 0x2b2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x2b2dd4: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2DD4u;
    SET_GPR_U32(ctx, 31, 0x2B2DDCu);
    ctx->pc = 0x2B2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2DD4u;
    // 0x2b2dd8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2DD4u, 0x2B2DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DDCu;
label_2b2ddc:
    // 0x2b2ddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2DDCu;
    {
        const bool branch_taken_0x2b2ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DDCu;
        // 0x2b2de0: 0xa2020044  sb          $v0, 0x44($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ddc) {
            ctx->pc = 0x2B2DECu;
            goto label_2b2dec;
        }
    }
    ctx->pc = 0x2B2DE4u;
label_2b2de4:
    // 0x2b2de4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x2b2de8: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x2b2de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
label_2b2dec:
    // 0x2b2dec: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b2decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b2df0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2b2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b2df4: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x2b2df4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b2df8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x2b2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x2b2dfc: 0x94a40006  lhu         $a0, 0x6($a1)
    ctx->pc = 0x2b2dfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2b2e00: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2E00u;
    {
        const bool branch_taken_0x2b2e00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b2e00) {
            ctx->pc = 0x2B2E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E00u;
            // 0x2b2e04: 0x90a20006  lbu         $v0, 0x6($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E18u;
            goto label_2b2e18;
        }
    }
    ctx->pc = 0x2B2E08u;
    // 0x2b2e08: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2E08u;
    SET_GPR_U32(ctx, 31, 0x2B2E10u);
    ctx->pc = 0x2B2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E08u;
    // 0x2b2e0c: 0x26246af0  addiu       $a0, $s1, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2E08u, 0x2B2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E10u;
label_2b2e10:
    // 0x2b2e10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2E10u;
    {
        const bool branch_taken_0x2b2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e10) {
            ctx->pc = 0x2B2E1Cu;
            goto label_2b2e1c;
        }
    }
    ctx->pc = 0x2B2E18u;
label_2b2e18:
    // 0x2b2e18: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x2b2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2b2e1c:
    // 0x2b2e1c: 0x26316af0  addiu       $s1, $s1, 0x6AF0
    ctx->pc = 0x2b2e1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    // 0x2b2e20: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x2b2e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b2e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2e28: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x2b2e28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b2e2c: 0xc0a5ee6  jal         func_297B98
    ctx->pc = 0x2B2E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B2E34u);
    ctx->pc = 0x2B2E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E2Cu;
    // 0x2b2e30: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B98u, 0x2B2E2Cu, 0x2B2E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E34u;
label_2b2e34:
    // 0x2b2e34: 0x92030044  lbu         $v1, 0x44($s0)
    ctx->pc = 0x2b2e34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b2e38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b2e38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b2e3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2E3Cu;
    {
        const bool branch_taken_0x2b2e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E3Cu;
        // 0x2b2e40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e3c) {
            ctx->pc = 0x2B2E68u;
            goto label_2b2e68;
        }
    }
    ctx->pc = 0x2B2E44u;
    // 0x2b2e44: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2B2E44u;
    SET_GPR_U32(ctx, 31, 0x2B2E4Cu);
    ctx->pc = 0x2B2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E44u;
    // 0x2b2e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2B2E44u, 0x2B2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2E4Cu;
label_2b2e4c:
    // 0x2b2e4c: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2b2e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2e50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b2e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b2e54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b2e54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2e58: 0x0  nop
    ctx->pc = 0x2b2e58u;
    // NOP
    // 0x2b2e5c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2E5Cu;
    {
        const bool branch_taken_0x2b2e5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E5Cu;
        // 0x2b2e60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e5c) {
            ctx->pc = 0x2B2E68u;
            goto label_2b2e68;
        }
    }
    ctx->pc = 0x2B2E64u;
    // 0x2b2e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b2e68:
    // 0x2b2e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b2e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2e6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b2e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2e74: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E74u;
        // 0x2b2e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2E7Cu;
    // 0x2b2e7c: 0x0  nop
    ctx->pc = 0x2b2e7cu;
    // NOP
    ctx->pc = 0x2b2e80u;
}
