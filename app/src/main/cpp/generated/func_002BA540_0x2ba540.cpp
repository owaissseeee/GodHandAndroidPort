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

// Function: func_002BA540
// Address: 0x2ba540 - 0x2ba570
void func_002BA540_0x2ba540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA540_0x2ba540");
#endif

    switch (ctx->pc) {
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        default: break;
    }

    ctx->pc = 0x2ba540u;

label_2ba540:
    // 0x2ba540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ba544:
    // 0x2ba544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba548:
    // 0x2ba548: 0xe48c0110  swc1        $f12, 0x110($a0)
    ctx->pc = 0x2ba548u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
label_2ba54c:
    // 0x2ba54c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2ba54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2ba550:
    // 0x2ba550: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2ba550u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba554:
    // 0x2ba554: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2ba554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba558:
    // 0x2ba558: 0xa0f809  jalr        $a1
label_2ba55c:
    if (ctx->pc == 0x2BA55Cu) {
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA560u;
        goto label_2ba560;
    }
    ctx->pc = 0x2BA558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BA560u);
        ctx->pc = 0x2BA55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA558u;
        // 0x2ba55c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA558u, 0x2BA560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA560u;
label_2ba560:
    // 0x2ba560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba564:
    // 0x2ba564: 0x3e00008  jr          $ra
label_2ba568:
    if (ctx->pc == 0x2BA568u) {
        ctx->pc = 0x2BA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA564u;
        // 0x2ba568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA56Cu;
        goto label_2ba56c;
    }
    ctx->pc = 0x2BA564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA564u;
        // 0x2ba568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA56Cu;
label_2ba56c:
    // 0x2ba56c: 0x0  nop
    ctx->pc = 0x2ba56cu;
    // NOP
    ctx->pc = 0x2ba570u;
}
