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

// Function: __rs__7istreamRUl
// Address: 0x388158 - 0x3881b8
void ps2___rs__7istreamRUl_0x388158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___rs__7istreamRUl_0x388158");
#endif

    switch (ctx->pc) {
        case 0x38817cu: goto label_38817c;
        default: break;
    }

    ctx->pc = 0x388158u;

    // 0x388158: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x388158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38815c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x388160: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x388160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x388164: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x388164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x388168: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x388168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38816c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388170: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x388170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x388174: 0xc0e1f36  jal         func_387CD8
    ctx->pc = 0x388174u;
    SET_GPR_U32(ctx, 31, 0x38817Cu);
    ctx->pc = 0x388178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388174u;
    // 0x388178: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387CD8u, 0x388174u, 0x38817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38817Cu;
label_38817c:
    // 0x38817c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38817Cu;
    {
        const bool branch_taken_0x38817c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38817Cu;
        // 0x388180: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38817c) {
            ctx->pc = 0x38819Cu;
            goto label_38819c;
        }
    }
    ctx->pc = 0x388184u;
    // 0x388184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388184u;
    {
        const bool branch_taken_0x388184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388184u;
        // 0x388188: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388184) {
            ctx->pc = 0x388194u;
            goto label_388194;
        }
    }
    ctx->pc = 0x38818Cu;
    // 0x38818c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x38818cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x388190: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x388190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_388194:
    // 0x388194: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x388194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388198: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x388198u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_38819c:
    // 0x38819c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38819cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3881a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3881a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3881a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3881a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3881a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3881a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3881ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3881ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3881B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881ACu;
        // 0x3881b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3881ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3881B4u;
    // 0x3881b4: 0x0  nop
    ctx->pc = 0x3881b4u;
    // NOP
    ctx->pc = 0x3881b8u;
}
