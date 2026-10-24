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

// Function: func_00375128
// Address: 0x375128 - 0x375180
void func_00375128_0x375128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375128_0x375128");
#endif

    switch (ctx->pc) {
        case 0x375148u: goto label_375148;
        case 0x375158u: goto label_375158;
        default: break;
    }

    ctx->pc = 0x375128u;

    // 0x375128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37512c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37512cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x375130: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375134: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x375134u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x375138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37513c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375140: 0xc0df488  jal         func_37D220
    ctx->pc = 0x375140u;
    SET_GPR_U32(ctx, 31, 0x375148u);
    ctx->pc = 0x375144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375140u;
    // 0x375144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D220u, 0x375140u, 0x375148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375148u;
label_375148:
    // 0x375148: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x375148u;
    {
        const bool branch_taken_0x375148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x375148) {
            ctx->pc = 0x37514Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x375148u;
            // 0x37514c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x375164u;
            goto label_375164;
        }
    }
    ctx->pc = 0x375150u;
    // 0x375150: 0xc0df440  jal         func_37D100
    ctx->pc = 0x375150u;
    SET_GPR_U32(ctx, 31, 0x375158u);
    ctx->pc = 0x375154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375150u;
    // 0x375154: 0x3204ffff  andi        $a0, $s0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D100u, 0x375150u, 0x375158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375158u;
label_375158:
    // 0x375158: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37515c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x37515cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x375160: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x375160u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_375164:
    // 0x375164: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375168: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37516c: 0x3e00008  jr          $ra
    ctx->pc = 0x37516Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37516Cu;
        // 0x375170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37516Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375174u;
    // 0x375174: 0x0  nop
    ctx->pc = 0x375174u;
    // NOP
    // 0x375178: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x375178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x37517c: 0x0  nop
    ctx->pc = 0x37517cu;
    // NOP
    ctx->pc = 0x375180u;
}
