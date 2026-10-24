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

// Function: func_00351170
// Address: 0x351170 - 0x3511f8
void func_00351170_0x351170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351170_0x351170");
#endif

    switch (ctx->pc) {
        case 0x351194u: goto label_351194;
        case 0x3511a4u: goto label_3511a4;
        default: break;
    }

    ctx->pc = 0x351170u;

    // 0x351170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x351174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x351178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35117c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x351180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x351180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x351184: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x351184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x351188: 0x8e121fc8  lw          $s2, 0x1FC8($s0)
    ctx->pc = 0x351188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8136)));
    // 0x35118c: 0xc0d31ec  jal         func_34C7B0
    ctx->pc = 0x35118Cu;
    SET_GPR_U32(ctx, 31, 0x351194u);
    ctx->pc = 0x351190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35118Cu;
    // 0x351190: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C7B0u, 0x35118Cu, 0x351194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351194u;
label_351194:
    // 0x351194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351198: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x351198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35119c: 0xc0d32b4  jal         func_34CAD0
    ctx->pc = 0x35119Cu;
    SET_GPR_U32(ctx, 31, 0x3511A4u);
    ctx->pc = 0x3511A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35119Cu;
    // 0x3511a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAD0u, 0x35119Cu, 0x3511A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3511A4u;
label_3511a4:
    // 0x3511a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3511a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3511a8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3511a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3511ac: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3511acu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3511b0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3511b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3511b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3511b8: 0x223882a  slt         $s1, $s1, $v1
    ctx->pc = 0x3511b8u;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3511bc: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3511BCu;
    {
        const bool branch_taken_0x3511bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3511C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511BCu;
        // 0x3511c0: 0x34a50f1c  ori         $a1, $a1, 0xF1C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511bc) {
            ctx->pc = 0x3511E0u;
            goto label_3511e0;
        }
    }
    ctx->pc = 0x3511C4u;
    // 0x3511c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3511c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3511c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3511c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3511cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3511ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3511d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3511d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3511d4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3511D4u;
    ctx->pc = 0x3511D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3511D4u;
    // 0x3511d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3511D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3511DCu;
    // 0x3511dc: 0x0  nop
    ctx->pc = 0x3511dcu;
    // NOP
label_3511e0:
    // 0x3511e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3511e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3511e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3511e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3511e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3511e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3511ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3511ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3511f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3511F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3511F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3511F0u;
        // 0x3511f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3511F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3511F8u;
}
