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

// Function: cModel_ScrollTexture
// Address: 0x14e4d0 - 0x14e538
void cModel_ScrollTexture_0x14e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_ScrollTexture_0x14e4d0");
#endif

    switch (ctx->pc) {
        case 0x14e4ecu: goto label_14e4ec;
        case 0x14e500u: goto label_14e500;
        case 0x14e508u: goto label_14e508;
        default: break;
    }

    ctx->pc = 0x14e4d0u;

    // 0x14e4d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e4d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14e4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x14e4d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14e4dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e4e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e4e4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14E4E4u;
    SET_GPR_U32(ctx, 31, 0x14E4ECu);
    ctx->pc = 0x14E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4E4u;
    // 0x14e4e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14E4E4u, 0x14E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4f0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14E4F0u;
    {
        const bool branch_taken_0x14e4f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4f0) {
            ctx->pc = 0x14E4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14E4F0u;
            // 0x14e4f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14E51Cu;
            goto label_14e51c;
        }
    }
    ctx->pc = 0x14E4F8u;
    // 0x14e4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4fc: 0x0  nop
    ctx->pc = 0x14e4fcu;
    // NOP
label_14e500:
    // 0x14e500: 0xc052488  jal         func_149220
    ctx->pc = 0x14E500u;
    SET_GPR_U32(ctx, 31, 0x14E508u);
    ctx->pc = 0x14E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E500u;
    // 0x14e504: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x149220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149220u, 0x14E500u, 0x14E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E508u;
label_14e508:
    // 0x14e508: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14e508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14e50c: 0x0  nop
    ctx->pc = 0x14e50cu;
    // NOP
    // 0x14e510: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14E510u;
    {
        const bool branch_taken_0x14e510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E510u;
        // 0x14e514: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e510) {
            ctx->pc = 0x14E500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e500;
        }
    }
    ctx->pc = 0x14E518u;
    // 0x14e518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14e51c:
    // 0x14e51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e520: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x14e520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e524: 0x3e00008  jr          $ra
    ctx->pc = 0x14E524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E524u;
        // 0x14e528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E52Cu;
    // 0x14e52c: 0x0  nop
    ctx->pc = 0x14e52cu;
    // NOP
    // 0x14e530: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14e534: 0x0  nop
    ctx->pc = 0x14e534u;
    // NOP
    ctx->pc = 0x14e538u;
}
