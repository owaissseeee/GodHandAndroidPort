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

// Function: func_00332778
// Address: 0x332778 - 0x3327d8
void func_00332778_0x332778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332778_0x332778");
#endif

    switch (ctx->pc) {
        case 0x332798u: goto label_332798;
        case 0x3327a0u: goto label_3327a0;
        case 0x3327b4u: goto label_3327b4;
        default: break;
    }

    ctx->pc = 0x332778u;

    // 0x332778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33277c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33277cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332784: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x332784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x332788: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33278c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33278cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x332790: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x332790u;
    SET_GPR_U32(ctx, 31, 0x332798u);
    ctx->pc = 0x332794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332790u;
    // 0x332794: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x332790u, 0x332798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332798u;
label_332798:
    // 0x332798: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33279c: 0x245084c0  addiu       $s0, $v0, -0x7B40
    ctx->pc = 0x33279cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
label_3327a0:
    // 0x3327a0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3327a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3327a4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3327A4u;
    {
        const bool branch_taken_0x3327a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3327a4) {
            ctx->pc = 0x3327A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3327A4u;
            // 0x3327a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3327B8u;
            goto label_3327b8;
        }
    }
    ctx->pc = 0x3327ACu;
    // 0x3327ac: 0xc0cc8e6  jal         func_332398
    ctx->pc = 0x3327ACu;
    SET_GPR_U32(ctx, 31, 0x3327B4u);
    ctx->pc = 0x3327B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327ACu;
    // 0x3327b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332398u, 0x3327ACu, 0x3327B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3327B4u;
label_3327b4:
    // 0x3327b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3327b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3327b8:
    // 0x3327b8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3327B8u;
    {
        const bool branch_taken_0x3327b8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3327BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3327B8u;
        // 0x3327bc: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3327b8) {
            ctx->pc = 0x3327A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3327a0;
        }
    }
    ctx->pc = 0x3327C0u;
    // 0x3327c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3327c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3327c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3327c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3327c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3327c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3327cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3327ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3327d0: 0x80ce284  j           func_338A10
    ctx->pc = 0x3327D0u;
    ctx->pc = 0x3327D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3327D0u;
    // 0x3327d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x3327D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3327D8u;
}
