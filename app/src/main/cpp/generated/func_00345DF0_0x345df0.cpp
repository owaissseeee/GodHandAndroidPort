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

// Function: func_00345DF0
// Address: 0x345df0 - 0x345ec8
void func_00345DF0_0x345df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345DF0_0x345df0");
#endif

    switch (ctx->pc) {
        case 0x345e18u: goto label_345e18;
        case 0x345e28u: goto label_345e28;
        case 0x345e38u: goto label_345e38;
        case 0x345e44u: goto label_345e44;
        case 0x345e50u: goto label_345e50;
        case 0x345e58u: goto label_345e58;
        case 0x345e70u: goto label_345e70;
        case 0x345e84u: goto label_345e84;
        default: break;
    }

    ctx->pc = 0x345df0u;

    // 0x345df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x345df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x345df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345dfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x345e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x345e04: 0x8e11003c  lw          $s1, 0x3C($s0)
    ctx->pc = 0x345e04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x345e08: 0x5220002b  beql        $s1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x345E08u;
    {
        const bool branch_taken_0x345e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e08) {
            ctx->pc = 0x345E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345E08u;
            // 0x345e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345EB8u;
            goto label_345eb8;
        }
    }
    ctx->pc = 0x345E10u;
    // 0x345e10: 0xc0d25e8  jal         func_3497A0
    ctx->pc = 0x345E10u;
    SET_GPR_U32(ctx, 31, 0x345E18u);
    ctx->pc = 0x3497A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497A0u, 0x345E10u, 0x345E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E18u;
label_345e18:
    // 0x345e18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x345e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x345e1c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x345e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x345e20: 0xc0d625a  jal         func_358968
    ctx->pc = 0x345E20u;
    SET_GPR_U32(ctx, 31, 0x345E28u);
    ctx->pc = 0x345E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E20u;
    // 0x345e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358968u, 0x345E20u, 0x345E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E28u;
label_345e28:
    // 0x345e28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x345E28u;
    {
        const bool branch_taken_0x345e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e28) {
            ctx->pc = 0x345E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345E28u;
            // 0x345e2c: 0xae11003c  sw          $s1, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345E48u;
            goto label_345e48;
        }
    }
    ctx->pc = 0x345E30u;
    // 0x345e30: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x345E30u;
    SET_GPR_U32(ctx, 31, 0x345E38u);
    ctx->pc = 0x345E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E30u;
    // 0x345e34: 0x2404fecc  addiu       $a0, $zero, -0x134 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x345E30u, 0x345E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E38u;
label_345e38:
    // 0x345e38: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x345e38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x345e3c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x345E3Cu;
    SET_GPR_U32(ctx, 31, 0x345E44u);
    ctx->pc = 0x345E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E3Cu;
    // 0x345e40: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345E3Cu, 0x345E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E44u;
label_345e44:
    // 0x345e44: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x345e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_345e48:
    // 0x345e48: 0xc0d2126  jal         func_348498
    ctx->pc = 0x345E48u;
    SET_GPR_U32(ctx, 31, 0x345E50u);
    ctx->pc = 0x345E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E48u;
    // 0x345e4c: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348498u, 0x345E48u, 0x345E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E50u;
label_345e50:
    // 0x345e50: 0xc0d2126  jal         func_348498
    ctx->pc = 0x345E50u;
    SET_GPR_U32(ctx, 31, 0x345E58u);
    ctx->pc = 0x345E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E50u;
    // 0x345e54: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348498u, 0x345E50u, 0x345E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E58u;
label_345e58:
    // 0x345e58: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x345e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x345e5c: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x345e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x345e60: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x345E60u;
    {
        const bool branch_taken_0x345e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e60) {
            ctx->pc = 0x345E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345E60u;
            // 0x345e64: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345E74u;
            goto label_345e74;
        }
    }
    ctx->pc = 0x345E68u;
    // 0x345e68: 0xc0d26d8  jal         func_349B60
    ctx->pc = 0x345E68u;
    SET_GPR_U32(ctx, 31, 0x345E70u);
    ctx->pc = 0x349B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349B60u, 0x345E68u, 0x345E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E70u;
label_345e70:
    // 0x345e70: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x345e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_345e74:
    // 0x345e74: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x345E74u;
    {
        const bool branch_taken_0x345e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x345e74) {
            ctx->pc = 0x345E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345E74u;
            // 0x345e78: 0x8e0202e0  lw          $v0, 0x2E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345E88u;
            goto label_345e88;
        }
    }
    ctx->pc = 0x345E7Cu;
    // 0x345e7c: 0xc0cd654  jal         func_335950
    ctx->pc = 0x345E7Cu;
    SET_GPR_U32(ctx, 31, 0x345E84u);
    ctx->pc = 0x335950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335950u, 0x345E7Cu, 0x345E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E84u;
label_345e84:
    // 0x345e84: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x345e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_345e88:
    // 0x345e88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x345E88u;
    {
        const bool branch_taken_0x345e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E88u;
        // 0x345e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345e88) {
            ctx->pc = 0x345EB0u;
            goto label_345eb0;
        }
    }
    ctx->pc = 0x345E90u;
    // 0x345e90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x345e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x345e94: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x345e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x345e98: 0xae0202fc  sw          $v0, 0x2FC($s0)
    ctx->pc = 0x345e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 2));
    // 0x345e9c: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x345e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x345ea0: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x345ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x345ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x345EA4u;
    {
        const bool branch_taken_0x345ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EA4u;
        // 0x345ea8: 0xae000300  sw          $zero, 0x300($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ea4) {
            ctx->pc = 0x345EB4u;
            goto label_345eb4;
        }
    }
    ctx->pc = 0x345EACu;
    // 0x345eac: 0x0  nop
    ctx->pc = 0x345eacu;
    // NOP
label_345eb0:
    // 0x345eb0: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x345eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
label_345eb4:
    // 0x345eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345eb8:
    // 0x345eb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345eb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345ebc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x345ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x345EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345EC0u;
        // 0x345ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345EC8u;
}
