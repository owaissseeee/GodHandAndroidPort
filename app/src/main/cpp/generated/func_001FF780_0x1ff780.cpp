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

// Function: func_001FF780
// Address: 0x1ff780 - 0x1ff7e0
void func_001FF780_0x1ff780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF780_0x1ff780");
#endif

    switch (ctx->pc) {
        case 0x1ff7a0u: goto label_1ff7a0;
        case 0x1ff7d0u: goto label_1ff7d0;
        default: break;
    }

    ctx->pc = 0x1ff780u;

    // 0x1ff780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff784: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ff784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff788: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FF788u;
    {
        const bool branch_taken_0x1ff788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF788u;
        // 0x1ff78c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff788) {
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF790u;
    // 0x1ff790: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FF790u;
    {
        const bool branch_taken_0x1ff790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF790u;
        // 0x1ff794: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff790) {
            ctx->pc = 0x1FF7D0u;
            goto label_1ff7d0;
        }
    }
    ctx->pc = 0x1FF798u;
    // 0x1ff798: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ff798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ff79c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ff79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ff7a0:
    // 0x1ff7a0: 0x0  nop
    ctx->pc = 0x1ff7a0u;
    // NOP
    // 0x1ff7a4: 0x0  nop
    ctx->pc = 0x1ff7a4u;
    // NOP
    // 0x1ff7a8: 0x0  nop
    ctx->pc = 0x1ff7a8u;
    // NOP
    // 0x1ff7ac: 0x0  nop
    ctx->pc = 0x1ff7acu;
    // NOP
    // 0x1ff7b0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF7B0u;
    {
        const bool branch_taken_0x1ff7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7B0u;
        // 0x1ff7b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff7b0) {
            ctx->pc = 0x1FF7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff7a0;
        }
    }
    ctx->pc = 0x1FF7B8u;
    // 0x1ff7b8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ff7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ff7bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x1ff7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x1ff7c0: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x1ff7c4: 0x24a5f060  addiu       $a1, $a1, -0xFA0
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963296));
    // 0x1ff7c8: 0xc07f9ae  jal         func_1FE6B8
    ctx->pc = 0x1FF7C8u;
    SET_GPR_U32(ctx, 31, 0x1FF7D0u);
    ctx->pc = 0x1FF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF7C8u;
    // 0x1ff7cc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6B8u, 0x1FF7C8u, 0x1FF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF7D0u;
label_1ff7d0:
    // 0x1ff7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7D4u;
        // 0x1ff7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7DCu;
    // 0x1ff7dc: 0x0  nop
    ctx->pc = 0x1ff7dcu;
    // NOP
    ctx->pc = 0x1ff7e0u;
}
