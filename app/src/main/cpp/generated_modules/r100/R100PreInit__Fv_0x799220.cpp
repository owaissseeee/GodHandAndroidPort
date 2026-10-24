#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r100_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r100
{
// Function: R100PreInit__Fv
// Address: 0x799220 - 0x799288
void R100PreInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100PreInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79927cu: goto label_79927c;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799224: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79922c: 0x24467a2c  addiu       $a2, $v0, 0x7A2C
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x799230: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x799230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x799234: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x799234u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A30u));
    // 0x799238: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79923c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x79923Cu;
    {
        const bool branch_taken_0x79923c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79923Cu;
        // 0x799240: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79923c) {
            ctx->pc = 0x799280u;
            goto label_799280;
        }
    }
    ctx->pc = 0x799244u;
    // 0x799244: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799248: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x79924c: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x79924cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799250: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799254: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x799254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799258: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799258u;
    {
        const bool branch_taken_0x799258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799258) {
            ctx->pc = 0x799280u;
            goto label_799280;
        }
    }
    ctx->pc = 0x799260u;
    // 0x799260: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x799264: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x799268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799268u;
    {
        const bool branch_taken_0x799268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799268) {
            ctx->pc = 0x799280u;
            goto label_799280;
        }
    }
    ctx->pc = 0x799270u;
    // 0x799270: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799274: 0xc0a557c  jal         func_2955F0
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2955F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2955F0u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799280:
    // 0x799280: 0x3e00008  jr          $ra
    ctx->pc = 0x799280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799280u;
        // 0x799284: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799288u;
}
} // namespace gh_r100
