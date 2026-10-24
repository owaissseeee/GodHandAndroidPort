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

// Function: ForwardInitBuffer_313890
// Address: 0x313890 - 0x313900
void ForwardInitBuffer_313890_0x313890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313890_0x313890");
#endif

    switch (ctx->pc) {
        case 0x3138c4u: goto label_3138c4;
        case 0x3138dcu: goto label_3138dc;
        case 0x3138e4u: goto label_3138e4;
        default: break;
    }

    ctx->pc = 0x313890u;

    // 0x313890: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313894: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313898: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313898u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31389c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31389cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3138a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3138a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3138a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3138a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3138a8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3138A8u;
    {
        const bool branch_taken_0x3138a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3138ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138A8u;
        // 0x3138ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138a8) {
            ctx->pc = 0x3138ECu;
            goto label_3138ec;
        }
    }
    ctx->pc = 0x3138B0u;
    // 0x3138b0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3138b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3138b4: 0x24041600  addiu       $a0, $zero, 0x1600
    ctx->pc = 0x3138b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x3138b8: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x3138bc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3138BCu;
    SET_GPR_U32(ctx, 31, 0x3138C4u);
    ctx->pc = 0x3138C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138BCu;
    // 0x3138c0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3138BCu, 0x3138C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138C4u;
label_3138c4:
    // 0x3138c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3138c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3138c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3138C8u;
    {
        const bool branch_taken_0x3138c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138C8u;
        // 0x3138cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138c8) {
            ctx->pc = 0x3138ECu;
            goto label_3138ec;
        }
    }
    ctx->pc = 0x3138D0u;
    // 0x3138d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3138d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3138d4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3138D4u;
    SET_GPR_U32(ctx, 31, 0x3138DCu);
    ctx->pc = 0x3138D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138D4u;
    // 0x3138d8: 0x24061600  addiu       $a2, $zero, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3138D4u, 0x3138DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138DCu;
label_3138dc:
    // 0x3138dc: 0xc0a25ca  jal         func_289728
    ctx->pc = 0x3138DCu;
    SET_GPR_U32(ctx, 31, 0x3138E4u);
    ctx->pc = 0x3138E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3138DCu;
    // 0x3138e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289728u, 0x3138DCu, 0x3138E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3138E4u;
label_3138e4:
    // 0x3138e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3138E4u;
    {
        const bool branch_taken_0x3138e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3138E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138E4u;
        // 0x3138e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3138e4) {
            ctx->pc = 0x3138F4u;
            goto label_3138f4;
        }
    }
    ctx->pc = 0x3138ECu;
label_3138ec:
    // 0x3138ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3138ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3138f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3138f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3138f4:
    // 0x3138f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3138f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3138f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3138F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3138FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3138F8u;
        // 0x3138fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3138F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313900u;
}
