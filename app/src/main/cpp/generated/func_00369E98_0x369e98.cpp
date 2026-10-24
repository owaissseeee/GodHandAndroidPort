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

// Function: func_00369E98
// Address: 0x369e98 - 0x369f20
void func_00369E98_0x369e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00369E98_0x369e98");
#endif

    switch (ctx->pc) {
        case 0x369ed0u: goto label_369ed0;
        default: break;
    }

    ctx->pc = 0x369e98u;

    // 0x369e98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x369e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x369e9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x369ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x369ea8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x369ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369eac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x369eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x369eb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x369eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369eb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369EB4u;
    {
        const bool branch_taken_0x369eb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x369EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EB4u;
        // 0x369eb8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369eb4) {
            ctx->pc = 0x369EC8u;
            goto label_369ec8;
        }
    }
    ctx->pc = 0x369EBCu;
    // 0x369ebc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x369ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x369ec0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x369EC0u;
    {
        const bool branch_taken_0x369ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x369EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369EC0u;
        // 0x369ec4: 0x24441aa0  addiu       $a0, $v0, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ec0) {
            ctx->pc = 0x369EFCu;
            goto label_369efc;
        }
    }
    ctx->pc = 0x369EC8u;
label_369ec8:
    // 0x369ec8: 0xc0db17e  jal         func_36C5F8
    ctx->pc = 0x369EC8u;
    SET_GPR_U32(ctx, 31, 0x369ED0u);
    ctx->pc = 0x36C5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5F8u, 0x369EC8u, 0x369ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369ED0u;
label_369ed0:
    // 0x369ed0: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x369ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x369ed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x369ED4u;
    {
        const bool branch_taken_0x369ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369ED4u;
        // 0x369ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ed4) {
            ctx->pc = 0x369EF8u;
            goto label_369ef8;
        }
    }
    ctx->pc = 0x369EDCu;
    // 0x369edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369ee0: 0x34a50203  ori         $a1, $a1, 0x203
    ctx->pc = 0x369ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)515);
    // 0x369ee4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369ee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369eec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x369eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369ef0: 0x80da7c8  j           func_369F20
    ctx->pc = 0x369EF0u;
    ctx->pc = 0x369EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369EF0u;
    // 0x369ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369F20u, 0x369EF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x369EF8u;
label_369ef8:
    // 0x369ef8: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x369ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
label_369efc:
    // 0x369efc: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x369efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    // 0x369f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x369f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369f04: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x369f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x369f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369f0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x369f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369f10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x369f10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369f14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x369f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369f18: 0x3e00008  jr          $ra
    ctx->pc = 0x369F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369F18u;
        // 0x369f1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369F20u;
}
