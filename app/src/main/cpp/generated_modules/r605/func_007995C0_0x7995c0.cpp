#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: func_007995C0
// Address: 0x7995c0 - 0x799630
void func_007995C0_0x7995c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995C0_0x7995c0");
#endif

    switch (ctx->pc) {
        case 0x799604u: goto label_799604;
        case 0x799610u: goto label_799610;
        case 0x79961cu: goto label_79961c;
        default: break;
    }

    ctx->pc = 0x7995c0u;

    // 0x7995c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7995c4: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x7995c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7995c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7995cc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7995d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7995d4: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7995d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7995dc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7995e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7995E0u;
    {
        const bool branch_taken_0x7995e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995e0) {
            ctx->pc = 0x799610u;
            goto label_799610;
        }
    }
    ctx->pc = 0x7995E8u;
    // 0x7995e8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995ec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x7995f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7995f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995fc: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799608: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799608u;
    SET_GPR_U32(ctx, 31, 0x799610u);
    ctx->pc = 0x79960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799608u;
    // 0x79960c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799608u, 0x799610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799610u;
label_799610:
    // 0x799610: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799614: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799614u;
    SET_GPR_U32(ctx, 31, 0x79961Cu);
    ctx->pc = 0x799618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799614u;
    // 0x799618: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799614u, 0x79961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79961Cu;
label_79961c:
    // 0x79961c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79961cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799620: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799624: 0x3e00008  jr          $ra
    ctx->pc = 0x799624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799624u;
        // 0x799628: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79962Cu;
    // 0x79962c: 0x0  nop
    ctx->pc = 0x79962cu;
    // NOP
    ctx->pc = 0x799630u;
}
} // namespace gh_r605
