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

// Function: func_00305148
// Address: 0x305148 - 0x3051d8
void func_00305148_0x305148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305148_0x305148");
#endif

    switch (ctx->pc) {
        case 0x305188u: goto label_305188;
        case 0x3051a0u: goto label_3051a0;
        case 0x3051b4u: goto label_3051b4;
        default: break;
    }

    ctx->pc = 0x305148u;

    // 0x305148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30514c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x30514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x305150: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x305154: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x305154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x305158: 0x245165c8  addiu       $s1, $v0, 0x65C8
    ctx->pc = 0x305158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 26056));
    // 0x30515c: 0x8c4365c8  lw          $v1, 0x65C8($v0)
    ctx->pc = 0x30515cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7865C8u));
    // 0x305160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x305160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x305164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x305168: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x305168u;
    {
        const bool branch_taken_0x305168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305168u;
        // 0x30516c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305168) {
            ctx->pc = 0x3051B4u;
            goto label_3051b4;
        }
    }
    ctx->pc = 0x305170u;
    // 0x305170: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x305170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x305174: 0x8c6265a8  lw          $v0, 0x65A8($v1)
    ctx->pc = 0x305174u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7865A8u));
    // 0x305178: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x305178u;
    {
        const bool branch_taken_0x305178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305178u;
        // 0x30517c: 0x247065a8  addiu       $s0, $v1, 0x65A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305178) {
            ctx->pc = 0x3051A0u;
            goto label_3051a0;
        }
    }
    ctx->pc = 0x305180u;
    // 0x305180: 0xc0ad94a  jal         func_2B6528
    ctx->pc = 0x305180u;
    SET_GPR_U32(ctx, 31, 0x305188u);
    ctx->pc = 0x2B6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6528u, 0x305180u, 0x305188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305188u;
label_305188:
    // 0x305188: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x305188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x30518c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x30518cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x305190: 0x24a5fdb8  addiu       $a1, $a1, -0x248
    ctx->pc = 0x305190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966712));
    // 0x305194: 0x24c60d58  addiu       $a2, $a2, 0xD58
    ctx->pc = 0x305194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3416));
    // 0x305198: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x305198u;
    SET_GPR_U32(ctx, 31, 0x3051A0u);
    ctx->pc = 0x30519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305198u;
    // 0x30519c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x305198u, 0x3051A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051A0u;
label_3051a0:
    // 0x3051a0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3051a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3051a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3051a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3051a8: 0x24a5fdd8  addiu       $a1, $a1, -0x228
    ctx->pc = 0x3051a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966744));
    // 0x3051ac: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x3051ACu;
    SET_GPR_U32(ctx, 31, 0x3051B4u);
    ctx->pc = 0x3051B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3051ACu;
    // 0x3051b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x3051ACu, 0x3051B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3051B4u;
label_3051b4:
    // 0x3051b4: 0x264265c8  addiu       $v0, $s2, 0x65C8
    ctx->pc = 0x3051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 26056));
    // 0x3051b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3051b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3051bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3051bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3051c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3051c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3051c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3051c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3051c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3051C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3051CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3051C8u;
        // 0x3051cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3051C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3051D0u;
    // 0x3051d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3051d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3051d4: 0x0  nop
    ctx->pc = 0x3051d4u;
    // NOP
    ctx->pc = 0x3051d8u;
}
