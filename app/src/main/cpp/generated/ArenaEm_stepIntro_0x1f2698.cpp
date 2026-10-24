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

// Function: ArenaEm_stepIntro
// Address: 0x1f2698 - 0x1f2708
void ArenaEm_stepIntro_0x1f2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ArenaEm_stepIntro_0x1f2698");
#endif

    switch (ctx->pc) {
        case 0x1f26d0u: goto label_1f26d0;
        default: break;
    }

    ctx->pc = 0x1f2698u;

    // 0x1f2698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f2698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f269c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f26a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f26a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f26a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26a8: 0x8e030b94  lw          $v1, 0xB94($s0)
    ctx->pc = 0x1f26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f26ac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F26ACu;
    {
        const bool branch_taken_0x1f26ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26ac) {
            ctx->pc = 0x1F26C8u;
            goto label_1f26c8;
        }
    }
    ctx->pc = 0x1F26B4u;
    // 0x1f26b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f26b8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F26B8u;
    {
        const bool branch_taken_0x1f26b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F26BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26B8u;
        // 0x1f26bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26b8) {
            ctx->pc = 0x1F26D8u;
            goto label_1f26d8;
        }
    }
    ctx->pc = 0x1F26C0u;
    // 0x1f26c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F26C0u;
    {
        const bool branch_taken_0x1f26c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C0u;
        // 0x1f26c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26c0) {
            ctx->pc = 0x1F26E0u;
            goto label_1f26e0;
        }
    }
    ctx->pc = 0x1F26C8u;
label_1f26c8:
    // 0x1f26c8: 0xc07be5e  jal         func_1EF978
    ctx->pc = 0x1F26C8u;
    SET_GPR_U32(ctx, 31, 0x1F26D0u);
    ctx->pc = 0x1F26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26C8u;
    // 0x1f26cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF978u, 0x1F26C8u, 0x1F26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26D0u;
label_1f26d0:
    // 0x1f26d0: 0x8e020b94  lw          $v0, 0xB94($s0)
    ctx->pc = 0x1f26d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1f26d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f26d8:
    // 0x1f26d8: 0xae020b94  sw          $v0, 0xB94($s0)
    ctx->pc = 0x1f26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2964), GPR_U32(ctx, 2));
    // 0x1f26dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f26dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f26e0:
    // 0x1f26e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f26e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f26e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F26E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26E4u;
        // 0x1f26e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F26ECu;
    // 0x1f26ec: 0x0  nop
    ctx->pc = 0x1f26ecu;
    // NOP
    // 0x1f26f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f26f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f26f4: 0x0  nop
    ctx->pc = 0x1f26f4u;
    // NOP
    // 0x1f26f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f26f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f26fc: 0x0  nop
    ctx->pc = 0x1f26fcu;
    // NOP
    // 0x1f2700: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f2700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f2704: 0x0  nop
    ctx->pc = 0x1f2704u;
    // NOP
    ctx->pc = 0x1f2708u;
}
