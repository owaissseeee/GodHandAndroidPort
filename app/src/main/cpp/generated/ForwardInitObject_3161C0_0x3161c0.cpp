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

// Function: ForwardInitObject_3161C0
// Address: 0x3161c0 - 0x316230
void ForwardInitObject_3161C0_0x3161c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_3161C0_0x3161c0");
#endif

    switch (ctx->pc) {
        case 0x3161f4u: goto label_3161f4;
        case 0x31620cu: goto label_31620c;
        case 0x316214u: goto label_316214;
        default: break;
    }

    ctx->pc = 0x3161c0u;

    // 0x3161c0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3161c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3161c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3161c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3161c8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3161c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3161cc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3161ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3161d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3161d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3161d4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3161d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3161d8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3161D8u;
    {
        const bool branch_taken_0x3161d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3161DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161D8u;
        // 0x3161dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161d8) {
            ctx->pc = 0x31621Cu;
            goto label_31621c;
        }
    }
    ctx->pc = 0x3161E0u;
    // 0x3161e0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3161e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3161e4: 0x24040610  addiu       $a0, $zero, 0x610
    ctx->pc = 0x3161e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    // 0x3161e8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3161e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3161ec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3161ECu;
    SET_GPR_U32(ctx, 31, 0x3161F4u);
    ctx->pc = 0x3161F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3161ECu;
    // 0x3161f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3161ECu, 0x3161F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3161F4u;
label_3161f4:
    // 0x3161f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3161f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3161F8u;
    {
        const bool branch_taken_0x3161f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161F8u;
        // 0x3161fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161f8) {
            ctx->pc = 0x31621Cu;
            goto label_31621c;
        }
    }
    ctx->pc = 0x316200u;
    // 0x316200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316204: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316204u;
    SET_GPR_U32(ctx, 31, 0x31620Cu);
    ctx->pc = 0x316208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316204u;
    // 0x316208: 0x24060610  addiu       $a2, $zero, 0x610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316204u, 0x31620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31620Cu;
label_31620c:
    // 0x31620c: 0xc06c6ce  jal         func_1B1B38
    ctx->pc = 0x31620Cu;
    SET_GPR_U32(ctx, 31, 0x316214u);
    ctx->pc = 0x316210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31620Cu;
    // 0x316210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B38u, 0x31620Cu, 0x316214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316214u;
label_316214:
    // 0x316214: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316214u;
    {
        const bool branch_taken_0x316214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316214u;
        // 0x316218: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316214) {
            ctx->pc = 0x316224u;
            goto label_316224;
        }
    }
    ctx->pc = 0x31621Cu;
label_31621c:
    // 0x31621c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316220: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316224:
    // 0x316224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316228: 0x3e00008  jr          $ra
    ctx->pc = 0x316228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316228u;
        // 0x31622c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316230u;
}
