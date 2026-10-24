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

// Function: func_0034EB28
// Address: 0x34eb28 - 0x34eb98
void func_0034EB28_0x34eb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034EB28_0x34eb28");
#endif

    switch (ctx->pc) {
        case 0x34eb28u: goto label_34eb28;
        case 0x34eb2cu: goto label_34eb2c;
        case 0x34eb30u: goto label_34eb30;
        case 0x34eb34u: goto label_34eb34;
        case 0x34eb38u: goto label_34eb38;
        case 0x34eb3cu: goto label_34eb3c;
        case 0x34eb40u: goto label_34eb40;
        case 0x34eb44u: goto label_34eb44;
        case 0x34eb48u: goto label_34eb48;
        case 0x34eb4cu: goto label_34eb4c;
        case 0x34eb50u: goto label_34eb50;
        case 0x34eb54u: goto label_34eb54;
        case 0x34eb58u: goto label_34eb58;
        case 0x34eb5cu: goto label_34eb5c;
        case 0x34eb60u: goto label_34eb60;
        case 0x34eb64u: goto label_34eb64;
        case 0x34eb68u: goto label_34eb68;
        case 0x34eb6cu: goto label_34eb6c;
        case 0x34eb70u: goto label_34eb70;
        case 0x34eb74u: goto label_34eb74;
        case 0x34eb78u: goto label_34eb78;
        case 0x34eb7cu: goto label_34eb7c;
        case 0x34eb80u: goto label_34eb80;
        case 0x34eb84u: goto label_34eb84;
        case 0x34eb88u: goto label_34eb88;
        case 0x34eb8cu: goto label_34eb8c;
        case 0x34eb90u: goto label_34eb90;
        case 0x34eb94u: goto label_34eb94;
        default: break;
    }

    ctx->pc = 0x34eb28u;

label_34eb28:
    // 0x34eb28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34eb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34eb2c:
    // 0x34eb2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34eb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_34eb30:
    // 0x34eb30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34eb30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34eb34:
    // 0x34eb34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_34eb38:
    // 0x34eb38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x34eb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34eb3c:
    // 0x34eb3c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x34eb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34eb40:
    // 0x34eb40: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x34eb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_34eb44:
    // 0x34eb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_34eb48:
    // 0x34eb48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_34eb4c:
    // 0x34eb4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34eb50:
    // 0x34eb50: 0xc0d3c38  jal         func_34F0E0
label_34eb54:
    if (ctx->pc == 0x34EB54u) {
        ctx->pc = 0x34EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB50u;
        // 0x34eb54: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB58u;
        goto label_34eb58;
    }
    ctx->pc = 0x34EB50u;
    SET_GPR_U32(ctx, 31, 0x34EB58u);
    ctx->pc = 0x34EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EB50u;
    // 0x34eb54: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34F0E0u, 0x34EB50u, 0x34EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EB58u;
label_34eb58:
    // 0x34eb58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x34eb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34eb5c:
    // 0x34eb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34eb60:
    // 0x34eb60: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_34eb64:
    if (ctx->pc == 0x34EB64u) {
        ctx->pc = 0x34EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB60u;
        // 0x34eb64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB68u;
        goto label_34eb68;
    }
    ctx->pc = 0x34EB60u;
    {
        const bool branch_taken_0x34eb60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x34eb60) {
            ctx->pc = 0x34EB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34EB60u;
            // 0x34eb64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34EB7Cu;
            goto label_34eb7c;
        }
    }
    ctx->pc = 0x34EB68u;
label_34eb68:
    // 0x34eb68: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_34eb6c:
    if (ctx->pc == 0x34EB6Cu) {
        ctx->pc = 0x34EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB68u;
        // 0x34eb6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB70u;
        goto label_34eb70;
    }
    ctx->pc = 0x34EB68u;
    {
        const bool branch_taken_0x34eb68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB68u;
        // 0x34eb6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34eb68) {
            ctx->pc = 0x34EB78u;
            goto label_34eb78;
        }
    }
    ctx->pc = 0x34EB70u;
label_34eb70:
    // 0x34eb70: 0x240f809  jalr        $s2
label_34eb74:
    if (ctx->pc == 0x34EB74u) {
        ctx->pc = 0x34EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB70u;
        // 0x34eb74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB78u;
        goto label_34eb78;
    }
    ctx->pc = 0x34EB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x34EB78u);
        ctx->pc = 0x34EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB70u;
        // 0x34eb74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB70u, 0x34EB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34EB78u;
label_34eb78:
    // 0x34eb78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34eb78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34eb7c:
    // 0x34eb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34eb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34eb80:
    // 0x34eb80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34eb80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_34eb84:
    // 0x34eb84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34eb84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34eb88:
    // 0x34eb88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x34eb88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_34eb8c:
    // 0x34eb8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34eb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34eb90:
    // 0x34eb90: 0x3e00008  jr          $ra
label_34eb94:
    if (ctx->pc == 0x34EB94u) {
        ctx->pc = 0x34EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB90u;
        // 0x34eb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34EB98u;
        goto label_fallthrough_0x34eb90;
    }
    ctx->pc = 0x34EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EB90u;
        // 0x34eb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34EB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34eb90:
    ctx->pc = 0x34EB98u;
}
