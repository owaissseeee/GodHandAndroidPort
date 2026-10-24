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

// Function: cOmBase_setMeshAlphaFromLayer
// Address: 0x1b7220 - 0x1b7280
void cOmBase_setMeshAlphaFromLayer_0x1b7220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setMeshAlphaFromLayer_0x1b7220");
#endif

    switch (ctx->pc) {
        case 0x1b7240u: goto label_1b7240;
        case 0x1b7250u: goto label_1b7250;
        default: break;
    }

    ctx->pc = 0x1b7220u;

    // 0x1b7220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b7224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b7228: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b7228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b722c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b722cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7234: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b7234u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b7238: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1B7238u;
    SET_GPR_U32(ctx, 31, 0x1B7240u);
    ctx->pc = 0x1B723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7238u;
    // 0x1b723c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1B7238u, 0x1B7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7240u;
label_1b7240:
    // 0x1b7240: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b7240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7244: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7244u;
    {
        const bool branch_taken_0x1b7244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7244) {
            ctx->pc = 0x1B7248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7244u;
            // 0x1b7248: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B726Cu;
            goto label_1b726c;
        }
    }
    ctx->pc = 0x1B724Cu;
    // 0x1b724c: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x1b724cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
label_1b7250:
    // 0x1b7250: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B7250u;
    {
        const bool branch_taken_0x1b7250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b7250) {
            ctx->pc = 0x1B7254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7250u;
            // 0x1b7254: 0xe47403ac  swc1        $f20, 0x3AC($v1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 940), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7258u;
            goto label_1b7258;
        }
    }
    ctx->pc = 0x1B7258u;
label_1b7258:
    // 0x1b7258: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x1b7258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
    // 0x1b725c: 0x0  nop
    ctx->pc = 0x1b725cu;
    // NOP
    // 0x1b7260: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B7260u;
    {
        const bool branch_taken_0x1b7260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7260) {
            ctx->pc = 0x1B7264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7260u;
            // 0x1b7264: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7250;
        }
    }
    ctx->pc = 0x1B7268u;
    // 0x1b7268: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b7268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b726c:
    // 0x1b726c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b726cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7270: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b7270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b7274: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7274u;
        // 0x1b7278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B727Cu;
    // 0x1b727c: 0x0  nop
    ctx->pc = 0x1b727cu;
    // NOP
    ctx->pc = 0x1b7280u;
}
