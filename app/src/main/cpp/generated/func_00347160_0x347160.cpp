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

// Function: func_00347160
// Address: 0x347160 - 0x3471b8
void func_00347160_0x347160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347160_0x347160");
#endif

    switch (ctx->pc) {
        case 0x347198u: goto label_347198;
        default: break;
    }

    ctx->pc = 0x347160u;

    // 0x347160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x347160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347168: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x347168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34716c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34716Cu;
    {
        const bool branch_taken_0x34716c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x347170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34716Cu;
        // 0x347170: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34716c) {
            ctx->pc = 0x347188u;
            goto label_347188;
        }
    }
    ctx->pc = 0x347174u;
    // 0x347174: 0x10900009  beq         $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x347174u;
    {
        const bool branch_taken_0x347174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x347178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347174u;
        // 0x347178: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347174) {
            ctx->pc = 0x34719Cu;
            goto label_34719c;
        }
    }
    ctx->pc = 0x34717Cu;
    // 0x34717c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34717Cu;
    {
        const bool branch_taken_0x34717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34717Cu;
        // 0x347180: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34717c) {
            ctx->pc = 0x347190u;
            goto label_347190;
        }
    }
    ctx->pc = 0x347184u;
    // 0x347184: 0x0  nop
    ctx->pc = 0x347184u;
    // NOP
label_347188:
    // 0x347188: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x347188u;
    {
        const bool branch_taken_0x347188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347188u;
        // 0x34718c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347188) {
            ctx->pc = 0x347198u;
            goto label_347198;
        }
    }
    ctx->pc = 0x347190u;
label_347190:
    // 0x347190: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x347190u;
    SET_GPR_U32(ctx, 31, 0x347198u);
    ctx->pc = 0x347194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347190u;
    // 0x347194: 0x24848928  addiu       $a0, $a0, -0x76D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347190u, 0x347198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347198u;
label_347198:
    // 0x347198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34719c:
    // 0x34719c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34719cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3471a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3471a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3471a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3471A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3471A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471A4u;
        // 0x3471a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3471A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3471ACu;
    // 0x3471ac: 0x0  nop
    ctx->pc = 0x3471acu;
    // NOP
    // 0x3471b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3471b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3471b4: 0x0  nop
    ctx->pc = 0x3471b4u;
    // NOP
    ctx->pc = 0x3471b8u;
}
