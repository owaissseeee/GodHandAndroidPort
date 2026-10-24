#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: R406Init__Fv
// Address: 0x799220 - 0x7992c8
void R406Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R406Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799238u: goto label_799238;
        case 0x799268u: goto label_799268;
        case 0x799280u: goto label_799280;
        case 0x7992a0u: goto label_7992a0;
        case 0x7992b4u: goto label_7992b4;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799230: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799230u;
    SET_GPR_U32(ctx, 31, 0x799238u);
    ctx->pc = 0x799234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799230u;
    // 0x799234: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799230u, 0x799238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799238u;
label_799238:
    // 0x799238: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x79923c: 0xae029c80  sw          $v0, -0x6380($s0)
    ctx->pc = 0x79923cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941824), GPR_U32(ctx, 2));
    // 0x799240: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799244: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x799248: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79924c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799250: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799250u;
    {
        const bool branch_taken_0x799250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799250u;
        // 0x799254: 0x3c10005d  lui         $s0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799250) {
            ctx->pc = 0x799288u;
            goto label_799288;
        }
    }
    ctx->pc = 0x799258u;
    // 0x799258: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79925c: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x799260: 0xc04f206  jal         func_13C818
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79926c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799270: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799274: 0x24a592d0  addiu       $a1, $a1, -0x6D30
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939344));
    // 0x799278: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x799280u;
    {
        const bool branch_taken_0x799280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799280) {
            ctx->pc = 0x7992B8u;
            goto label_7992b8;
        }
    }
    ctx->pc = 0x799288u;
label_799288:
    // 0x799288: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79928c: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x799290: 0x24a59ba0  addiu       $a1, $a1, -0x6460
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941600));
    // 0x799294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799298: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799298u;
    SET_GPR_U32(ctx, 31, 0x7992A0u);
    ctx->pc = 0x79929Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799298u;
    // 0x79929c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799298u, 0x7992A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992A0u;
label_7992a0:
    // 0x7992a0: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992a8: 0x24a59ba8  addiu       $a1, $a1, -0x6458
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941608));
    // 0x7992ac: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7992ACu;
    SET_GPR_U32(ctx, 31, 0x7992B4u);
    ctx->pc = 0x7992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992ACu;
    // 0x7992b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7992ACu, 0x7992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992B4u;
label_7992b4:
    // 0x7992b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7992b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7992b8:
    // 0x7992b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992bc: 0x3e00008  jr          $ra
    ctx->pc = 0x7992BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992BCu;
        // 0x7992c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992C4u;
    // 0x7992c4: 0x0  nop
    ctx->pc = 0x7992c4u;
    // NOP
    ctx->pc = 0x7992c8u;
}
} // namespace gh_r406
