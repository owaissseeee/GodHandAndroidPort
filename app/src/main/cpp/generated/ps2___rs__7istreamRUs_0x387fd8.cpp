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

// Function: __rs__7istreamRUs
// Address: 0x387fd8 - 0x388038
void ps2___rs__7istreamRUs_0x387fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRUs_0x387fd8");
#endif

    switch (ctx->pc) {
        case 0x387ffcu: goto label_387ffc;
        default: break;
    }

    ctx->pc = 0x387fd8u;

    // 0x387fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x387fdc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x387fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x387fe0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x387fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x387fe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x387fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x387fe8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x387fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387fec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387ff0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x387ff4: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x387FF4u;
    SET_GPR_U32(ctx, 31, 0x387FFCu);
    ctx->pc = 0x387FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387FF4u;
    // 0x387ff8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x387FF4u, 0x387FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387FFCu;
label_387ffc:
    // 0x387ffc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x387FFCu;
    {
        const bool branch_taken_0x387ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387FFCu;
        // 0x388000: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387ffc) {
            ctx->pc = 0x38801Cu;
            goto label_38801c;
        }
    }
    ctx->pc = 0x388004u;
    // 0x388004: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388004u;
    {
        const bool branch_taken_0x388004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388004u;
        // 0x388008: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388004) {
            ctx->pc = 0x388014u;
            goto label_388014;
        }
    }
    ctx->pc = 0x38800Cu;
    // 0x38800c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x38800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x388010: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x388010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_388014:
    // 0x388014: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x388014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388018: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x388018u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_38801c:
    // 0x38801c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38801cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388020: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x388020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x388024: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x388024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388028: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x388028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38802c: 0x3e00008  jr          $ra
    ctx->pc = 0x38802Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38802Cu;
        // 0x388030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38802Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388034u;
    // 0x388034: 0x0  nop
    ctx->pc = 0x388034u;
    // NOP
    ctx->pc = 0x388038u;
}
