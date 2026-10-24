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

// Function: ForwardInitBuffer_3142B0
// Address: 0x3142b0 - 0x314320
void ForwardInitBuffer_3142B0_0x3142b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3142B0_0x3142b0");
#endif

    switch (ctx->pc) {
        case 0x3142e4u: goto label_3142e4;
        case 0x3142fcu: goto label_3142fc;
        case 0x314304u: goto label_314304;
        default: break;
    }

    ctx->pc = 0x3142b0u;

    // 0x3142b0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3142b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3142b4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3142b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3142b8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3142b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3142bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3142bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3142c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3142c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3142c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3142c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3142c8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3142C8u;
    {
        const bool branch_taken_0x3142c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3142CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142C8u;
        // 0x3142cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142c8) {
            ctx->pc = 0x31430Cu;
            goto label_31430c;
        }
    }
    ctx->pc = 0x3142D0u;
    // 0x3142d0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3142d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3142d4: 0x240408f0  addiu       $a0, $zero, 0x8F0
    ctx->pc = 0x3142d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x3142d8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3142d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3142dc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3142DCu;
    SET_GPR_U32(ctx, 31, 0x3142E4u);
    ctx->pc = 0x3142E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142DCu;
    // 0x3142e0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3142DCu, 0x3142E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142E4u;
label_3142e4:
    // 0x3142e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3142e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142e8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3142E8u;
    {
        const bool branch_taken_0x3142e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E8u;
        // 0x3142ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142e8) {
            ctx->pc = 0x31430Cu;
            goto label_31430c;
        }
    }
    ctx->pc = 0x3142F0u;
    // 0x3142f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3142f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3142F4u;
    SET_GPR_U32(ctx, 31, 0x3142FCu);
    ctx->pc = 0x3142F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142F4u;
    // 0x3142f8: 0x240608f0  addiu       $a2, $zero, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3142F4u, 0x3142FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142FCu;
label_3142fc:
    // 0x3142fc: 0xc06474e  jal         func_191D38
    ctx->pc = 0x3142FCu;
    SET_GPR_U32(ctx, 31, 0x314304u);
    ctx->pc = 0x314300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142FCu;
    // 0x314300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191D38u, 0x3142FCu, 0x314304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314304u;
label_314304:
    // 0x314304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314304u;
    {
        const bool branch_taken_0x314304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314304u;
        // 0x314308: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314304) {
            ctx->pc = 0x314314u;
            goto label_314314;
        }
    }
    ctx->pc = 0x31430Cu;
label_31430c:
    // 0x31430c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31430cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314310: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314314:
    // 0x314314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314318: 0x3e00008  jr          $ra
    ctx->pc = 0x314318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314318u;
        // 0x31431c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314320u;
}
