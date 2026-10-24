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

// Function: ForwardInitBuffer_314780
// Address: 0x314780 - 0x3147f0
void ForwardInitBuffer_314780_0x314780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314780_0x314780");
#endif

    switch (ctx->pc) {
        case 0x3147b4u: goto label_3147b4;
        case 0x3147ccu: goto label_3147cc;
        case 0x3147d4u: goto label_3147d4;
        default: break;
    }

    ctx->pc = 0x314780u;

    // 0x314780: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314784: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314788: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31478c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31478cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314790: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314794: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314798: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314798u;
    {
        const bool branch_taken_0x314798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314798u;
        // 0x31479c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314798) {
            ctx->pc = 0x3147DCu;
            goto label_3147dc;
        }
    }
    ctx->pc = 0x3147A0u;
    // 0x3147a0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3147a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3147a4: 0x24040b30  addiu       $a0, $zero, 0xB30
    ctx->pc = 0x3147a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    // 0x3147a8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3147a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3147ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3147ACu;
    SET_GPR_U32(ctx, 31, 0x3147B4u);
    ctx->pc = 0x3147B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147ACu;
    // 0x3147b0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3147ACu, 0x3147B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147B4u;
label_3147b4:
    // 0x3147b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3147b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3147B8u;
    {
        const bool branch_taken_0x3147b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147B8u;
        // 0x3147bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147b8) {
            ctx->pc = 0x3147DCu;
            goto label_3147dc;
        }
    }
    ctx->pc = 0x3147C0u;
    // 0x3147c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3147c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147c4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3147C4u;
    SET_GPR_U32(ctx, 31, 0x3147CCu);
    ctx->pc = 0x3147C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147C4u;
    // 0x3147c8: 0x24060b30  addiu       $a2, $zero, 0xB30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3147C4u, 0x3147CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147CCu;
label_3147cc:
    // 0x3147cc: 0xc064faa  jal         func_193EA8
    ctx->pc = 0x3147CCu;
    SET_GPR_U32(ctx, 31, 0x3147D4u);
    ctx->pc = 0x3147D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147CCu;
    // 0x3147d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EA8u, 0x3147CCu, 0x3147D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147D4u;
label_3147d4:
    // 0x3147d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3147D4u;
    {
        const bool branch_taken_0x3147d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D4u;
        // 0x3147d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147d4) {
            ctx->pc = 0x3147E4u;
            goto label_3147e4;
        }
    }
    ctx->pc = 0x3147DCu;
label_3147dc:
    // 0x3147dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3147dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3147e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3147e4:
    // 0x3147e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3147e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3147e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3147E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3147ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147E8u;
        // 0x3147ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3147E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3147F0u;
}
