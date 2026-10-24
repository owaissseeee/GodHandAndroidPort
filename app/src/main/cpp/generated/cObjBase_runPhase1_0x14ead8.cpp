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

// Function: cObjBase_runPhase1
// Address: 0x14ead8 - 0x14eb90
void cObjBase_runPhase1_0x14ead8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cObjBase_runPhase1_0x14ead8");
#endif

    switch (ctx->pc) {
        case 0x14eb28u: goto label_14eb28;
        case 0x14eb48u: goto label_14eb48;
        case 0x14eb5cu: goto label_14eb5c;
        case 0x14eb7cu: goto label_14eb7c;
        default: break;
    }

    ctx->pc = 0x14ead8u;

    // 0x14ead8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ead8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14eadc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14eae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14eae8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14eae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eaec: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14eaecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eaf0: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EAF0u;
    {
        const bool branch_taken_0x14eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAF0u;
        // 0x14eaf4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaf0) {
            ctx->pc = 0x14EB54u;
            goto label_14eb54;
        }
    }
    ctx->pc = 0x14EAF8u;
    // 0x14eaf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EAF8u;
    {
        const bool branch_taken_0x14eaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eaf8) {
            ctx->pc = 0x14EAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EAF8u;
            // 0x14eafc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB10u;
            goto label_14eb10;
        }
    }
    ctx->pc = 0x14EB00u;
    // 0x14eb00: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EB00u;
    {
        const bool branch_taken_0x14eb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb00) {
            ctx->pc = 0x14EB20u;
            goto label_14eb20;
        }
    }
    ctx->pc = 0x14EB08u;
    // 0x14eb08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14EB08u;
    {
        const bool branch_taken_0x14eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB08u;
        // 0x14eb0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb08) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB10u;
label_14eb10:
    // 0x14eb10: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14EB10u;
    {
        const bool branch_taken_0x14eb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14eb10) {
            ctx->pc = 0x14EB74u;
            goto label_14eb74;
        }
    }
    ctx->pc = 0x14EB18u;
    // 0x14eb18: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x14EB18u;
    {
        const bool branch_taken_0x14eb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB18u;
        // 0x14eb1c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb18) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB20u;
label_14eb20:
    // 0x14eb20: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x14EB20u;
    SET_GPR_U32(ctx, 31, 0x14EB28u);
    ctx->pc = 0x14EB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB20u;
    // 0x14eb24: 0xc60c0438  lwc1        $f12, 0x438($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x14EB20u, 0x14EB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB28u;
label_14eb28:
    // 0x14eb28: 0x8e050428  lw          $a1, 0x428($s0)
    ctx->pc = 0x14eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x14eb2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14eb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb30: 0x8e06042c  lw          $a2, 0x42C($s0)
    ctx->pc = 0x14eb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x14eb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb38: 0xc60c0440  lwc1        $f12, 0x440($s0)
    ctx->pc = 0x14eb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14eb3c: 0xc60d0430  lwc1        $f13, 0x430($s0)
    ctx->pc = 0x14eb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14eb40: 0xc055d5a  jal         func_157568
    ctx->pc = 0x14EB40u;
    SET_GPR_U32(ctx, 31, 0x14EB48u);
    ctx->pc = 0x14EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB40u;
    // 0x14eb44: 0x96080434  lhu         $t0, 0x434($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x14EB40u, 0x14EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB48u;
label_14eb48:
    // 0x14eb48: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x14eb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eb4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14eb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14eb50: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x14eb50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_14eb54:
    // 0x14eb54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EB54u;
    SET_GPR_U32(ctx, 31, 0x14EB5Cu);
    ctx->pc = 0x14EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB54u;
    // 0x14eb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EB54u, 0x14EB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB5Cu;
label_14eb5c:
    // 0x14eb5c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EB5Cu;
    {
        const bool branch_taken_0x14eb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14eb5c) {
            ctx->pc = 0x14EB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14EB5Cu;
            // 0x14eb60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB64u;
    // 0x14eb64: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x14eb64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x14eb68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14eb6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14EB6Cu;
    {
        const bool branch_taken_0x14eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB6Cu;
        // 0x14eb70: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb6c) {
            ctx->pc = 0x14EB7Cu;
            goto label_14eb7c;
        }
    }
    ctx->pc = 0x14EB74u;
label_14eb74:
    // 0x14eb74: 0xc055f06  jal         func_157C18
    ctx->pc = 0x14EB74u;
    SET_GPR_U32(ctx, 31, 0x14EB7Cu);
    ctx->pc = 0x14EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB74u;
    // 0x14eb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x14EB74u, 0x14EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB7Cu;
label_14eb7c:
    // 0x14eb7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14eb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14eb80:
    // 0x14eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eb84: 0x3e00008  jr          $ra
    ctx->pc = 0x14EB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB84u;
        // 0x14eb88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EB8Cu;
    // 0x14eb8c: 0x0  nop
    ctx->pc = 0x14eb8cu;
    // NOP
    ctx->pc = 0x14eb90u;
}
