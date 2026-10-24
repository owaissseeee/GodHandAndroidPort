#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04e_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04e
{
// Function: R04eInit__Fv
// Address: 0x799220 - 0x7992b8
void R04eInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R04eInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799244u: goto label_799244;
        case 0x799250u: goto label_799250;
        case 0x799260u: goto label_799260;
        case 0x79926cu: goto label_79926c;
        case 0x79929cu: goto label_79929c;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x24040ce0  addiu       $a0, $zero, 0xCE0
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3296));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799234: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79923c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79923Cu;
    SET_GPR_U32(ctx, 31, 0x799244u);
    ctx->pc = 0x799240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79923Cu;
    // 0x799240: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79923Cu, 0x799244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799244u;
label_799244:
    // 0x799244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799248: 0xc07ba72  jal         func_1EE9C8
    ctx->pc = 0x799248u;
    SET_GPR_U32(ctx, 31, 0x799250u);
    ctx->pc = 0x79924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799248u;
    // 0x79924c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE9C8u, 0x799248u, 0x799250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799250u;
label_799250:
    // 0x799250: 0x8e44d6e8  lw          $a0, -0x2918($s2)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x799254: 0xae309600  sw          $s0, -0x6A00($s1)
    ctx->pc = 0x799254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294940160), GPR_U32(ctx, 16));
    // 0x799258: 0xc04fccc  jal         func_13F330
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x24841e90  addiu       $a0, $a0, 0x1E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x8e44d6e8  lw          $a0, -0x2918($s2)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x799264: 0xc04f206  jal         func_13C818
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0x24841dc0  addiu       $a0, $a0, 0x1DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C818u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x799270: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x799274: 0x8c839b70  lw          $v1, -0x6490($a0)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x799278: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79927c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799280: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799280u;
    {
        const bool branch_taken_0x799280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799280) {
            ctx->pc = 0x79929Cu;
            goto label_79929c;
        }
    }
    ctx->pc = 0x799288u;
    // 0x799288: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79928c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x799290: 0x24a592c0  addiu       $a1, $a1, -0x6D40
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939328));
    // 0x799294: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799294u;
    SET_GPR_U32(ctx, 31, 0x79929Cu);
    ctx->pc = 0x799298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799294u;
    // 0x799298: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799294u, 0x79929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79929Cu;
label_79929c:
    // 0x79929c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79929cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7992a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7992a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7992a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x7992a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7992a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7992ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7992ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7992B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ACu;
        // 0x7992b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7992ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7992B4u;
    // 0x7992b4: 0x0  nop
    ctx->pc = 0x7992b4u;
    // NOP
    ctx->pc = 0x7992b8u;
}
} // namespace gh_r04e
