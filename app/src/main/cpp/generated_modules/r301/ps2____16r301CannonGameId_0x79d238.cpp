#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: _$_16r301CannonGameId
// Address: 0x79d238 - 0x79d2b8
void ps2____16r301CannonGameId_0x79d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____16r301CannonGameId_0x79d238");
#endif

    switch (ctx->pc) {
        case 0x79d270u: goto label_79d270;
        case 0x79d27cu: goto label_79d27c;
        case 0x79d29cu: goto label_79d29c;
        default: break;
    }

    ctx->pc = 0x79d238u;

    // 0x79d238: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79d23c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79d23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79d240: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79d240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79d244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79d244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d248: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79d248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79d24c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79d24cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79d250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79d254: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x79d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x79d258: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79D258u;
    {
        const bool branch_taken_0x79d258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D258u;
        // 0x79d25c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d258) {
            ctx->pc = 0x79D288u;
            goto label_79d288;
        }
    }
    ctx->pc = 0x79D260u;
    // 0x79d260: 0x26300348  addiu       $s0, $s1, 0x348
    ctx->pc = 0x79d260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 840));
    // 0x79d264: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79D264u;
    {
        const bool branch_taken_0x79d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x79D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D264u;
        // 0x79d268: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d264) {
            ctx->pc = 0x79D288u;
            goto label_79d288;
        }
    }
    ctx->pc = 0x79D26Cu;
    // 0x79d26c: 0x2610ff84  addiu       $s0, $s0, -0x7C
    ctx->pc = 0x79d26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
label_79d270:
    // 0x79d270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79d270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79d274: 0xc0b5760  jal         func_2D5D80
    ctx->pc = 0x79D274u;
    SET_GPR_U32(ctx, 31, 0x79D27Cu);
    ctx->pc = 0x79D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D274u;
    // 0x79d278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D80u, 0x79D274u, 0x79D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D27Cu;
label_79d27c:
    // 0x79d27c: 0x0  nop
    ctx->pc = 0x79d27cu;
    // NOP
    // 0x79d280: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79D280u;
    {
        const bool branch_taken_0x79d280 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x79D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D280u;
        // 0x79d284: 0x2610ff84  addiu       $s0, $s0, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d280) {
            ctx->pc = 0x79D270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79d270;
        }
    }
    ctx->pc = 0x79D288u;
label_79d288:
    // 0x79d288: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x79d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x79d28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79D28Cu;
    {
        const bool branch_taken_0x79d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D28Cu;
        // 0x79d290: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d28c) {
            ctx->pc = 0x79D2A0u;
            goto label_79d2a0;
        }
    }
    ctx->pc = 0x79D294u;
    // 0x79d294: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x79D294u;
    SET_GPR_U32(ctx, 31, 0x79D29Cu);
    ctx->pc = 0x79D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D294u;
    // 0x79d298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x79D294u, 0x79D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79D29Cu;
label_79d29c:
    // 0x79d29c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79d29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79d2a0:
    // 0x79d2a0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79d2a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79d2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79d2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79d2a8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79d2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x79D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D2B0u;
        // 0x79d2b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D2B8u;
}
} // namespace gh_r301
