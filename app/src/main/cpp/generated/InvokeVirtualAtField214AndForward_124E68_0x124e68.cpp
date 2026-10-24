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

// Function: InvokeVirtualAtField214AndForward_124E68
// Address: 0x124e68 - 0x124ec0
void InvokeVirtualAtField214AndForward_124E68_0x124e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InvokeVirtualAtField214AndForward_124E68_0x124e68");
#endif

    switch (ctx->pc) {
        case 0x124e68u: goto label_124e68;
        case 0x124e6cu: goto label_124e6c;
        case 0x124e70u: goto label_124e70;
        case 0x124e74u: goto label_124e74;
        case 0x124e78u: goto label_124e78;
        case 0x124e7cu: goto label_124e7c;
        case 0x124e80u: goto label_124e80;
        case 0x124e84u: goto label_124e84;
        case 0x124e88u: goto label_124e88;
        case 0x124e8cu: goto label_124e8c;
        case 0x124e90u: goto label_124e90;
        case 0x124e94u: goto label_124e94;
        case 0x124e98u: goto label_124e98;
        case 0x124e9cu: goto label_124e9c;
        case 0x124ea0u: goto label_124ea0;
        case 0x124ea4u: goto label_124ea4;
        case 0x124ea8u: goto label_124ea8;
        case 0x124eacu: goto label_124eac;
        case 0x124eb0u: goto label_124eb0;
        case 0x124eb4u: goto label_124eb4;
        case 0x124eb8u: goto label_124eb8;
        case 0x124ebcu: goto label_124ebc;
        default: break;
    }

    ctx->pc = 0x124e68u;

label_124e68:
    // 0x124e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_124e6c:
    // 0x124e6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x124e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_124e70:
    // 0x124e70: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x124e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_124e74:
    // 0x124e74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124e78:
    // 0x124e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124e7c:
    // 0x124e7c: 0x8e050640  lw          $a1, 0x640($s0)
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
label_124e80:
    // 0x124e80: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_124e84:
    if (ctx->pc == 0x124E84u) {
        ctx->pc = 0x124E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E80u;
        // 0x124e84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E88u;
        goto label_124e88;
    }
    ctx->pc = 0x124E80u;
    {
        const bool branch_taken_0x124e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E80u;
        // 0x124e84: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e80) {
            ctx->pc = 0x124EACu;
            goto label_124eac;
        }
    }
    ctx->pc = 0x124E88u;
label_124e88:
    // 0x124e88: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_124e8c:
    // 0x124e8c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x124e8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_124e90:
    // 0x124e90: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_124e94:
    // 0x124e94: 0x40f809  jalr        $v0
label_124e98:
    if (ctx->pc == 0x124E98u) {
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E94u;
        // 0x124e98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E9Cu;
        goto label_124e9c;
    }
    ctx->pc = 0x124E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124E9Cu);
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E94u;
        // 0x124e98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E94u, 0x124E9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124E9Cu;
label_124e9c:
    // 0x124e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ea0:
    // 0x124ea0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124ea4:
    // 0x124ea4: 0xc0a9d26  jal         func_2A7498
label_124ea8:
    if (ctx->pc == 0x124EA8u) {
        ctx->pc = 0x124EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EA4u;
        // 0x124ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EACu;
        goto label_124eac;
    }
    ctx->pc = 0x124EA4u;
    SET_GPR_U32(ctx, 31, 0x124EACu);
    ctx->pc = 0x124EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EA4u;
    // 0x124ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x124EA4u, 0x124EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EACu;
label_124eac:
    // 0x124eac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x124eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124eb0:
    // 0x124eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124eb4:
    // 0x124eb4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x124eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124eb8:
    // 0x124eb8: 0x3e00008  jr          $ra
label_124ebc:
    if (ctx->pc == 0x124EBCu) {
        ctx->pc = 0x124EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EB8u;
        // 0x124ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EC0u;
        goto label_fallthrough_0x124eb8;
    }
    ctx->pc = 0x124EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EB8u;
        // 0x124ebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124eb8:
    ctx->pc = 0x124EC0u;
}
