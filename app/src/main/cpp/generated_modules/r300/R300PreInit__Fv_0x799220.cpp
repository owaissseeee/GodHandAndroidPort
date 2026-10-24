#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r300_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r300
{
// Function: R300PreInit__Fv
// Address: 0x799220 - 0x799290
void R300PreInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R300PreInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x799258u: goto label_799258;
        case 0x799268u: goto label_799268;
        case 0x799280u: goto label_799280;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x799224: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799228: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79922c: 0x24a5ada0  addiu       $a1, $a1, -0x5260
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946208));
    // 0x799230: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799240u;
    {
        const bool branch_taken_0x799240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799240u;
        // 0x799244: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799240) {
            ctx->pc = 0x799258u;
            goto label_799258;
        }
    }
    ctx->pc = 0x799248u;
    // 0x799248: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x79924c: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799250: 0xc0a5516  jal         func_295458
    ctx->pc = 0x799250u;
    SET_GPR_U32(ctx, 31, 0x799258u);
    ctx->pc = 0x799254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799250u;
    // 0x799254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x799250u, 0x799258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799258u;
label_799258:
    // 0x799258: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79925c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79925cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799260: 0xc0b145a  jal         func_2C5168
    ctx->pc = 0x799260u;
    SET_GPR_U32(ctx, 31, 0x799268u);
    ctx->pc = 0x799264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799260u;
    // 0x799264: 0x24a5ada8  addiu       $a1, $a1, -0x5258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5168u, 0x799260u, 0x799268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799268u;
label_799268:
    // 0x799268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799268u;
    {
        const bool branch_taken_0x799268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799268u;
        // 0x79926c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799268) {
            ctx->pc = 0x799280u;
            goto label_799280;
        }
    }
    ctx->pc = 0x799270u;
    // 0x799270: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799274: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x799278: 0xc0a5516  jal         func_295458
    ctx->pc = 0x799278u;
    SET_GPR_U32(ctx, 31, 0x799280u);
    ctx->pc = 0x79927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799278u;
    // 0x79927c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295458u, 0x799278u, 0x799280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799280u;
label_799280:
    // 0x799280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x799280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799288: 0x3e00008  jr          $ra
    ctx->pc = 0x799288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799288u;
        // 0x79928c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799290u;
}
} // namespace gh_r300
