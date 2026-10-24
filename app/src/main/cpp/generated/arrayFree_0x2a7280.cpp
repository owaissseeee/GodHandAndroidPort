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

// Function: arrayFree
// Address: 0x2a7280 - 0x2a72c8
void arrayFree_0x2a7280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("arrayFree_0x2a7280");
#endif

    switch (ctx->pc) {
        case 0x2a7280u: goto label_2a7280;
        case 0x2a7284u: goto label_2a7284;
        case 0x2a7288u: goto label_2a7288;
        case 0x2a728cu: goto label_2a728c;
        case 0x2a7290u: goto label_2a7290;
        case 0x2a7294u: goto label_2a7294;
        case 0x2a7298u: goto label_2a7298;
        case 0x2a729cu: goto label_2a729c;
        case 0x2a72a0u: goto label_2a72a0;
        case 0x2a72a4u: goto label_2a72a4;
        case 0x2a72a8u: goto label_2a72a8;
        case 0x2a72acu: goto label_2a72ac;
        case 0x2a72b0u: goto label_2a72b0;
        case 0x2a72b4u: goto label_2a72b4;
        case 0x2a72b8u: goto label_2a72b8;
        case 0x2a72bcu: goto label_2a72bc;
        case 0x2a72c0u: goto label_2a72c0;
        case 0x2a72c4u: goto label_2a72c4;
        default: break;
    }

    ctx->pc = 0x2a7280u;

label_2a7280:
    // 0x2a7280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a7284:
    // 0x2a7284: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a7284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a7288:
    // 0x2a7288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a728c:
    // 0x2a728c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7290:
    // 0x2a7290: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2a7290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a7294:
    // 0x2a7294: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2a7298:
    if (ctx->pc == 0x2A7298u) {
        ctx->pc = 0x2A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7294u;
        // 0x2a7298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A729Cu;
        goto label_2a729c;
    }
    ctx->pc = 0x2A7294u;
    {
        const bool branch_taken_0x2a7294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7294) {
            ctx->pc = 0x2A7298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7294u;
            // 0x2a7298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A72B8u;
            goto label_2a72b8;
        }
    }
    ctx->pc = 0x2A729Cu;
label_2a729c:
    // 0x2a729c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2a729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2a72a0:
    // 0x2a72a0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2a72a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_2a72a4:
    // 0x2a72a4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2a72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2a72a8:
    // 0x2a72a8: 0x60f809  jalr        $v1
label_2a72ac:
    if (ctx->pc == 0x2A72ACu) {
        ctx->pc = 0x2A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72A8u;
        // 0x2a72ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72B0u;
        goto label_2a72b0;
    }
    ctx->pc = 0x2A72A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A72B0u);
        ctx->pc = 0x2A72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72A8u;
        // 0x2a72ac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72A8u, 0x2A72B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A72B0u;
label_2a72b0:
    // 0x2a72b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2a72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2a72b4:
    // 0x2a72b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a72b8:
    // 0x2a72b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a72b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a72bc:
    // 0x2a72bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a72bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a72c0:
    // 0x2a72c0: 0x3e00008  jr          $ra
label_2a72c4:
    if (ctx->pc == 0x2A72C4u) {
        ctx->pc = 0x2A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72C0u;
        // 0x2a72c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A72C8u;
        goto label_fallthrough_0x2a72c0;
    }
    ctx->pc = 0x2A72C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A72C0u;
        // 0x2a72c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A72C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a72c0:
    ctx->pc = 0x2A72C8u;
}
