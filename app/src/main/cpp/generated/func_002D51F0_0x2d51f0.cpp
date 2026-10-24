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

// Function: func_002D51F0
// Address: 0x2d51f0 - 0x2d5250
void func_002D51F0_0x2d51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D51F0_0x2d51f0");
#endif

    switch (ctx->pc) {
        case 0x2d5218u: goto label_2d5218;
        case 0x2d5228u: goto label_2d5228;
        default: break;
    }

    ctx->pc = 0x2d51f0u;

    // 0x2d51f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d51f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d51f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d51f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d51f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d51fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d5200: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d5208: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d5208u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d520c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D520Cu;
    {
        const bool branch_taken_0x2d520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D520Cu;
        // 0x2d5210: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d520c) {
            ctx->pc = 0x2D5238u;
            goto label_2d5238;
        }
    }
    ctx->pc = 0x2D5214u;
    // 0x2d5214: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d5214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5218:
    // 0x2d5218: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d5218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d521c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d521cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d5220: 0xc0b55e4  jal         func_2D5790
    ctx->pc = 0x2D5220u;
    SET_GPR_U32(ctx, 31, 0x2D5228u);
    ctx->pc = 0x2D5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5220u;
    // 0x2d5224: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5790u, 0x2D5220u, 0x2D5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5228u;
label_2d5228:
    // 0x2d5228: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x2d5228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d522c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d522cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d5230: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D5230u;
    {
        const bool branch_taken_0x2d5230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5230u;
        // 0x2d5234: 0x26520058  addiu       $s2, $s2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5230) {
            ctx->pc = 0x2D5218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5218;
        }
    }
    ctx->pc = 0x2D5238u;
label_2d5238:
    // 0x2d5238: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d5238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d523c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d523cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5240: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d5240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d5244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d5248: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5248u;
        // 0x2d524c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5250u;
}
