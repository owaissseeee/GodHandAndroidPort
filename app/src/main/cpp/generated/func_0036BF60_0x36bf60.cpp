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

// Function: func_0036BF60
// Address: 0x36bf60 - 0x36bfb0
void func_0036BF60_0x36bf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BF60_0x36bf60");
#endif

    switch (ctx->pc) {
        case 0x36bf74u: goto label_36bf74;
        case 0x36bf90u: goto label_36bf90;
        default: break;
    }

    ctx->pc = 0x36bf60u;

    // 0x36bf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36bf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36bf68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36bf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36bf6c: 0xc0dafec  jal         func_36BFB0
    ctx->pc = 0x36BF6Cu;
    SET_GPR_U32(ctx, 31, 0x36BF74u);
    ctx->pc = 0x36BF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BF6Cu;
    // 0x36bf70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BFB0u, 0x36BF6Cu, 0x36BF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF74u;
label_36bf74:
    // 0x36bf74: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x36bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x36bf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bf7c: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8
    ctx->pc = 0x36bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    // 0x36bf80: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36BF80u;
    {
        const bool branch_taken_0x36bf80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BF80u;
        // 0x36bf84: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bf80) {
            ctx->pc = 0x36BF9Cu;
            goto label_36bf9c;
        }
    }
    ctx->pc = 0x36BF88u;
    // 0x36bf88: 0xc0db5ac  jal         func_36D6B0
    ctx->pc = 0x36BF88u;
    SET_GPR_U32(ctx, 31, 0x36BF90u);
    ctx->pc = 0x36D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D6B0u, 0x36BF88u, 0x36BF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BF90u;
label_36bf90:
    // 0x36bf90: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x36bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x36bf94: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x36bf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x36bf98: 0xac621abc  sw          $v0, 0x1ABC($v1)
    ctx->pc = 0x36bf98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F1ABCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F1ABCu, _value); } while (0);
label_36bf9c:
    // 0x36bf9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bf9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bfa0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36bfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x36BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BFA4u;
        // 0x36bfa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BFACu;
    // 0x36bfac: 0x0  nop
    ctx->pc = 0x36bfacu;
    // NOP
    ctx->pc = 0x36bfb0u;
}
