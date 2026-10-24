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

// Function: func_0034DE20
// Address: 0x34de20 - 0x34deb8
void func_0034DE20_0x34de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034DE20_0x34de20");
#endif

    switch (ctx->pc) {
        case 0x34de50u: goto label_34de50;
        case 0x34de60u: goto label_34de60;
        case 0x34de98u: goto label_34de98;
        default: break;
    }

    ctx->pc = 0x34de20u;

    // 0x34de20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34de24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34de28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34de28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34de30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34de30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34de38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x34de38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de3c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34DE3Cu;
    {
        const bool branch_taken_0x34de3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE3Cu;
        // 0x34de40: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de3c) {
            ctx->pc = 0x34DE58u;
            goto label_34de58;
        }
    }
    ctx->pc = 0x34DE44u;
    // 0x34de44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x34de44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x34de48: 0xc0d37ae  jal         func_34DEB8
    ctx->pc = 0x34DE48u;
    SET_GPR_U32(ctx, 31, 0x34DE50u);
    ctx->pc = 0x34DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE48u;
    // 0x34de4c: 0x2484e25c  addiu       $a0, $a0, -0x1DA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEB8u, 0x34DE48u, 0x34DE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE50u;
label_34de50:
    // 0x34de50: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34DE50u;
    {
        const bool branch_taken_0x34de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE50u;
        // 0x34de54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de50) {
            ctx->pc = 0x34DE9Cu;
            goto label_34de9c;
        }
    }
    ctx->pc = 0x34DE58u;
label_34de58:
    // 0x34de58: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x34DE58u;
    SET_GPR_U32(ctx, 31, 0x34DE60u);
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x34DE58u, 0x34DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE60u;
label_34de60:
    // 0x34de60: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34de60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34de64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34DE64u;
    {
        const bool branch_taken_0x34de64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DE64u;
        // 0x34de68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de64) {
            ctx->pc = 0x34DE88u;
            goto label_34de88;
        }
    }
    ctx->pc = 0x34DE6Cu;
    // 0x34de6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34de6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34de70: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x34de70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x34de74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34de74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34de78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34de78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34de7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34de7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34de80: 0x80d375c  j           func_34DD70
    ctx->pc = 0x34DE80u;
    ctx->pc = 0x34DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE80u;
    // 0x34de84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34DE80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34DE88u;
label_34de88:
    // 0x34de88: 0x260409f8  addiu       $a0, $s0, 0x9F8
    ctx->pc = 0x34de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2552));
    // 0x34de8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34de8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34de90: 0xc0d37ae  jal         func_34DEB8
    ctx->pc = 0x34DE90u;
    SET_GPR_U32(ctx, 31, 0x34DE98u);
    ctx->pc = 0x34DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34DE90u;
    // 0x34de94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEB8u, 0x34DE90u, 0x34DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE98u;
label_34de98:
    // 0x34de98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34de98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34de9c:
    // 0x34de9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34de9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34dea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34dea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34dea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34dea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34dea8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34dea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34deac: 0x3e00008  jr          $ra
    ctx->pc = 0x34DEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34DEACu;
        // 0x34deb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34DEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34DEB4u;
    // 0x34deb4: 0x0  nop
    ctx->pc = 0x34deb4u;
    // NOP
    ctx->pc = 0x34deb8u;
}
