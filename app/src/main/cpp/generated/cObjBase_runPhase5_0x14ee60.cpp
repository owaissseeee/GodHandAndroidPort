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

// Function: cObjBase_runPhase5
// Address: 0x14ee60 - 0x14ef50
void cObjBase_runPhase5_0x14ee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_runPhase5_0x14ee60");
#endif

    switch (ctx->pc) {
        case 0x14eeb0u: goto label_14eeb0;
        case 0x14eed0u: goto label_14eed0;
        case 0x14eee4u: goto label_14eee4;
        case 0x14ef00u: goto label_14ef00;
        case 0x14ef0cu: goto label_14ef0c;
        case 0x14ef1cu: goto label_14ef1c;
        case 0x14ef28u: goto label_14ef28;
        case 0x14ef34u: goto label_14ef34;
        default: break;
    }

    ctx->pc = 0x14ee60u;

    // 0x14ee60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ee60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ee64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ee68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ee6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ee70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee74: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14ee74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14ee78: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EE78u;
    {
        const bool branch_taken_0x14ee78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE78u;
        // 0x14ee7c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee78) {
            ctx->pc = 0x14EEDCu;
            goto label_14eedc;
        }
    }
    ctx->pc = 0x14EE80u;
    // 0x14ee80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EE80u;
    {
        const bool branch_taken_0x14ee80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee80) {
            ctx->pc = 0x14EE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EE80u;
            // 0x14ee84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EE98u;
            goto label_14ee98;
        }
    }
    ctx->pc = 0x14EE88u;
    // 0x14ee88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EE88u;
    {
        const bool branch_taken_0x14ee88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ee88) {
            ctx->pc = 0x14EEA8u;
            goto label_14eea8;
        }
    }
    ctx->pc = 0x14EE90u;
    // 0x14ee90: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x14EE90u;
    {
        const bool branch_taken_0x14ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE90u;
        // 0x14ee94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ee90) {
            ctx->pc = 0x14EF38u;
            goto label_14ef38;
        }
    }
    ctx->pc = 0x14EE98u;
label_14ee98:
    // 0x14ee98: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x14EE98u;
    {
        const bool branch_taken_0x14ee98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14ee98) {
            ctx->pc = 0x14EF14u;
            goto label_14ef14;
        }
    }
    ctx->pc = 0x14EEA0u;
    // 0x14eea0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14EEA0u;
    {
        const bool branch_taken_0x14eea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEA0u;
        // 0x14eea4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eea0) {
            ctx->pc = 0x14EF38u;
            goto label_14ef38;
        }
    }
    ctx->pc = 0x14EEA8u;
label_14eea8:
    // 0x14eea8: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x14EEA8u;
    SET_GPR_U32(ctx, 31, 0x14EEB0u);
    ctx->pc = 0x14EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEA8u;
    // 0x14eeac: 0xc60c0438  lwc1        $f12, 0x438($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x14EEA8u, 0x14EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEB0u;
label_14eeb0:
    // 0x14eeb0: 0x8e050428  lw          $a1, 0x428($s0)
    ctx->pc = 0x14eeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14eeb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14eeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eeb8: 0x8e06042c  lw          $a2, 0x42C($s0)
    ctx->pc = 0x14eeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x14eebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eec0: 0xc60c0440  lwc1        $f12, 0x440($s0)
    ctx->pc = 0x14eec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14eec4: 0xc60d0430  lwc1        $f13, 0x430($s0)
    ctx->pc = 0x14eec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14eec8: 0xc055d5a  jal         func_157568
    ctx->pc = 0x14EEC8u;
    SET_GPR_U32(ctx, 31, 0x14EED0u);
    ctx->pc = 0x14EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEC8u;
    // 0x14eecc: 0x96080434  lhu         $t0, 0x434($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x14EEC8u, 0x14EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EED0u;
label_14eed0:
    // 0x14eed0: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14eed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14eed8: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x14eed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_14eedc:
    // 0x14eedc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EEDCu;
    SET_GPR_U32(ctx, 31, 0x14EEE4u);
    ctx->pc = 0x14EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEDCu;
    // 0x14eee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EEDCu, 0x14EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEE4u;
label_14eee4:
    // 0x14eee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14EEE4u;
    {
        const bool branch_taken_0x14eee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEE4u;
        // 0x14eee8: 0x26040340  addiu       $a0, $s0, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eee4) {
            ctx->pc = 0x14EEF8u;
            goto label_14eef8;
        }
    }
    ctx->pc = 0x14EEECu;
    // 0x14eeec: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x14eeecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eef0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14eef4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x14eef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_14eef8:
    // 0x14eef8: 0xc0568fa  jal         func_15A3E8
    ctx->pc = 0x14EEF8u;
    SET_GPR_U32(ctx, 31, 0x14EF00u);
    ctx->pc = 0x14EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEF8u;
    // 0x14eefc: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A3E8u, 0x14EEF8u, 0x14EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF00u;
label_14ef00:
    // 0x14ef00: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x14ef00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14ef04: 0xc0541bc  jal         func_1506F0
    ctx->pc = 0x14EF04u;
    SET_GPR_U32(ctx, 31, 0x14EF0Cu);
    ctx->pc = 0x14EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF04u;
    // 0x14ef08: 0x26050310  addiu       $a1, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1506F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1506F0u, 0x14EF04u, 0x14EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF0Cu;
label_14ef0c:
    // 0x14ef0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14EF0Cu;
    {
        const bool branch_taken_0x14ef0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF0Cu;
        // 0x14ef10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ef0c) {
            ctx->pc = 0x14EF38u;
            goto label_14ef38;
        }
    }
    ctx->pc = 0x14EF14u;
label_14ef14:
    // 0x14ef14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EF14u;
    SET_GPR_U32(ctx, 31, 0x14EF1Cu);
    ctx->pc = 0x14EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF14u;
    // 0x14ef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EF14u, 0x14EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF1Cu;
label_14ef1c:
    // 0x14ef1c: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x14ef20: 0xc0568fa  jal         func_15A3E8
    ctx->pc = 0x14EF20u;
    SET_GPR_U32(ctx, 31, 0x14EF28u);
    ctx->pc = 0x14EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF20u;
    // 0x14ef24: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A3E8u, 0x14EF20u, 0x14EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF28u;
label_14ef28:
    // 0x14ef28: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x14ef2c: 0xc0541bc  jal         func_1506F0
    ctx->pc = 0x14EF2Cu;
    SET_GPR_U32(ctx, 31, 0x14EF34u);
    ctx->pc = 0x14EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EF2Cu;
    // 0x14ef30: 0x26050310  addiu       $a1, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1506F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1506F0u, 0x14EF2Cu, 0x14EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EF34u;
label_14ef34:
    // 0x14ef34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ef34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14ef38:
    // 0x14ef38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ef38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EF3Cu;
        // 0x14ef40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF44u;
    // 0x14ef44: 0x0  nop
    ctx->pc = 0x14ef44u;
    // NOP
    // 0x14ef48: 0x0  nop
    ctx->pc = 0x14ef48u;
    // NOP
    // 0x14ef4c: 0x0  nop
    ctx->pc = 0x14ef4cu;
    // NOP
    ctx->pc = 0x14ef50u;
}
