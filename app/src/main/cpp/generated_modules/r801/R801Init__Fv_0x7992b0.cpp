#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r801_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r801
{
// Function: R801Init__Fv
// Address: 0x7992b0 - 0x799318
void R801Init__Fv_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R801Init__Fv_0x7992b0");
#endif

    switch (ctx->pc) {
        case 0x7992c8u: goto label_7992c8;
        case 0x7992dcu: goto label_7992dc;
        case 0x7992ecu: goto label_7992ec;
        case 0x799304u: goto label_799304;
        default: break;
    }

    ctx->pc = 0x7992b0u;

    // 0x7992b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7992b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7992b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7992b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7992bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7992bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7992c0: 0xc1e6460  jal         func_799180
    ctx->pc = 0x7992C0u;
    SET_GPR_U32(ctx, 31, 0x7992C8u);
    ctx->pc = 0x7992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992C0u;
    // 0x7992c4: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x7992C0u, 0x7992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C8u;
label_7992c8:
    // 0x7992c8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x7992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x7992cc: 0xae029900  sw          $v0, -0x6700($s0)
    ctx->pc = 0x7992ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940928), GPR_U32(ctx, 2));
    // 0x7992d0: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x7992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x7992d4: 0xc04f9fa  jal         func_13E7E8
    ctx->pc = 0x7992D4u;
    SET_GPR_U32(ctx, 31, 0x7992DCu);
    ctx->pc = 0x7992D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D4u;
    // 0x7992d8: 0x24842220  addiu       $a0, $a0, 0x2220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E7E8u, 0x7992D4u, 0x7992DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992DCu;
label_7992dc:
    // 0x7992dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7992e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7992e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7992e4: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7992f0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992f4: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7992f8: 0x24a59320  addiu       $a1, $a1, -0x6CE0
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939424));
    // 0x7992fc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992FCu;
    SET_GPR_U32(ctx, 31, 0x799304u);
    ctx->pc = 0x799300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992FCu;
    // 0x799300: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992FCu, 0x799304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79930c: 0x3e00008  jr          $ra
    ctx->pc = 0x79930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79930Cu;
        // 0x799310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79930Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799314u;
    // 0x799314: 0x0  nop
    ctx->pc = 0x799314u;
    // NOP
    ctx->pc = 0x799318u;
}
} // namespace gh_r801
