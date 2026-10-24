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

// Function: AllocZeroedAndForward_3171F0
// Address: 0x3171f0 - 0x317260
void AllocZeroedAndForward_3171F0_0x3171f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndForward_3171F0_0x3171f0");
#endif

    switch (ctx->pc) {
        case 0x317224u: goto label_317224;
        case 0x31723cu: goto label_31723c;
        case 0x317244u: goto label_317244;
        default: break;
    }

    ctx->pc = 0x3171f0u;

    // 0x3171f0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3171f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3171f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3171f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3171f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3171f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3171fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3171fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317204: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317208: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317208u;
    {
        const bool branch_taken_0x317208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317208u;
        // 0x31720c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317208) {
            ctx->pc = 0x31724Cu;
            goto label_31724c;
        }
    }
    ctx->pc = 0x317210u;
    // 0x317210: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317214: 0x24040920  addiu       $a0, $zero, 0x920
    ctx->pc = 0x317214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    // 0x317218: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31721c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31721Cu;
    SET_GPR_U32(ctx, 31, 0x317224u);
    ctx->pc = 0x317220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31721Cu;
    // 0x317220: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31721Cu, 0x317224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317224u;
label_317224:
    // 0x317224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317228: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317228u;
    {
        const bool branch_taken_0x317228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317228u;
        // 0x31722c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317228) {
            ctx->pc = 0x31724Cu;
            goto label_31724c;
        }
    }
    ctx->pc = 0x317230u;
    // 0x317230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317234: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317234u;
    SET_GPR_U32(ctx, 31, 0x31723Cu);
    ctx->pc = 0x317238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317234u;
    // 0x317238: 0x24060920  addiu       $a2, $zero, 0x920 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317234u, 0x31723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31723Cu;
label_31723c:
    // 0x31723c: 0xc05e29c  jal         func_178A70
    ctx->pc = 0x31723Cu;
    SET_GPR_U32(ctx, 31, 0x317244u);
    ctx->pc = 0x317240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31723Cu;
    // 0x317240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178A70u, 0x31723Cu, 0x317244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317244u;
label_317244:
    // 0x317244: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317244u;
    {
        const bool branch_taken_0x317244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317244u;
        // 0x317248: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317244) {
            ctx->pc = 0x317254u;
            goto label_317254;
        }
    }
    ctx->pc = 0x31724Cu;
label_31724c:
    // 0x31724c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31724cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317254:
    // 0x317254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317258: 0x3e00008  jr          $ra
    ctx->pc = 0x317258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317258u;
        // 0x31725c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317260u;
}
