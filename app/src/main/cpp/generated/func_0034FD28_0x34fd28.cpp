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

// Function: func_0034FD28
// Address: 0x34fd28 - 0x34fdf0
void func_0034FD28_0x34fd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FD28_0x34fd28");
#endif

    switch (ctx->pc) {
        case 0x34fd50u: goto label_34fd50;
        case 0x34fd58u: goto label_34fd58;
        case 0x34fd9cu: goto label_34fd9c;
        case 0x34fdacu: goto label_34fdac;
        default: break;
    }

    ctx->pc = 0x34fd28u;

    // 0x34fd28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34fd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34fd2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34fd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34fd30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34fd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34fd38: 0x26122198  addiu       $s2, $s0, 0x2198
    ctx->pc = 0x34fd38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 8600));
    // 0x34fd3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34fd40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34fd40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd44: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34fd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34fd48: 0xc0d3f7c  jal         func_34FDF0
    ctx->pc = 0x34FD48u;
    SET_GPR_U32(ctx, 31, 0x34FD50u);
    ctx->pc = 0x34FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD48u;
    // 0x34fd4c: 0xae121f7c  sw          $s2, 0x1F7C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8060), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FDF0u, 0x34FD48u, 0x34FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD50u;
label_34fd50:
    // 0x34fd50: 0xc0da3fa  jal         func_368FE8
    ctx->pc = 0x34FD50u;
    SET_GPR_U32(ctx, 31, 0x34FD58u);
    ctx->pc = 0x368FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FE8u, 0x34FD50u, 0x34FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD58u;
label_34fd58:
    // 0x34fd58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34fd58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd5c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34fd60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34fd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd68: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34FD68u;
    {
        const bool branch_taken_0x34fd68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD68u;
        // 0x34fd6c: 0x34a50d08  ori         $a1, $a1, 0xD08 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd68) {
            ctx->pc = 0x34FD90u;
            goto label_34fd90;
        }
    }
    ctx->pc = 0x34FD70u;
    // 0x34fd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fd74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fd78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34fd78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fd7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34fd7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fd80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34fd84: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34FD84u;
    ctx->pc = 0x34FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD84u;
    // 0x34fd88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34FD84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FD8Cu;
    // 0x34fd8c: 0x0  nop
    ctx->pc = 0x34fd8cu;
    // NOP
label_34fd90:
    // 0x34fd90: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x34fd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x34fd94: 0xc0da3c6  jal         func_368F18
    ctx->pc = 0x34FD94u;
    SET_GPR_U32(ctx, 31, 0x34FD9Cu);
    ctx->pc = 0x34FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FD94u;
    // 0x34fd98: 0x24a5fe78  addiu       $a1, $a1, -0x188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368F18u, 0x34FD94u, 0x34FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FD9Cu;
label_34fd9c:
    // 0x34fd9c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x34FD9Cu;
    {
        const bool branch_taken_0x34fd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FD9Cu;
        // 0x34fda0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fd9c) {
            ctx->pc = 0x34FDD0u;
            goto label_34fdd0;
        }
    }
    ctx->pc = 0x34FDA4u;
    // 0x34fda4: 0xc0d3fb8  jal         func_34FEE0
    ctx->pc = 0x34FDA4u;
    SET_GPR_U32(ctx, 31, 0x34FDACu);
    ctx->pc = 0x34FEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FEE0u, 0x34FDA4u, 0x34FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FDACu;
label_34fdac:
    // 0x34fdac: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34fdb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fdb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fdb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fdb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34fdb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fdbc: 0x34a50d09  ori         $a1, $a1, 0xD09
    ctx->pc = 0x34fdbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3337);
    // 0x34fdc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34fdc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fdc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34fdc8: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34FDC8u;
    ctx->pc = 0x34FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FDC8u;
    // 0x34fdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34FDC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34FDD0u;
label_34fdd0:
    // 0x34fdd0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x34fdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x34fdd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34fdd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34fdd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34fdd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fddc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34fddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fde0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34fde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34fde4: 0x3e00008  jr          $ra
    ctx->pc = 0x34FDE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FDE4u;
        // 0x34fde8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FDE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FDECu;
    // 0x34fdec: 0x0  nop
    ctx->pc = 0x34fdecu;
    // NOP
    ctx->pc = 0x34fdf0u;
}
