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

// Function: __sseek
// Address: 0x3a6e60 - 0x3a6ec8
void ps2___sseek_0x3a6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sseek_0x3a6e60");
#endif

    switch (ctx->pc) {
        case 0x3a6e88u: goto label_3a6e88;
        default: break;
    }

    ctx->pc = 0x3a6e60u;

    // 0x3a6e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a6e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a6e64: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3a6e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a6e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a6e6c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3a6e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a6e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a6e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a6e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e7c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6e80: 0xc0eb802  jal         func_3AE008
    ctx->pc = 0x3A6E80u;
    SET_GPR_U32(ctx, 31, 0x3A6E88u);
    ctx->pc = 0x3A6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6E80u;
    // 0x3a6e84: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE008u, 0x3A6E80u, 0x3A6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6E88u;
label_3a6e88:
    // 0x3a6e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6e8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a6e90: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A6E90u;
    {
        const bool branch_taken_0x3a6e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A6E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E90u;
        // 0x3a6e94: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e90) {
            ctx->pc = 0x3A6EA0u;
            goto label_3a6ea0;
        }
    }
    ctx->pc = 0x3A6E98u;
    // 0x3a6e98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6E98u;
    {
        const bool branch_taken_0x3a6e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E98u;
        // 0x3a6e9c: 0x3042efff  andi        $v0, $v0, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6e98) {
            ctx->pc = 0x3A6EB0u;
            goto label_3a6eb0;
        }
    }
    ctx->pc = 0x3A6EA0u;
label_3a6ea0:
    // 0x3a6ea0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3a6ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3a6ea4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a6ea4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a6ea8: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x3a6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x3a6eac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3a6eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_3a6eb0:
    // 0x3a6eb0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a6eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a6eb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a6eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a6eb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a6eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6EC0u;
        // 0x3a6ec4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6EC8u;
}
