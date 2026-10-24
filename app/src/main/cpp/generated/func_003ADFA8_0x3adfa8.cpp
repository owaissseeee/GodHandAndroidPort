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

// Function: func_003ADFA8
// Address: 0x3adfa8 - 0x3ae008
void func_003ADFA8_0x3adfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003ADFA8_0x3adfa8");
#endif

    switch (ctx->pc) {
        case 0x3adfd0u: goto label_3adfd0;
        default: break;
    }

    ctx->pc = 0x3adfa8u;

    // 0x3adfa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3adfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3adfac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3adfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3adfb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3adfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3adfb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3adfb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfb8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3adfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfbc: 0x3c110078  lui         $s1, 0x78
    ctx->pc = 0x3adfbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)120 << 16));
    // 0x3adfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3adfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3adfc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3adfc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfc8: 0xc0ec114  jal         func_3B0450
    ctx->pc = 0x3ADFC8u;
    SET_GPR_U32(ctx, 31, 0x3ADFD0u);
    ctx->pc = 0x3ADFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFC8u;
    // 0x3adfcc: 0xae20db88  sw          $zero, -0x2478($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957960), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0450u, 0x3ADFC8u, 0x3ADFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFD0u;
label_3adfd0:
    // 0x3adfd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3adfd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adfd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3adfd8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ADFD8u;
    {
        const bool branch_taken_0x3adfd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3adfd8) {
            ctx->pc = 0x3ADFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADFD8u;
            // 0x3adfdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADFF0u;
            goto label_3adff0;
        }
    }
    ctx->pc = 0x3ADFE0u;
    // 0x3adfe0: 0x8e22db88  lw          $v0, -0x2478($s1)
    ctx->pc = 0x3adfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957960)));
    // 0x3adfe4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3ADFE4u;
    {
        const bool branch_taken_0x3adfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adfe4) {
            ctx->pc = 0x3ADFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADFE4u;
            // 0x3adfe8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADFECu;
            goto label_3adfec;
        }
    }
    ctx->pc = 0x3ADFECu;
label_3adfec:
    // 0x3adfec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3adfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3adff0:
    // 0x3adff0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3adff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3adff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3adff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adffc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADFFCu;
        // 0x3ae000: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE004u;
    // 0x3ae004: 0x0  nop
    ctx->pc = 0x3ae004u;
    // NOP
    ctx->pc = 0x3ae008u;
}
