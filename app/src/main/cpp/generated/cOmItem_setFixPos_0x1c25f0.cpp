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

// Function: cOmItem_setFixPos
// Address: 0x1c25f0 - 0x1c2630
void cOmItem_setFixPos_0x1c25f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmItem_setFixPos_0x1c25f0");
#endif

    switch (ctx->pc) {
        case 0x1c25f0u: goto label_1c25f0;
        case 0x1c25f4u: goto label_1c25f4;
        case 0x1c25f8u: goto label_1c25f8;
        case 0x1c25fcu: goto label_1c25fc;
        case 0x1c2600u: goto label_1c2600;
        case 0x1c2604u: goto label_1c2604;
        case 0x1c2608u: goto label_1c2608;
        case 0x1c260cu: goto label_1c260c;
        case 0x1c2610u: goto label_1c2610;
        case 0x1c2614u: goto label_1c2614;
        case 0x1c2618u: goto label_1c2618;
        case 0x1c261cu: goto label_1c261c;
        case 0x1c2620u: goto label_1c2620;
        case 0x1c2624u: goto label_1c2624;
        case 0x1c2628u: goto label_1c2628;
        case 0x1c262cu: goto label_1c262c;
        default: break;
    }

    ctx->pc = 0x1c25f0u;

label_1c25f0:
    // 0x1c25f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c25f4:
    // 0x1c25f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c25f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c25f8:
    // 0x1c25f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c25fc:
    // 0x1c25fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c25fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2600:
    // 0x1c2600: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x1c2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1c2604:
    // 0x1c2604: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1c2604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1c2608:
    // 0x1c2608: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1c260c:
    // 0x1c260c: 0x60f809  jalr        $v1
label_1c2610:
    if (ctx->pc == 0x1C2610u) {
        ctx->pc = 0x1C2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C260Cu;
        // 0x1c2610: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2614u;
        goto label_1c2614;
    }
    ctx->pc = 0x1C260Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2614u);
        ctx->pc = 0x1C2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C260Cu;
        // 0x1c2610: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C260Cu, 0x1C2614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2614u;
label_1c2614:
    // 0x1c2614: 0x92020676  lbu         $v0, 0x676($s0)
    ctx->pc = 0x1c2614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1654)));
label_1c2618:
    // 0x1c2618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c261c:
    // 0x1c261c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1c261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1c2620:
    // 0x1c2620: 0xa2020676  sb          $v0, 0x676($s0)
    ctx->pc = 0x1c2620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 2));
label_1c2624:
    // 0x1c2624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c2624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2628:
    // 0x1c2628: 0x3e00008  jr          $ra
label_1c262c:
    if (ctx->pc == 0x1C262Cu) {
        ctx->pc = 0x1C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2628u;
        // 0x1c262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2630u;
        goto label_fallthrough_0x1c2628;
    }
    ctx->pc = 0x1C2628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2628u;
        // 0x1c262c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c2628:
    ctx->pc = 0x1C2630u;
}
