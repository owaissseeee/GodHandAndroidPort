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

// Function: __rs__7istreamRs
// Address: 0x387f78 - 0x387fd8
void ps2___rs__7istreamRs_0x387f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRs_0x387f78");
#endif

    switch (ctx->pc) {
        case 0x387f9cu: goto label_387f9c;
        default: break;
    }

    ctx->pc = 0x387f78u;

    // 0x387f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x387f7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x387f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x387f80: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x387f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x387f84: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x387f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x387f88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387f90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x387f94: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x387F94u;
    SET_GPR_U32(ctx, 31, 0x387F9Cu);
    ctx->pc = 0x387F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387F94u;
    // 0x387f98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x387F94u, 0x387F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387F9Cu;
label_387f9c:
    // 0x387f9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x387F9Cu;
    {
        const bool branch_taken_0x387f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387F9Cu;
        // 0x387fa0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387f9c) {
            ctx->pc = 0x387FBCu;
            goto label_387fbc;
        }
    }
    ctx->pc = 0x387FA4u;
    // 0x387fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387FA4u;
    {
        const bool branch_taken_0x387fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FA4u;
        // 0x387fa8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387fa4) {
            ctx->pc = 0x387FB4u;
            goto label_387fb4;
        }
    }
    ctx->pc = 0x387FACu;
    // 0x387fac: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x387facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x387fb0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x387fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_387fb4:
    // 0x387fb4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x387fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387fb8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x387fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_387fbc:
    // 0x387fbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x387fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387fc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387fc4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x387fc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387fc8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x387fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x387FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FCCu;
        // 0x387fd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387FD4u;
    // 0x387fd4: 0x0  nop
    ctx->pc = 0x387fd4u;
    // NOP
    ctx->pc = 0x387fd8u;
}
