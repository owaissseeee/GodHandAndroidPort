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

// Function: func_0034BEB8
// Address: 0x34beb8 - 0x34bf58
void func_0034BEB8_0x34beb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BEB8_0x34beb8");
#endif

    switch (ctx->pc) {
        case 0x34bf08u: goto label_34bf08;
        default: break;
    }

    ctx->pc = 0x34beb8u;

    // 0x34beb8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x34beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34bebc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34bebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34bec0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bec4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x34bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x34bec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34becc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34beccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bed0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34bed4: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x34bed4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x34bed8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34bedc: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x34bedcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x34bee0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34bee4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bee8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34beec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34beecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bef0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x34bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34bef4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x34bef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34befc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x34befcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x34bf00: 0xc0d2fea  jal         func_34BFA8
    ctx->pc = 0x34BF00u;
    SET_GPR_U32(ctx, 31, 0x34BF08u);
    ctx->pc = 0x34BF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BF00u;
    // 0x34bf04: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA8u, 0x34BF00u, 0x34BF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BF08u;
label_34bf08:
    // 0x34bf08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x34bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34bf0c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34bf10: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x34bf14: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x34bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x34bf18: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x34bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x34bf1c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x34bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x34bf20: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x34bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x34bf24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x34bf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x34bf28: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x34bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x34bf2c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x34bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x34bf30: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x34bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x34bf34: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x34bf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x34bf38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x34bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x34bf3c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x34bf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x34bf40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34bf40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34bf44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34bf44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34bf48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34bf48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34bf4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34bf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34bf50: 0x3e00008  jr          $ra
    ctx->pc = 0x34BF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BF50u;
        // 0x34bf54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BF58u;
}
