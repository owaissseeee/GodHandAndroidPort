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

// Function: FindEntryValue_1FF9C0
// Address: 0x1ff9c0 - 0x1ffa28
void FindEntryValue_1FF9C0_0x1ff9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindEntryValue_1FF9C0_0x1ff9c0");
#endif

    switch (ctx->pc) {
        case 0x1ff9ecu: goto label_1ff9ec;
        case 0x1ffa08u: goto label_1ffa08;
        default: break;
    }

    ctx->pc = 0x1ff9c0u;

    // 0x1ff9c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ff9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ff9c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ff9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ff9c8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ff9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1ff9cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ff9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ff9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ff9d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ff9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9d8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF9D8u;
    {
        const bool branch_taken_0x1ff9d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9D8u;
        // 0x1ff9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9d8) {
            ctx->pc = 0x1FF9E4u;
            goto label_1ff9e4;
        }
    }
    ctx->pc = 0x1FF9E0u;
    // 0x1ff9e0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1ff9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1ff9e4:
    // 0x1ff9e4: 0xc07fe9a  jal         func_1FFA68
    ctx->pc = 0x1FF9E4u;
    SET_GPR_U32(ctx, 31, 0x1FF9ECu);
    ctx->pc = 0x1FF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF9E4u;
    // 0x1ff9e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA68u, 0x1FF9E4u, 0x1FF9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF9ECu;
label_1ff9ec:
    // 0x1ff9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ff9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff9f0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FF9F0u;
    {
        const bool branch_taken_0x1ff9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F0u;
        // 0x1ff9f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9f0) {
            ctx->pc = 0x1FFA10u;
            goto label_1ffa10;
        }
    }
    ctx->pc = 0x1FF9F8u;
    // 0x1ff9f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF9F8u;
    {
        const bool branch_taken_0x1ff9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF9F8u;
        // 0x1ff9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff9f8) {
            ctx->pc = 0x1FFA0Cu;
            goto label_1ffa0c;
        }
    }
    ctx->pc = 0x1FFA00u;
    // 0x1ffa00: 0xc07ff66  jal         func_1FFD98
    ctx->pc = 0x1FFA00u;
    SET_GPR_U32(ctx, 31, 0x1FFA08u);
    ctx->pc = 0x1FFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFA00u;
    // 0x1ffa04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFD98u, 0x1FFA00u, 0x1FFA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFA08u;
label_1ffa08:
    // 0x1ffa08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ffa08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1ffa0c:
    // 0x1ffa0c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ffa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ffa10:
    // 0x1ffa10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ffa10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ffa14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ffa14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffa18: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ffa18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffa1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffa20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA20u;
        // 0x1ffa24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFA28u;
}
