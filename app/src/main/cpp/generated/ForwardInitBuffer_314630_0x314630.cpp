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

// Function: ForwardInitBuffer_314630
// Address: 0x314630 - 0x3146a0
void ForwardInitBuffer_314630_0x314630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314630_0x314630");
#endif

    if (__builtin_expect(ctx->pc != 0x314630u, 0)) {
        switch (ctx->pc) {
            case 0x314664u: goto label_314664;
            case 0x31467cu: goto label_31467c;
            case 0x314684u: goto label_314684;
            default: break;
        }
    }


    // 0x314630: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314634: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314638: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31463c: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314644: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314648: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314648u;
    {
        const bool branch_taken_0x314648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314648u;
        // 0x31464c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314648) {
            ctx->pc = 0x31468Cu;
            goto label_31468c;
        }
    }
    // 0x314650: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314654: 0x24040800  addiu       $a0, $zero, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x314658: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31465c: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x314664u);
    ctx->pc = 0x314660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31465Cu;
    // 0x314660: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x314664u)) {
        return;
    }
    ctx->pc = 0x314664u;
label_314664:
    // 0x314664: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314668: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314668u;
    {
        const bool branch_taken_0x314668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314668u;
        // 0x31466c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314668) {
            ctx->pc = 0x31468Cu;
            goto label_31468c;
        }
    }
    // 0x314670: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314674: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31467Cu);
    ctx->pc = 0x314678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314674u;
    // 0x314678: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31467cu)) {
        return;
    }
    ctx->pc = 0x31467Cu;
label_31467c:
    // 0x31467c: 0xc064dc6  jal         func_193718
    SET_GPR_U32(ctx, 31, 0x314684u);
    ctx->pc = 0x314680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31467Cu;
    // 0x314680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Setup_Field_214_Obj0000Array_620_193718_0x193718, 0x193718u, 0x314684u)) {
        return;
    }
    ctx->pc = 0x314684u;
label_314684:
    // 0x314684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314684u;
    {
        const bool branch_taken_0x314684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314684u;
        // 0x314688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314684) {
            ctx->pc = 0x314694u;
            goto label_314694;
        }
    }
    ctx->pc = 0x31468Cu;
label_31468c:
    // 0x31468c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314690: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314694:
    // 0x314694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314698: 0x3e00008  jr          $ra
    ctx->pc = 0x314698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314698u;
        // 0x31469c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3146A0u;
}