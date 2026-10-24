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
// Function: getPassFrameFrom__C9cEventEnvif
// Address: 0x7ae958 - 0x7ae9a8
void getPassFrameFrom__C9cEventEnvif_0x7ae958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getPassFrameFrom__C9cEventEnvif_0x7ae958");
#endif

    switch (ctx->pc) {
        case 0x7ae980u: goto label_7ae980;
        default: break;
    }

    ctx->pc = 0x7ae958u;

    // 0x7ae958: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x7ae958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7ae95c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7ae95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ae960: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x7ae960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x7ae964: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7AE964u;
    {
        const bool branch_taken_0x7ae964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE964u;
        // 0x7ae968: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae964) {
            ctx->pc = 0x7AE998u;
            goto label_7ae998;
        }
    }
    ctx->pc = 0x7AE96Cu;
    // 0x7ae96c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7ae96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7ae970: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x7ae970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x7ae974: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x7ae974u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x7ae978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ae978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ae97c: 0x0  nop
    ctx->pc = 0x7ae97cu;
    // NOP
label_7ae980:
    // 0x7ae980: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x7ae980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ae984: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x7ae984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x7ae988: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x7ae988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x7ae98c: 0x0  nop
    ctx->pc = 0x7ae98cu;
    // NOP
    // 0x7ae990: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7AE990u;
    {
        const bool branch_taken_0x7ae990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE990u;
        // 0x7ae994: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae990) {
            ctx->pc = 0x7AE980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ae980;
        }
    }
    ctx->pc = 0x7AE998u;
label_7ae998:
    // 0x7ae998: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x7ae998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ae99c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x7ae99cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x7ae9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE9A0u;
        // 0x7ae9a4: 0x460c0801  sub.s       $f0, $f1, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE9A8u;
}
} // namespace gh_event
