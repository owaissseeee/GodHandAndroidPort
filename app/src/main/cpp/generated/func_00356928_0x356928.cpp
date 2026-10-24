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

// Function: func_00356928
// Address: 0x356928 - 0x356988
void func_00356928_0x356928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356928_0x356928");
#endif

    switch (ctx->pc) {
        case 0x356944u: goto label_356944;
        default: break;
    }

    ctx->pc = 0x356928u;

    // 0x356928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35692c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356930: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x356930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x356934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x356938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35693c: 0xc0d58d6  jal         func_356358
    ctx->pc = 0x35693Cu;
    SET_GPR_U32(ctx, 31, 0x356944u);
    ctx->pc = 0x356940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35693Cu;
    // 0x356940: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356358u, 0x35693Cu, 0x356944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356944u;
label_356944:
    // 0x356944: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356944u;
    {
        const bool branch_taken_0x356944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356944u;
        // 0x356948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356944) {
            ctx->pc = 0x356968u;
            goto label_356968;
        }
    }
    ctx->pc = 0x35694Cu;
    // 0x35694c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35694cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356954: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356958: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35695c: 0x3e00008  jr          $ra
    ctx->pc = 0x35695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35695Cu;
        // 0x356960: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356964u;
    // 0x356964: 0x0  nop
    ctx->pc = 0x356964u;
    // NOP
label_356968:
    // 0x356968: 0x8e241fc0  lw          $a0, 0x1FC0($s1)
    ctx->pc = 0x356968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x35696c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35696cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356974: 0x24841198  addiu       $a0, $a0, 0x1198
    ctx->pc = 0x356974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
    // 0x356978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35697c: 0x80d5702  j           func_355C08
    ctx->pc = 0x35697Cu;
    ctx->pc = 0x356980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35697Cu;
    // 0x356980: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355C08u, 0x35697Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x356984u;
    // 0x356984: 0x0  nop
    ctx->pc = 0x356984u;
    // NOP
    ctx->pc = 0x356988u;
}
