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

// Function: AllocZeroedAndForward_317260
// Address: 0x317260 - 0x3172d0
void AllocZeroedAndForward_317260_0x317260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_317260_0x317260");
#endif

    switch (ctx->pc) {
        case 0x317294u: goto label_317294;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b4u: goto label_3172b4;
        default: break;
    }

    ctx->pc = 0x317260u;

    // 0x317260: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317264: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317268: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31726c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31726cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317270: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317274: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317278: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317278u;
    {
        const bool branch_taken_0x317278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317278u;
        // 0x31727c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317278) {
            ctx->pc = 0x3172BCu;
            goto label_3172bc;
        }
    }
    ctx->pc = 0x317280u;
    // 0x317280: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317280u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317284: 0x24040ce0  addiu       $a0, $zero, 0xCE0
    ctx->pc = 0x317284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    // 0x317288: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31728c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31728Cu;
    SET_GPR_U32(ctx, 31, 0x317294u);
    ctx->pc = 0x317290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31728Cu;
    // 0x317290: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31728Cu, 0x317294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317294u;
label_317294:
    // 0x317294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317298: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317298u;
    {
        const bool branch_taken_0x317298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317298u;
        // 0x31729c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317298) {
            ctx->pc = 0x3172BCu;
            goto label_3172bc;
        }
    }
    ctx->pc = 0x3172A0u;
    // 0x3172a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3172a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3172a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3172A4u;
    SET_GPR_U32(ctx, 31, 0x3172ACu);
    ctx->pc = 0x3172A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172A4u;
    // 0x3172a8: 0x24060ce0  addiu       $a2, $zero, 0xCE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3172A4u, 0x3172ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172ACu;
label_3172ac:
    // 0x3172ac: 0xc05e34c  jal         func_178D30
    ctx->pc = 0x3172ACu;
    SET_GPR_U32(ctx, 31, 0x3172B4u);
    ctx->pc = 0x3172B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3172ACu;
    // 0x3172b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D30u, 0x3172ACu, 0x3172B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3172B4u;
label_3172b4:
    // 0x3172b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3172B4u;
    {
        const bool branch_taken_0x3172b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172B4u;
        // 0x3172b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172b4) {
            ctx->pc = 0x3172C4u;
            goto label_3172c4;
        }
    }
    ctx->pc = 0x3172BCu;
label_3172bc:
    // 0x3172bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3172bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3172c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3172c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3172c4:
    // 0x3172c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3172c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3172c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3172C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3172CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172C8u;
        // 0x3172cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3172C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3172D0u;
}
