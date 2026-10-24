#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: initPlay__21cEventAdditionalLight
// Address: 0x7ac158 - 0x7ac1c0
void initPlay__21cEventAdditionalLight_0x7ac158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("initPlay__21cEventAdditionalLight_0x7ac158");
#endif

    switch (ctx->pc) {
        case 0x7ac170u: goto label_7ac170;
        case 0x7ac18cu: goto label_7ac18c;
        case 0x7ac198u: goto label_7ac198;
        default: break;
    }

    ctx->pc = 0x7ac158u;

    // 0x7ac158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7ac158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7ac15c: 0x3c05007b  lui         $a1, 0x7B
    ctx->pc = 0x7ac15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)123 << 16));
    // 0x7ac160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7ac160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7ac164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ac164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ac168: 0xc1ed24e  jal         func_7B4938
    ctx->pc = 0x7AC168u;
    SET_GPR_U32(ctx, 31, 0x7AC170u);
    ctx->pc = 0x7AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC168u;
    // 0x7ac16c: 0x24a54e20  addiu       $a1, $a1, 0x4E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4938u, 0x7AC168u, 0x7AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC170u;
label_7ac170:
    // 0x7ac170: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7ac170u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7ac174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ac174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ac178: 0x26104700  addiu       $s0, $s0, 0x4700
    ctx->pc = 0x7ac178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18176));
    // 0x7ac17c: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x7ac17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x7ac180: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x7ac180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x604778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x604778u, _value); } while (0);
    // 0x7ac184: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7AC184u;
    SET_GPR_U32(ctx, 31, 0x7AC18Cu);
    ctx->pc = 0x7AC188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AC184u;
    // 0x7ac188: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7AC184u, 0x7AC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AC18Cu;
label_7ac18c:
    // 0x7ac18c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x7ac18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x7ac190: 0x26107010  addiu       $s0, $s0, 0x7010
    ctx->pc = 0x7ac190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28688));
    // 0x7ac194: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x7ac194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_7ac198:
    // 0x7ac198: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x7ac198u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x7ac19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7ac19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7ac1a0: 0x0  nop
    ctx->pc = 0x7ac1a0u;
    // NOP
    // 0x7ac1a4: 0x0  nop
    ctx->pc = 0x7ac1a4u;
    // NOP
    // 0x7ac1a8: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7AC1A8u;
    {
        const bool branch_taken_0x7ac1a8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7AC1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC1A8u;
        // 0x7ac1ac: 0x2610ff90  addiu       $s0, $s0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ac1a8) {
            ctx->pc = 0x7AC198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ac198;
        }
    }
    ctx->pc = 0x7AC1B0u;
    // 0x7ac1b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7ac1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ac1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ac1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ac1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AC1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AC1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AC1B8u;
        // 0x7ac1bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AC1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AC1C0u;
}
} // namespace gh_event
