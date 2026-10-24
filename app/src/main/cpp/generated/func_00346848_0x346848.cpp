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

// Function: func_00346848
// Address: 0x346848 - 0x3468b8
void func_00346848_0x346848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00346848_0x346848");
#endif

    switch (ctx->pc) {
        case 0x34685cu: goto label_34685c;
        default: break;
    }

    ctx->pc = 0x346848u;

    // 0x346848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34684c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346850: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x346854: 0xc0d1a2e  jal         func_3468B8
    ctx->pc = 0x346854u;
    SET_GPR_U32(ctx, 31, 0x34685Cu);
    ctx->pc = 0x346858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346854u;
    // 0x346858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3468B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3468B8u, 0x346854u, 0x34685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34685Cu;
label_34685c:
    // 0x34685c: 0x8e0402d8  lw          $a0, 0x2D8($s0)
    ctx->pc = 0x34685cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x346860: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x346860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x346864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346868: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x346868u;
    {
        const bool branch_taken_0x346868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x346868) {
            ctx->pc = 0x34686Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346868u;
            // 0x34686c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3468A8u;
            goto label_3468a8;
        }
    }
    ctx->pc = 0x346870u;
    // 0x346870: 0x8e0502dc  lw          $a1, 0x2DC($s0)
    ctx->pc = 0x346870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x346874: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x346874u;
    {
        const bool branch_taken_0x346874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x346874) {
            ctx->pc = 0x346878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346874u;
            // 0x346878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3468A8u;
            goto label_3468a8;
        }
    }
    ctx->pc = 0x34687Cu;
    // 0x34687c: 0x8e0202e8  lw          $v0, 0x2E8($s0)
    ctx->pc = 0x34687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x346880: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x346880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x346884: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x346884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x346888: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x346888u;
    {
        const bool branch_taken_0x346888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346888) {
            ctx->pc = 0x34688Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346888u;
            // 0x34688c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3468A8u;
            goto label_3468a8;
        }
    }
    ctx->pc = 0x346890u;
    // 0x346890: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x346890u;
    {
        const bool branch_taken_0x346890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x346894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346890u;
        // 0x346894: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346890) {
            ctx->pc = 0x3468A0u;
            goto label_3468a0;
        }
    }
    ctx->pc = 0x346898u;
    // 0x346898: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x346898u;
    {
        const bool branch_taken_0x346898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x34689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346898u;
        // 0x34689c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346898) {
            ctx->pc = 0x3468A8u;
            goto label_3468a8;
        }
    }
    ctx->pc = 0x3468A0u;
label_3468a0:
    // 0x3468a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3468a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3468a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3468a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3468a8:
    // 0x3468a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3468a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3468ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3468acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3468b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3468B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3468B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3468B0u;
        // 0x3468b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3468B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3468B8u;
}
