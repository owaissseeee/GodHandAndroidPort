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

// Function: func_00366DC8
// Address: 0x366dc8 - 0x366e18
void func_00366DC8_0x366dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366DC8_0x366dc8");
#endif

    switch (ctx->pc) {
        case 0x366decu: goto label_366dec;
        default: break;
    }

    ctx->pc = 0x366dc8u;

    // 0x366dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366dd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366dd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366dd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366dd8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x366dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366ddc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366de0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x366de4: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x366DE4u;
    SET_GPR_U32(ctx, 31, 0x366DECu);
    ctx->pc = 0x366DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366DE4u;
    // 0x366de8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x366DE4u, 0x366DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366DECu;
label_366dec:
    // 0x366dec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x366DECu;
    {
        const bool branch_taken_0x366dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x366dec) {
            ctx->pc = 0x366DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x366DECu;
            // 0x366df0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366E00u;
            goto label_366e00;
        }
    }
    ctx->pc = 0x366DF4u;
    // 0x366df4: 0xae1100f8  sw          $s1, 0xF8($s0)
    ctx->pc = 0x366df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
    // 0x366df8: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x366df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x366dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_366e00:
    // 0x366e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366e04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366e08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x366E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366E0Cu;
        // 0x366e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366E14u;
    // 0x366e14: 0x0  nop
    ctx->pc = 0x366e14u;
    // NOP
    ctx->pc = 0x366e18u;
}
