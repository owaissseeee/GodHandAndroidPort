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

// Function: ForwardInitObject_3168C0
// Address: 0x3168c0 - 0x316930
void ForwardInitObject_3168C0_0x3168c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_3168C0_0x3168c0");
#endif

    switch (ctx->pc) {
        case 0x3168f4u: goto label_3168f4;
        case 0x31690cu: goto label_31690c;
        case 0x316914u: goto label_316914;
        default: break;
    }

    ctx->pc = 0x3168c0u;

    // 0x3168c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3168c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3168c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3168c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3168c8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3168c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3168cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3168ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3168d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3168d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3168d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3168d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3168d8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3168D8u;
    {
        const bool branch_taken_0x3168d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168D8u;
        // 0x3168dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168d8) {
            ctx->pc = 0x31691Cu;
            goto label_31691c;
        }
    }
    ctx->pc = 0x3168E0u;
    // 0x3168e0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3168e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3168e4: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x3168e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x3168e8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3168e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3168ec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3168ECu;
    SET_GPR_U32(ctx, 31, 0x3168F4u);
    ctx->pc = 0x3168F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3168ECu;
    // 0x3168f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3168ECu, 0x3168F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3168F4u;
label_3168f4:
    // 0x3168f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3168f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3168f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3168F8u;
    {
        const bool branch_taken_0x3168f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3168F8u;
        // 0x3168fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168f8) {
            ctx->pc = 0x31691Cu;
            goto label_31691c;
        }
    }
    ctx->pc = 0x316900u;
    // 0x316900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316904: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316904u;
    SET_GPR_U32(ctx, 31, 0x31690Cu);
    ctx->pc = 0x316908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316904u;
    // 0x316908: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316904u, 0x31690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31690Cu;
label_31690c:
    // 0x31690c: 0xc05bcec  jal         func_16F3B0
    ctx->pc = 0x31690Cu;
    SET_GPR_U32(ctx, 31, 0x316914u);
    ctx->pc = 0x316910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31690Cu;
    // 0x316910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F3B0u, 0x31690Cu, 0x316914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316914u;
label_316914:
    // 0x316914: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316914u;
    {
        const bool branch_taken_0x316914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316914u;
        // 0x316918: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316914) {
            ctx->pc = 0x316924u;
            goto label_316924;
        }
    }
    ctx->pc = 0x31691Cu;
label_31691c:
    // 0x31691c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316924:
    // 0x316924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316928: 0x3e00008  jr          $ra
    ctx->pc = 0x316928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316928u;
        // 0x31692c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316930u;
}
