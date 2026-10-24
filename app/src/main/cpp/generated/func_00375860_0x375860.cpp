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

// Function: func_00375860
// Address: 0x375860 - 0x3758e8
void func_00375860_0x375860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375860_0x375860");
#endif

    switch (ctx->pc) {
        case 0x375878u: goto label_375878;
        case 0x375888u: goto label_375888;
        case 0x375890u: goto label_375890;
        case 0x3758b8u: goto label_3758b8;
        default: break;
    }

    ctx->pc = 0x375860u;

    // 0x375860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x375864: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x375864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375868: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37586c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37586cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375870: 0x2450a880  addiu       $s0, $v0, -0x5780
    ctx->pc = 0x375870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x375874: 0x3c051972  lui         $a1, 0x1972
    ctx->pc = 0x375874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6514 << 16));
label_375878:
    // 0x375878: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x375878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x37587c: 0x34a50317  ori         $a1, $a1, 0x317
    ctx->pc = 0x37587cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)791);
    // 0x375880: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x375880u;
    SET_GPR_U32(ctx, 31, 0x375888u);
    ctx->pc = 0x375884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375880u;
    // 0x375884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x375880u, 0x375888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375888u;
label_375888:
    // 0x375888: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375888u;
    {
        const bool branch_taken_0x375888 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x375888) {
            ctx->pc = 0x37588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375888u;
            // 0x37588c: 0x8e040100  lw          $a0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3758A8u;
            goto label_3758a8;
        }
    }
    ctx->pc = 0x375890u;
label_375890:
    // 0x375890: 0x0  nop
    ctx->pc = 0x375890u;
    // NOP
    // 0x375894: 0x0  nop
    ctx->pc = 0x375894u;
    // NOP
    // 0x375898: 0x0  nop
    ctx->pc = 0x375898u;
    // NOP
    // 0x37589c: 0x0  nop
    ctx->pc = 0x37589cu;
    // NOP
    // 0x3758a0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x3758A0u;
    {
        const bool branch_taken_0x3758a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3758a0) {
            ctx->pc = 0x375890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375890;
        }
    }
    ctx->pc = 0x3758A8u;
label_3758a8:
    // 0x3758a8: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x3758a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x3758ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3758acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3758b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3758b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3758b4: 0x0  nop
    ctx->pc = 0x3758b4u;
    // NOP
label_3758b8:
    // 0x3758b8: 0x0  nop
    ctx->pc = 0x3758b8u;
    // NOP
    // 0x3758bc: 0x0  nop
    ctx->pc = 0x3758bcu;
    // NOP
    // 0x3758c0: 0x0  nop
    ctx->pc = 0x3758c0u;
    // NOP
    // 0x3758c4: 0x0  nop
    ctx->pc = 0x3758c4u;
    // NOP
    // 0x3758c8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3758C8u;
    {
        const bool branch_taken_0x3758c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3758c8) {
            ctx->pc = 0x3758CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3758C8u;
            // 0x3758cc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3758B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3758b8;
        }
    }
    ctx->pc = 0x3758D0u;
    // 0x3758d0: 0x1080ffe9  beqz        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3758D0u;
    {
        const bool branch_taken_0x3758d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3758D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758D0u;
        // 0x3758d4: 0x3c051972  lui         $a1, 0x1972 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6514 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3758d0) {
            ctx->pc = 0x375878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_375878;
        }
    }
    ctx->pc = 0x3758D8u;
    // 0x3758d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3758d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3758dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3758dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3758e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3758E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3758E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758E0u;
        // 0x3758e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3758E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3758E8u;
}
