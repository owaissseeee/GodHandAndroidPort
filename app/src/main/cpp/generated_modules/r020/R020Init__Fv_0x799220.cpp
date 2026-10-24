#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: R020Init__Fv
// Address: 0x799220 - 0x7992a0
void R020Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R020Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x79925cu: goto label_79925c;
        case 0x799264u: goto label_799264;
        case 0x799270u: goto label_799270;
        case 0x799288u: goto label_799288;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799228: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79922c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79922cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799230: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799234: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799248: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x240400e0  addiu       $a0, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799254: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0xc0afa5a  jal         func_2BE968
    ctx->pc = 0x79925Cu;
    SET_GPR_U32(ctx, 31, 0x799264u);
    ctx->pc = 0x799260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79925Cu;
    // 0x799260: 0x260400dc  addiu       $a0, $s0, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE968u, 0x79925Cu, 0x799264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799264u;
label_799264:
    // 0x799264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799268: 0xc1e64be  jal         func_7992F8
    ctx->pc = 0x799268u;
    SET_GPR_U32(ctx, 31, 0x799270u);
    ctx->pc = 0x79926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799268u;
    // 0x79926c: 0xae30ce80  sw          $s0, -0x3180($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954624), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7992F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7992F8u, 0x799268u, 0x799270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799270u;
label_799270:
    // 0x799270: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799274: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799278: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79927c: 0x24a592c8  addiu       $a1, $a1, -0x6D38
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
    // 0x799280: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x799280u;
    SET_GPR_U32(ctx, 31, 0x799288u);
    ctx->pc = 0x799284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799280u;
    // 0x799284: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x799280u, 0x799288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799288u;
label_799288:
    // 0x799288: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x799288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79928c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79928cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799294: 0x3e00008  jr          $ra
    ctx->pc = 0x799294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799294u;
        // 0x799298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79929Cu;
    // 0x79929c: 0x0  nop
    ctx->pc = 0x79929cu;
    // NOP
    ctx->pc = 0x7992a0u;
}
} // namespace gh_r020
