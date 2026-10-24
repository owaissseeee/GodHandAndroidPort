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

// Function: AllocInitObj17FB48_317960
// Address: 0x317960 - 0x3179d0
void AllocInitObj17FB48_317960_0x317960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj17FB48_317960_0x317960");
#endif

    switch (ctx->pc) {
        case 0x317994u: goto label_317994;
        case 0x3179acu: goto label_3179ac;
        case 0x3179b4u: goto label_3179b4;
        default: break;
    }

    ctx->pc = 0x317960u;

    // 0x317960: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317964: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317968: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317968u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31796c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31796cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317970: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317974: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317978: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317978u;
    {
        const bool branch_taken_0x317978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317978u;
        // 0x31797c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317978) {
            ctx->pc = 0x3179BCu;
            goto label_3179bc;
        }
    }
    ctx->pc = 0x317980u;
    // 0x317980: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317980u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317984: 0x24040a30  addiu       $a0, $zero, 0xA30
    ctx->pc = 0x317984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2608));
    // 0x317988: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31798c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31798Cu;
    SET_GPR_U32(ctx, 31, 0x317994u);
    ctx->pc = 0x317990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31798Cu;
    // 0x317990: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31798Cu, 0x317994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317994u;
label_317994:
    // 0x317994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317998: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317998u;
    {
        const bool branch_taken_0x317998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317998u;
        // 0x31799c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317998) {
            ctx->pc = 0x3179BCu;
            goto label_3179bc;
        }
    }
    ctx->pc = 0x3179A0u;
    // 0x3179a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3179a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3179A4u;
    SET_GPR_U32(ctx, 31, 0x3179ACu);
    ctx->pc = 0x3179A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179A4u;
    // 0x3179a8: 0x24060a30  addiu       $a2, $zero, 0xA30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3179A4u, 0x3179ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3179ACu;
label_3179ac:
    // 0x3179ac: 0xc05fed2  jal         func_17FB48
    ctx->pc = 0x3179ACu;
    SET_GPR_U32(ctx, 31, 0x3179B4u);
    ctx->pc = 0x3179B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3179ACu;
    // 0x3179b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FB48u, 0x3179ACu, 0x3179B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3179B4u;
label_3179b4:
    // 0x3179b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3179B4u;
    {
        const bool branch_taken_0x3179b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179B4u;
        // 0x3179b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179b4) {
            ctx->pc = 0x3179C4u;
            goto label_3179c4;
        }
    }
    ctx->pc = 0x3179BCu;
label_3179bc:
    // 0x3179bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3179bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3179c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3179c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3179c4:
    // 0x3179c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3179c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3179c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3179C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3179CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3179C8u;
        // 0x3179cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3179C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3179D0u;
}
